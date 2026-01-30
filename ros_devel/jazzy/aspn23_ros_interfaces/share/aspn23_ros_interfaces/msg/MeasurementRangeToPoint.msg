
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Range to a point is the distance between the sensor and the point at time_of_validity. Information
# about the remote point (its position and/or correspondence with previous or future appearances of
# this same point) may be determined using remote_point.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Position and/or correspondence information about the remote point.
# Units: various
TypeRemotePoint remote_point

# Description: Range to the remote point.
# Units: m
float64 obs

# Description: Variance of the range measurement.
# Units: m^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_RANGE_TO_POINT_ERROR_MODEL_NONE=0

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
