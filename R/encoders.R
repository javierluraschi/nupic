#' Random Distributed Scalar Encoder
#' 
#' A scalar encoder encodes a numeric (floating point) value into an array
#' of bits.
#' 
#' @param column Column name to use as input.
#' @param name The name for this encoder, defaults to \code{column}.
#' @param resolution A floating point positive number denoting the resolution
#'   of the output representation. Numbers within
#'   \code{c(offset-resolution/2, offset+resolution/2)} will fall into
#'   the same bucket and thus have an identical representation.
#'   Adjacent buckets will differ in one bit. resolution is a
#'   required parameter.
#' @param w Number of bits to set in output. w must be odd to avoid centering
#'   problems.  w must be large enough that spatial pooler
#'   columns will have a sufficiently large overlap to avoid
#'   false matches. A value of \code{w=21} is typical.
#' @param n Number of bits in the representation (must be biggere than w).
#'   \code{n} must be large enough such that there is enough room to select
#'   new representations as the range grows. With \code{w=21} a value
#'   of \code{n=400} is typical. The class enforces \code{n > 6*w}.
#' @param offset A floating point offset used to map scalar inputs to bucket
#'   indices. The middle bucket will correspond to numbers in the
#'   range \code{[offset - resolution/2, offset + resolution/2)}. If set
#'   to None, the very first input that is encoded will be used
#'   to determine the offset.
#' @param seed The seed used for numpy's random number generator. If set to \code{-1}
#'   the generator will be initialized without a fixed seed.
#' @param verbosity An integer controlling the level of debugging output. A
#'   value of zero implies no output. \code{verbosity=1} may lead to
#'   one-time printouts during construction, serialization or
#'   deserialization. \code{verbosity=2} may lead to some output per
#'   encode operation. \code{verbosity>2} may lead to significantly
#'   more output.
#'   
#' @details 
#' 
#' This function maps a scalar value into a random distributed representation that
#' is suitable as scalar input into the spatial pooler. The encoding scheme is
#' designed to replace a simple ScalarEncoder. It preserves the important
#' properties around overlapping representations. Unlike ScalarEncoder the min
#' and max range can be dynamically increased without any negative effects. The
#' only required parameter is resolution, which determines the resolution of
#' input values.
#' 
#' Scalar values are mapped to a bucket. The class maintains a random distributed
#' encoding for each bucket. The following properties are maintained by this encoder:
#' 
#' 1. Similar scalars should have high overlap. Overlap should decrease smoothly
#'    as scalars become less similar. Specifically, neighboring bucket indices must
#'    overlap by a linearly decreasing number of bits.
#'
#' 2. Dissimilar scalars should have very low overlap so that the SP does not
#'    confuse representations. Specifically, buckets that are more than w indices
#'    apart should have at most maxOverlap bits of overlap. We arbitrarily (and
#'    safely) define "very low" to be 2 bits of overlap or lower.
#'
#' 3. The representation for a scalar must not change during the lifetime of
#'    the object. Specifically, as new buckets are created and the min/max range
#'    is extended, the representation for previously in-range sscalars and
#'    previously created buckets must not change.
#' 
#' @seealso \code{\link{nupic_encoders}}.
#' 
#' @export
encoder_random_distributed_scalar <- function(column,
                                              name = column,
                                              resolution,
                                              w = 21,
                                              n = 400, 
                                              offset = NULL,
                                              seed = 42,
                                              verbosity = 0) {
  list(
    fieldname = column,
    name = name,
    type = "RandomDistributedScalarEncoder",
    resolution = resolution,
    w = as.integer(w),
    n = as.integer(n),
    offset = offset,
    seed = as.integer(seed),
    verbosity = as.integer(verbosity)
  )
}

#' Date Encoder
#' 
#' A date encoder encodes a date according to encoding parameters specified in
#' its constructor. The input to a date encoder is a datetime.datetime object.
#' The output is the concatenation of several sub-encodings, each of which
#' encodes a different aspect of the date.

#' @param column Column name to use as input.
#' @param name The name for this encoder, defaults to \code{column}.
#' @param season Season of the year, units in days, default radious is 91.5.
#'   Can specify a tuple defining a season and radius.
#' @param day_of_week Day of week, where monday is zero, units in days.
#'   Can specify a tuple defining a day_of_week and radius.
#' @param weekend Is a weekend or not. A block of bits either 0s or 1s.
#' @param holiday Is a holiday or not, zero or one.
#' @param time_of_day Time of day, where midnight equals 0, units in hours.
#'   Can specify a tuple defining a time_of_day and radius.
#' @param custom_days A tuople to custom encode specific days of the week.
#'   Second parameter is either a string representing a day of the week like
#'   \code{"Monday"} or \code{"mon"}, or a list of these strings.
#' @param holidays A list of tuples for holidays. Each holiday is either
#'   (month, day) or (year, month, day). The former will use the same month
#'   day every year eg: (12, 25) for Christmas. The latter will be a one off
#'   holiday eg: (2018, 4, 1) for Easter Sunday 2018.
#' 
#' @seealso \code{\link{nupic_encoders}}.
#' 
#' @export
encoder_date <- function(column,
                         name = column,
                         season = 0,
                         day_of_week = 0,
                         weekend = 0,
                         holiday = 0,
                         time_of_day = 0,
                         custom_days = 0,
                         holidays = NULL
                         ) {
  list(
    fieldname = column,
    name = name,
    type = "DateEncoder",
    season = season,
    dayOfWeek = day_of_week,
    weekend = weekend,
    holiday = holiday,
    timeOfDay = time_of_day,
    customDays = custom_days,
    holidays = holidays
  )
}