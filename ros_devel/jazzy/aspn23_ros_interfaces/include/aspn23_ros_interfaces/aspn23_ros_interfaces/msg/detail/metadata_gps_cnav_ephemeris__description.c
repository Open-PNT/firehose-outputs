// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsCnavEphemeris.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_cnav_ephemeris__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x3c, 0x74, 0x4b, 0x7b, 0x9e, 0xd3, 0xde, 0x7c, 0x2a, 0xe6, 0xfe,
          0x58, 0x79, 0x77, 0xf9, 0xc6, 0x9b, 0x63, 0x42, 0xa1, 0xe5, 0x7d,
          0xdc, 0x2b, 0x72, 0x76, 0xb7, 0xb7, 0x49, 0x57, 0x1c, 0x30,
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

static char aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataGpsCnavEphemeris";
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
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__week_number
        [] = "week_number";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__prn[] =
        "prn";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__clock[] =
        "clock";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__orbit[] =
        "orbit";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__t_gd[] =
        "t_gd";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__iodc[] =
        "iodc";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__iode[] =
        "iode";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l1_ca
        [] = "isc_l1_ca";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l2_c
        [] = "isc_l2_c";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l5_i5
        [] = "isc_l5_i5";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l5_q5
        [] = "isc_l5_q5";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__delta_a_0
        [] = "delta_a_0";
static char
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__a_dot[] =
        "a_dot";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__info,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__week_number,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__prn,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__clock,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__orbit,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__t_gd,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__iodc,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__iode,
             4, 4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l1_ca,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l2_c,
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
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l5_i5,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__isc_l5_q5,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__delta_a_0,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELD_NAME__a_dot,
             5, 5},
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
    aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__TYPE_NAME, 50,
           50},
          {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__FIELDS, 15,
           15},
      },
      {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# CNAV Ephemeris describing GPS satellite locations. Definitions and "
    "usage are covered in\n"
    "# ICD-GPS-200L, Section 20.3.3.4 and following.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Full GPS week number calculated from the Modulo 1024 WN in "
    "Subframe 1 and the number of\n"
    "# GPS week rollovers\n"
    "# Units: weeks\n"
    "uint16 week_number\n"
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
    "# Description: Group delay differential between L1 and L2.\n"
    "# Units: s\n"
    "float64 t_gd\n"
    "\n"
    "# Description: Issue of Data Clock. 10 bit value from Subframe 1\n"
    "# Units: none\n"
    "uint16 iodc\n"
    "\n"
    "# Description: Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and "
    "Subframe 3. Should match the\n"
    "# 8 LSBs of the IODC.\n"
    "# Units: none\n"
    "uint8 iode\n"
    "\n"
    "# Description: L1 P(Y) to L1 C/A inter-signal correction.\n"
    "# Units: s\n"
    "float64 isc_l1_ca\n"
    "\n"
    "# Description: L1 P(Y) to L2C inter-signal correction.\n"
    "# Units: s\n"
    "float64 isc_l2_c\n"
    "\n"
    "# Description: L1 P(Y) to L5 I5 inter-signal correction.\n"
    "# Units: s\n"
    "float64 isc_l5_i5\n"
    "\n"
    "# Description: L1 P(Y) to L5 Q5 inter-signal correction.\n"
    "# Units: s\n"
    "float64 isc_l5_q5\n"
    "\n"
    "# Description: Semi-major axis difference at reference time.\n"
    "# Units: m\n"
    "float64 delta_a_0\n"
    "\n"
    "# Description: Change rate of semi-major axis.\n"
    "# Units: m/s\n"
    "float64 a_dot";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__TYPE_NAME, 50, 50},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1769, 1769},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris__get_individual_type_description_source(
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
