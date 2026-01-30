
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# One, two, or three dimensional position relative to a user-defined reference frame.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference_frame

# Sensor position relative to the earth-centered, inertial (ECi) frame expressed where term1, term2,
# and term3 are the x, y, and z components of ECI position in meters, respectively. Each term is
# optional. Error covariance is given using x-axis position error component (meters), y-axis position
# error component (meters), and z-axis position error component (meters). In the case of nulled
# position components, the corresponding error covariance terms are omitted. See also ECi coordinate
# frame definition for x, y, and z definitions.
uint8 ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI=0

# Sensor position relative to the WGS-84 reference expressed using term1 as geodetic latitude in
# radians, term2 as longitude in radians, and term3 as geodetic altitude (or height above the WGS-84
# ellipsoid) in meters. Each term is optional. Error covariance is given using north-south position
# error in meters (an expression of geodetic latitude error), east-west position error in meters (an
# expression of longitude error in meters), and geodetic altitude error in meters. In the case of
# nulled position components, the corresponding error covariance terms are omitted.
uint8 ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC=1

# Description: First position term as defined in enum.
# Units: various
float64 term1

# Description: Second position term as defined in enum.
# Units: various
float64 term2

# Description: Third position term as defined in enum.
# Units: various
float64 term3

# Description: Dimension of measurement provided.
# Units: none
uint8 num_meas

# Description: Error covariance or variance depending on observation dimension.
# Units: various Dimensions of covariance must be num_meas²
# Note: field represents a num_meas x num_meas matrix
float64[] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_POSITION_ERROR_MODEL_NONE=0

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
