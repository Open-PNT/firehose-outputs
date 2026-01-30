// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xc0, 0x9e, 0xa9, 0xbb, 0xc3, 0x6a, 0x6a, 0x36, 0x6f, 0x81, 0xfa,
          0x96, 0x47, 0xa1, 0x5b, 0xd9, 0xd3, 0x20, 0x4d, 0x58, 0x0e, 0xa8,
          0xeb, 0xce, 0x8f, 0xbf, 0x49, 0x96, 0x8e, 0xba, 0xeb, 0xce,
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

static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__TYPE_NAME[] =
        "aspn23_ros_interfaces/msg/MetadataGpsIonoUtcParameters";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__info
        [] = "info";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__a_0
        [] = "a_0";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__a_1
        [] = "a_1";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__delta_t_ls
        [] = "delta_t_ls";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__tot
        [] = "tot";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__wn_t
        [] = "wn_t";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__wn_lsf
        [] = "wn_lsf";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__dn[] =
        "dn";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__delta_t_lsf
        [] = "delta_t_lsf";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_0
        [] = "alpha_0";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_1
        [] = "alpha_1";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_2
        [] = "alpha_2";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_3
        [] = "alpha_3";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_0
        [] = "beta_0";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_1
        [] = "beta_1";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_2
        [] = "beta_2";
static char
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_3
        [] = "beta_3";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__info,
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
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__a_0,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__a_1,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__delta_t_ls,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__tot,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__wn_t,
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
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__wn_lsf,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__dn,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__delta_t_lsf,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_0,
             7, 7},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_1,
             7, 7},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_2,
             7, 7},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__alpha_3,
             7, 7},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_0,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_1,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_2,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELD_NAME__beta_3,
             6, 6},
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
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__TYPE_NAME,
           54, 54},
          {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__FIELDS, 18,
           18},
      },
      {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# Broadcasted GPS navigation data for estimation of single frequency "
    "ionospheric correction and\n"
    "# determination of UTC. Definitions and usage are covered in "
    "ICD-GPS-200L, Section 20.3.3.5.1.6 and\n"
    "# 20.3.3.5.1.7.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Bias coefficient of GPS time scale relative to UTC time "
    "scale.\n"
    "# Units: s\n"
    "float64 a_0\n"
    "\n"
    "# Description: Drift coefficient of GPS time scale relative to UTC time "
    "scale.\n"
    "# Units: s/s\n"
    "float64 a_1\n"
    "\n"
    "# Description: Leap second count.\n"
    "# Units: s\n"
    "int8 delta_t_ls\n"
    "\n"
    "# Description: Reference GPS time of week for UTC parameters\n"
    "# Units: s\n"
    "uint32 tot\n"
    "\n"
    "# Description: Reference Modulo 256 GPS Week number for UTC parameters\n"
    "# Units: weeks\n"
    "uint8 wn_t\n"
    "\n"
    "# Description: Modulo 256 GPS Week number at the end of which delta_t_lsf "
    "becomes effective.\n"
    "# Units: weeks\n"
    "uint8 wn_lsf\n"
    "\n"
    "# Description: Day number at the end of which delta_t_lsf becomes "
    "effective (1 to 7).\n"
    "# Units: days\n"
    "uint8 dn\n"
    "\n"
    "# Description: Future leap second count.\n"
    "# Units: s\n"
    "int8 delta_t_lsf\n"
    "\n"
    "# Description: Zeroth-order coefficient of amplitude of vertical "
    "ionospheric delay.\n"
    "# Units: s\n"
    "float64 alpha_0\n"
    "\n"
    "# Description: First-order coefficient of amplitude of vertical "
    "ionospheric delay.\n"
    "# Units: s/rad\n"
    "float64 alpha_1\n"
    "\n"
    "# Description: Second-order coefficient of amplitude of vertical "
    "ionospheric delay.\n"
    "# Units: s/rad^2\n"
    "float64 alpha_2\n"
    "\n"
    "# Description: Third-order coefficient of amplitude of vertical "
    "ionospheric delay.\n"
    "# Units: s/rads^3\n"
    "float64 alpha_3\n"
    "\n"
    "# Description: Zeroth-order coefficient of period of ionospheric delay "
    "model.\n"
    "# Units: s\n"
    "float64 beta_0\n"
    "\n"
    "# Description: First-order coefficient of period of ionospheric delay "
    "model.\n"
    "# Units: s/rad\n"
    "float64 beta_1\n"
    "\n"
    "# Description: Second-order coefficient of period of ionospheric delay "
    "model.\n"
    "# Units: s/rad^2\n"
    "float64 beta_2\n"
    "\n"
    "# Description: Third-order coefficient of period of ionospheric delay "
    "model.\n"
    "# Units: s/rad^3\n"
    "float64 beta_3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__TYPE_NAME, 54,
       54},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2190, 2190},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__get_individual_type_description_source(
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
