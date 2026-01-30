// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV'.
/**
 * I/NAV ephemeris.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV =
      0
};

/// Constant 'ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV'.
/**
 * F/NAV ephemeris.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV =
      1
};

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'clock'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.h"
// Member 'orbit'
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.h"

/// Struct defined in msg/MetadataGalileoEphemeris in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGalileoEphemeris {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead GALILEO Ephemeris describing satellite locations. Definitions and
  /// usage are covered in OS SIS ICD, Issue 2.0, January 2021,
  /// Section 4.2, 4.3, and 5.1. Description: Standard ASPN metadata header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Enumerated field which describes the GALILEO message type used to define
  /// clock correction parameters.
  uint8_t nav_msg_type;
  /// Description: Satellite PRN number.
  /// Units: none
  int32_t prn;
  /// Description: GNSS broadcast parameters required to calculate sv clock
  /// corrections. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavClock clock;
  /// Description: Keplerian orbit parameters required to calculate satellite
  /// position. Units: none
  aspn23_ros_interfaces__msg__TypeKeplerOrbit orbit;
  /// Description: Broadcast group delay (E1-E5b if F/Nav, E1-E5b if I/NAV)
  /// Units: s
  double bgd;
} aspn23_ros_interfaces__msg__MetadataGalileoEphemeris;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MetadataGalileoEphemeris.
typedef struct aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence {
  aspn23_ros_interfaces__msg__MetadataGalileoEphemeris *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GALILEO_EPHEMERIS__STRUCT_H_
