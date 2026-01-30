
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Satellite position, velocity and clock error at a particular time epoch

# Description: PRN code which identifies satellite (or slot number, in the case of GLONASS) of this
# ephemeris.
# Units: none
int16 prn

# Description: Describes the Satellite System which was used to generate the satellite information
# provided in this message.
# Units: none
TypeSatnavSatelliteSystem satellite_system

# Provides further clarification of which ephemeris was used to generate the satellite information
# provided in this message for systems which have more than one ephemeris representation.
uint8 ephemeris_type

# To be used when a system only uses one ephemeris representation, so knowing the satellite_system
# fully defines what ephemeris is being used.
uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM=0

# Calculated using legacy GPS (LNAV) messages
uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV=1

# Calculated using GPS CNAV messages
uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV=2

# Calculated using GPS MNAV messages
uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV=3

# Description: Receiver time at which the data provided in this message is valid.
# Units: none
TypeSatnavTime sv_data_time

# Coordinate frame system used to describe satellite position and velocity.
uint8 coordinate_frame

# International Terrestrial Reference Frame
uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF=0

# Earth-centered earth-fixed frame as defined by WGS-84 (nearly identical with ITRF)
uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF=1

# Galileo Terrestrial Reference Frame (nearly identical with ITRF)
uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF=2

# Parametri Zemli 1990 (PZ-90) reference frame
uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90=3

# Description: Satellite position in frame specified by coordinate_frame at time specified by
# sv_data_time_week_number and sv_data_time_seconds_of_week.
# Units: m
float64[3] sv_pos

# Description: Satellite velocity in frame specified by coordinate_frame at time specified by
# sv_data_time_week_number and sv_data_time_seconds_of_week.
# Units: m/s
float64[3] sv_vel

# Description: Satellite clock bias at the sv_data_time, used to correct the satellite time like
# delta_t_sv in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.
# Units: sec
float64 sv_clock_bias

# Description: Satellite clock drift rate at the sv_data_time. By way of example, for GPS this would
# be af1 in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.
# Units: sec/sec
float64 sv_clock_drift

# Describes how to interpret group delay terms, because they vary by ephemeris type. Descriptions
# assume zero-indexing.
uint8 group_delay_enum

# group_delay_vector[0] is legacy Tgd as defined in ICD-GPS-200L Section 20.3.3.3.3.2. All other terms
# not used.
uint8 ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV=0

# Description: Group delay terms, with interpretation provided by group_delay_enum. (Need to verify
# that four is sufficient for all ephemeris.)
# Units: sec
float32[4] group_delay_vector
