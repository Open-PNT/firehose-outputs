// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementSpeed.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_SPEED_REFERENCE_TAS'.
/**
 * Speed with respect to air measured as true airspeed (TAS) with respect to air
 * mass expressed in sensor coordinate frame.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementSpeed__ASPN23_MEASUREMENT_SPEED_REFERENCE_TAS =
      0
};

/// Constant 'ASPN23_MEASUREMENT_SPEED_REFERENCE_IAS'.
/**
 * Speed with respect to air measured as indicated airspeed (IAS) with respect
 * to air mass expressed in sensor coordinate frame; for example, dynamic
 * pressure from a pitot tube converted to airspeed without compensation for
 * instrument error, position, altitude, or temperature.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementSpeed__ASPN23_MEASUREMENT_SPEED_REFERENCE_IAS =
      1
};

/// Constant 'ASPN23_MEASUREMENT_SPEED_REFERENCE_WATER'.
/**
 * Speed with respect to water. Speed with respect to water expressed in sensor
 * coordinate frame.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementSpeed__ASPN23_MEASUREMENT_SPEED_REFERENCE_WATER =
      2
};

/// Constant 'ASPN23_MEASUREMENT_SPEED_REFERENCE_GROUND'.
/**
 * Speed with respect to ground. An example source is a ground Doppler radar.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementSpeed__ASPN23_MEASUREMENT_SPEED_REFERENCE_GROUND =
      3
};

/// Constant 'ASPN23_MEASUREMENT_SPEED_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementSpeed__ASPN23_MEASUREMENT_SPEED_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementSpeed in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementSpeed {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Speed is the magnitude of the velocity vector with respect to the
  /// user-specified reference frame. Description: Standard ASPN measurement
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference;
  /// Description: Speed as the magnitude of the velocity.
  /// Units: m/s
  double speed;
  /// Description: Speed variance.
  /// Units: (m/s)^2
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
} aspn23_ros_interfaces__msg__MeasurementSpeed;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementSpeed.
typedef struct aspn23_ros_interfaces__msg__MeasurementSpeed__Sequence {
  aspn23_ros_interfaces__msg__MeasurementSpeed *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SPEED__STRUCT_H_
