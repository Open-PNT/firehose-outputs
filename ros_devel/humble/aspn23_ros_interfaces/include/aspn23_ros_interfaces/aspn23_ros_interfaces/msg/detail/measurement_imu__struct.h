// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementImu.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED'.
/**
 * delta velocity and delta rotation measurements from the device's three axis
 * accelerometers and three axis gyroscopes. Specific force integrated over last
 * measurement period expressed as delta_v array in m/s. Angular rate integrated
 * over last measurement period expressed as delta_theta array in radians. Time
 * of validity is the end of integration period. Integration period is from
 * previous measurement to the current measurement.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImu__ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED =
      0
};

/// Constant 'ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED'.
/**
 * sampled specific force and rotation rates from the device's three axis
 * accelerometers and three axis gyroscopes. Specific force is sampled expressed
 * as an array in m/s/s. Angular rate is sampled and expressed as an array in
 * rad/s.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImu__ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED =
      1
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementImu in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementImu {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Inertial Measurement Unit (IMU) measurements from the device's
  /// three axis accelerometers and three axis gyroscopes. Description: Standard
  /// ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// IMU type
  uint8_t imu_type;
  /// Description: Accelerometer (specific force) measurements in 3 axes per
  /// enumerated definition. Units: various
  double meas_accel[3];
  /// Description: Gyroscope measurements in 3 axes per enumerated definition.
  /// Units: various
  double meas_gyro[3];
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementImu;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementImu.
typedef struct aspn23_ros_interfaces__msg__MeasurementImu__Sequence {
  aspn23_ros_interfaces__msg__MeasurementImu *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMU__STRUCT_H_
