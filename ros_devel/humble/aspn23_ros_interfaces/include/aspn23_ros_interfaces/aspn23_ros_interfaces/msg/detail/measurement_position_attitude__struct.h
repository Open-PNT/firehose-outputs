// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementPositionAttitude.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI'.
/**
 * Sensor position and attitude relative to the earth-centered, inertial (ECi)
 * frame. Position is expressed where p1, p2, and p3 are the x, y, and z
 * components of ECI position in meters, respectively. Attitude is expressed as
 * a four-element quaternion. Error covariance is given using x-axis position
 * error component (meters), y-axis position error component (meters), z-axis
 * position error component (meters), tilt error about the x-axis (rad), tilt
 * error about the y-axis (rad), and tilt error about the z-axis (rad). See also
 * ECi coordinate frame definition for x, y, and z definitions.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude__ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI =
      0
};

/// Constant 'ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC'.
/**
 * Sensor position, and attitude relative to the WGS-84 reference. Position is
 * expressed where p1 is the geodetic latitude in radians, p2 is the longitude
 * in radians, and p3 is the geodetic altitude (or height above the WGS-84
 * ellipsoid) in meters. Attitude is the sensor frame rotation relative to the
 * local level frame expressed as a four-element quaternion. Error covariance is
 * given using north-south position error (meters), east-west position error
 * (meters), geodetic altitude error (meters), tilt error about the north axis
 * (rad), tilt error about the east axis (rad), and tilt error about the down
 * axis (rad).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude__ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC =
      1
};

/// Constant 'ASPN23_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude__ASPN23_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE =
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

/// Struct defined in msg/MeasurementPositionAttitude in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementPositionAttitude {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Position and attitude, also known as pose. Position is relative to
  /// a user-defined reference frame. Attitude expressed as a quaternion, a four
  /// element vector representation, the elements of which are functions of the
  /// orientation of the vector and the magnitude of the rotation. Description:
  /// Standard ASPN measurement header. Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Defines measurement reference.
  uint8_t reference_frame;
  /// Description: First position term as defined in enum.
  /// Units: rad
  double p1;
  /// Description: First position term as defined in enum.
  /// Units: rad
  double p2;
  /// Description: First position term as defined in enum.
  /// Units: m
  double p3;
  /// Description: Four element quaternion, q = [a, b, c, d], where a =
  /// cos(phi/2), b = (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d
  /// = (phi_z/phi)*sin(phi/2). In this description, the vector [phi_x, phi_y,
  /// phi_z] represents the rotation vector that describes the frame rotation to
  /// be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into
  /// the axes that describe the measured attitude, and the value phi is the
  /// magnitude of the [phi_x, phi_y, phi_z] vector. See "conventions"
  /// documentation for more detailed information. Units: none
  double quaternion[4];
  /// Description: Measurement error variance or covariance depending on
  /// measurement dimension. Units: various Note: field represents a 6 x 6
  /// matrix
  double covariance[36];
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
} aspn23_ros_interfaces__msg__MeasurementPositionAttitude;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__MeasurementPositionAttitude.
typedef struct
    aspn23_ros_interfaces__msg__MeasurementPositionAttitude__Sequence {
  aspn23_ros_interfaces__msg__MeasurementPositionAttitude *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementPositionAttitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_POSITION_ATTITUDE__STRUCT_H_
