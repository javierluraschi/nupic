nupic_deps <- function() {
  c(
    "nupic"
  )
}

#' @export
nupic_install <- function() {
  reticulate::py_install(nupic_deps())
}