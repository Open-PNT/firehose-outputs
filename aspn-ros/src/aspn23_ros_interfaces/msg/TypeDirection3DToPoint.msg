
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# 3D direction to or from a point as defined by the reference enum. Information about the remote
# point (its position and/or correspondence with previous or future appearances
# of this same point) may be determined using remote_point.

# Description: Position and/or correspondence information about the remote point.
# Units: various
TypeRemotePoint remote_point

# Defines measurement reference frame.
uint8 reference_frame

# Azimuth (first component of obs) is the angle between the sensor frame x-axis (boresight) and the
# projection of the point onto the sensor frame's x-y plane (positive right-hand rule about the sensor
# frame z-axis). Elevation (second component of obs) is the angle between the sensor frame's x-y plane
# and the vector from the sensor to the point (positive right-hand rule about the intermediate axis
# formed by the azimuth rotation). The covariance is for the azimuth and elevation errors. Units for
# the observation are in rad, covariance rad^2.
uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL=0

# The pixel coordinates of the point in an image (sub-pixel resolution is allowed). When combined with
# the camera model, these can be converted to the NORMALIZED_IMAGE reference frame representation.
# Units for the observation are in pixels, covariance pixels^2.
uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL=1

# 2D position from the sensor frame origin to the point expressed in components y and z of the sensor
# frame normalized by the boresight distance. The x component of the sensor frame is the boresight
# axis. Units for the observation are m/m, covariance (m/m)^2.
uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE=2

# 2D position from the sensor frame origin to the point expressed in components y and z of the sensor
# frame normalized by the range to the point. The x component of the sensor frame is the boresight
# axis. Units for the observation are m/m, covariance (m/m)^2.
uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE=3

# Description: 3D direction to the remote point as defined in reference_frame.
# Units: various
float64[2] obs

# Description: Covariance of the direction measurement as defined in reference_frame.
# Units: various
# Note: field represents a 2 x 2 matrix
float64[4] covariance

# Description: Switch for whether observation_characteristics is valid or not.
# Units: none
bool has_observation_characteristics

# Description: Image feature characteristics.
# Units: various
TypeImageFeature observation_characteristics

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE=0

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
