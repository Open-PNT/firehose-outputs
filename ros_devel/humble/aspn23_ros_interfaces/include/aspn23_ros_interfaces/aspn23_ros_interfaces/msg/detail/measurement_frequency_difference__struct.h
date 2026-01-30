// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementFrequencyDifference.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementFrequencyDifference__ASPN23_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementFrequencyDifference in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementFrequencyDifference {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Frequency difference between two clocks or timing sources.
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Whole number of attoseconds used to provide additional
  /// timestamp fidelity describing the time at which the measurement is
  /// considered to be valid. This is only needed if the time of validity is
  /// known to more precision than 1ns; otherwise, set time_of_validity_attosec
  /// = 0. Be sure to report the timestamp's digits of precision in the
  /// `type_metadataheader` as part of the metadata. The full timestamp in
  /// nanoseconds is calculated as
  ///
  /// time_of_validity + ( time_of_validity_attosec * 1E-9 )
  ///
  /// and if needed, a timestamp in seconds is calculated as
  ///
  /// time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
  ///
  /// (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is
  /// in attoseconds.) Furthermore, both time_of_validity and
  /// time_of_validity_attosec are signed integers and may be positive or
  /// negative. It is recommended to make time_of_validity and
  /// time_of_validity_attosec the same sign. Care should be taken when
  /// constructing the timestamp components to be sure the summation produces
  /// the desired result. Units: attoseconds
  int32_t time_of_validity_attosec;
  /// Description: Identifier for clock/timing source 1. See
  /// clock_identifiers.md for a full description, but the summary is as
  /// follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
  /// Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System
  /// Time 5 = GLONASS System Time 6 = BeiDou System Time 7-50: Reserved for
  /// future additional time scale representations. Units: none
  uint8_t clock_id1;
  /// Description: Identifier for clock/timing source 2. See
  /// clock_identifiers.md for a full description, but the summary is as
  /// follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
  /// Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System
  /// Time 5 = GLONASS System Time 6 = BeiDou System Time 7-50: Reserved for
  /// future additional time scale representations. Units: none
  uint8_t clock_id2;
  /// Description: Frequency difference formed as (frequency from clock_id1) -
  /// (frequency from clock_id2). Units: Hertz
  double freq_diff;
  /// Description: Variance of the error in the frequency difference
  /// measurement. Units: Hertz^2
  double variance;
  /// Defines an optional error model for other than zero-mean, additive, white
  /// Gaussian noise (AWGN).
  uint8_t error_model;
  /// Description: Number of parameters required for the error model chosen.
  /// Units: none
  uint16_t num_error_model_params;
  /// Description: Error model parameters that characterize the optional error
  /// model. Units: various Note: array length is num_error_model_params
  rosidl_runtime_c__double__Sequence error_model_params;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementFrequencyDifference;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementFrequencyDifference.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementFrequencyDifference__Sequence {
  aspn23_ros_interfaces__msg__MeasurementFrequencyDifference *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementFrequencyDifference__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_FREQUENCY_DIFFERENCE__STRUCT_H_
