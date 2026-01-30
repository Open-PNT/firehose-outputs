// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeIntegrity__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xb6, 0x77, 0x12, 0x1d, 0xee, 0x5b, 0xa0, 0xc1, 0xa8, 0x96, 0xd0,
          0x99, 0xad, 0x0e, 0x84, 0x6b, 0x52, 0x32, 0x69, 0x4b, 0x6d, 0xab,
          0x9d, 0x31, 0xca, 0xdb, 0xa6, 0x0d, 0xe1, 0x5d, 0x66, 0x17,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeIntegrity__FIELD_NAME__integrity_method[] =
        "integrity_method";
static char
    aspn23_ros_interfaces__msg__TypeIntegrity__FIELD_NAME__integrity_value[] =
        "integrity_value";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeIntegrity__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeIntegrity__FIELD_NAME__integrity_method,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeIntegrity__FIELD_NAME__integrity_value,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeIntegrity__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
              {aspn23_ros_interfaces__msg__TypeIntegrity__FIELDS, 2, 2},
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
    "# Integrity provides a numerical measure of the trustworthiness of the "
    "associated measurement. The\n"
    "# integrity_method enum specifies the integrity method and the "
    "appropriate interpretation of the\n"
    "# integrity_value.\n"
    "\n"
    "# Enumerated field which describes the meaning of the integrity value. "
    "Integrity methods may use\n"
    "# multiple enum entries if there is a need to pass multiple integrity "
    "values. For example, an\n"
    "# integrity method with 3 parameters may use 3 enum entries (e.g., "
    "MY_METHOD_VALUE1, MY_METHOD_VALUE2,\n"
    "# MY_METHOD_VALUE3). When integrity is reported in a message, a vector of "
    "integrity types is passed.\n"
    "# In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD "
    "integrity. If additional\n"
    "# integrity methods are also reported, then num_integrity would be "
    "greater than 3 to include those\n"
    "# additional methods.\n"
    "uint8 integrity_method\n"
    "\n"
    "# Description: Measurement integrity value to be interpreted based on the "
    "definition in the\n"
    "# integrity_type enum.\n"
    "# Units: none\n"
    "float64 integrity_value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1128, 1128},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeIntegrity__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
