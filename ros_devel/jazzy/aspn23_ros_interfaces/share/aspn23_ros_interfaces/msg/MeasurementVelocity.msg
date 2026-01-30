
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Velocity is time rate of change of position with respect to the user-specified reference frame. May
# be one, two, or three dimensional.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Velocity with respect to earth-centered inertial frame, expressed in an earth-centered inertial
# frame. See also ECi coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI=0

# Velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed (ECEF) frame.
# See also ECEF coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF=1

# Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
# North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E, and D
# definitions.
uint8 ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED=2

# Velocity with respect to earth-fixed frame expressed in sensor coordinate frame. Sensor coordinate
# frame is defined in sensor metadataHeader.
uint8 ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR=3

# Description: Velocity along the first axis of the measurement reference frame enumerated in
# reference_frame.
# Units: m/s
float64 x

# Description: Velocity along the second axis of the measurement reference frame enumerated in
# reference_frame.
# Units: m/s
float64 y

# Description: Velocity along the third axis of the measurement reference frame enumerated in
# reference_frame.
# Units: m/s
float64 z

# Description: Dimension of measurement provided.
# Units: none
uint8 num_meas

# Description: Measurement error covariance or variance depending on measurement dimension.
# Units: (m/s)^2 Dimensions of covariance must be num_meas²
# Note: field represents a num_meas x num_meas matrix
float64[] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE=0

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
