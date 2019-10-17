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
nupic <- function(params = nupic_example("hotgym")) {
  nupic <- import("nupic")
  
  model <- nupic$frameworks$opf$model_factory$ModelFactory$create(params)
  
  model$enableInference(list(predictedField = "consumption"))
  
  model
}