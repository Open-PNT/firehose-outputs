// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_H_

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

/// Struct defined in msg/MetadataGpsIonoUtcParameters in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Broadcasted GPS navigation data for estimation of single frequency
  /// ionospheric correction and determination of UTC. Definitions and usage are
  /// covered in ICD-GPS-200L, Section 20.3.3.5.1.6 and 20.3.3.5.1.7.
  /// Description: Standard ASPN metadata header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Bias coefficient of GPS time scale relative to UTC time
  /// scale. Units: s
  double a_0;
  /// Description: Drift coefficient of GPS time scale relative to UTC time
  /// scale. Units: s/s
  double a_1;
  /// Description: Leap second count.
  /// Units: s
  int8_t delta_t_ls;
  /// Description: Reference GPS time of week for UTC parameters
  /// Units: s
  uint32_t tot;
  /// Description: Reference Modulo 256 GPS Week number for UTC parameters
  /// Units: weeks
  uint8_t wn_t;
  /// Description: Modulo 256 GPS Week number at the end of which delta_t_lsf
  /// becomes effective. Units: weeks
  uint8_t wn_lsf;
  /// Description: Day number at the end of which delta_t_lsf becomes effective
  /// (1 to 7). Units: days
  uint8_t dn;
  /// Description: Future leap second count.
  /// Units: s
  int8_t delta_t_lsf;
  /// Description: Zeroth-order coefficient of amplitude of vertical ionospheric
  /// delay. Units: s
  double alpha_0;
  /// Description: First-order coefficient of amplitude of vertical ionospheric
  /// delay. Units: s/rad
  double alpha_1;
  /// Description: Second-order coefficient of amplitude of vertical ionospheric
  /// delay. Units: s/rad^2
  double alpha_2;
  /// Description: Third-order coefficient of amplitude of vertical ionospheric
  /// delay. Units: s/rads^3
  double alpha_3;
  /// Description: Zeroth-order coefficient of period of ionospheric delay
  /// model. Units: s
  double beta_0;
  /// Description: First-order coefficient of period of ionospheric delay model.
  /// Units: s/rad
  double beta_1;
  /// Description: Second-order coefficient of period of ionospheric delay
  /// model. Units: s/rad^2
  double beta_2;
  /// Description: Third-order coefficient of period of ionospheric delay model.
  /// Units: s/rad^3
  double beta_3;
} aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters.
typedef struct
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence {
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_GPS_IONO_UTC_PARAMETERS__STRUCT_H_
