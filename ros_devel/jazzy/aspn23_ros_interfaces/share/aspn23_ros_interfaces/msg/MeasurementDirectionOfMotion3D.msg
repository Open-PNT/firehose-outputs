
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Direction of motion represented as a unit vector.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Direction of motion with respect to earth-centered inertial (ECi) frame, expressed in an
# earth-centered inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI=0

# Direction of motion with respect to earth-fixed frame expressed in earth-centered, earth-fixed
# (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF=1

# Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
# North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E, and D
# definitions.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED=2

# Direction of motion with respect to earth-fixed frame expressed in sensor coordinate frame. Sensor
# coordinate frame is defined in sensor metadataHeader.
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR=3

# Description: Direction of motion represented as a unit vector.
# Units: none
float64[3] obs

# Description: Error is expressed as rotation uncertainty about two axes, error_vector and and a
# second error vector that is orthogonal to both the obs vector and the error_vector.
# Units: none
float64[3] error_vector

# Description: Error is expressed as rotation uncertainty about the following two axes: 1)
# error_vector, and 2) a second error vector that is orthogonal to both the obs direction vector and
# the error_vector.
# Units: rad^2
# Note: field represents a 2 x 2 matrix
float64[4] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE=0

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
