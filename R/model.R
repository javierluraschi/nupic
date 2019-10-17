#' @param data The data frame to use for online prediction.
#' @param tm The TM configuration, use \code{nupic_config_tm()}.
#' @param sp The SP configuration, use \code{nupic_config_sp()}.
#' @param se The SE configuration, use \code{nupic_config_se()}.
#' @param encoders Configutation dictionary.
#' 
#' @export
nupic <- function(data = gym_hourly[1:50,],
                  encoders = nupic_encoders(
                    encoder_random_distributed_scalar("consumption", resolution = 0.88),
                    encoder_date("timestamp", "timestamp_timeOfDay", time_of_day = list(21L, 1L)),
                    encoder_date("timestamp", "timestamp_weekend", weekend = 21L)
                  ),
                  tm = nupic_config_tm(),
                  sp = nupic_config_sp(),
                  cl = nupic_config_cl(),
                  se = nupic_confif_se()) {
  
  nupic <- import("nupic")
  
  params <- list(
    model = "HTMPrediction",
    version = as.integer(1),
    predictAheadTime = NULL,
    modelParams = list(
      inferenceType = "TemporalMultiStep",
      sensorParams = se,
      spEnable = TRUE,
      spParams = sp,
      tmEnable = TRUE,
      tmParams = tm,
      clParams = cl,
      trainSPNetOnlyIfRequested = FALSE
    )
  )
  
  params$modelParams$sensorParams$encoders <- encoders
  
  model <- nupic$frameworks$opf$model_factory$ModelFactory$create(params)
  
  model$enableInference(list(predictedField = "consumption"))
  
  py_datetime <- import("datetime")
  py_to_date <- py_datetime$datetime$strptime
  
  conversions <- list()
  for (name in colnames(data)) {
    if ("POSIXct" %in% class(data[[name]])) {
      data[[name]] <- format(data[[name]], "%m/%d/%y %H:%M")
      conversions[[name]] <- "datetime"
    }
  }
  
  py_utils <- py_import("utils")
  
  predictions <- list()
  
  for (i in 1:nrow(data)) {
    result <- py_utils$model_utils$run(model, as.list(data[i,]), conversions)
    
    pred_values <- result$inferences$multiStepBestPredictions
    pred_steps <- names(pred_values)
    
    if (length(predictions) == 0)
      for (step in pred_steps) predictions[[step]] <- 0
    
    for (step in pred_steps) {
      predictions[[step]] <- c(
        predictions[[step]],
        result$inferences$multiStepBestPredictions[[step]]
      )
    }
  }
  
  data$prediction <- predictions[[1]][1:length(predictions[[1]])-1]
    
  data
}