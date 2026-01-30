
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# BeiDou Ephemeris describing satellite locations. Definitions and usage are covered in
# BDS-SIS-ICD-BII-3.0, February 2019,

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Satellite PRN number.
# Units: none
int32 prn

# Description: GNSS broadcast parameters required to calculate sv clock corrections.
# Units: none
TypeSatnavClock clock

# Description: Keplerian orbit parameters required to calculate satellite position.
# Units: none
TypeKeplerOrbit orbit

# Description: Group delay differential for B1I user.
# Units: s
float64 t_gd1

# Description: Group delay differential for B2I user.
# Units: s
float64 t_gd2

# Description: Age of data, clock is updated at start of each hour in BDT per table 5-6 in
# BDS-SIS-ICD-BII-3.0.
# Units: none
int16 aodc

# Description: Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
# BDS-SIS-ICD-BII-3.0.
# Units: none
int16 aode
