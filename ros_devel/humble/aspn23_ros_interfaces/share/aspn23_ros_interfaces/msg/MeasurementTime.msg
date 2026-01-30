
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Expresses time measurements from one or more clocks/timing sources.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Whole number of attoseconds used to provide additional timestamp fidelity describing
# the time at which the measurement is considered to be valid. This is only needed if the time of
# validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be sure
# to report the timestamp's digits of precision in the `type_metadataheader` as part of the metadata.
# The full timestamp in nanoseconds is calculated as
# 
# time_of_validity + ( time_of_validity_attosec * 1E-9 )
# 
# and if needed, a timestamp in seconds is calculated as
# 
# time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
# 
# (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
# Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may be
# positive or negative. It is recommended to make time_of_validity and time_of_validity_attosec the
# same sign. Care should be taken when constructing the timestamp components to be sure the summation
# produces the desired result.
# Units: attoseconds
int32 time_of_validity_attosec

# Description: Number of absolute clock/timing source measurements reported in this measurement. May
# be 0 through 255. The clock_id, elapsed_nsec, and elapsed_attosec values are provided for each
# measurement, indexed by the observation number.
# Units: none
uint8 num_obs

# Description: Identifier for clock/timing source for each measurement. See clock_identifiers.md for a
# full description, but the summary is as follows:
# 0 = ASPN System Time
# 1 = International Atomic Time (TAI)
# 2 = Universal Coordinated Time (UTC)
# 3 = GPS System Time
# 4 = Galileo System Time
# 5 = GLONASS System Time
# 6 = BeiDou System Time
# 7-50: Reserved for future additional time scale representations.
# Units: none
# Note: array length is num_obs
uint8[] clock_id

# Description: Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole
# number nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits of precision
# are included as `digits_of_precision`.
# Units: nanoseconds
# Note: array length is num_obs
int64[] elapsed_nsec

# Description: Whole number of attoseconds used to provide additional observation fidelity. This is
# only needed if the observation is known to more precision than 1ns; otherwise, set
# time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision.
# The full observation in nanoseconds is calculated as
# 
# elapsed_nsec + ( elapsed_attosec * 1E-9 )
# 
# and the observation in seconds is calculated as
# 
# elapsed_nsec * 1E-9 + elapsed_attosec * 1E-18
# 
# Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and may be positive or
# negative. It is recommended to make elapsed_nsec and elapsed_attosec the same sign. Care should be
# taken when constructing the observation components to be sure the summation produces the desired
# result.
# Units: attoseconds
# Note: array length is num_obs
int32[] elapsed_attosec

# Description: Defines how many decimal digits of precision are represented in the observation after
# the decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
# value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a value
# of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
# Units: none
uint8 digits_of_precision

# Description: Measurement error variance or covariance depending on measurement dimension in the
# absolute clock/timing signal measurements. Note: These measurements are assuming that there is no
# error in the ASPN system clock. Errors in the ASPN system clock time tag for the time measurements
# should be included in the overall errors for the respective time measurements as expressed in the
# covariance matrix.
# Units: sec^2 Dimensions of covariance must be num_obs²
# Note: field represents a num_obs x num_obs matrix
float64[] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE=0

# Description: Number of parameters required for the error model chosen.
# Units: none
uint16 num_error_model_params

# Description: Error model parameters that characterize the optional error model.
# Units: various
# Note: array length is num_error_model_params
float64[] error_model_params

# Description: Number of integrity values.
# Units: none
uint8 num_integrity

# Description: Measurement integrity. Includes the integrity method used and an integrity value (which
# is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
# to report multiple integrity values based on multiple integrity methods.
# Units: none
# Note: array length is num_integrity
TypeIntegrity[] integrity
