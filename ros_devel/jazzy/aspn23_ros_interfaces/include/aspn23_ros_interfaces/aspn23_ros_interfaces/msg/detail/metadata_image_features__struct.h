// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "aspn23_ros_interfaces/msg/metadata_image_features.h"

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST'.
/**
 * Keypoint detected using AGAST based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST =
      0
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE'.
/**
 * Keypoint detected using AKAZE based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE =
      1
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK'.
/**
 * Keypoint detected using BRISK based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK =
      2
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST'.
/**
 * Keypoint detected using FAST based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST =
      3
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT'.
/**
 * Keypoint detected using GFTT based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT =
      4
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE'.
/**
 * Keypoint detected using KAZE based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE =
      5
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER'.
/**
 * Keypoint detected using MSER based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER =
      6
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB'.
/**
 * Keypoint detected using ORB based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB =
      7
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT'.
/**
 * Keypoint detected using SIFT based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT =
      8
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF'.
/**
 * Keypoint detected using SURF based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF =
      9
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS'.
/**
 * Keypoint detected using Harris based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS =
      10
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI'.
/**
 * Keypoint detected using Shi-Tomasi based detector.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI =
      11
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER'.
/**
 * Keypoint detected using a detector not represented in this enum.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER =
      12
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE'.
/**
 * Descriptor computed using the AKAZE extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE =
      0
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK'.
/**
 * Descriptor computed using the BRISK extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK =
      1
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE'.
/**
 * Descriptor computed using the KAZE extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE =
      2
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB'.
/**
 * Descriptor computed using the ORB extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB =
      3
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT'.
/**
 * Descriptor computed using the SIFT extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT =
      4
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF'.
/**
 * Descriptor computed using the SURF extractor.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF =
      5
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER'.
/**
 * Descriptor computed using an extractor not represented in this enum.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER =
      6
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8'.
/**
 * The descriptor data should be interpreted as an array of unsigned 8-bit ints.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8 =
      0
};

/// Constant 'ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32'.
/**
 * The descriptor data should be interpreted as an array of 32-bit floats.
 */
enum {
  aspn23_ros_interfaces__msg__MetadataImageFeatures__ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32 =
      1
};

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"

/// Struct defined in msg/MetadataImageFeatures in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataImageFeatures {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Features from an optical camera. Description: Standard ASPN
  /// metadata header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Enumerated field which provides the type of keypoint detector used.
  uint8_t keypoint_detector;
  /// Description: Set to true if the keypoint detector or descriptor extractor
  /// calculates and assigns a primary orientation to the features represented
  /// in the measurements. Units: none
  bool orientation_calculated;
  /// Enumerated field which provides the type of descriptor extractor used to
  /// generate the measurement descriptor vector.
  uint8_t descriptor_extractor;
  /// Description: True if the descriptor byte order is big endian, false if it
  /// is little endian. Only applicable for descriptor_types with multi-byte
  /// elements. Units: none
  bool is_bigendian;
  /// Enumerated field describing the underlying datatype of the provided
  /// descriptor vector.
  uint8_t descriptor_type;
  /// Description: The number of elements of type 'descriptor_type' in the
  /// descriptor data array. In type_image_feature, descriptor data is
  /// represented as an array of uint8 values whose length is given by
  /// 'descriptor_size'. Inconjunction with descriptor_type, these fields
  /// describe how that data should be interpreted. For example -
  /// descriptor_type UINT8: descriptor_number_of_elements == descriptor_size -
  /// descriptor_type FLOAT32: (descriptor_number_of_elements * 4) ==
  /// descriptor_size Units: none
  uint16_t descriptor_number_of_elements;
} aspn23_ros_interfaces__msg__MetadataImageFeatures;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataImageFeatures.
typedef struct aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence {
  aspn23_ros_interfaces__msg__MetadataImageFeatures *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_IMAGE_FEATURES__STRUCT_H_
