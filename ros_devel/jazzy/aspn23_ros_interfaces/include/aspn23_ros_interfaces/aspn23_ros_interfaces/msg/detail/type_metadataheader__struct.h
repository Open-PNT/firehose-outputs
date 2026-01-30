// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_metadataheader.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'sensor_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TypeMetadataheader in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeMetadataheader {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Sensor metadata header. Description: Standard ASPN measurement
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Describes the device used to generate the measurement (user
  /// defined). Units: none
  rosidl_runtime_c__String sensor_description;
  /// Description: Optional nominal time interval between each measurement.
  /// Actual time interval may vary. Do not report a delta_t_nom if the nominal
  /// time interval is not known ahead of time. Units: seconds
  double delta_t_nom;
  /// Description: Identifier for the timestamp's clock/timing source. See
  /// clock_identifiers.md for a full description, but the summary is as
  /// follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
  /// Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System
  /// Time 5 = GLONASS System Time 6 = BeiDou System Time 7-50: Reserved for
  /// future additional time scale representations.
  ///
  /// Each message source must provide metadata information (the method used to
  /// provide the metadata information depends on the system, e.g., over the
  /// wire, written to file, etc.), and the information contained in this type
  /// (type_metadataheader) will be included in that information. In this
  /// manner, each message source's clock ID will be defined. If the clock
  /// source is updated, new metadata must be provided with an updated clock ID.
  /// If used, ASPN system time shall be represented as a monotonically
  /// increasing quantity defined by the system. System time zero epoch must be
  /// defined. For example, system time may be the time difference with respect
  /// to a system power on event. Other user-defined clocks/timing sources must
  /// be similarly defined by the system designer. Units: none
  uint8_t timestamp_clock_id;
  /// Description: Defines how many decimal digits of precision are represented
  /// in the timestamp after the decimal point. The precision of the timestamps
  /// is 10E-N, where N is digits_of_precision. A value of 3 would mean that the
  /// timestamp has precision at the 10E-3 (millisecond) level, a value of 6
  /// would mean the timestamp has precision at the 10E-6 (microsecond) level,
  /// etc. If an implementation is using 64bit integers for their internal time
  /// representations, digits of precision may be ignored with no additional
  /// complexity. If an implementation is converting to a double, because of
  /// their choice of internal representation (which likely most estimators
  /// would use), then knowing digits of precision would be important to avoid
  /// losing resolution. Units: none
  uint8_t digits_of_precision;
} aspn23_ros_interfaces__msg__TypeMetadataheader;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeMetadataheader.
typedef struct aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence {
  aspn23_ros_interfaces__msg__TypeMetadataheader *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_METADATAHEADER__STRUCT_H_
