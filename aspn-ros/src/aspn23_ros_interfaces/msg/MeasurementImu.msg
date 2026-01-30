
# This code is generated via firehose.
# DO NOT hand edit code.  Make any changes required using the firehose repo instead

# Inertial Measurement Unit (IMU) measurements from the device's three axis accelerometers and three
# axis gyroscopes.

# Description: Standard ASPN measurement header.
# Units: none
TypeHeader header

# Description: Time at which the measurement is considered to be valid.
# Units: none
TypeTimestamp time_of_validity

# IMU type
uint8 imu_type

# delta velocity and delta rotation measurements from the device's three axis accelerometers and three
# axis gyroscopes. Specific force integrated over last measurement period expressed as delta_v array
# in m/s. Angular rate integrated over last measurement period expressed as delta_theta array in
# radians. Time of validity is the end of integration period. Integration period is from previous
# measurement to the current measurement.
uint8 ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED=0

# sampled specific force and rotation rates from the device's three axis accelerometers and three axis
# gyroscopes. Specific force is sampled expressed as an array in m/s/s. Angular rate is sampled and
# expressed as an array in rad/s.
uint8 ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED=1

# Description: Accelerometer (specific force) measurements in 3 axes per enumerated definition.
# Units: various
float64[3] meas_accel

# Description: Gyroscope measurements in 3 axes per enumerated definition.
# Units: various
float64[3] meas_gyro

# Description: Number of integrity values.
# Units: none
uint8 num_integrity

# Description: Measurement integrity. Includes the integrity method used and an integrity value (which
# is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
# to report multiple integrity values based on multiple integrity methods.
# Units: none
# Note: array length is num_integrity
TypeIntegrity[] integrity
