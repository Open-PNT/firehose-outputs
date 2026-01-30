// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementMagneticField.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/measurement_magnetic_field.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementMagneticField__ASPN23_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementMagneticField in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementMagneticField {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Vector magnetic field. Represents the magnetic field strength
  /// along sensor x, y, and z axes as defined in mounting. May represent 1-D,
  /// 2-D, or 3-D measurement Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Dimension of measurement provided. May be 1, 2, or 3.
  /// Units: none
  uint8_t num_meas;
  /// Description: Field strength of magnetic field in nanoTesla (nT).
  /// Units: nT
  double x_field_strength;
  /// Description: Field strength of magnetic field in nanoTesla (nT).
  /// Units: nT
  double y_field_strength;
  /// Description: Field strength of magnetic field in nanoTesla (nT).
  /// Units: nT
  double z_field_strength;
  /// Description: Measurement error variance or covariance depending on
  /// measurement dimension. Units: (nT)^2 Dimensions of covariance must be
  /// num_meas² Note: field represents a num_meas x num_meas matrix
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
} aspn23_ros_interfaces__msg__MeasurementMagneticField;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementMagneticField.
typedef struct aspn23_ros_interfaces__msg__MeasurementMagneticField__Sequence {
  aspn23_ros_interfaces__msg__MeasurementMagneticField *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementMagneticField__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_MAGNETIC_FIELD__STRUCT_H_
