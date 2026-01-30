// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataImu.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_METADATA_IMU_ERROR_MODEL_BASIC'.
/**
 * All axes are identical and uncorrelated with each other axis
 * (num_error_model_params = 14). 1) accel_bias_sigma, units: m/s/s,
 * description: Standard deviation of constant bias for accelerometer
 * measurements. 2) accel_bias_mean, units: m/s/s, description: Mean of constant
 * bias for accelerometer measurements. 3) accel_time_correlated_bias_sigma,
 * units: m/s/s, description: Standard deviation of zero-mean time-correlated
 * bias for accelerometer measurement. 4)
 * accel_time_correlated_bias_time_constant, units: s, description: Time
 * constant of zero-mean time-correlated bias for accelerometer measurement. 5)
 * accel_scale_factor_mean, units: ppm, description: Mean of accelerometer scale
 * factor modeled as a constant with Gaussian uncertainty. 6)
 * accel_scale_factor_sigma, units: ppm, description: Standard deviation of
 * accelerometer scale factor modeled as a constant with Gaussian uncertainty.
 * 7) velocity_random_walk, units: m/s/sqrt(s), description: Velocity random
 * walk due to acceleration. 8) gyro_bias_sigma, units: rad/s, description:
 * Standard deviation of constant bias for gyro measurements. 9) gyro_bias_mean,
 * units: rad/s, description: Mean of constant bias for gyro measurements. 10)
 * gyro_time_correlated_bias_sigma, units: rad/s, description: Standard
 * deviation of zero-mean time-correlated bias for gyro measurements. 11)
 * gyro_time_correlated_bias_time_constant, units: s, description: Time constant
 * of zero-mean time-correlated bias for gyro measurements. 12)
 * gyro_scale_factor_mean, units: ppm, description: Mean of gyro scale factor
 * modeled as a constant with Gaussian uncertainty. 13) gyro_scale_factor_sigma,
 * units: ppm, description: Standard deviation of gyro scale factor modeled as a
 * constant with Gaussian uncertainty. 14) angular_random_walk, units:
 * rad/sqrt(s), description: Angular random walk due to gyros.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImu__ASPN23_METADATA_IMU_ERROR_MODEL_BASIC =
      0
};

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'mounting'
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MetadataImu in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataImu {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Metadata for inertial measurement unit. Description: Standard ASPN
  /// metadata header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Standard ASPN mounting information.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMounting mounting;
  /// Allows the user to select an appropriate error model. Parameters are
  /// defined here. The number of parameters and the values for those parameters
  /// are included in subsequent fields.
  uint8_t error_model;
  /// Description: Number of parameters required for the error model chosen.
  /// Units: none
  uint16_t num_error_model_params;
  /// Description: Error model parameters that characterize the optional error
  /// model. Units: various Note: array length is num_error_model_params
  rosidl_runtime_c__double__Sequence error_model_params;
} aspn23_ros_interfaces__msg__MetadataImu;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataImu.
typedef struct aspn23_ros_interfaces__msg__MetadataImu__Sequence {
  aspn23_ros_interfaces__msg__MetadataImu *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMU__STRUCT_H_
