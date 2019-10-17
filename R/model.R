metrics_manager <- function(model) {
  metrics <- nupic$frameworks$opf$metrics

  specs <- list(
    metrics$MetricSpec(field = "consumption", metric = "multiStep",
                       inferenceElement = "multiStepBestPredictions",
                       params = list(errorMetric = "aae", window = 1000, steps = 1)),
    metrics$MetricSpec(field = "consumption", metric = "trivial",
                       inferenceElement ="prediction",
                       params = list(errorMetric = "aae", window = 1000, steps = 1)),
    metrics$MetricSpec(field = "consumption", metric = "multiStep",
                       inferenceElement = "multiStepBestPredictions",
                       params = list(errorMetric = "altMAPE", window = 1000, steps =  1)),
    metrics$MetricSpec(field = "consumption", metric = "trivial",
                       inferenceElement = "prediction",
                       params = list(errorMetric = "altMAPE", window = 1000, steps = 1))
  )
  
  nupic$frameworks$opf$prediction_metrics_manager$MetricsManager(
    specs, model$getFieldInfo(), model$getInferenceType())
}

#' @export
nupic <- function(data = gym_hourly, params = nupic_example("hotgym")) {
  nupic <- import("nupic")
  
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
  py_utils$model_utils$run(model, as.list(data[1,]), conversions)
}