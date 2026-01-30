// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirection2DToPoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_direction2_d_to_points.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'obs'
#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__struct.h"

/// Struct defined in msg/MeasurementDirection2DToPoints in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead 2D direction to points. Description: Standard ASPN measurement
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Total number of observations.
  /// Units: none
  uint16_t num_obs;
  /// Description: Array of observations.
  /// Units: none
  /// Note: array length is num_obs
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence obs;
} aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence {
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION2_D_TO_POINTS__STRUCT_H_
