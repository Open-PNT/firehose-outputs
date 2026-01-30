// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP'.
/**
 * Windows Bitmaps
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP =
      0
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG'.
/**
 * Portable Network Graphics
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG =
      1
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG'.
/**
 * Joint Photographic Experts Group
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG =
      2
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF'.
/**
 * Tag Image File Format
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF =
      3
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8'.
/**
 * Single channel raw gray scale image. One byte per pixel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8 =
      4
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8'.
/**
 * Three channel raw RGB image. One byte per pixel per channel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8 =
      5
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8'.
/**
 * Three channel raw BGR image. One byte per pixel per channel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8 =
      6
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8'.
/**
 * Four channel raw RGBA image. One byte per pixel per channel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8 =
      7
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8'.
/**
 * Four channel raw BGRA image. One byte per pixel per channel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8 =
      8
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16'.
/**
 * Single channel raw gray scale image. Two bytes per pixel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16 =
      9
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64'.
/**
 * Single channel raw gray scale image. Eight bytes per pixel.
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64 =
      10
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB'.
/**
 * A 10 parameter model, 4 parameters composing the 2D focal length fc = (fx,
 * fy) and camera principal point cc = (cx, cy) in pixels, a model of radial and
 * tangential distortion specified using the 5 parameters (kc1, kc2, kc3, kc4,
 * kc5). And the skew parameter, alpha_c. Mapping from 3D points in the world to
 * 2D points in the image is described at
 * http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB =
      0
};

/// Constant 'ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL'.
/**
 * A 4 parameter model, modeling only the the 2D focal length fc = (fx, fy) and
 * camera principal point cc = (cx, cy). Effectively using the same model as
 * described in described at
 * http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html, with
 * all distortion and skew parameters zeroed out
 */
enum {
  aspn23_ros_interfaces__msg__MeasurementImage__ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL =
      1
};

// Include directives for member types
// Member 'header'
#include "aspn23_ros_interfaces/msg/detail/type_header__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'image_data'
// Member 'model_coefficients'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/MeasurementImage in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MeasurementImage {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead 2D Raster Image Description: Standard ASPN measurement header.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeHeader header;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: The number of pixel rows in this image.
  /// Units: pixels
  uint32_t height;
  /// Description: The number of pixel columns in this image.
  /// Units: pixels
  uint32_t width;
  /// Description: True if the image_data byte order is big endian, false if it
  /// is little endian. For raw image_types, this is only applicable for
  /// image_types with multi-byte pixels. Units: none
  bool is_bigendian;
  /// Enumerated field which specifies the datatype of the pixels represented in
  /// this image. Raw images are stored in row-major order. In multi-channel raw
  /// images, the first element contains the first pixel of the first channel,
  /// the second element contains the first pixel of the second channel, and so
  /// on. The data of each multi-byte pixel should be contiguous within the data
  /// array with the endianness defined by the is_bigendian field. Example - 2x2
  /// RAW_RGB8 image_data[0] row1 col1 chanR image_data[1] row1 col1 chanG
  /// image_data[2] row1 col1 chanB image_data[3] row1 col2 chanR image_data[4]
  /// row1 col2 chanG image_data[5] row1 col2 chanB image_data[6] row2 col1
  /// chanR image_data[7] row2 col1 chanG image_data[8] row2 col1 chanB
  /// image_data[9] row2 col2 chanR image_data[10] row2 col2 chanG
  /// image_data[11] row2 col2 chanB Example - 2x2 RAW_GRAY16, is_bigendian = 1
  /// Where byte 1 is the most significant byte (byte1 << 8 | byte2):
  /// image_data[0] row1 col1 byte1 image_data[1] row1 col1 byte2 image_data[2]
  /// row1 col2 byte1 image_data[3] row1 col2 byte2 image_data[4] row2 col1
  /// byte1 image_data[5] row2 col1 byte2 image_data[6] row2 col2 byte1
  /// image_data[7] row2 col2 byte2
  uint8_t image_type;
  /// Description: Length of the byte array holding the encoded image. For raw
  /// image types, this should be equal to height * width * num_channels *
  /// bytes_per_pixel. Units: byte
  uint64_t image_data_length;
  /// Description: Stores the encoded image. Interpretation varies based on the
  /// image_type. Units: none Note: array length is image_data_length
  rosidl_runtime_c__uint8__Sequence image_data;
  /// The model used to map 3D points in the world to 2D points on the image
  /// plane
  uint8_t camera_model;
  /// Description: The number of coefficients used in camera model.
  /// Units: none
  uint8_t num_model_coefficients;
  /// Description: The camera model parameters, size depending on the distortion
  /// model. Units: none Note: array length is num_model_coefficients
  rosidl_runtime_c__double__Sequence model_coefficients;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__MeasurementImage;

// Struct for a sequence of aspn23_ros_interfaces__msg__MeasurementImage.
typedef struct aspn23_ros_interfaces__msg__MeasurementImage__Sequence {
  aspn23_ros_interfaces__msg__MeasurementImage *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MeasurementImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_IMAGE__STRUCT_H_
