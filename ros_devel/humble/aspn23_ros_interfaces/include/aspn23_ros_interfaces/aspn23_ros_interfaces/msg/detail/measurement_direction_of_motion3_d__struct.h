// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirectionOfMotion3D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI'.
/**
 * Direction of motion with respect to earth-centered inertial (ECi) frame,
 * expressed in an earth-centered inertial frame. See also ECi coordinate frame
 * definition for x, y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI =
      0
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF'.
/**
 * Direction of motion with respect to earth-fixed frame expressed in
 * earth-centered, earth-fixed (ECEF) frame. See also ECEF coordinate frame
 * definition for x, y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF =
      1
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED'.
/**
 * Local level, geodetic velocity: Velocity with respect to earth-fixed frame
 * expressed in the North-East-Down (NED), local level frame. See also NED
 * coordinate frame definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED =
      2
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR'.
/**
 * Direction of motion with respect to earth-fixed frame expressed in sensor
 * coordinate frame. Sensor coordinate frame is defined in sensor
 * metadataHeader.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR =
      3
};

/// Constant 'ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementDirectionOfMotion3D in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Direction of motion represented as a unit vector. Description:
  /// Standard ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference_frame;
  /// Description: Direction of motion represented as a unit vector.
  /// Units: none
  double obs[3];
  /// Description: Error is expressed as rotation uncertainty about two axes,
  /// error_vector and and a second error vector that is orthogonal to both the
  /// obs vector and the error_vector. Units: none
  double error_vector[3];
  /// Description: Error is expressed as rotation uncertainty about the
  /// following two axes: 1) error_vector, and 2) a second error vector that is
  /// orthogonal to both the obs direction vector and the error_vector. Units:
  /// rad^2 Note: field represents a 2 x 2 matrix
  double covariance[4];
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
} aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__Sequence {
  aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_DIRECTION_OF_MOTION3_D__STRUCT_H_
