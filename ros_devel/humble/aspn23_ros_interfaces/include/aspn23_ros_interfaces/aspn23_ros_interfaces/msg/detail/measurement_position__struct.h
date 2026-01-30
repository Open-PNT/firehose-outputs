// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementPosition.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI'.
/**
 * Sensor position relative to the earth-centered, inertial (ECi) frame
 * expressed where term1, term2, and term3 are the x, y, and z components of ECI
 * position in meters, respectively. Each term is optional. Error covariance is
 * given using x-axis position error component (meters), y-axis position error
 * component (meters), and z-axis position error component (meters). In the case
 * of nulled position components, the corresponding error covariance terms are
 * omitted. See also ECi coordinate frame definition for x, y, and z
 * definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPosition__ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI =
      0
};

/// Constant 'ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC'.
/**
 * Sensor position relative to the WGS-84 reference expressed using term1 as
 * geodetic latitude in radians, term2 as longitude in radians, and term3 as
 * geodetic altitude (or height above the WGS-84 ellipsoid) in meters. Each term
 * is optional. Error covariance is given using north-south position error in
 * meters (an expression of geodetic latitude error), east-west position error
 * in meters (an expression of longitude error in meters), and geodetic altitude
 * error in meters. In the case of nulled position components, the corresponding
 * error covariance terms are omitted.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPosition__ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC =
      1
};

/// Constant 'ASPN23_MEASUREMENT_POSITION_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPosition__ASPN23_MEASUREMENT_POSITION_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementPosition in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementPosition {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead One, two, or three dimensional position relative to a user-defined
  /// reference frame. Description: Standard ASPN measurement header. Units:
  /// none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference_frame;
  /// Description: First position term as defined in enum.
  /// Units: various
  double term1;
  /// Description: Second position term as defined in enum.
  /// Units: various
  double term2;
  /// Description: Third position term as defined in enum.
  /// Units: various
  double term3;
  /// Description: Dimension of measurement provided.
  /// Units: none
  uint8_t num_meas;
  /// Description: Error covariance or variance depending on observation
  /// dimension. Units: various Dimensions of covariance must be num_meas² Note:
  /// field represents a num_meas x num_meas matrix
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
} aspn23_ros_interfaces__msg__MeasurementPosition;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementPosition.
typedef struct aspn23_ros_interfaces__msg__MeasurementPosition__Sequence {
  aspn23_ros_interfaces__msg__MeasurementPosition *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION__STRUCT_H_
