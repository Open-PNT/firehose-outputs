
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# 3D direction to points.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# Description: Total number of observations.
# Units: none
uint16 num_obs

# Description: Array of observations.
# Units: none
# Note: array length is num_obs
TypeDirection3DToPoint[] obs
