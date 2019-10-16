nupic_deps <- function() {
  c(
    "nupic"
  )
}

#' @export
install_nupic <- function() {
  reticulate::py_install(nupic_deps())
}