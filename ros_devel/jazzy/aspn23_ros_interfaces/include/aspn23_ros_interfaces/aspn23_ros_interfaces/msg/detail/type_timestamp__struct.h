// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeTimestamp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_timestamp.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TypeTimestamp in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeTimestamp {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Whole number nanoseconds elapsed since timestamp's zero epoch. If
  /// negative, whole number nanoseconds until timestamp's zero epoch. The zero
  /// epoch definition is based on the timing source used by the message
  /// provider. The timing source used by the message provider is defined by the
  /// `timestamp_clock_id` included in the `type_metadataheader` as part of the
  /// metadata. Additionally, the timestamp's digits of precision are included
  /// in the `type_metadataheader` as part of the metadata, which may be useful
  /// if an implementation is converting the timestamp to another type
  /// internally.
  /// If needed, the time elapsed in seconds is equal to elapsed_nsec * 1e-9.
  /// Description: Whole number nanoseconds elapsed since timestamp's zero
  /// epoch. If negative, whole number nanoseconds until timestamp's zero epoch.
  /// Units: nanoseconds
  int64_t elapsed_nsec;
} aspn23_ros_interfaces__msg__TypeTimestamp;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeTimestamp.
typedef struct aspn23_ros_interfaces__msg__TypeTimestamp__Sequence {
  aspn23_ros_interfaces__msg__TypeTimestamp *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeTimestamp__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_TIMESTAMP__STRUCT_H_
