// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataSatnavObs.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_satnav_obs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xc3, 0x71, 0x83, 0xbc, 0x7b, 0x05, 0x0a, 0x9c, 0x7d, 0x31, 0xee,
          0x27, 0x64, 0x35, 0xfe, 0x82, 0x17, 0x5e, 0xa3, 0xc7, 0x8d, 0x08,
          0x5e, 0xbe, 0x6b, 0xa0, 0x62, 0x27, 0xb0, 0x2c, 0xcc, 0x75,
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

static char aspn23_ros_interfaces__msg__MetadataSatnavObs__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataSatnavObs";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__info[] =
    "info";
static char
    aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__deltarange_interval_start
        [] = "deltarange_interval_start";
static char
    aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__deltarange_interval_stop
        [] = "deltarange_interval_stop";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__info, 4,
             4},
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
            {aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__deltarange_interval_start,
             25, 25},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELD_NAME__deltarange_interval_stop,
             24, 24},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataSatnavObs__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataSatnavObs__TYPE_NAME, 43, 43},
          {aspn23_ros_interfaces__msg__MetadataSatnavObs__FIELDS, 4, 4},
      },
      {aspn23_ros_interfaces__msg__MetadataSatnavObs__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# Metadata for satnav_obs\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Start time of the interval over which the deltarange is "
    "measured with respect to the\n"
    "# measurement time. This value must be provided if the deltarange "
    "measurement is provided.\n"
    "# Units: seconds\n"
    "float32 deltarange_interval_start\n"
    "\n"
    "# Description: Stop time of the interval over which the deltarange is "
    "measured with respect to the\n"
    "# measurement time. This value must be provided if the deltarange "
    "measurement is provided. If the\n"
    "# deltarange integration period is the same as the measurement time, this "
    "value should be 0.\n"
    "# Units: seconds\n"
    "float32 deltarange_interval_stop";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataSatnavObs__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataSatnavObs__TYPE_NAME, 43, 43},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 938, 938},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataSatnavObs__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataSatnavObs__get_individual_type_description_source(
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
