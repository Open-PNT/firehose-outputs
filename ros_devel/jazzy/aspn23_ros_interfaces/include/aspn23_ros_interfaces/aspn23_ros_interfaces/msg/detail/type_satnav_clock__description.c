// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavClock.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavClock__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x61, 0x86, 0xf0, 0xd2, 0xe1, 0x40, 0x50, 0xe7, 0xcf, 0x0e, 0x8a,
          0xe7, 0x23, 0xb6, 0xd4, 0x44, 0xf9, 0xdf, 0x43, 0xc3, 0x33, 0x31,
          0x2c, 0x6b, 0x61, 0xbe, 0x7e, 0x6d, 0xd1, 0x02, 0x57, 0x27,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavClock";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__t_oc[] =
    "t_oc";
static char aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_0[] =
    "af_0";
static char aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_1[] =
    "af_1";
static char aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_2[] =
    "af_2";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeSatnavClock__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__t_oc, 4,
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
            {aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_0, 4,
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
            {aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_1, 4,
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
            {aspn23_ros_interfaces__msg__TypeSatnavClock__FIELD_NAME__af_2, 4,
             4},
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
aspn23_ros_interfaces__msg__TypeSatnavClock__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME, 41, 41},
              {aspn23_ros_interfaces__msg__TypeSatnavClock__FIELDS, 4, 4},
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
    "# satnav broadcast parameters required to calculate sv clock corrections\n"
    "\n"
    "# Description: Clock reference time.\n"
    "# Units: s\n"
    "float64 t_oc\n"
    "\n"
    "# Description: Satellite clock bias.\n"
    "# Units: s\n"
    "float64 af_0\n"
    "\n"
    "# Description: Satellite clock drift.\n"
    "# Units: s/s\n"
    "float64 af_1\n"
    "\n"
    "# Description: Satellite clock drift rate.\n"
    "# Units: s/s^2\n"
    "float64 af_2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeSatnavClock__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME, 41, 41},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 459, 459},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavClock__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavClock__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
