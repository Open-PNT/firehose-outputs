// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsMnavEphemeris.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_gps_mnav_ephemeris.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_H_

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

/// Struct defined in msg/MetadataGpsMnavEphemeris in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead MNAV Ephemeris describing GPS satellite locations. Definitions and
  /// usage are covered in ICD-GPS-200L, Section 20.3.3.4 and following, with
  /// additional military use definitions and usage covered in ICD-GPS-700D.
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
  /// Description: Change rate of semi-major axis.
  /// Units: m/s
  double a_dot;
  /// Description: SV clock bias correction provided by the Mnav Message
  /// Correction (MMC). Units: s
  double delta_af_0;
  /// Description: SV clock drift correction provided by the Mnav Message
  /// Correction (MMC). Units: s
  double delta_af_1;
  /// Description: Ephemeris parameters correction provided by the Mnav Message
  /// Correction (MMC). Units: radians
  double delta_gamma;
  /// Description: Angle of inclination correction provided by the Mnav Message
  /// Correction (MMC). Units: radians
  double delta_i;
  /// Description: Angle of Right Ascension correction provided by the Mnav
  /// Message Correction (MMC). Units: radians
  double delta_omega;
  /// Description: Semi-major axis correction provided by the Mnav Message
  /// Correction (MMC). Units: m
  double delta_a;
  /// Description: L M1_E to L1 P(Y) inter-signal correction.
  /// Units: s
  double isc_l1_m_e;
  /// Description: L M2_E to L1 P(Y) inter-signal correction.
  /// Units: s
  double isc_l2_m_e;
  /// Description: L M1_S to L1 P(Y) inter-signal correction.
  /// Units: s
  double isc_l1_m_s;
  /// Description: L M2_S to L1 P(Y) inter-signal correction.
  /// Units: s
  double isc_l2_m_s;
  /// Description: L2 P(Y) to L1 P(Y) inter-signal accuracy index.
  /// Units: none
  double isa_l2_py;
  /// Description: L M1_E to L1 P(Y) inter-signal accuracy index.
  /// Units: none
  double isa_l1_m_e;
  /// Description: L M2_E to L1 P(Y) inter-signal accuracy index.
  /// Units: none
  double isa_l2_m_e;
  /// Description: L M1_S to L1 P(Y) inter-signal accuracy index.
  /// Units: none
  double isa_l1_m_s;
  /// Description: L M2_S to L1 P(Y) inter-signal accuracy index.
  /// Units: none
  double isa_l2_m_s;
} aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris.
typedef struct aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence {
  aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_MNAV_EPHEMERIS__STRUCT_H_
