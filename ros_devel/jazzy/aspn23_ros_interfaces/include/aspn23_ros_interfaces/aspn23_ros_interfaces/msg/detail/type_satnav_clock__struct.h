// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_clock.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TypeSatnavClock in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavClock {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead satnav broadcast parameters required to calculate sv clock
  /// corrections Description: Clock reference time. Units: s
  double t_oc;
  /// Description: Satellite clock bias.
  /// Units: s
  double af_0;
  /// Description: Satellite clock drift.
  /// Units: s/s
  double af_1;
  /// Description: Satellite clock drift rate.
  /// Units: s/s^2
  double af_2;
} aspn23_ros_interfaces__msg__TypeSatnavClock;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeSatnavClock.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavClock__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavClock *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavClock__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_CLOCK__STRUCT_H_
