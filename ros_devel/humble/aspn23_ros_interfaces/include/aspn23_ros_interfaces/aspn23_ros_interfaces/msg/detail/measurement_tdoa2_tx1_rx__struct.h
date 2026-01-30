// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementTdoa2Tx1Rx.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx__ASPN23_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'tx1_position_and_covariance'
// Member 'tx2_position_and_covariance'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementTdoa2Tx1Rx in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Time difference of arrival of two signals (Tx) to a sensor (Rx).
  /// Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Transmitter 1 (Tx1)'s known location.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeRemotePoint tx1_position_and_covariance;
  /// Description: Transmitter 2 (Tx2)'s known location.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeRemotePoint tx2_position_and_covariance;
  /// Description: Time difference of arrival (in meters). Time difference of
  /// Tx1 signal's arrival time minus Tx2 signal's arrival time at the sensor.
  /// Positive obs indicates Tx1 arrived later than Tx2. Units: m
  double obs;
  /// Description: Measurement variance.
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
} aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx.
typedef struct aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx__Sequence {
  aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_TDOA2_TX1_RX__STRUCT_H_
