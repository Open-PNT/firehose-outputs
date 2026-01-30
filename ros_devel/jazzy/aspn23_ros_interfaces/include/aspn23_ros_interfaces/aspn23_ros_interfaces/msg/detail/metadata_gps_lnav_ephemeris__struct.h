// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsLnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_lnav_ephemeris.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__STRUCT_H_

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
// Member 'clock'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__struct.h"
// Member 'orbit'
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__struct.h"

/// Struct defined in msg/MetadataGpsLnavEphemeris in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead LNAV Ephemeris describing GPS satellite locations. Definitions and
  /// usage are covered in ICD-GPS-200L, Section 20.3.3.4 and following.
  /// Description: Standard ASPN metadata header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Full GPS week number calculated from the Modulo 1024 WN in
  /// Subframe 1 and the number of GPS week rollovers Units: weeks
  uint16_t week_number;
  /// Description: Satellite PRN number.
  /// Units: none
  int32_t prn;
  /// Description: GNSS broadcast parameters required to calculate sv clock
  /// corrections. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavClock clock;
  /// Description: Keplerian orbit parameters required to calculate satellite
  /// position. Units: none
  aspn23_ros_interfaces__msg__TypeKeplerOrbit orbit;
  /// Description: Group delay differential between L1 and L2.
  /// Units: s
  double t_gd;
  /// Description: Issue of Data Clock. 10 bit value from Subframe 1
  /// Units: none
  uint16_t iodc;
  /// Description: Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and
  /// Subframe 3. Should match the 8 LSBs of the IODC. Units: none
  uint8_t iode;
} aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris.
typedef struct aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris__Sequence {
  aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_LNAV_EPHEMERIS__STRUCT_H_
