// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGeneric.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_generic__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataGeneric__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x78, 0x70, 0xd2, 0x1b, 0x3f, 0x8b, 0x61, 0x37, 0x1c, 0x33, 0xc6,
          0xb0, 0xc4, 0x25, 0xfd, 0x0c, 0xec, 0x82, 0x0d, 0xb4, 0x25, 0x46,
          0xf0, 0x79, 0x21, 0xf7, 0xa6, 0xe4, 0xd6, 0x01, 0xbe, 0x8a,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"
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
    aspn23_ros_interfaces__msg__TypeMounting__EXPECTED_HASH = {
        1,
        {
            0xbf, 0x70, 0xb7, 0x88, 0x6b, 0x71, 0x97, 0xca, 0x20, 0x63, 0xa3,
            0xc8, 0xc3, 0xbc, 0x12, 0x79, 0xe9, 0x08, 0xc6, 0x63, 0x7e, 0xfd,
            0xb8, 0x7a, 0x43, 0x0a, 0x9f, 0xde, 0xb7, 0x3b, 0x7d, 0xa9,
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

static char aspn23_ros_interfaces__msg__MetadataGeneric__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataGeneric";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMounting";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__info[] =
    "info";
static char
    aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__mounting[] =
        "mounting";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataGeneric__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__info, 4,
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
            {aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataGeneric__FIELD_NAME__mounting,
             8, 8},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataGeneric__REFERENCED_TYPE_DESCRIPTIONS
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
                {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MetadataGeneric__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataGeneric__TYPE_NAME, 41, 41},
          {aspn23_ros_interfaces__msg__MetadataGeneric__FIELDS, 3, 3},
      },
      {aspn23_ros_interfaces__msg__MetadataGeneric__REFERENCED_TYPE_DESCRIPTIONS,
       4, 4},
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
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeMounting__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeMounting__get_type_hash(NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeMounting__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields =
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
    "# Metadata for a generic sensor.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Standard ASPN mounting information.\n"
    "# Units: none\n"
    "TypeMounting mounting";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataGeneric__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataGeneric__TYPE_NAME, 41, 41},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 449, 449},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataGeneric__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataGeneric__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeMounting__get_individual_type_description_source(
            NULL);
    sources[4] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
