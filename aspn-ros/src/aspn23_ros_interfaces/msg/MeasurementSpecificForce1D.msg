
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Measures the apparent specific force along the sense-axis. Example sensors are an atomic
# interferometer, quantum gravimeter, or accelerometer. The apparent specific force is corrupted by
# inertial (Coriolis and Centrifugal) effects. The sense-axis is the sensor frame x-axis as defined in
# mounting.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# sensor type
uint8 sensor_type

# Specific force integrated over last measurement period expressed as delta velocity in m/s. Variance
# units are (m/s)^2. Time of validity is the end of integration period. Integration period is from
# previous measurement to the current measurement.
uint8 ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_INTEGRATED=0

# Specific force is sampled expressed in m/s/s. Variance units are (m/s/s)^2.
uint8 ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_SAMPLED=1

# Description: Specific force defined in sensor_type enum.
# Units: various
float64 obs

# Description: Variance of the observation with units defined in sensor_type enum.
# Units: various
float64 variance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_ERROR_MODEL_NONE=0

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
