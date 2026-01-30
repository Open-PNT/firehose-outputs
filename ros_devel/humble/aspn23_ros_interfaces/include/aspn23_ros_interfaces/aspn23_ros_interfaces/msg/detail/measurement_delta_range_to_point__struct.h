// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementDeltaRangeToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_RANGE_TO_POINT__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_RANGE_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint__ASPN23_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'remote_point'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementDeltaRangeToPoint in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Delta range to a point is the difference, d1 - d0, where
  ///
  /// d1 is the distance between the sensor and the point at time =
  /// (time_of_validity) d0 is the distance between the sensor and the point at
  /// time = (time_of_validity - delta_t)
  ///
  /// Note, a negative obs indicates the sensor is closer to the point at
  /// time_of_validity than it was at time_of_validity - delta_t. Information
  /// about the remote point (its position and/or correspondence with previous
  /// or future appearances of this same point) may be determined using
  /// remote_point.
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Position and/or correspondence information about the remote
  /// point. Units: various
  aspn23_ros_interfaces__msg__TypeRemotePoint remote_point;
  /// Description: Delta range to the remote point.
  /// Units: m
  double obs;
  /// Description: Duration of the observation time interval. The
  /// time_of_validity denotes the end of the time interval. The start of the
  /// time interval is time_of_validity - delta_t. Units: sec
  double delta_t;
  /// Description: Variance of the delta range measurement.
  /// Units: m^2
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
} aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint__Sequence {
  aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_RANGE_TO_POINT__STRUCT_H_
