// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x71, 0x5d, 0x3e, 0xed, 0xed, 0x5d, 0xf9, 0x8a, 0x76, 0x68, 0x0b,
          0x08, 0x97, 0x87, 0xce, 0x4e, 0xd4, 0x55, 0xd5, 0x80, 0xb5, 0xf2,
          0x09, 0x16, 0x62, 0xcd, 0x4b, 0xc2, 0x44, 0x49, 0x6c, 0xf0,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
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
    aspn23_ros_interfaces__msg__TypeMetadataheader__EXPECTED_HASH = {
        1,
        {
            0x3a, 0x58, 0xaa, 0x12, 0xef, 0x88, 0x36, 0x85, 0x41, 0x1b, 0xcc,
            0x8c, 0x74, 0xf9, 0x79, 0xb4, 0xed, 0xcc, 0x43, 0x5b, 0x38, 0xaa,
            0x6f, 0x8b, 0xb9, 0x5b, 0xff, 0x43, 0x57, 0x4a, 0x17, 0xf5,
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

static char aspn23_ros_interfaces__msg__MetadataImageFeatures__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataImageFeatures";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__keypoint_detector
        [] = "keypoint_detector";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__orientation_calculated
        [] = "orientation_calculated";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_extractor
        [] = "descriptor_extractor";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__is_bigendian
        [] = "is_bigendian";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_type
        [] = "descriptor_type";
static char
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_number_of_elements
        [] = "descriptor_number_of_elements";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__info,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44,
                 44},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__keypoint_detector,
             17, 17},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__orientation_calculated,
             22, 22},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_extractor,
             20, 20},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__is_bigendian,
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
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_type,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELD_NAME__descriptor_number_of_elements,
             29, 29},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataImageFeatures__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44,
                 44},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataImageFeatures__TYPE_NAME, 47,
           47},
          {aspn23_ros_interfaces__msg__MetadataImageFeatures__FIELDS, 8, 8},
      },
      {aspn23_ros_interfaces__msg__MetadataImageFeatures__REFERENCED_TYPE_DESCRIPTIONS,
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
        memcmp(
            &aspn23_ros_interfaces__msg__TypeMetadataheader__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_hash(NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
        aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_description(
            NULL)
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
    "# Features from an optical camera.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Enumerated field which provides the type of keypoint detector used.\n"
    "uint8 keypoint_detector\n"
    "\n"
    "# Keypoint detected using AGAST based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST=0\n"
    "\n"
    "# Keypoint detected using AKAZE based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE=1\n"
    "\n"
    "# Keypoint detected using BRISK based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK=2\n"
    "\n"
    "# Keypoint detected using FAST based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST=3\n"
    "\n"
    "# Keypoint detected using GFTT based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT=4\n"
    "\n"
    "# Keypoint detected using KAZE based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE=5\n"
    "\n"
    "# Keypoint detected using MSER based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER=6\n"
    "\n"
    "# Keypoint detected using ORB based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB=7\n"
    "\n"
    "# Keypoint detected using SIFT based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT=8\n"
    "\n"
    "# Keypoint detected using SURF based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF=9\n"
    "\n"
    "# Keypoint detected using Harris based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS=10\n"
    "\n"
    "# Keypoint detected using Shi-Tomasi based detector.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI=11\n"
    "\n"
    "# Keypoint detected using a detector not represented in this enum.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER=12\n"
    "\n"
    "# Description: Set to true if the keypoint detector or descriptor "
    "extractor calculates and assigns a\n"
    "# primary orientation to the features represented in the measurements.\n"
    "# Units: none\n"
    "bool orientation_calculated\n"
    "\n"
    "# Enumerated field which provides the type of descriptor extractor used "
    "to generate the measurement\n"
    "# descriptor vector.\n"
    "uint8 descriptor_extractor\n"
    "\n"
    "# Descriptor computed using the AKAZE extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE=0\n"
    "\n"
    "# Descriptor computed using the BRISK extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK=1\n"
    "\n"
    "# Descriptor computed using the KAZE extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE=2\n"
    "\n"
    "# Descriptor computed using the ORB extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB=3\n"
    "\n"
    "# Descriptor computed using the SIFT extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT=4\n"
    "\n"
    "# Descriptor computed using the SURF extractor.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF=5\n"
    "\n"
    "# Descriptor computed using an extractor not represented in this enum.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER=6\n"
    "\n"
    "# Description: True if the descriptor byte order is big endian, false if "
    "it is little endian. Only\n"
    "# applicable for descriptor_types with multi-byte elements.\n"
    "# Units: none\n"
    "bool is_bigendian\n"
    "\n"
    "# Enumerated field describing the underlying datatype of the provided "
    "descriptor vector.\n"
    "uint8 descriptor_type\n"
    "\n"
    "# The descriptor data should be interpreted as an array of unsigned 8-bit "
    "ints.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8=0\n"
    "\n"
    "# The descriptor data should be interpreted as an array of 32-bit "
    "floats.\n"
    "uint8 ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32=1\n"
    "\n"
    "# Description: The number of elements of type 'descriptor_type' in the "
    "descriptor data array. In\n"
    "# type_image_feature, descriptor data is represented as an array of uint8 "
    "values whose length is given\n"
    "# by 'descriptor_size'. Inconjunction with descriptor_type, these fields "
    "describe how that data should\n"
    "# be interpreted. For example - descriptor_type UINT8: "
    "descriptor_number_of_elements ==\n"
    "# descriptor_size - descriptor_type FLOAT32: "
    "(descriptor_number_of_elements * 4) == descriptor_size\n"
    "# Units: none\n"
    "uint16 descriptor_number_of_elements";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataImageFeatures__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataImageFeatures__TYPE_NAME, 47, 47},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 4327, 4327},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataImageFeatures__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
