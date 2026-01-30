// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS'.
/**
 * GPS system time.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavTime__ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO'.
/**
 * Galileo system time.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavTime__ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU'.
/**
 * BeiDou system time.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavTime__ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU =
      2
};

/// Constant 'ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS'.
/**
 * GLONASS system time.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavTime__ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS =
      3
};

/// Struct defined in msg/TypeSatnavTime in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavTime {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Satellite system time Description: Full Week number since zero
  /// epoch at which the data provided in this message is valid, expressed in
  /// time system defined by time_reference enum (below). Units: weeks
  uint16_t week_number;
  /// Description: Seconds since start of current week at which the data
  /// provided in this message is valid, expressed in time system defined by
  /// time_reference enum (below). Units: seconds
  double seconds_of_week;
  /// Reference time system used to express the data in this message. In a
  /// multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange
  /// observations must refer to one receiver clock only. The receiver clock
  /// time of the measurement is the receiver clock time of the received
  /// signals. It is identical for the phase and range measurements and is
  /// identical for all satellites observed in a given epoch.
  uint8_t time_reference;
} aspn23_ros_interfaces__msg__TypeSatnavTime;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeSatnavTime.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavTime__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavTime *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_TIME__STRUCT_H_
