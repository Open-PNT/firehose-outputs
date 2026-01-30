
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# satnav navigation data bit subframe.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Message ID provided from the satnav receiver.
# Units: none
int64 gnss_message_id

# Description: Satellite ID number.
# Units: none
int32 prn

# Description: Describes the satellite system that generated the subframe.
# Units: none
TypeSatnavSatelliteSystem satellite_system

# Description: Frequency slot +7 (range from 0-13). Only used for GLONASS.
# Units: none
int32 freq_slot_id

# Description: Number of bytes of subframe data.
# Units: none
uint16 num_bytes

# Description: num_bytes sized array of raw subframe message collected by the sensor. The underlying
# type and shape of the data vector is given by satnav_msg_id.
# Units: none
# Note: array length is num_bytes
int8[] data_vector

# Description: Number of integrity values.
# Units: none
uint8 num_integrity

# Description: Measurement integrity. Includes the integrity method used and an integrity value (which
# is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
# to report multiple integrity values based on multiple integrity methods.
# Units: none
# Note: array length is num_integrity
TypeIntegrity[] integrity
