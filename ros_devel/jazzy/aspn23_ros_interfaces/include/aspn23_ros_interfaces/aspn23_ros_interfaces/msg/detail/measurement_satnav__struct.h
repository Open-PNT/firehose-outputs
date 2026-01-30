// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnav.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_satnav.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__STRUCT_H_

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
// Member 'receiver_clock_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.h"
// Member 'obs'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__struct.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementSatnav in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementSatnav {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Raw measurements from a satnav receiver. Description: Standard
  /// ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Receiver clock time. In a multi-GNSS receiver
  /// (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer
  /// to one receiver clock only. The receiver clock time of the measurement is
  /// the receiver clock time of the received signals. It is identical for the
  /// phase and range measurements and is identical for all satellites observed
  /// in a given epoch. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavTime receiver_clock_time;
  /// Description: Number of different signal types tracked in the current
  /// epoch. Examples of signal types include GPS L1 C/A code, Galileo E1B.
  /// Units: none
  uint16_t num_signal_types;
  /// Description: Total number of signals tracked across all PRNs and signal
  /// types. Units: none
  uint16_t num_signals_tracked;
  /// Description: Array of satnav obs data for all of the signals/PRNs being
  /// tracked in this epoch. Units: none Note: array length is
  /// num_signals_tracked
  aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence obs;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity at the sensor level. Integrity is also
  /// available for each observable, which is found in the observable type
  /// definition. Includes the integrity method used and an integrity value
  /// (which is to be interpreted based upon the integrity method). The intent
  /// of allowing num_integrity > 1 is to report multiple integrity values based
  /// on multiple integrity methods. Units: none Note: array length is
  /// num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementSatnav;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementSatnav.
typedef struct aspn23_ros_interfaces__msg__MeasurementSatnav__Sequence {
  aspn23_ros_interfaces__msg__MeasurementSatnav *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementSatnav__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_SATNAV__STRUCT_H_
