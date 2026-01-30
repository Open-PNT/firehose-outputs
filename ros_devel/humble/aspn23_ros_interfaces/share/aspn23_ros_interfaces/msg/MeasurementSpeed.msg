
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Speed is the magnitude of the velocity vector with respect to the user-specified reference frame.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Defines measurement reference.
uint8 reference

# Speed with respect to air measured as true airspeed (TAS) with respect to air mass expressed in
# sensor coordinate frame.
uint8 ASPN23_MEASUREMENT_SPEED_REFERENCE_TAS=0

# Speed with respect to air measured as indicated airspeed (IAS) with respect to air mass expressed in
# sensor coordinate frame; for example, dynamic pressure from a pitot tube converted to airspeed
# without compensation for instrument error, position, altitude, or temperature.
uint8 ASPN23_MEASUREMENT_SPEED_REFERENCE_IAS=1

# Speed with respect to water. Speed with respect to water expressed in sensor coordinate frame.
uint8 ASPN23_MEASUREMENT_SPEED_REFERENCE_WATER=2

# Speed with respect to ground. An example source is a ground Doppler radar.
uint8 ASPN23_MEASUREMENT_SPEED_REFERENCE_GROUND=3

# Description: Speed as the magnitude of the velocity.
# Units: m/s
float64 speed

# Description: Speed variance.
# Units: (m/s)^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_SPEED_ERROR_MODEL_NONE=0

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
