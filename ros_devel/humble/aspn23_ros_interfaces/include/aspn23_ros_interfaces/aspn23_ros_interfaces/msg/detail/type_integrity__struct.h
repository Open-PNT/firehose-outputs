// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TypeIntegrity in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeIntegrity {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Integrity provides a numerical measure of the trustworthiness of
  /// the associated measurement. The integrity_method enum specifies the
  /// integrity method and the appropriate interpretation of the
  /// integrity_value.
  /// Enumerated field which describes the meaning of the integrity value.
  /// Integrity methods may use multiple enum entries if there is a need to pass
  /// multiple integrity values. For example, an integrity method with 3
  /// parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1,
  /// MY_METHOD_VALUE2, MY_METHOD_VALUE3). When integrity is reported in a
  /// message, a vector of integrity types is passed. In the MY_METHOD example,
  /// num_integrity = 3 just for the MY_METHOD integrity. If additional
  /// integrity methods are also reported, then num_integrity would be greater
  /// than 3 to include those additional methods.
  uint8_t integrity_method;
  /// Description: Measurement integrity value to be interpreted based on the
  /// definition in the integrity_type enum. Units: none
  double integrity_value;
} aspn23_ros_interfaces__msg__TypeIntegrity;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeIntegrity.
typedef struct aspn23_ros_interfaces__msg__TypeIntegrity__Sequence {
  aspn23_ros_interfaces__msg__TypeIntegrity *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeIntegrity__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_INTEGRITY__STRUCT_H_
