
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Three-dimensional attitude expressed as a quaternion, a four element vector representation, the
# elements of which are functions of the orientation of the vector and the magnitude of the rotation.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid .
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Absolute inertial attitude. Sensor frame attitude relative to the earth-centered, inertial (ECi)
# frame. See also ECi coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI=0

# Attitude relative to Earth. Sensor frame attitude relative to the ECEF frame. Generally, time is
# required to convert between absolute inertial attitude and attitude relative to Earth. See also ECEF
# coordinate frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF=1

# Local level, geographic attitude. Sensor frame attitude with respect to earth-fixed frame expressed
# in the North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E,
# and D definitions. Generally, position is required to convert between attitude relative to the earth
# and locally level, geographic attitude. See also NED coordinate frame definition for N, E, and D
# definitions.
uint8 ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED=2

# Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
# (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
# description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
# frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
# that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
# vector.
# See "conventions" documentation for more detailed information.
# Units: none
float64[4] quaternion

# Description: Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt
# errors" that represent the additional rotation to be applied to the provided attitude quaternion in
# order to convert it to the true attitude with no errors. By convention, these "tilt errors" are
# expressed in the reference frame (ECI, ECEF, or NED).
# See "conventions" documentation for more detailed information.
# Units: rad^2
# Note: field represents a 3 x 3 matrix
float64[9] tilt_error_covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE=0

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
