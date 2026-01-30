// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE'.
/**
 * No reference frame. This is only valid if position is not included
 * (included_terms is 0 or 1).
 */
enum {
  aspn23_ros_interfaces__msg__TypeRemotePoint__ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE =
      0
};

/// Constant 'ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC'.
/**
 * Point position relative to the WGS-84 reference expressed using position1 as
 * geodetic latitude in radians, position2 as longitude in radians, and
 * position3 as geodetic altitude (or height above the WGS-84 ellipsoid) in
 * meters. Each term is optional. position_covariance is given using north-south
 * position error in meters (an expression of geodetic latitude error),
 * east-west position error in meters (an expression of longitude error), and
 * geodetic altitude error in meters. In the case of nulled position components,
 * the corresponding error covariance terms are omitted.
 */
enum {
  aspn23_ros_interfaces__msg__TypeRemotePoint__ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC =
      1
};

// Include directives for member types
// Member 'position_covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TypeRemotePoint in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeRemotePoint {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead ASPN custom type representing a point. This includes optional
  /// information (indicated by included_terms) for the position and a
  /// correspondence ID for the point. Description: Indicates which information
  /// is included about the point 0 = no information included (unknown point) 1
  /// = id included (corresponded point) 2 = position included (known point) 3 =
  /// id and position included Units: none
  uint8_t included_terms;
  /// Description: Unique identification number assigned by the sensor. Points
  /// that have the same id from a sensor are multiple instances of the same
  /// point as determined by a sensor's point correspondence. Units: none
  uint32_t id;
  /// Defines position reference.
  uint8_t position_reference_frame;
  /// Description: First position term as defined in position_reference_frame.
  /// Units: various
  double position1;
  /// Description: Second position term as defined in position_reference_frame.
  /// Units: various
  double position2;
  /// Description: Third position term as defined in position_reference_frame.
  /// Units: various
  double position3;
  /// Description: Dimension of position provided.
  /// Units: none
  uint8_t num_position_components;
  /// Description: Position error covariance (or variance depending on
  /// num_position_components) as defined in position_reference_frame. Units:
  /// m^2 Note: field represents a num_position_components x
  /// num_position_components matrix
  rosidl_runtime_c__double__Sequence position_covariance;
} aspn23_ros_interfaces__msg__TypeRemotePoint;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeRemotePoint.
typedef struct aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence {
  aspn23_ros_interfaces__msg__TypeRemotePoint *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_REMOTE_POINT__STRUCT_H_
