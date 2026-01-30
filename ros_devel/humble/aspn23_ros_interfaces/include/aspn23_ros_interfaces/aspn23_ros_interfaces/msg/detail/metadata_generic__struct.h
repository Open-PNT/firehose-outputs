// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGeneric.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'mounting'
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.h"

/// Struct defined in msg/MetadataGeneric in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGeneric {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Metadata for a generic sensor. Description: Standard ASPN metadata
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Standard ASPN mounting information.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMounting mounting;
} aspn23_ros_interfaces__msg__MetadataGeneric;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataGeneric.
typedef struct aspn23_ros_interfaces__msg__MetadataGeneric__Sequence {
  aspn23_ros_interfaces__msg__MetadataGeneric *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGeneric__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GENERIC__STRUCT_H_
