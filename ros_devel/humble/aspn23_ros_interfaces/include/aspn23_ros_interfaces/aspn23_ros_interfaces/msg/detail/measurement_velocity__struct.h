// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementVelocity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI'.
/**
 * Velocity with respect to earth-centered inertial frame, expressed in an
 * earth-centered inertial frame. See also ECi coordinate frame definition for
 * x, y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementVelocity__ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI =
      0
};

/// Constant 'ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF'.
/**
 * Velocity with respect to earth-fixed frame expressed in earth-centered,
 * earth-fixed (ECEF) frame. See also ECEF coordinate frame definition for x, y,
 * and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementVelocity__ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF =
      1
};

/// Constant 'ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED'.
/**
 * Local level, geodetic velocity: Velocity with respect to earth-fixed frame
 * expressed in the North-East-Down (NED), local level frame. See also NED
 * coordinate frame definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementVelocity__ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED =
      2
};

/// Constant 'ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR'.
/**
 * Velocity with respect to earth-fixed frame expressed in sensor coordinate
 * frame. Sensor coordinate frame is defined in sensor metadataHeader.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementVelocity__ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR =
      3
};

/// Constant 'ASPN23_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementVelocity__ASPN23_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'covariance'
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementVelocity in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementVelocity {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Velocity is time rate of change of position with respect to the
  /// user-specified reference frame. May be one, two, or three dimensional.
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference_frame;
  /// Description: Velocity along the first axis of the measurement reference
  /// frame enumerated in reference_frame. Units: m/s
  double x;
  /// Description: Velocity along the second axis of the measurement reference
  /// frame enumerated in reference_frame. Units: m/s
  double y;
  /// Description: Velocity along the third axis of the measurement reference
  /// frame enumerated in reference_frame. Units: m/s
  double z;
  /// Description: Dimension of measurement provided.
  /// Units: none
  uint8_t num_meas;
  /// Description: Measurement error covariance or variance depending on
  /// measurement dimension. Units: (m/s)^2 Dimensions of covariance must be
  /// num_meas² Note: field represents a num_meas x num_meas matrix
  rosidl_runtime_c__double__Sequence covariance;
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
} aspn23_ros_interfaces__msg__MeasurementVelocity;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementVelocity.
typedef struct aspn23_ros_interfaces__msg__MeasurementVelocity__Sequence {
  aspn23_ros_interfaces__msg__MeasurementVelocity *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_VELOCITY__STRUCT_H_
