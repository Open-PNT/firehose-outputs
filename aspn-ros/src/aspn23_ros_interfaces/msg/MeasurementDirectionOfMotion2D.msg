
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Direction of motion represented in a two-dimensional reference frame as defined by the enum.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Specifies measurement reference.
uint8 reference

# Direction of motion expressed in the two-dimensional North-East plane of the locally level NED frame
# as the angle between the N-axis and the direction of motion. Positive angle is defined as a rotation
# towards the E-axis. See also NED coordinate frame definition for N, E, and D definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE=0

# Direction of motion expressed in the two-dimensional North-Down plane of the locally level NED frame
# as the angle between the N-axis and the direction of motion. Positive angle is defined as a rotation
# towards the D-axis. See also NED coordinate frame definition for N, E, and D definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND=1

# Direction of motion expressed in the two-dimensional East-Down plane of the locally level NED frame
# as the angle between the E-axis and the direction of motion. Positive angle is defined as a rotation
# towards the D-axis. See also NED coordinate frame definition for N, E, and D definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED=2

# Direction of motion expressed in the sensor frame as the angle between the sensor frame x-axis and
# the direction of motion. Positive angle is defined as a rotation towards the sensor frame y-axis.
# (Sensor frame is two dimensional, x and y, as defined in mounting.)
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR=3

# Description: Observations as specified in the reference enum.
# Units: rad
float64 obs

# Description: Measurement error variance.
# Units: rad^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE=0

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
