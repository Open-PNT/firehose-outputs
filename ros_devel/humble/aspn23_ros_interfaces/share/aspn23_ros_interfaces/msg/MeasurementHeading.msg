
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Local level, geographic attitude expressed in the locally level NED frame as
# a rotation about the D-axis.
# 
# Positive rotation follows the right-hand rule. Attitude about the other axes
# in the NED-frame are unspecified and not sensed. Use attitude_2d or
# attitude_3d to report a sensed dimension that is zero. See also NED
# coordinate frame definition for N, E, and D definitions.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines heading reference.
uint8 reference

# True heading. Direction to the geographic north expressed in the locally level NED frame as a
# rotation about the D-axis. This is akin to attitude_1d, which would be consistent with attitude_2d
# and attitude_3d. In that case, a ref frame enum could be used to define multiple one-dimensional
# attitudes, of which, heading could be one. The simpler approach of just having heading was chosen
# over the more general approach until there is a requirement for multiple, one-dimensional attitudes.
uint8 ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING=0

# Magnetic heading. Direction to magnetic north expressed in the locally level NED frame as a rotation
# about the D-axis. In general, geographic position and time is required to convert from magnetic
# heading to true heading.
uint8 ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING=1

# Description: Heading.
# Units: rad
float64 obs

# Description: Variance of the measurement.
# Units: rad^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE=0

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
