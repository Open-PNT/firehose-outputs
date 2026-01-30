// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_satnav_satellite_system.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS'.
/**
 * GPS.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO'.
/**
 * Galileo.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS'.
/**
 * GLONASS.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS =
      2
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU'.
/**
 * BeiDou.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU =
      3
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS'.
/**
 * SBAS.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS =
      4
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS'.
/**
 * QZSS.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS =
      5
};

/// Constant 'ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS'.
/**
 * IRNSS.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS =
      6
};

/// Struct defined in msg/TypeSatnavSatelliteSystem in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Satellite system name Enumerated field which describes the
  /// Satellite System.
  uint8_t satellite_system;
} aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SATELLITE_SYSTEM__STRUCT_H_
