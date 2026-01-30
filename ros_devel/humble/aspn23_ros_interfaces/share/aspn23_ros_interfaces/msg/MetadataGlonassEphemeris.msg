
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# GLONASS Ephemeris describing GLONASS satellite locations. Definitions and usage are covered in
# GLONASS ICD L1,L2 - Edition 5.1 2008, Section 4.4.

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: GLONASS satellite slot number.
# Units: none
int32 slot_number

# Description: Frequency channel offset number in range from 0 to 20.
# Units: none
int32 freq_o

# Description: Calender number of day within 4 year interval starting at Jan 1 of a leap year
# Units: days
int32 n_t

# Description: Time referenced to the beginning of the frame within the current day.
# Units: s
float64 t_k

# Description: Index of time interval within current day according to UTC(SU) + 03 hrs.
# Units: minutes
float64 t_b

# Description: Relative Satellite frequency bias
# Units: s/s
float64 gamma_n

# Description: Satellite clock bias.
# Units: s
float64 tau_n

# Description: Satellite X position in PZ-90 coordinate system at time t_b.
# Units: km
float64 sv_pos_x

# Description: Satellite X velocity in PZ-90 coordinate system at time t_b.
# Units: km/s
float64 sv_vel_x

# Description: Satellite X acceleration in PZ-90 coordinate system at time t_b.
# Units: km/s^2
float64 sv_accel_x

# Description: Satellite Y position in PZ-90 coordinate system at time t_b.
# Units: km
float64 sv_pos_y

# Description: Satellite Y velocity in PZ-90 coordinate system at time t_b.
# Units: km/s
float64 sv_vel_y

# Description: Satellite Y acceleration in PZ-90 coordinate system at time t_b.
# Units: km/s^2
float64 sv_accel_y

# Description: Satellite Z position in PZ-90 coordinate system at time t_b.
# Units: km
float64 sv_pos_z

# Description: Satellite Z velocity in PZ-90 coordinate system at time t_b.
# Units: km/s
float64 sv_vel_z

# Description: Satellite Z acceleration in PZ-90 coordinate system at time t_b.
# Units: km/s^2
float64 sv_accel_z
