// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementDeltaPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_delta_position.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED'.
/**
 * Change in position along the N, E, and D axes of the locally level NED frame.
 * Each direction is optional. term1, term2, and term3, if provided, describe
 * the change in position along the N, E, and D axes, respectively. For example,
 * a depth sensor may report a change in position of +2m along the D axis by
 * omitting term1 and term2 (using the appropriate null) and using term3 = 2.
 * This observation may be interpreted as (1) the sensor has no knowledge of the
 * change in position in the N and E directions, and (2) the sensor observed
 * that the position at the end of the observation time interval,
 * time_of_validity, is 2 meters lower than the position at the start of the
 * time interval, time_of_validity - delta_t. See also NED coordinate frame
 * definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition__ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED =
      0
};

/// Constant 'ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START'.
/**
 * Change in position expressed in the sensor frame at the start of the
 * measurement interval as defined in mounting. Each direction is optional.
 * term1, term2, and term3, if provided, describe the change in position along
 * the sensor x, y, and z axes, respectively.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition__ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START =
      1
};

/// Constant 'ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END'.
/**
 * Change in position expressed in the sensor frame at the end of the
 * measurement interval as defined in mounting. Each direction is optional.
 * term1, term2, and term3, if provided, describe the change in position along
 * the sensor x, y, and z axes, respectively.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition__ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END =
      2
};

/// Constant 'ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition__ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'covariance'
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementDeltaPosition in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementDeltaPosition {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Delta position is the change in position from the position at time
  /// (time_of_validity - delta_t) to the position at time (time_of_validity),
  /// where the change in position is reported along each axis of the reference
  /// frame. The reference frame is chosen by the user in the reference enum.
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid at
  /// the end of the delta-position period. Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Specifies measurement reference frame.
  uint8_t reference_frame;
  /// Description: Duration of the observation time interval. The
  /// time_of_validity denotes the end of the time interval. The start of the
  /// time interval is time_of_validity - delta_t. Units: sec
  double delta_t;
  /// Description: Dimension of measurement provided.
  /// Units: none
  uint8_t num_meas;
  /// Description: Delta position over the first dimension specified by the
  /// enum. Units: m
  double term1;
  /// Description: Delta position over the second dimension specified by the
  /// enum. Units: m
  double term2;
  /// Description: Delta position over the third dimension specified by the
  /// enum. Units: m
  double term3;
  /// Description: Variance or covariance matrix depending on measurement
  /// dimension. Units: m^2 Dimensions of covariance must be num_meas² Note:
  /// field represents a num_meas x num_meas matrix
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
} aspn23_ros_interfaces__msg__MeasurementDeltaPosition;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementDeltaPosition.
typedef struct aspn23_ros_interfaces__msg__MeasurementDeltaPosition__Sequence {
  aspn23_ros_interfaces__msg__MeasurementDeltaPosition *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementDeltaPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DELTA_POSITION__STRUCT_H_
