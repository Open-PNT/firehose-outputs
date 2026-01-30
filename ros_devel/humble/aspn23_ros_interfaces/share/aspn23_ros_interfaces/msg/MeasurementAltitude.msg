
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Height above a user-specified reference frame.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Specifies altitude reference.
uint8 reference

# height above ground level (AGL). Generally, position and terrain elevation data are required to
# convert between AGL and (MSL or HAE).
uint8 ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_AGL=0

# height above mean sea level (MSL). Generally, position is required to convert between MSL and HAE.
uint8 ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_MSL=1

# height above the WGS-84 ellipsoid (HAE), also known as geodetic altitude.
uint8 ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_HAE=2

# Description: Altitude in meters, with altitude defined by the enum, altitude_type.
# Units: m
float64 altitude

# Description: Altitude variance.
# Units: m^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE=0

# First-order Gauss-Markov (FOGM) process, defined by the following parameters
# (num_error_model_params = 3):
# 1) standard_deviation, units: m, description: standard deviation of a scalar, first order
# Gauss-Markov measurement noise model.
# 2) time_constant, units: seconds, description: time constant of a scalar, first order
# Gauss-Markov measurement noise model.
# 3) initial_standard_deviation, units: m, description: initial standard deviation of a
# scalar, first order Gauss-Markov measurement noise model.
uint8 ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM=1

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
