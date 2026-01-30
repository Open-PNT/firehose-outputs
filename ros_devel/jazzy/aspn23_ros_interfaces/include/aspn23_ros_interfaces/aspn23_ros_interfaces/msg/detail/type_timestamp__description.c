// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeTimestamp.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xff, 0x1f, 0x29, 0xd8, 0x44, 0xe5, 0x45, 0x04, 0x1e, 0x34, 0x33,
          0xb8, 0x85, 0x12, 0xea, 0x8d, 0xde, 0xb9, 0x3f, 0x95, 0x39, 0x05,
          0x91, 0x83, 0x10, 0xcc, 0x58, 0x13, 0x94, 0x7e, 0xcf, 0x28,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeTimestamp__FIELD_NAME__elapsed_nsec[] =
        "elapsed_nsec";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeTimestamp__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeTimestamp__FIELD_NAME__elapsed_nsec,
             12, 12},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeTimestamp__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
              {aspn23_ros_interfaces__msg__TypeTimestamp__FIELDS, 1, 1},
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
    "# Whole number nanoseconds elapsed since timestamp's zero epoch. If "
    "negative, whole number nanoseconds\n"
    "# until timestamp's zero epoch. The zero epoch definition is based on the "
    "timing source used by the\n"
    "# message provider. The timing source used by the message provider is "
    "defined by the\n"
    "# `timestamp_clock_id` included in the `type_metadataheader` as part of "
    "the metadata. Additionally,\n"
    "# the timestamp's digits of precision are included in the "
    "`type_metadataheader` as part of the\n"
    "# metadata, which may be useful if an implementation is converting the "
    "timestamp to another type\n"
    "# internally.\n"
    "# If needed, the time elapsed in seconds is equal to elapsed_nsec * "
    "1e-9.\n"
    "\n"
    "# Description: Whole number nanoseconds elapsed since timestamp's zero "
    "epoch. If negative, whole\n"
    "# number nanoseconds until timestamp's zero epoch.\n"
    "# Units: nanoseconds\n"
    "int64 elapsed_nsec";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 982, 982},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeTimestamp__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
