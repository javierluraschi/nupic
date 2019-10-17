#' @export
nupic_example <- function(example = "hotgym") {
  py_path <- system.file("python", package = "nupic")
  py_examples <- import_from_path("examples", path = py_path)
  
  py_examples$hotgym_params$HOTGYM_PARAMS
}