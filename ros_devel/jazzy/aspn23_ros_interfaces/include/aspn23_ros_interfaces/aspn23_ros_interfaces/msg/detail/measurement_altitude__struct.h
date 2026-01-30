// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementAltitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_altitude.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_AGL'.
/**
 * height above ground level (AGL). Generally, position and terrain elevation
 * data are required to convert between AGL and (MSL or HAE).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAltitude__ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_AGL =
      0
};

/// Constant 'ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_MSL'.
/**
 * height above mean sea level (MSL). Generally, position is required to convert
 * between MSL and HAE.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAltitude__ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_MSL =
      1
};

/// Constant 'ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_HAE'.
/**
 * height above the WGS-84 ellipsoid (HAE), also known as geodetic altitude.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAltitude__ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_HAE =
      2
};

/// Constant 'ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAltitude__ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE =
      0
};

/// Constant 'ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM'.
/**
 * First-order Gauss-Markov (FOGM) process, defined by the following parameters
 * (num_error_model_params = 3):
 * 1) standard_deviation, units: m, description: standard deviation of a scalar,
 * first order Gauss-Markov measurement noise model. 2) time_constant, units:
 * seconds, description: time constant of a scalar, first order Gauss-Markov
 * measurement noise model. 3) initial_standard_deviation, units: m,
 * description: initial standard deviation of a scalar, first order Gauss-Markov
 * measurement noise model.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAltitude__ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM =
      1
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

/// Struct defined in msg/MeasurementAltitude in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementAltitude {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Height above a user-specified reference frame. Description:
  /// Standard ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Specifies altitude reference.
  uint8_t reference;
  /// Description: Altitude in meters, with altitude defined by the enum,
  /// altitude_type. Units: m
  double altitude;
  /// Description: Altitude variance.
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
} aspn23_ros_interfaces__msg__MeasurementAltitude;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementAltitude.
typedef struct aspn23_ros_interfaces__msg__MeasurementAltitude__Sequence {
  aspn23_ros_interfaces__msg__MeasurementAltitude *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementAltitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ALTITUDE__STRUCT_H_
