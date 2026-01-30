
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Vector magnetic field. Represents the magnetic field strength along sensor x, y, and z axes as
# defined in mounting. May represent 1-D, 2-D, or 3-D measurement

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Dimension of measurement provided. May be 1, 2, or 3.
# Units: none
uint8 num_meas

# Description: Field strength of magnetic field in nanoTesla (nT).
# Units: nT
float64 x_field_strength

# Description: Field strength of magnetic field in nanoTesla (nT).
# Units: nT
float64 y_field_strength

# Description: Field strength of magnetic field in nanoTesla (nT).
# Units: nT
float64 z_field_strength

# Description: Measurement error variance or covariance depending on measurement dimension.
# Units: (nT)^2 Dimensions of covariance must be num_meas²
# Note: field represents a num_meas x num_meas matrix
float64[] covariance

# Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
uint8 error_model

# No additional error model provided (num_error_model_params = 0).
uint8 ASPN23_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE=0

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
