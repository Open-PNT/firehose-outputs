// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_H_

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

/// Struct defined in msg/MetadataGlonassEphemeris in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGlonassEphemeris {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead GLONASS Ephemeris describing GLONASS satellite locations.
  /// Definitions and usage are covered in GLONASS ICD L1,L2 - Edition 5.1 2008,
  /// Section 4.4. Description: Standard ASPN metadata header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: GLONASS satellite slot number.
  /// Units: none
  int32_t slot_number;
  /// Description: Frequency channel offset number in range from 0 to 20.
  /// Units: none
  int32_t freq_o;
  /// Description: Calender number of day within 4 year interval starting at Jan
  /// 1 of a leap year Units: days
  int32_t n_t;
  /// Description: Time referenced to the beginning of the frame within the
  /// current day. Units: s
  double t_k;
  /// Description: Index of time interval within current day according to
  /// UTC(SU) + 03 hrs. Units: minutes
  double t_b;
  /// Description: Relative Satellite frequency bias
  /// Units: s/s
  double gamma_n;
  /// Description: Satellite clock bias.
  /// Units: s
  double tau_n;
  /// Description: Satellite X position in PZ-90 coordinate system at time t_b.
  /// Units: km
  double sv_pos_x;
  /// Description: Satellite X velocity in PZ-90 coordinate system at time t_b.
  /// Units: km/s
  double sv_vel_x;
  /// Description: Satellite X acceleration in PZ-90 coordinate system at time
  /// t_b. Units: km/s^2
  double sv_accel_x;
  /// Description: Satellite Y position in PZ-90 coordinate system at time t_b.
  /// Units: km
  double sv_pos_y;
  /// Description: Satellite Y velocity in PZ-90 coordinate system at time t_b.
  /// Units: km/s
  double sv_vel_y;
  /// Description: Satellite Y acceleration in PZ-90 coordinate system at time
  /// t_b. Units: km/s^2
  double sv_accel_y;
  /// Description: Satellite Z position in PZ-90 coordinate system at time t_b.
  /// Units: km
  double sv_pos_z;
  /// Description: Satellite Z velocity in PZ-90 coordinate system at time t_b.
  /// Units: km/s
  double sv_vel_z;
  /// Description: Satellite Z acceleration in PZ-90 coordinate system at time
  /// t_b. Units: km/s^2
  double sv_accel_z;
} aspn23_ros_interfaces__msg__MetadataGlonassEphemeris;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MetadataGlonassEphemeris.
typedef struct aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence {
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GLONASS_EPHEMERIS__STRUCT_H_
