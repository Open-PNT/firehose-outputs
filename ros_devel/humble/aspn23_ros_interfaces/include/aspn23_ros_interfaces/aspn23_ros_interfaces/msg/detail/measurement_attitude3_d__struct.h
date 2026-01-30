// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementAttitude3D.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE3_D__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE3_D__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI'.
/**
 * Absolute inertial attitude. Sensor frame attitude relative to the
 * earth-centered, inertial (ECi) frame. See also ECi coordinate frame
 * definition for x, y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D__ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI =
      0
};

/// Constant 'ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF'.
/**
 * Attitude relative to Earth. Sensor frame attitude relative to the ECEF frame.
 * Generally, time is required to convert between absolute inertial attitude and
 * attitude relative to Earth. See also ECEF coordinate frame definition for x,
 * y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D__ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF =
      1
};

/// Constant 'ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED'.
/**
 * Local level, geographic attitude. Sensor frame attitude with respect to
 * earth-fixed frame expressed in the North-East-Down (NED), local level frame.
 * See also NED coordinate frame definition for N, E, and D definitions.
 * Generally, position is required to convert between attitude relative to the
 * earth and locally level, geographic attitude. See also NED coordinate frame
 * definition for N, E, and D definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D__ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED =
      2
};

/// Constant 'ASPN23_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D__ASPN23_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementAttitude3D in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementAttitude3D {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Three-dimensional attitude expressed as a quaternion, a four
  /// element vector representation, the elements of which are functions of the
  /// orientation of the vector and the magnitude of the rotation. Description:
  /// Standard ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid .
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference_frame;
  /// Description: Four element quaternion, q = [a, b, c, d], where a =
  /// cos(phi/2), b = (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d
  /// = (phi_z/phi)*sin(phi/2). In this description, the vector [phi_x, phi_y,
  /// phi_z] represents the rotation vector that describes the frame rotation to
  /// be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into
  /// the axes that describe the measured attitude, and the value phi is the
  /// magnitude of the [phi_x, phi_y, phi_z] vector. See "conventions"
  /// documentation for more detailed information. Units: none
  double quaternion[4];
  /// Description: Tilt error covariance matrix. This matrix represents the
  /// uncertainty in the "tilt errors" that represent the additional rotation to
  /// be applied to the provided attitude quaternion in order to convert it to
  /// the true attitude with no errors. By convention, these "tilt errors" are
  /// expressed in the reference frame (ECI, ECEF, or NED).
  /// See "conventions" documentation for more detailed information.
  /// Units: rad^2
  /// Note: field represents a 3 x 3 matrix
  double tilt_error_covariance[9];
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
} aspn23_ros_interfaces__msg__MeasurementAttitude3D;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementAttitude3D.
typedef struct aspn23_ros_interfaces__msg__MeasurementAttitude3D__Sequence {
  aspn23_ros_interfaces__msg__MeasurementAttitude3D *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementAttitude3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_ATTITUDE3_D__STRUCT_H_
