
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# 2D direction to or from a point as defined by the reference enum. Information about the remote
# point (its position and/or correspondence with previous or future appearances
# of this same point) may be determined using remote_point.

# Description: Position and/or correspondence information about the remote point.
# Units: various
TypeRemotePoint remote_point

# Specifies measurement reference.
uint8 reference

# Angle between the sensor's local level N-axis and the vector from the sensor to the point projected
# onto the sensor's local level North-East plane. Positive angle is defined as a rotation towards the
# E-axis.
# See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
# definition is included in the conventions documentation.
uint8 ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO=0

# Angle between the point's local level N-axis and the vector from the point to the sensor projected
# onto the point's local level North-East plane. Positive angle is defined as a rotation towards the
# E-axis.
# The significant difference between NE_TO and NE_FROM is where the NED frame originates (NE_FROM has
# its origin located at the point's location).
# See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
# definition is included in the conventions documentation.
uint8 ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM=1

# Angle between the sensor's local level North-East plane and the vector from the sensor to the point.
# Positive angle is defined as a rotation towards the negative D-axis of the NED frame.
# See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
# definition is included in the conventions documentation.
uint8 ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION=2

# Angle between the sensor's x-axis and the vector from the sensor to the point projected onto the
# sensor frame x-y plane. Positive angle is defined as a rotation towards the y-axis.
# Sensor frame is defined in mounting. A figure depicting the angle definition is included in the
# conventions documentation.
uint8 ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR=3

# Description: Observations as specified in the reference enum.
# Units: rad
float64 obs

# Description: Measurement error variance.
# Units: rad^2
float64 variance

# Description: Switch for whether observation_characteristics is valid or not.
# Units: none
bool has_observation_characteristics

# Description: Image feature characteristics.
# Units: various
TypeImageFeature observation_characteristics

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE=0

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
