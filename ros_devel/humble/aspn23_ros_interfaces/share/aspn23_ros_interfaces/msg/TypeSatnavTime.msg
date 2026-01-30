
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Satellite system time

# Description: Full Week number since zero epoch at which the data provided in this message is valid,
# expressed in time system defined by time_reference enum (below).
# Units: weeks
uint16 week_number

# Description: Seconds since start of current week at which the data provided in this message is
# valid, expressed in time system defined by time_reference enum (below).
# Units: seconds
float64 seconds_of_week

# Reference time system used to express the data in this message. In a multi-GNSS receiver
# (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver clock
# only. The receiver clock time of the measurement is the receiver clock time of the received signals.
# It is identical for the phase and range measurements and is identical for all satellites observed in
# a given epoch.
uint8 time_reference

# GPS system time.
uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS=0

# Galileo system time.
uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO=1

# BeiDou system time.
uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU=2

# GLONASS system time.
uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS=3
