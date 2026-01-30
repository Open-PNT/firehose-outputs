// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementAngularVelocity1D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY1_D__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY1_D__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED'.
/**
 * Angular velocity integrated over last measurement period expressed as delta
 * rotation in radians. Variance units are radians^2. Time of validity is the
 * end of integration period. Integration period is from previous measurement to
 * the current measurement.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED =
      0
};

/// Constant 'ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED'.
/**
 * Angular velocity is sampled expressed in rad/s. Variance units are (rad/s)^2.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED =
      1
};

/// Constant 'ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementAngularVelocity1D in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Measures the angular velocity about the sense-axis. The sense-axis
  /// is the sensor frame x-axis as defined in mounting. Description: Standard
  /// ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// sensor integration type
  uint8_t sensor_type;
  /// Description: Angular velocity defined in sensor_type enum.
  /// Units: various
  double obs;
  /// Description: Variance of the observation with units defined in sensor_type
  /// enum. Units: various
  double variance;
  /// Defines an optional error model for other than zero-mean, additive, white
  /// Gaussian noise (AWGN).
  uint8_t error_model;
  /// Description: Number of parameters required for the error model chosen.
  /// Units: none
  uint16_t num_error_model_params;
  /// Description: Error model parameters that characterize the optional error
  /// model. Units: various Note: array length is num_error_model_params
  rosidl_runtime_c__double__Sequence error_model_params;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__Sequence {
  aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ANGULAR_VELOCITY1_D__STRUCT_H_
