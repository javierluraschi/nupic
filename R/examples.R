#' @export
nupic_example <- function(example = "hotgym") {
  py_examples <- py_import("examples")
  py_examples$hotgym_params$HOTGYM_PARAMS
}