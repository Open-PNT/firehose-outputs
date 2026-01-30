// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavSubframe.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_H_

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
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.h"
// Member 'data_vector'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementSatnavSubframe in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementSatnavSubframe {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead satnav navigation data bit subframe. Description: Standard ASPN
  /// measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Message ID provided from the satnav receiver.
  /// Units: none
  int64_t gnss_message_id;
  /// Description: Satellite ID number.
  /// Units: none
  int32_t prn;
  /// Description: Describes the satellite system that generated the subframe.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem satellite_system;
  /// Description: Frequency slot +7 (range from 0-13). Only used for GLONASS.
  /// Units: none
  int32_t freq_slot_id;
  /// Description: Number of bytes of subframe data.
  /// Units: none
  uint16_t num_bytes;
  /// Description: num_bytes sized array of raw subframe message collected by
  /// the sensor. The underlying type and shape of the data vector is given by
  /// satnav_msg_id. Units: none Note: array length is num_bytes
  rosidl_runtime_c__int8__Sequence data_vector;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementSatnavSubframe;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementSatnavSubframe.
typedef struct aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence {
  aspn23_ros_interfaces__msg__MeasurementSatnavSubframe *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementSatnavSubframe__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV_SUBFRAME__STRUCT_H_
