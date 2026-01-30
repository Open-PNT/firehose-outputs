
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Time difference of arrival of a single transmitter (Tx) to two receivers.
# Receiver 1 (Rx1) is at a known location. Receiver 2 is the sensor system
# providing the measurement.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Transmitter (Tx)'s known location.
# Units: none
TypeRemotePoint tx_position_and_covariance

# Description: Receiver 1 (Rx1)'s known location.
# Units: none
TypeRemotePoint rx1_position_and_covariance

# Description: Time difference of arrival (in meters). Time difference of Tx signal's arrival time at
# Rx1 minus Tx signal's arrival time at the sensor. Positive obs indicates Tx arrived at Rx1 later
# than arriving at the sensor.
# Units: m
float64 obs

# Description: Measurement variance.
# Units: m^2
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_TDOA_1TX_2RX_ERROR_MODEL_NONE=0

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
