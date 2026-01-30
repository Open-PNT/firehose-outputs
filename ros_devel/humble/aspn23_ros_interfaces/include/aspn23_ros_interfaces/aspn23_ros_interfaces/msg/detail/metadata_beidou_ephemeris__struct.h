// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_H_

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

/// Struct defined in msg/MetadataBeidouEphemeris in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataBeidouEphemeris {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead BeiDou Ephemeris describing satellite locations. Definitions and
  /// usage are covered in BDS-SIS-ICD-BII-3.0, February 2019, Description:
  /// Standard ASPN metadata header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Satellite PRN number.
  /// Units: none
  int32_t prn;
  /// Description: GNSS broadcast parameters required to calculate sv clock
  /// corrections. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavClock clock;
  /// Description: Keplerian orbit parameters required to calculate satellite
  /// position. Units: none
  aspn23_ros_interfaces__msg__TypeKeplerOrbit orbit;
  /// Description: Group delay differential for B1I user.
  /// Units: s
  double t_gd1;
  /// Description: Group delay differential for B2I user.
  /// Units: s
  double t_gd2;
  /// Description: Age of data, clock is updated at start of each hour in BDT
  /// per table 5-6 in BDS-SIS-ICD-BII-3.0. Units: none
  int16_t aodc;
  /// Description: Age of data, ephemeris is updated at start of each hour in
  /// BDT per table 5-8 in BDS-SIS-ICD-BII-3.0. Units: none
  int16_t aode;
} aspn23_ros_interfaces__msg__MetadataBeidouEphemeris;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataBeidouEphemeris.
typedef struct aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__Sequence {
  aspn23_ros_interfaces__msg__MetadataBeidouEphemeris *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_BEIDOU_EPHEMERIS__STRUCT_H_
