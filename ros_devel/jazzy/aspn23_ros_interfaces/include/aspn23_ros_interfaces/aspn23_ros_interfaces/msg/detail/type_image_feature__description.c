// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_image_feature__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeImageFeature__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xb0, 0xa1, 0xc6, 0xee, 0x74, 0x7d, 0x70, 0x4a, 0xd3, 0xda, 0xdc,
          0x18, 0x86, 0xeb, 0x4f, 0xa1, 0xbd, 0xa0, 0xae, 0x0a, 0xdb, 0x93,
          0xba, 0x2c, 0x14, 0xb8, 0x59, 0x7a, 0xac, 0xf5, 0x2f, 0x83,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeImageFeature";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__response[] =
        "response";
static char
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__orientation[] =
        "orientation";
static char aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__size[] =
    "size";
static char
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__class_id[] =
        "class_id";
static char aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__octave[] =
    "octave";
static char
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__descriptor_size
        [] = "descriptor_size";
static char
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__descriptor[] =
        "descriptor";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeImageFeature__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__response,
             8, 8},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__orientation,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__size, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__class_id,
             8, 8},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__octave,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__descriptor_size,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeImageFeature__FIELD_NAME__descriptor,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeImageFeature__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME, 42, 42},
              {aspn23_ros_interfaces__msg__TypeImageFeature__FIELDS, 7, 7},
          },
          {NULL, 0, 0},
      };
  if (!constructed) {
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
    "# Image feature characteristics\n"
    "\n"
    "# Description: Value representing the magnitude of the response of the "
    "keypoint detection algorithm\n"
    "# used to locate this keypoint in the image.\n"
    "# Units: none\n"
    "float64 response\n"
    "\n"
    "# Description: Value representing the orientation of the detected "
    "keypoint, as measured relative to\n"
    "# the image coordinate system (radians, clockwise). Metadata flag "
    "determines if this field is\n"
    "# calculated by the current keypoint detector.\n"
    "# Units: rad\n"
    "float64 orientation\n"
    "\n"
    "# Description: Effective size (pixels) of the detected keypoint. This "
    "field takes into consideration\n"
    "# the octave and kernel used to localize the keypoint, and normalizes to "
    "the original size of the\n"
    "# image.\n"
    "# Units: pixels\n"
    "float64 size\n"
    "\n"
    "# Description: ID that ties the detected keypoint to a class or group of "
    "keypoints.\n"
    "# Units: none\n"
    "uint16 class_id\n"
    "\n"
    "# Description: Octave or pyramid layer from which the detected keypoint "
    "was extracted.\n"
    "# Units: none\n"
    "uint16 octave\n"
    "\n"
    "# Description: Size of the descriptor in bytes.\n"
    "# Units: none\n"
    "uint16 descriptor_size\n"
    "\n"
    "# Description: Feature descriptor.\n"
    "# Units: none\n"
    "# Note: array length is descriptor_size\n"
    "uint8[] descriptor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeImageFeature__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME, 42, 42},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1273, 1273},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeImageFeature__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeImageFeature__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
