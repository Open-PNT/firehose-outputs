// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementImage.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MeasurementImage__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x66, 0x03, 0x9b, 0x16, 0xc9, 0x7f, 0x65, 0x59, 0x6d, 0x07, 0x25,
          0xe5, 0x9c, 0xdc, 0xa4, 0x45, 0x5d, 0xe7, 0x8e, 0xb5, 0x3c, 0x43,
          0xf2, 0x1e, 0x56, 0x39, 0x2b, 0xf4, 0x51, 0x53, 0x02, 0x5a,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeHeader__EXPECTED_HASH = {
        1,
        {
            0x22, 0x08, 0xb2, 0x41, 0x6b, 0xef, 0x60, 0xe8, 0x78, 0x58, 0x01,
            0x3e, 0xea, 0xf1, 0x39, 0x48, 0x29, 0x73, 0xc9, 0x80, 0xdd, 0xd0,
            0xe4, 0xe9, 0x45, 0xab, 0xd6, 0x97, 0x5c, 0xc9, 0x60, 0xdc,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH = {
        1,
        {
            0xb6, 0x77, 0x12, 0x1d, 0xee, 0x5b, 0xa0, 0xc1, 0xa8, 0x96, 0xd0,
            0x99, 0xad, 0x0e, 0x84, 0x6b, 0x52, 0x32, 0x69, 0x4b, 0x6d, 0xab,
            0x9d, 0x31, 0xca, 0xdb, 0xa6, 0x0d, 0xe1, 0x5d, 0x66, 0x17,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH = {
        1,
        {
            0xff, 0x1f, 0x29, 0xd8, 0x44, 0xe5, 0x45, 0x04, 0x1e, 0x34, 0x33,
            0xb8, 0x85, 0x12, 0xea, 0x8d, 0xde, 0xb9, 0x3f, 0x95, 0x39, 0x05,
            0x91, 0x83, 0x10, 0xcc, 0x58, 0x13, 0x94, 0x7e, 0xcf, 0x28,
        }};
#endif

static char aspn23_ros_interfaces__msg__MeasurementImage__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MeasurementImage";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__header[] =
    "header";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__height[] =
    "height";
static char aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__width[] =
    "width";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__is_bigendian[] =
        "is_bigendian";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_type[] =
        "image_type";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_data_length
        [] = "image_data_length";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_data[] =
        "image_data";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__camera_model[] =
        "camera_model";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__num_model_coefficients
        [] = "num_model_coefficients";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__model_coefficients
        [] = "model_coefficients";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__num_integrity[] =
        "num_integrity";
static char
    aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__integrity[] =
        "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MeasurementImage__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__header,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__time_of_validity,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__height,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__width, 5,
             5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__is_bigendian,
             12, 12},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_type,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_data_length,
             17, 17},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__image_data,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__camera_model,
             12, 12},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__num_model_coefficients,
             22, 22},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__model_coefficients,
             18, 18},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__num_integrity,
             13, 13},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementImage__FIELD_NAME__integrity,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MeasurementImage__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MeasurementImage__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MeasurementImage__TYPE_NAME, 42, 42},
          {aspn23_ros_interfaces__msg__MeasurementImage__FIELDS, 13, 13},
      },
      {aspn23_ros_interfaces__msg__MeasurementImage__REFERENCED_TYPE_DESCRIPTIONS,
       3, 3},
  };
  if (!constructed) {
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeHeader__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeHeader__get_type_hash(NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields =
        aspn23_ros_interfaces__msg__TypeHeader__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeIntegrity__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
        aspn23_ros_interfaces__msg__TypeIntegrity__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeTimestamp__get_type_description(NULL)
            ->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
    "\n"
    "# This code is generated via firehose.\n"
    "# DO NOT hand edit code.  Make any changes required using the firehose "
    "repo instead\n"
    "\n"
    "# 2D Raster Image\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: The number of pixel rows in this image.\n"
    "# Units: pixels\n"
    "uint32 height\n"
    "\n"
    "# Description: The number of pixel columns in this image.\n"
    "# Units: pixels\n"
    "uint32 width\n"
    "\n"
    "# Description: True if the image_data byte order is big endian, false if "
    "it is little endian. For raw\n"
    "# image_types, this is only applicable for image_types with multi-byte "
    "pixels.\n"
    "# Units: none\n"
    "bool is_bigendian\n"
    "\n"
    "# Enumerated field which specifies the datatype of the pixels represented "
    "in this image.\n"
    "# Raw images are stored in row-major order. In multi-channel raw images, "
    "the first element contains\n"
    "# the first pixel of the first channel, the second element contains the "
    "first pixel of the second\n"
    "# channel, and so on. The data of each multi-byte pixel should be "
    "contiguous within the data array\n"
    "# with the endianness defined by the is_bigendian field.\n"
    "# Example - 2x2 RAW_RGB8 image_data[0] row1 col1 chanR image_data[1] row1 "
    "col1 chanG image_data[2]\n"
    "# row1 col1 chanB image_data[3] row1 col2 chanR image_data[4] row1 col2 "
    "chanG image_data[5] row1 col2\n"
    "# chanB image_data[6] row2 col1 chanR image_data[7] row2 col1 chanG "
    "image_data[8] row2 col1 chanB\n"
    "# image_data[9] row2 col2 chanR image_data[10] row2 col2 chanG "
    "image_data[11] row2 col2 chanB\n"
    "# Example - 2x2 RAW_GRAY16, is_bigendian = 1 Where byte 1 is the most "
    "significant byte (byte1 << 8 |\n"
    "# byte2): image_data[0] row1 col1 byte1 image_data[1] row1 col1 byte2 "
    "image_data[2] row1 col2 byte1\n"
    "# image_data[3] row1 col2 byte2 image_data[4] row2 col1 byte1 "
    "image_data[5] row2 col1 byte2\n"
    "# image_data[6] row2 col2 byte1 image_data[7] row2 col2 byte2\n"
    "uint8 image_type\n"
    "\n"
    "# Windows Bitmaps\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP=0\n"
    "\n"
    "# Portable Network Graphics\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG=1\n"
    "\n"
    "# Joint Photographic Experts Group\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG=2\n"
    "\n"
    "# Tag Image File Format\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF=3\n"
    "\n"
    "# Single channel raw gray scale image. One byte per pixel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8=4\n"
    "\n"
    "# Three channel raw RGB image. One byte per pixel per channel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8=5\n"
    "\n"
    "# Three channel raw BGR image. One byte per pixel per channel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8=6\n"
    "\n"
    "# Four channel raw RGBA image. One byte per pixel per channel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8=7\n"
    "\n"
    "# Four channel raw BGRA image. One byte per pixel per channel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8=8\n"
    "\n"
    "# Single channel raw gray scale image. Two bytes per pixel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16=9\n"
    "\n"
    "# Single channel raw gray scale image. Eight bytes per pixel.\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64=10\n"
    "\n"
    "# Description: Length of the byte array holding the encoded image. For "
    "raw image types, this should be\n"
    "# equal to height * width * num_channels * bytes_per_pixel.\n"
    "# Units: byte\n"
    "uint64 image_data_length\n"
    "\n"
    "# Description: Stores the encoded image. Interpretation varies based on "
    "the image_type.\n"
    "# Units: none\n"
    "# Note: array length is image_data_length\n"
    "uint8[] image_data\n"
    "\n"
    "# The model used to map 3D points in the world to 2D points on the image "
    "plane\n"
    "uint8 camera_model\n"
    "\n"
    "# A 10 parameter model, 4 parameters composing the 2D focal length fc = "
    "(fx, fy) and camera principal\n"
    "# point cc = (cx, cy) in pixels, a model of radial and tangential "
    "distortion specified using the 5\n"
    "# parameters (kc1, kc2, kc3, kc4, kc5). And the skew parameter, alpha_c. "
    "Mapping from 3D points in the\n"
    "# world to 2D points in the image is described at\n"
    "# http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB=0\n"
    "\n"
    "# A 4 parameter model, modeling only the the 2D focal length fc = (fx, "
    "fy) and camera principal point\n"
    "# cc = (cx, cy). Effectively using the same model as described in "
    "described at\n"
    "# http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html, "
    "with all distortion and skew\n"
    "# parameters zeroed out\n"
    "uint8 ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL=1\n"
    "\n"
    "# Description: The number of coefficients used in camera model.\n"
    "# Units: none\n"
    "uint8 num_model_coefficients\n"
    "\n"
    "# Description: The camera model parameters, size depending on the "
    "distortion model.\n"
    "# Units: none\n"
    "# Note: array length is num_model_coefficients\n"
    "float64[] model_coefficients\n"
    "\n"
    "# Description: Number of integrity values.\n"
    "# Units: none\n"
    "uint8 num_integrity\n"
    "\n"
    "# Description: Measurement integrity. Includes the integrity method used "
    "and an integrity value (which\n"
    "# is to be interpreted based upon the integrity method). The intent of "
    "allowing num_integrity > 1 is\n"
    "# to report multiple integrity values based on multiple integrity "
    "methods.\n"
    "# Units: none\n"
    "# Note: array length is num_integrity\n"
    "TypeIntegrity[] integrity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MeasurementImage__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MeasurementImage__TYPE_NAME, 42, 42},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 5121, 5121},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MeasurementImage__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MeasurementImage__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
