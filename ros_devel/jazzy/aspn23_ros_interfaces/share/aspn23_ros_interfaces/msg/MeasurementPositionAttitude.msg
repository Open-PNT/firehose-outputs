
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Position and attitude, also known as pose. Position is relative to a user-defined reference frame.
# Attitude expressed as a quaternion, a four element vector representation, the elements of which are
# functions of the orientation of the vector and the magnitude of the rotation.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Sensor position and attitude relative to the earth-centered, inertial (ECi) frame. Position is
# expressed where p1, p2, and p3 are the x, y, and z components of ECI position in meters,
# respectively. Attitude is expressed as a four-element quaternion. Error covariance is given using
# x-axis position error component (meters), y-axis position error component (meters), z-axis position
# error component (meters), tilt error about the x-axis (rad), tilt error about the y-axis (rad), and
# tilt error about the z-axis (rad). See also ECi coordinate frame definition for x, y, and z
# definitions.
uint8 ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI=0

# Sensor position, and attitude relative to the WGS-84 reference. Position is expressed where p1 is
# the geodetic latitude in radians, p2 is the longitude in radians, and p3 is the geodetic altitude
# (or height above the WGS-84 ellipsoid) in meters. Attitude is the sensor frame rotation relative to
# the local level frame expressed as a four-element quaternion. Error covariance is given using
# north-south position error (meters), east-west position error (meters), geodetic altitude error
# (meters), tilt error about the north axis (rad), tilt error about the east axis (rad), and tilt
# error about the down axis (rad).
uint8 ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC=1

# Description: First position term as defined in enum.
# Units: rad
float64 p1

# Description: First position term as defined in enum.
# Units: rad
float64 p2

# Description: First position term as defined in enum.
# Units: m
float64 p3

# Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
# (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
# description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
# frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
# that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
# vector.
# See "conventions" documentation for more detailed information.
# Units: none
float64[4] quaternion

# Description: Measurement error variance or covariance depending on measurement dimension.
# Units: various
# Note: field represents a 6 x 6 matrix
float64[36] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE=0

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
