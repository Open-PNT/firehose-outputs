
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Metadata for a magnetic field measurement. In addition to generic metadata information,
# calibration parameters may be provided to account for effects such as soft iron, scale factor,
# non-orthogonality, zero-bias, and hard iron. In general, for an num_meas-dimensional measurement,
# the magnetic field calibration metadata (K and b) shall be used as
# 
# m_calibrated = K * m_measured - b
# 
# where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for num_meas = 1) and K is
# an num_meas x num_meas matrix (scalar for num_meas = 1). See magnetic_calibration.md for
# additional details.
# 
# More sophisticated approaches that include calibration parameters such as time-varying effects,
# first-order Gauss-Markov bias models, and calibration parameter uncertainties may be included
# using an appropriate error model in the measurement message.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Standard ASPN mounting information.
# Units: none
TypeMounting mounting

# Description: Dimension of measurement for which this metadata is applicable. May be 1, 2, or 3.
# Units: none
uint8 num_meas

# Description: Optional calibration parameter to account for the combined effects of soft iron, scale
# factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional, but if provided, b
# must also be provided.
# Units: none
# Note: field represents a num_meas x num_meas matrix
float64[] k

# Description: Optional calibration parameter to account for the combined effects of zero-bias and
# hard iron as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must also be
# provided.
# Units: nT
# Note: array length is num_meas
float64[] b
