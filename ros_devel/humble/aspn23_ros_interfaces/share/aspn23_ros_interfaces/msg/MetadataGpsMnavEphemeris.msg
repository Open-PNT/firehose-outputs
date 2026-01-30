
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# MNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
# ICD-GPS-200L, Section 20.3.3.4 and following, with additional military use definitions and usage
# covered in ICD-GPS-700D.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of
# GPS week rollovers
# Units: weeks
uint16 week_number

# Description: Satellite PRN number.
# Units: none
int32 prn

# Description: GNSS broadcast parameters required to calculate sv clock corrections.
# Units: none
TypeSatnavClock clock

# Description: Keplerian orbit parameters required to calculate satellite position.
# Units: none
TypeKeplerOrbit orbit

# Description: Change rate of semi-major axis.
# Units: m/s
float64 a_dot

# Description: SV clock bias correction provided by the Mnav Message Correction (MMC).
# Units: s
float64 delta_af_0

# Description: SV clock drift correction provided by the Mnav Message Correction (MMC).
# Units: s
float64 delta_af_1

# Description: Ephemeris parameters correction provided by the Mnav Message Correction (MMC).
# Units: radians
float64 delta_gamma

# Description: Angle of inclination correction provided by the Mnav Message Correction (MMC).
# Units: radians
float64 delta_i

# Description: Angle of Right Ascension correction provided by the Mnav Message Correction (MMC).
# Units: radians
float64 delta_omega

# Description: Semi-major axis correction provided by the Mnav Message Correction (MMC).
# Units: m
float64 delta_a

# Description: L M1_E to L1 P(Y) inter-signal correction.
# Units: s
float64 isc_l1_m_e

# Description: L M2_E to L1 P(Y) inter-signal correction.
# Units: s
float64 isc_l2_m_e

# Description: L M1_S to L1 P(Y) inter-signal correction.
# Units: s
float64 isc_l1_m_s

# Description: L M2_S to L1 P(Y) inter-signal correction.
# Units: s
float64 isc_l2_m_s

# Description: L2 P(Y) to L1 P(Y) inter-signal accuracy index.
# Units: none
float64 isa_l2_py

# Description: L M1_E to L1 P(Y) inter-signal accuracy index.
# Units: none
float64 isa_l1_m_e

# Description: L M2_E to L1 P(Y) inter-signal accuracy index.
# Units: none
float64 isa_l2_m_e

# Description: L M1_S to L1 P(Y) inter-signal accuracy index.
# Units: none
float64 isa_l1_m_s

# Description: L M2_S to L1 P(Y) inter-signal accuracy index.
# Units: none
float64 isa_l2_m_s
