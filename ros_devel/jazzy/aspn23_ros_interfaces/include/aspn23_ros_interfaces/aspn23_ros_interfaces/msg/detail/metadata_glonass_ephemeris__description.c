// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x70, 0xd7, 0xe7, 0x63, 0x28, 0x8b, 0x22, 0xc3, 0xd1, 0x61, 0xce,
          0x10, 0xe2, 0x25, 0xa7, 0x50, 0xff, 0x39, 0x73, 0x97, 0x6f, 0x40,
          0x07, 0xf5, 0x1b, 0x17, 0x64, 0x77, 0xeb, 0x39, 0x2d, 0x60,
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

static char aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataGlonassEphemeris";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__slot_number
        [] = "slot_number";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__freq_o[] =
        "freq_o";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__n_t[] =
        "n_t";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__t_k[] =
        "t_k";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__t_b[] =
        "t_b";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__gamma_n
        [] = "gamma_n";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__tau_n[] =
        "tau_n";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_x
        [] = "sv_pos_x";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_x
        [] = "sv_vel_x";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_x
        [] = "sv_accel_x";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_y
        [] = "sv_pos_y";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_y
        [] = "sv_vel_y";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_y
        [] = "sv_accel_y";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_z
        [] = "sv_pos_z";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_z
        [] = "sv_vel_z";
static char
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_z
        [] = "sv_accel_z";

static rosidl_runtime_c__type_description__Field aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELDS[] = {
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__info,
         4, 4},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
            0,
            0,
            {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44, 44},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__time_of_validity,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__slot_number,
         11, 11},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__freq_o,
         6, 6},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__n_t,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__t_k,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__t_b,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__gamma_n,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__tau_n,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_x,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_x,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_x,
         10, 10},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_y,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_y,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_y,
         10, 10},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_pos_z,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_vel_z,
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
        {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELD_NAME__sv_accel_z,
         10, 10},
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
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__TYPE_NAME, 50,
           50},
          {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__FIELDS, 18,
           18},
      },
      {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# GLONASS Ephemeris describing GLONASS satellite locations. Definitions "
    "and usage are covered in\n"
    "# GLONASS ICD L1,L2 - Edition 5.1 2008, Section 4.4.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: GLONASS satellite slot number.\n"
    "# Units: none\n"
    "int32 slot_number\n"
    "\n"
    "# Description: Frequency channel offset number in range from 0 to 20.\n"
    "# Units: none\n"
    "int32 freq_o\n"
    "\n"
    "# Description: Calender number of day within 4 year interval starting at "
    "Jan 1 of a leap year\n"
    "# Units: days\n"
    "int32 n_t\n"
    "\n"
    "# Description: Time referenced to the beginning of the frame within the "
    "current day.\n"
    "# Units: s\n"
    "float64 t_k\n"
    "\n"
    "# Description: Index of time interval within current day according to "
    "UTC(SU) + 03 hrs.\n"
    "# Units: minutes\n"
    "float64 t_b\n"
    "\n"
    "# Description: Relative Satellite frequency bias\n"
    "# Units: s/s\n"
    "float64 gamma_n\n"
    "\n"
    "# Description: Satellite clock bias.\n"
    "# Units: s\n"
    "float64 tau_n\n"
    "\n"
    "# Description: Satellite X position in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km\n"
    "float64 sv_pos_x\n"
    "\n"
    "# Description: Satellite X velocity in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km/s\n"
    "float64 sv_vel_x\n"
    "\n"
    "# Description: Satellite X acceleration in PZ-90 coordinate system at "
    "time t_b.\n"
    "# Units: km/s^2\n"
    "float64 sv_accel_x\n"
    "\n"
    "# Description: Satellite Y position in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km\n"
    "float64 sv_pos_y\n"
    "\n"
    "# Description: Satellite Y velocity in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km/s\n"
    "float64 sv_vel_y\n"
    "\n"
    "# Description: Satellite Y acceleration in PZ-90 coordinate system at "
    "time t_b.\n"
    "# Units: km/s^2\n"
    "float64 sv_accel_y\n"
    "\n"
    "# Description: Satellite Z position in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km\n"
    "float64 sv_pos_z\n"
    "\n"
    "# Description: Satellite Z velocity in PZ-90 coordinate system at time "
    "t_b.\n"
    "# Units: km/s\n"
    "float64 sv_vel_z\n"
    "\n"
    "# Description: Satellite Z acceleration in PZ-90 coordinate system at "
    "time t_b.\n"
    "# Units: km/s^2\n"
    "float64 sv_accel_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__TYPE_NAME, 50, 50},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2133, 2133},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__get_individual_type_description_source(
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
