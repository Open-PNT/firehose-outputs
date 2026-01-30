
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Broadcasted GPS navigation data for estimation of single frequency ionospheric correction and
# determination of UTC. Definitions and usage are covered in ICD-GPS-200L, Section 20.3.3.5.1.6 and
# 20.3.3.5.1.7.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Bias coefficient of GPS time scale relative to UTC time scale.
# Units: s
float64 a_0

# Description: Drift coefficient of GPS time scale relative to UTC time scale.
# Units: s/s
float64 a_1

# Description: Leap second count.
# Units: s
int8 delta_t_ls

# Description: Reference GPS time of week for UTC parameters
# Units: s
uint32 tot

# Description: Reference Modulo 256 GPS Week number for UTC parameters
# Units: weeks
uint8 wn_t

# Description: Modulo 256 GPS Week number at the end of which delta_t_lsf becomes effective.
# Units: weeks
uint8 wn_lsf

# Description: Day number at the end of which delta_t_lsf becomes effective (1 to 7).
# Units: days
uint8 dn

# Description: Future leap second count.
# Units: s
int8 delta_t_lsf

# Description: Zeroth-order coefficient of amplitude of vertical ionospheric delay.
# Units: s
float64 alpha_0

# Description: First-order coefficient of amplitude of vertical ionospheric delay.
# Units: s/rad
float64 alpha_1

# Description: Second-order coefficient of amplitude of vertical ionospheric delay.
# Units: s/rad^2
float64 alpha_2

# Description: Third-order coefficient of amplitude of vertical ionospheric delay.
# Units: s/rads^3
float64 alpha_3

# Description: Zeroth-order coefficient of period of ionospheric delay model.
# Units: s
float64 beta_0

# Description: First-order coefficient of period of ionospheric delay model.
# Units: s/rad
float64 beta_1

# Description: Second-order coefficient of period of ionospheric delay model.
# Units: s/rad^2
float64 beta_2

# Description: Third-order coefficient of period of ionospheric delay model.
# Units: s/rad^3
float64 beta_3
