// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_direction3_d_to_point.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL'.
/**
 * Azimuth (first component of obs) is the angle between the sensor frame x-axis
 * (boresight) and the projection of the point onto the sensor frame's x-y plane
 * (positive right-hand rule about the sensor frame z-axis). Elevation (second
 * component of obs) is the angle between the sensor frame's x-y plane and the
 * vector from the sensor to the point (positive right-hand rule about the
 * intermediate axis formed by the azimuth rotation). The covariance is for the
 * azimuth and elevation errors. Units for the observation are in rad,
 * covariance rad^2.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL =
      0
};

/// Constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL'.
/**
 * The pixel coordinates of the point in an image (sub-pixel resolution is
 * allowed). When combined with the camera model, these can be converted to the
 * NORMALIZED_IMAGE reference frame representation. Units for the observation
 * are in pixels, covariance pixels^2.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL =
      1
};

/// Constant
/// 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE'.
/**
 * 2D position from the sensor frame origin to the point expressed in components
 * y and z of the sensor frame normalized by the boresight distance. The x
 * component of the sensor frame is the boresight axis. Units for the
 * observation are m/m, covariance (m/m)^2.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE =
      2
};

/// Constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE'.
/**
 * 2D position from the sensor frame origin to the point expressed in components
 * y and z of the sensor frame normalized by the range to the point. The x
 * component of the sensor frame is the boresight axis. Units for the
 * observation are m/m, covariance (m/m)^2.
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE =
      3
};

/// Constant 'ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE'.
/**
 * No additional error model provided (num_error_model_params = 0).
 */
enum {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint__ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE =
      0
};

// Include directives for member types
// Member 'remote_point'
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__struct.h"
// Member 'observation_characteristics'
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__struct.h"
// Member 'error_model_params'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/TypeDirection3DToPoint in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeDirection3DToPoint {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead 3D direction to or from a point as defined by the reference enum.
  /// Information about the remote point (its position and/or correspondence
  /// with previous or future appearances of this same point) may be determined
  /// using remote_point. Description: Position and/or correspondence
  /// information about the remote point. Units: various
  aspn23_ros_interfaces__msg__TypeRemotePoint remote_point;
  /// Defines measurement reference frame.
  uint8_t reference_frame;
  /// Description: 3D direction to the remote point as defined in
  /// reference_frame. Units: various
  double obs[2];
  /// Description: Covariance of the direction measurement as defined in
  /// reference_frame. Units: various Note: field represents a 2 x 2 matrix
  double covariance[4];
  /// Description: Switch for whether observation_characteristics is valid or
  /// not. Units: none
  bool has_observation_characteristics;
  /// Description: Image feature characteristics.
  /// Units: various
  aspn23_ros_interfaces__msg__TypeImageFeature observation_characteristics;
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
} aspn23_ros_interfaces__msg__TypeDirection3DToPoint;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeDirection3DToPoint.
typedef struct aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence {
  aspn23_ros_interfaces__msg__TypeDirection3DToPoint *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeDirection3DToPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_DIRECTION3_D_TO_POINT__STRUCT_H_
