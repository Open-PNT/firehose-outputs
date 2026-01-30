
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# LNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
# ICD-GPS-200L, Section 20.3.3.4 and following.

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

# Description: Group delay differential between L1 and L2.
# Units: s
float64 t_gd

# Description: Issue of Data Clock. 10 bit value from Subframe 1
# Units: none
uint16 iodc

# Description: Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the
# 8 LSBs of the IODC.
# Units: none
uint8 iode
