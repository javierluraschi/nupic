py_import <- function(module) {
  py_path <- system.file("python", package = "nupic")
  import_from_path(module, path = py_path)
}