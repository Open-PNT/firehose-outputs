
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Time difference of arrival of two signals (Tx) to a sensor (Rx).

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Transmitter 1 (Tx1)'s known location.
# Units: none
TypeRemotePoint tx1_position_and_covariance

# Description: Transmitter 2 (Tx2)'s known location.
# Units: none
TypeRemotePoint tx2_position_and_covariance

# Description: Time difference of arrival (in meters). Time difference of Tx1 signal's arrival time
# minus Tx2 signal's arrival time at the sensor. Positive obs indicates Tx1 arrived later than Tx2.
# Units: m
float64 obs

# Description: Measurement variance.
# Units: m^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE=0

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
