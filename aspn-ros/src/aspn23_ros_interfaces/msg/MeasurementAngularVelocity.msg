
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Three dimensional angular velocity relative to and expressed in a user-defined reference frame.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Angular velocity with respect to earth-centered inertial frame, expressed in an earth-centered
# inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECI=0

# Angular velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed
# (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECEF=1

# Angular velocity with respect to earth-fixed frame expressed in the North-East-Down (NED),
# local level frame. See also NED coordinate frame definition for N, E, and D definitions.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_NED=2

# Angular velocity with respect to an inertial frame expressed in sensor coordinate frame.
# Sensor coordinate frame is defined in sensor metadataHeader.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_SENSOR=3

# IMU type
uint8 imu_type

# delta rotation measurements. Angular rate integrated over last measurement period expressed in
# radians. Time of validity is the end of the integration period. Integration period is from the
# previous measurement to the current measurement.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_INTEGRATED=0

# sampled rotation rates. Angular rate is sampled and expressed in rad/s.
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_SAMPLED=1

# Description: Angular velocity in 3 axes per enumerated definition.
# Units: various
float64[3] meas

# Description: Measurement error covariance.
# Units: various
# Note: field represents a 3 x 3 matrix
float64[9] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_ANGULAR_VELOCITY_ERROR_MODEL_NONE=0

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
