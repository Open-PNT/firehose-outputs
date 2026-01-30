// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_time.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementTime__ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'clock_id'
// Member 'elapsed_nsec'
// Member 'elapsed_attosec'
// Member 'covariance'
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementTime in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementTime {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Expresses time measurements from one or more clocks/timing
  /// sources. Description: Standard ASPN measurement header. Units: none
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
  /// Description: Number of absolute clock/timing source measurements reported
  /// in this measurement. May be 0 through 255. The clock_id, elapsed_nsec, and
  /// elapsed_attosec values are provided for each measurement, indexed by the
  /// observation number. Units: none
  uint8_t num_obs;
  /// Description: Identifier for clock/timing source for each measurement. See
  /// clock_identifiers.md for a full description, but the summary is as
  /// follows: 0 = ASPN System Time 1 = International Atomic Time (TAI) 2 =
  /// Universal Coordinated Time (UTC) 3 = GPS System Time 4 = Galileo System
  /// Time 5 = GLONASS System Time 6 = BeiDou System Time 7-50: Reserved for
  /// future additional time scale representations. Units: none Note: array
  /// length is num_obs
  rosidl_runtime_c__uint8__Sequence clock_id;
  /// Description: Whole number nanoseconds elapsed since each clock's zero
  /// epoch. If negative, whole number nanoseconds until each clock's zero
  /// epoch. Additionally, the timestamp's digits of precision are included as
  /// `digits_of_precision`. Units: nanoseconds Note: array length is num_obs
  rosidl_runtime_c__int64__Sequence elapsed_nsec;
  /// Description: Whole number of attoseconds used to provide additional
  /// observation fidelity. This is only needed if the observation is known to
  /// more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be
  /// sure to report the timestamp's digits of precision. The full observation
  /// in nanoseconds is calculated as
  ///
  /// elapsed_nsec + ( elapsed_attosec * 1E-9 )
  ///
  /// and the observation in seconds is calculated as
  ///
  /// elapsed_nsec * 1E-9 + elapsed_attosec * 1E-18
  ///
  /// Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and
  /// may be positive or negative. It is recommended to make elapsed_nsec and
  /// elapsed_attosec the same sign. Care should be taken when constructing the
  /// observation components to be sure the summation produces the desired
  /// result.
  /// Units: attoseconds
  /// Note: array length is num_obs
  rosidl_runtime_c__int32__Sequence elapsed_attosec;
  /// Description: Defines how many decimal digits of precision are represented
  /// in the observation after the decimal point. The precision of the
  /// observation is 10E-N, where N is digits_of_precision. A value of 3 would
  /// mean that the observation has precision at the 10E-3 (millisecond) level,
  /// a value of 6 would mean the observation has precision at the 10E-6
  /// (microsecond) level, etc. Units: none
  uint8_t digits_of_precision;
  /// Description: Measurement error variance or covariance depending on
  /// measurement dimension in the absolute clock/timing signal measurements.
  /// Note: These measurements are assuming that there is no error in the ASPN
  /// system clock. Errors in the ASPN system clock time tag for the time
  /// measurements should be included in the overall errors for the respective
  /// time measurements as expressed in the covariance matrix. Units: sec^2
  /// Dimensions of covariance must be num_obs² Note: field represents a num_obs
  /// x num_obs matrix
  rosidl_runtime_c__double__Sequence covariance;
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
} aspn23_ros_interfaces__msg__MeasurementTime;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementTime.
typedef struct aspn23_ros_interfaces__msg__MeasurementTime__Sequence {
  aspn23_ros_interfaces__msg__MeasurementTime *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TIME__STRUCT_H_
