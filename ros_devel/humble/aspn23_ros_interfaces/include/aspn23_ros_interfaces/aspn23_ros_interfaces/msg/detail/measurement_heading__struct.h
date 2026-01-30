// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementHeading.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING'.
/**
 * True heading. Direction to the geographic north expressed in the locally
 * level NED frame as a rotation about the D-axis. This is akin to attitude_1d,
 * which would be consistent with attitude_2d and attitude_3d. In that case, a
 * ref frame enum could be used to define multiple one-dimensional attitudes, of
 * which, heading could be one. The simpler approach of just having heading was
 * chosen over the more general approach until there is a requirement for
 * multiple, one-dimensional attitudes.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementHeading__ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING =
      0
};

/// Constant 'ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING'.
/**
 * Magnetic heading. Direction to magnetic north expressed in the locally level
 * NED frame as a rotation about the D-axis. In general, geographic position and
 * time is required to convert from magnetic heading to true heading.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementHeading__ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING =
      1
};

/// Constant 'ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementHeading__ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementHeading in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementHeading {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Local level, geographic attitude expressed in the locally level
  /// NED frame as a rotation about the D-axis.
  ///
  /// Positive rotation follows the right-hand rule. Attitude about the other
  /// axes in the NED-frame are unspecified and not sensed. Use attitude_2d or
  /// attitude_3d to report a sensed dimension that is zero. See also NED
  /// coordinate frame definition for N, E, and D definitions.
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines heading reference.
  uint8_t reference;
  /// Description: Heading.
  /// Units: rad
  double obs;
  /// Description: Variance of the measurement.
  /// Units: rad^2
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
} aspn23_ros_interfaces__msg__MeasurementHeading;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementHeading.
typedef struct aspn23_ros_interfaces__msg__MeasurementHeading__Sequence {
  aspn23_ros_interfaces__msg__MeasurementHeading *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementHeading__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_HEADING__STRUCT_H_
