// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGalileoEphemeris.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_galileo_ephemeris__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xfb, 0xb4, 0x12, 0x0b, 0x80, 0xb8, 0xea, 0x72, 0x4a, 0xb0, 0x16,
          0x0b, 0x9a, 0x21, 0x34, 0x75, 0xee, 0x54, 0x17, 0x63, 0x24, 0x1a,
          0xa1, 0xd5, 0xb2, 0xd0, 0x7a, 0x37, 0x1e, 0xee, 0xe3, 0xb2,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_clock__functions.h"
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
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__EXPECTED_HASH = {
        1,
        {
            0x15, 0x40, 0x0c, 0xe9, 0xe2, 0x67, 0x39, 0xde, 0xd3, 0x04, 0x1d,
            0x01, 0xec, 0x8b, 0x17, 0x2e, 0x8f, 0x54, 0xc0, 0x2e, 0x4c, 0x23,
            0xf8, 0x1e, 0x6c, 0xe1, 0x92, 0x72, 0xa5, 0x29, 0xf4, 0x25,
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
    aspn23_ros_interfaces__msg__TypeSatnavClock__EXPECTED_HASH = {
        1,
        {
            0x61, 0x86, 0xf0, 0xd2, 0xe1, 0x40, 0x50, 0xe7, 0xcf, 0x0e, 0x8a,
            0xe7, 0x23, 0xb6, 0xd4, 0x44, 0xf9, 0xdf, 0x43, 0xc3, 0x33, 0x31,
            0x2c, 0x6b, 0x61, 0xbe, 0x7e, 0x6d, 0xd1, 0x02, 0x57, 0x27,
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

static char aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataGalileoEphemeris";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeKeplerOrbit";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavClock";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__nav_msg_type
        [] = "nav_msg_type";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__prn[] =
        "prn";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__clock[] =
        "clock";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__orbit[] =
        "orbit";
static char
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__bgd[] =
        "bgd";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__info,
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
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__nav_msg_type,
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
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__prn,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__clock,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME, 41,
                 41},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__orbit,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME, 41,
                 41},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELD_NAME__bgd,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME, 41,
                 41},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44,
                 44},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavClock__TYPE_NAME, 41,
                 41},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__TYPE_NAME, 50,
           50},
          {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__FIELDS, 7, 7},
      },
      {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__REFERENCED_TYPE_DESCRIPTIONS,
       5, 5},
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
        memcmp(&aspn23_ros_interfaces__msg__TypeKeplerOrbit__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
        aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(
            &aspn23_ros_interfaces__msg__TypeMetadataheader__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_hash(NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_description(
            NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeSatnavClock__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeSatnavClock__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields =
        aspn23_ros_interfaces__msg__TypeSatnavClock__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields =
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
    "# GALILEO Ephemeris describing satellite locations. Definitions and usage "
    "are covered in OS SIS ICD,\n"
    "# Issue 2.0, January 2021, Section 4.2, 4.3, and 5.1.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Enumerated field which describes the GALILEO message type used to "
    "define clock correction\n"
    "# parameters.\n"
    "uint8 nav_msg_type\n"
    "\n"
    "# I/NAV ephemeris.\n"
    "uint8 ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV=0\n"
    "\n"
    "# F/NAV ephemeris.\n"
    "uint8 ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV=1\n"
    "\n"
    "# Description: Satellite PRN number.\n"
    "# Units: none\n"
    "int32 prn\n"
    "\n"
    "# Description: GNSS broadcast parameters required to calculate sv clock "
    "corrections.\n"
    "# Units: none\n"
    "TypeSatnavClock clock\n"
    "\n"
    "# Description: Keplerian orbit parameters required to calculate satellite "
    "position.\n"
    "# Units: none\n"
    "TypeKeplerOrbit orbit\n"
    "\n"
    "# Description: Broadcast group delay (E1-E5b if F/Nav, E1-E5b if I/NAV)\n"
    "# Units: s\n"
    "float64 bgd";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__TYPE_NAME, 50, 50},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1170, 1170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataGalileoEphemeris__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
            NULL);
    sources[4] =
        *aspn23_ros_interfaces__msg__TypeSatnavClock__get_individual_type_description_source(
            NULL);
    sources[5] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
