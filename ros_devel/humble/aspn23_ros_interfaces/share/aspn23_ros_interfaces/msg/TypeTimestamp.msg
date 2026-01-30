
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number nanoseconds
# until timestamp's zero epoch. The zero epoch definition is based on the timing source used by the
# message provider. The timing source used by the message provider is defined by the
# `timestamp_clock_id` included in the `type_metadataheader` as part of the metadata. Additionally,
# the timestamp's digits of precision are included in the `type_metadataheader` as part of the
# metadata, which may be useful if an implementation is converting the timestamp to another type
# internally.
# If needed, the time elapsed in seconds is equal to elapsed_nsec * 1e-9.

# Description: Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole
# number nanoseconds until timestamp's zero epoch.
# Units: nanoseconds
int64 elapsed_nsec
