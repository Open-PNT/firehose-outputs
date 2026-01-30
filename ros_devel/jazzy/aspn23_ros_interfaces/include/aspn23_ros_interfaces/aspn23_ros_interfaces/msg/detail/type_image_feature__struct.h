// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/type_image_feature.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'descriptor'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TypeImageFeature in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeImageFeature {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Image feature characteristics Description: Value representing the
  /// magnitude of the response of the keypoint detection algorithm used to
  /// locate this keypoint in the image. Units: none
  double response;
  /// Description: Value representing the orientation of the detected keypoint,
  /// as measured relative to the image coordinate system (radians, clockwise).
  /// Metadata flag determines if this field is calculated by the current
  /// keypoint detector. Units: rad
  double orientation;
  /// Description: Effective size (pixels) of the detected keypoint. This field
  /// takes into consideration the octave and kernel used to localize the
  /// keypoint, and normalizes to the original size of the image. Units: pixels
  double size;
  /// Description: ID that ties the detected keypoint to a class or group of
  /// keypoints. Units: none
  uint16_t class_id;
  /// Description: Octave or pyramid layer from which the detected keypoint was
  /// extracted. Units: none
  uint16_t octave;
  /// Description: Size of the descriptor in bytes.
  /// Units: none
  uint16_t descriptor_size;
  /// Description: Feature descriptor.
  /// Units: none
  /// Note: array length is descriptor_size
  rosidl_runtime_c__uint8__Sequence descriptor;
} aspn23_ros_interfaces__msg__TypeImageFeature;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeImageFeature.
typedef struct aspn23_ros_interfaces__msg__TypeImageFeature__Sequence {
  aspn23_ros_interfaces__msg__TypeImageFeature *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeImageFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_IMAGE_FEATURE__STRUCT_H_
