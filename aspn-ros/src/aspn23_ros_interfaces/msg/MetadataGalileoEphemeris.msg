
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# GALILEO Ephemeris describing satellite locations. Definitions and usage are covered in OS SIS ICD,
# Issue 2.0, January 2021, Section 4.2, 4.3, and 5.1.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Enumerated field which describes the GALILEO message type used to define clock correction
# parameters.
uint8 nav_msg_type

# I/NAV ephemeris.
uint8 ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV=0

# F/NAV ephemeris.
uint8 ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV=1

# Description: Satellite PRN number.
# Units: none
int32 prn

# Description: GNSS broadcast parameters required to calculate sv clock corrections.
# Units: none
TypeSatnavClock clock

# Description: Keplerian orbit parameters required to calculate satellite position.
# Units: none
TypeKeplerOrbit orbit

# Description: Broadcast group delay (E1-E5b if F/Nav, E1-E5b if I/NAV)
# Units: s
float64 bgd
