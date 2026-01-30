
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Metadata for satnav_obs

# Description: Standard ASPN metadata header.
# Units: none
TypeMetadataheader info

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Start time of the interval over which the deltarange is measured with respect to the
# measurement time. This value must be provided if the deltarange measurement is provided.
# Units: seconds
float32 deltarange_interval_start

# Description: Stop time of the interval over which the deltarange is measured with respect to the
# measurement time. This value must be provided if the deltarange measurement is provided. If the
# deltarange integration period is the same as the measurement time, this value should be 0.
# Units: seconds
float32 deltarange_interval_stop
