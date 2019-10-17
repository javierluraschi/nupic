#' Define Encoders
#' 
#' @params ... One or many encoders.
#' 
#' @seealso \code{\link{encoder_random_distributed_scalar}},
#'          \code{\link{encoder_date}}.
#'          
#' @export
nupic_encoders <- function(...) {
  dictionary <- list()
  
  encoders <- list(...)
  for (encoder in encoders) {
    dictionary[[encoder$name]] <- encoder
    
    for (field in names(encoder)) {
      if (is.null(encoder[[field]])) {
        dictionary[[encoder$name]][[field]] <- NULL
      }
    }
  }
  
  dictionary
}

#' Random Distributed Scalar Encoder
#' 
#' @param column Column name to use as input.
#' @param name The name for this encoder, defaults to \code{column}.
#' @param resolution TODO
#' 
#' @seealso \code{\link{nupic_encoders}}.
#' 
#' @export
encoder_random_distributed_scalar <- function(column,
                                              name = column,
                                              resolution) {
  list(
    fieldname = column,
    name = name,
    type = "RandomDistributedScalarEncoder",
    resolution = resolution,
    seed = as.integer(1)
  )
}

#' Date Encoder
#' 
#' @param column Column name to use as input.
#' @param name The name for this encoder, defaults to \code{column}.
#' @param time_of_day TODO
#' @param weekend TODO
#' 
#' @seealso \code{\link{nupic_encoders}}.
#' 
#' @export
encoder_date <- function(column,
                         name = column,
                         time_of_day = NULL,
                         weekend = NULL) {
  list(
    fieldname = column,
    name = name,
    type = "DateEncoder",
    timeOfDay = time_of_day,
    weekend = weekend
  )
}