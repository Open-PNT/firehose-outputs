// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeHeader.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeHeader__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x22, 0x08, 0xb2, 0x41, 0x6b, 0xef, 0x60, 0xe8, 0x78, 0x58, 0x01,
          0x3e, 0xea, 0xf1, 0x39, 0x48, 0x29, 0x73, 0xc9, 0x80, 0xdd, 0xd0,
          0xe4, 0xe9, 0x45, 0xab, 0xd6, 0x97, 0x5c, 0xc9, 0x60, 0xdc,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__vendor_id[] =
    "vendor_id";
static char aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__device_id[] =
    "device_id";
static char aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__context_id[] =
    "context_id";
static char aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__sequence_id[] =
    "sequence_id";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeHeader__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__vendor_id, 9,
             9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__device_id, 9,
             9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__context_id, 10,
             10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeHeader__FIELD_NAME__sequence_id,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeHeader__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
              {aspn23_ros_interfaces__msg__TypeHeader__FIELDS, 4, 4},
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
    "# Header for each ASPN measurement\n"
    "\n"
    "# Description: Unique identifier that identifies the device or "
    "application vendor. Vendor ID is\n"
    "# user-selected, inspired by your company name to mitigate conflicts with "
    "other users. Vendor IDs 0x23\n"
    "# 00 00 00 through 0x23 FF FF FF inclusive are reserved and shall not be "
    "chosen as user-selected\n"
    "# vendor IDs.\n"
    "# Units: none\n"
    "uint32 vendor_id\n"
    "\n"
    "# Description: Unique identifier that identifies the sensor or device "
    "type as assigned by the vendor.\n"
    "# Device_ids are unique within a given vendor_id.\n"
    "# Units: none\n"
    "uint64 device_id\n"
    "\n"
    "# Description: Unique identifier that provides additional context to "
    "define a logical stream of data\n"
    "# from the sensor or device as assigned by the vendor. This identifier "
    "allows multiple measurements of\n"
    "# the same type to be provided by a device. Context_ids are unique within "
    "a given vendor_id and\n"
    "# device_id.\n"
    "# Units: none\n"
    "uint32 context_id\n"
    "\n"
    "# Description: Unique identifier for a specific message within a data "
    "stream as defined by a\n"
    "# vendor_id, device_id, and context_id. Sequential messages from each "
    "data source (identified by\n"
    "# vendor_id, device_id, and context_id) shall increment by exactly 1 and "
    "rollover to 0 after an\n"
    "# overflow.\n"
    "# Units: none\n"
    "uint16 sequence_id";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1364, 1364},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeHeader__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
