// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_satnav_obs.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_H_

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

/// Struct defined in msg/MetadataSatnavObs in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataSatnavObs {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Metadata for satnav_obs Description: Standard ASPN metadata
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Start time of the interval over which the deltarange is
  /// measured with respect to the measurement time. This value must be provided
  /// if the deltarange measurement is provided. Units: seconds
  float deltarange_interval_start;
  /// Description: Stop time of the interval over which the deltarange is
  /// measured with respect to the measurement time. This value must be provided
  /// if the deltarange measurement is provided. If the deltarange integration
  /// period is the same as the measurement time, this value should be 0. Units:
  /// seconds
  float deltarange_interval_stop;
} aspn23_ros_interfaces__msg__MetadataSatnavObs;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataSatnavObs.
typedef struct aspn23_ros_interfaces__msg__MetadataSatnavObs__Sequence {
  aspn23_ros_interfaces__msg__MetadataSatnavObs *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataSatnavObs__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_SATNAV_OBS__STRUCT_H_
