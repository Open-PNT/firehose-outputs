// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataBeidouEphemeris.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_beidou_ephemeris__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x2e, 0xb6, 0x02, 0x57, 0xd6, 0xf5, 0xc8, 0x2d, 0x16, 0xb9, 0xb4,
          0xa2, 0x91, 0x3f, 0x0b, 0x35, 0x48, 0xd5, 0xbf, 0x4d, 0x24, 0x44,
          0x7a, 0xc8, 0x1e, 0x12, 0x67, 0x8d, 0x1e, 0x93, 0xda, 0x96,
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

static char aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataBeidouEphemeris";
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
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__prn[] =
        "prn";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__clock[] =
        "clock";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__orbit[] =
        "orbit";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__t_gd1[] =
        "t_gd1";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__t_gd2[] =
        "t_gd2";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__aodc[] =
        "aodc";
static char
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__aode[] =
        "aode";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__info,
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
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__prn,
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
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__clock,
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
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__orbit,
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
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__t_gd1,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__t_gd2,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__aodc,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELD_NAME__aode,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__TYPE_NAME, 49,
           49},
          {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__FIELDS, 9, 9},
      },
      {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# BeiDou Ephemeris describing satellite locations. Definitions and usage "
    "are covered in\n"
    "# BDS-SIS-ICD-BII-3.0, February 2019,\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
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
    "# Description: Group delay differential for B1I user.\n"
    "# Units: s\n"
    "float64 t_gd1\n"
    "\n"
    "# Description: Group delay differential for B2I user.\n"
    "# Units: s\n"
    "float64 t_gd2\n"
    "\n"
    "# Description: Age of data, clock is updated at start of each hour in BDT "
    "per table 5-6 in\n"
    "# BDS-SIS-ICD-BII-3.0.\n"
    "# Units: none\n"
    "int16 aodc\n"
    "\n"
    "# Description: Age of data, ephemeris is updated at start of each hour in "
    "BDT per table 5-8 in\n"
    "# BDS-SIS-ICD-BII-3.0.\n"
    "# Units: none\n"
    "int16 aode";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__TYPE_NAME, 49, 49},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1203, 1203},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataBeidouEphemeris__get_individual_type_description_source(
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
