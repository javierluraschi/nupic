#' Temporal Model Configuration
#' 
#' @param verbosity Diagnostic output verbosity control. Zero as silent,
#'   \code{1:6} increasing levels of verbosity.
#' @param column_count Number of cell columns in the cortical region
#'   (same number for SP and TM).
#' @param cells_per_column The number of cells (i.e., states), allocated
#'   per column.
#' @param input_width The width of the input.
#' @param seed Integer number to use as seed.
#' @param new_synapse_count New Synapse formation count. The number of
#'   synapses added to a segment during learning
#' @param max_synapses_per_segment Maximum number of synapses per segment.
#'   Bigger than zero for fixed-size CLA and \code{-1} for non-fixed-size
#'   CLA.
#' @param max_segments_per_cell Maximum number of segments per cell.
#'   Biggeer than zero for fixed-size CLA and \code{-1} for non-fixed-size
#'   CLA.
#' @param initial_perm Initial permanence for newly created synapses.
#' @param permanence_inc Permanence Increment.
#' @param permanence_dec Permanence Decrement. If set to \code{NULL}, will
#'   automatically default to 'tpPermanenceIncvalue'.
#' @param global_decay Global decay.
#' @param max_age Max age.
#' @param min_threshold Minimum number of active synapses for a segment
#'   to be considered during search for the best-matching segments. If
#'   set to \code{NULL} it uses the default, replaces 'tpMinThreshold'.
#' @param activation_threshold Segment activation threshold. A segment is
#'   active if it has more or equal 'tpSegmentActivationThreshold' connected
#'   synapses that are active due to infActiveState. If set to \code{NULL}
#'   it uses the default, replaces 'tpActivationThreshold'.
#' @param pam_length "Pay Attention Mode" length. This tells the TM how
#'   many new elements to append to the end of a learned sequence at a time.
#'   Smaller values are better for datasets with short sequences, higher
#'   values are better for datasets with long sequences.
#' 
#' @export
nupic_config_tm <- function(verbosity = 0,
                            column_count = 2048,
                            cells_per_column = 32,
                            input_width = 2048,
                            seed = 1960,
                            new_synapse_count = 20,
                            max_synapses_per_segment = 32,
                            max_segments_per_cell = 128,
                            initial_perm = 0.21,
                            permanence_inc = 0.1,
                            permanence_dec = 0.1,
                            global_decay = 0.0,
                            max_age = 0,
                            min_threshold = 12,
                            activation_threshold = 16,
                            pam_length = 1) {
  list(
    verbosity = as.integer(verbosity),
    columnCount = as.integer(column_count),
    cellsPerColumn = as.integer(cells_per_column),
    inputWidth = as.integer(input_width),
    seed = as.integer(seed),
    temporalImp = "cpp",
    newSynapseCount = as.integer(new_synapse_count),
    maxSynapsesPerSegment = as.integer(max_synapses_per_segment),
    maxSegmentsPerCell = as.integer(max_segments_per_cell),
    initialPerm = initial_perm,
    permanenceInc = permanence_inc,
    permanenceDec = permanence_dec,
    globalDecay = global_decay,
    maxAge = as.integer(max_age),
    minThreshold = as.integer(min_threshold),
    activationThreshold = as.integer(activation_threshold),
    outputType = "normal",
    pamLength = as.integer(pam_length)
  )
}

#' Spatial Pooler Configuration
#' 
#' @param verbosity SP diagnostic output verbosity control,
#'   zero for silent.
#' @param global_inhibition Global inhibition.
#' @param column_count Number of cell columns in the cortical
#'   region (same number for SP and TM).
#' @param input_width Input width.
#' @param num_active_columns_in_area SP inhibition control (absolute value);
#'   Maximum number of active columns in the SP region's output (when there
#'   are more, the weaker ones are suppressed).
#' @param seed Integer number to use as seed.
#' @param potential_pct What percent of the columns's receptive field is
#'   available for potential synapses.
#' @param syn_perm_connected The default connected threshold. Any synapse
#'   whose permanence value is above the connected threshold is a
#'   "connected synapse", meaning it can contribute to the cell's firing.
#'   Typical value is 0.10.
#' @param syn_perm_active_inc Active synapse permanence increment.
#' @param syn_perm_inactive_dec Inactive synapse permanence decrement.
#' @param boost_strength boostStrength controls the strength of boosting.
#'   It should be a number greater or equal than 0.0. No boosting is applied
#'   if it's zero, boosting encourages efficient usage of SP columns.
#' 
#' @export
nupic_config_sp <- function(verbosity = 0,
                            global_inhibition = 1,
                            column_count = 2048,
                            input_width = 0,
                            num_active_columns_in_area = 40,
                            seed = 1956,
                            potential_pct = 0.85,
                            syn_perm_connected = 0.1,
                            syn_perm_active_inc = 0.04,
                            syn_perm_inactive_dec = 0.005,
                            boost_strength = 3.0) {
  list(
    spVerbosity = as.integer(verbosity),
    spatialImp = "cpp",
    globalInhibition = as.integer(global_inhibition),
    columnCount = as.integer(column_count),
    inputWidth = as.integer(input_width),
    numActiveColumnsPerInhArea = as.integer(num_active_columns_in_area),
    seed = as.integer(seed),
    potentialPct = potential_pct,
    synPermConnected = syn_perm_connected,
    synPermActiveInc = syn_perm_active_inc,
    synPermInactiveDec = syn_perm_inactive_dec,
    boostStrength = boost_strength
  )
}

#' Cortical Learning Configuration
#' 
#' @param verbosity Diagnostic output verbosity control. Zero as silent,
#'   \code{1:6} increasing levels of verbosity.
#' @param alpha This controls how fast the classifier learns/forgets. Higher
#'   values make it adapt faster and forget older patterns faster.
#' @param steps This is set after the call to updateConfigFromSubConfig and is
#'   computed from the aggregationInfo and predictAheadTime.
#' 
#' @export
nupic_config_cl <- function(verbosity = 0,
                            alpha = 0.1,
                            steps = c(1, 5)) {
  list(
    regionName = "SDRClassifierRegion",
    verbosity = as.integer(verbosity),
    alpha = alpha,
    steps = paste(steps, collapse = ","),
    implementation = "cpp"
  )
}

#' Sensors Configuration
#' 
#' @param verbosity Diagnostic output verbosity control. Zero as silent,
#'   \code{1:6} increasing levels of verbosity.
#' @param sensor_auto_reset A list specifying the period for
#'   automatically-generated resets from a RecordSensor. \code{NULL}
#'   disable automatically-generated resets (also disabled if 
#'   all of the specified values evaluate to 0). Valid keys is the desired
#'   combination of the following: days, hours, minutes, seconds,
#'   milliseconds, microseconds, weeks.
#'
#' @examples
#' 
#' nupic_config_se(sensor_auto_reset = list(days = 1L, hours = 12L))
#'   
#' @export
nupic_confif_se <- function(verbosity = 0,
                            sensor_auto_reset = NULL) {
  list(
    verbosity = as.integer(verbosity),
    sensorAutoReset = sensor_auto_reset
  )
}
