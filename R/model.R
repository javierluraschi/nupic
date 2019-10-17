#' @export
nupic <- function(params = nupic_example("hotgym")) {
  nupic <- import("nupic")
  
  nupic$frameworks$opf$model_factory$ModelFactory$create(params)
}