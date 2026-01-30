// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeDirection2DToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO'.
/**
 * Angle between the sensor's local level N-axis and the vector from the sensor
 * to the point projected onto the sensor's local level North-East plane.
 * Positive angle is defined as a rotation towards the E-axis. See also NED
 * coordinate frame definition for N, E, and D definitions. A figure depicting
 * the angle definition is included in the conventions documentation.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO =
      0
};

/// Constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM'.
/**
 * Angle between the point's local level N-axis and the vector from the point to
 * the sensor projected onto the point's local level North-East plane. Positive
 * angle is defined as a rotation towards the E-axis. The significant difference
 * between NE_TO and NE_FROM is where the NED frame originates (NE_FROM has its
 * origin located at the point's location). See also NED coordinate frame
 * definition for N, E, and D definitions. A figure depicting the angle
 * definition is included in the conventions documentation.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM =
      1
};

/// Constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION'.
/**
 * Angle between the sensor's local level North-East plane and the vector from
 * the sensor to the point. Positive angle is defined as a rotation towards the
 * negative D-axis of the NED frame. See also NED coordinate frame definition
 * for N, E, and D definitions. A figure depicting the angle definition is
 * included in the conventions documentation.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION =
      2
};

/// Constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR'.
/**
 * Angle between the sensor's x-axis and the vector from the sensor to the point
 * projected onto the sensor frame x-y plane. Positive angle is defined as a
 * rotation towards the y-axis. Sensor frame is defined in mounting. A figure
 * depicting the angle definition is included in the conventions documentation.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR =
      3
};

/// Constant 'ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'remote_point'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
// Member 'observation_characteristics'
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/TypeDirection2DToPoint in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeDirection2DToPoint {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead 2D direction to or from a point as defined by the reference enum.
  /// Information about the remote point (its position and/or correspondence
  /// with previous or future appearances of this same point) may be determined
  /// using remote_point. Description: Position and/or correspondence
  /// information about the remote point. Units: various
  aspn23_ros_interfaces__msg__TypeRemotePoint remote_point;
  /// Specifies measurement reference.
  uint8_t reference;
  /// Description: Observations as specified in the reference enum.
  /// Units: rad
  double obs;
  /// Description: Measurement error variance.
  /// Units: rad^2
  double variance;
  /// Description: Switch for whether observation_characteristics is valid or
  /// not. Units: none
  bool has_observation_characteristics;
  /// Description: Image feature characteristics.
  /// Units: various
  aspn23_ros_interfaces__msg__TypeImageFeature observation_characteristics;
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
} aspn23_ros_interfaces__msg__TypeDirection2DToPoint;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeDirection2DToPoint.
typedef struct aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence {
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION2_D_TO_POINT__STRUCT_H_
