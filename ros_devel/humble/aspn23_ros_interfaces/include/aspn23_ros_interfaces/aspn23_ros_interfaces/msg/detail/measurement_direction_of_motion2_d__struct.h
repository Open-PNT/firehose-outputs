// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirectionOfMotion2D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE'.
/**
 * Direction of motion expressed in the two-dimensional North-East plane of the
 * locally level NED frame as the angle between the N-axis and the direction of
 * motion. Positive angle is defined as a rotation towards the E-axis. See also
 * NED coordinate frame definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE =
      0
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND'.
/**
 * Direction of motion expressed in the two-dimensional North-Down plane of the
 * locally level NED frame as the angle between the N-axis and the direction of
 * motion. Positive angle is defined as a rotation towards the D-axis. See also
 * NED coordinate frame definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND =
      1
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED'.
/**
 * Direction of motion expressed in the two-dimensional East-Down plane of the
 * locally level NED frame as the angle between the E-axis and the direction of
 * motion. Positive angle is defined as a rotation towards the D-axis. See also
 * NED coordinate frame definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED =
      2
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR'.
/**
 * Direction of motion expressed in the sensor frame as the angle between the
 * sensor frame x-axis and the direction of motion. Positive angle is defined as
 * a rotation towards the sensor frame y-axis. (Sensor frame is two dimensional,
 * x and y, as defined in mounting.)
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR =
      3
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementDirectionOfMotion2D in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Direction of motion represented in a two-dimensional reference
  /// frame as defined by the enum. Description: Standard ASPN measurement
  /// header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Specifies measurement reference.
  uint8_t reference;
  /// Description: Observations as specified in the reference enum.
  /// Units: rad
  double obs;
  /// Description: Measurement error variance.
  /// Units: rad^2
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
} aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__Sequence {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION2_D__STRUCT_H_
