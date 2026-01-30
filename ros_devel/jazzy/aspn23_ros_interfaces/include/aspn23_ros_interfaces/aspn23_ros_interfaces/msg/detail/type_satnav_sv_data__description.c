// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xd8, 0x71, 0x4b, 0x62, 0x22, 0x37, 0x33, 0x49, 0xbe, 0x0a, 0x27,
          0x92, 0xb8, 0x17, 0x58, 0xbc, 0x82, 0x96, 0xf9, 0xa1, 0xcb, 0x12,
          0xa4, 0xb1, 0x0e, 0x83, 0xb7, 0xa7, 0x82, 0x8c, 0x71, 0x0c,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__EXPECTED_HASH = {
        1,
        {
            0xfb, 0x18, 0xf1, 0xc5, 0x21, 0xc7, 0xd6, 0x91, 0x51, 0x57, 0x15,
            0x0c, 0x22, 0x58, 0x63, 0xf5, 0x31, 0x55, 0x1e, 0xf6, 0x3a, 0xc0,
            0x75, 0x7a, 0xeb, 0xbd, 0x05, 0xfc, 0x4a, 0xbc, 0xff, 0x3a,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavTime__EXPECTED_HASH = {
        1,
        {
            0x4f, 0x03, 0xeb, 0x4c, 0xf9, 0x94, 0xf6, 0x9b, 0x7a, 0x62, 0xaf,
            0x47, 0x1e, 0x74, 0x83, 0xf1, 0x56, 0x5a, 0x93, 0x8a, 0xe9, 0x24,
            0xf9, 0x2c, 0x9a, 0xb1, 0x12, 0x6c, 0xa7, 0x4c, 0xc6, 0x87,
        }};
#endif

static char aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSvData";
static char aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSatelliteSystem";
static char aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavTime";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__prn[] =
    "prn";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__satellite_system
        [] = "satellite_system";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__ephemeris_type[] =
        "ephemeris_type";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_data_time[] =
        "sv_data_time";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__coordinate_frame
        [] = "coordinate_frame";
static char aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_pos[] =
    "sv_pos";
static char aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_vel[] =
    "sv_vel";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_clock_bias[] =
        "sv_clock_bias";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_clock_drift[] =
        "sv_clock_drift";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__group_delay_enum
        [] = "group_delay_enum";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__group_delay_vector
        [] = "group_delay_vector";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__prn, 3,
             3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__satellite_system,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME,
                 51, 51},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__ephemeris_type,
             14, 14},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_data_time,
             12, 12},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__coordinate_frame,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_pos,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                3,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_vel,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                3,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_clock_bias,
             13, 13},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__sv_clock_drift,
             14, 14},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__group_delay_enum,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELD_NAME__group_delay_vector,
             18, 18},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT_ARRAY,
                4,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__TypeSatnavSvData__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME,
                 51, 51},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME, 42, 42},
          {aspn23_ros_interfaces__msg__TypeSatnavSvData__FIELDS, 11, 11},
      },
      {aspn23_ros_interfaces__msg__TypeSatnavSvData__REFERENCED_TYPE_DESCRIPTIONS,
       2, 2},
  };
  if (!constructed) {
    assert(
        0 ==
        memcmp(
            &aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_hash(
                NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields =
        aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_description(
            NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeSatnavTime__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
        aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_description(NULL)
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
    "# Satellite position, velocity and clock error at a particular time "
    "epoch\n"
    "\n"
    "# Description: PRN code which identifies satellite (or slot number, in "
    "the case of GLONASS) of this\n"
    "# ephemeris.\n"
    "# Units: none\n"
    "int16 prn\n"
    "\n"
    "# Description: Describes the Satellite System which was used to generate "
    "the satellite information\n"
    "# provided in this message.\n"
    "# Units: none\n"
    "TypeSatnavSatelliteSystem satellite_system\n"
    "\n"
    "# Provides further clarification of which ephemeris was used to generate "
    "the satellite information\n"
    "# provided in this message for systems which have more than one ephemeris "
    "representation.\n"
    "uint8 ephemeris_type\n"
    "\n"
    "# To be used when a system only uses one ephemeris representation, so "
    "knowing the satellite_system\n"
    "# fully defines what ephemeris is being used.\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM=0\n"
    "\n"
    "# Calculated using legacy GPS (LNAV) messages\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV=1\n"
    "\n"
    "# Calculated using GPS CNAV messages\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV=2\n"
    "\n"
    "# Calculated using GPS MNAV messages\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV=3\n"
    "\n"
    "# Description: Receiver time at which the data provided in this message "
    "is valid.\n"
    "# Units: none\n"
    "TypeSatnavTime sv_data_time\n"
    "\n"
    "# Coordinate frame system used to describe satellite position and "
    "velocity.\n"
    "uint8 coordinate_frame\n"
    "\n"
    "# International Terrestrial Reference Frame\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF=0\n"
    "\n"
    "# Earth-centered earth-fixed frame as defined by WGS-84 (nearly identical "
    "with ITRF)\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF=1\n"
    "\n"
    "# Galileo Terrestrial Reference Frame (nearly identical with ITRF)\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF=2\n"
    "\n"
    "# Parametri Zemli 1990 (PZ-90) reference frame\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90=3\n"
    "\n"
    "# Description: Satellite position in frame specified by coordinate_frame "
    "at time specified by\n"
    "# sv_data_time_week_number and sv_data_time_seconds_of_week.\n"
    "# Units: m\n"
    "float64[3] sv_pos\n"
    "\n"
    "# Description: Satellite velocity in frame specified by coordinate_frame "
    "at time specified by\n"
    "# sv_data_time_week_number and sv_data_time_seconds_of_week.\n"
    "# Units: m/s\n"
    "float64[3] sv_vel\n"
    "\n"
    "# Description: Satellite clock bias at the sv_data_time, used to correct "
    "the satellite time like\n"
    "# delta_t_sv in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.\n"
    "# Units: sec\n"
    "float64 sv_clock_bias\n"
    "\n"
    "# Description: Satellite clock drift rate at the sv_data_time. By way of "
    "example, for GPS this would\n"
    "# be af1 in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.\n"
    "# Units: sec/sec\n"
    "float64 sv_clock_drift\n"
    "\n"
    "# Describes how to interpret group delay terms, because they vary by "
    "ephemeris type. Descriptions\n"
    "# assume zero-indexing.\n"
    "uint8 group_delay_enum\n"
    "\n"
    "# group_delay_vector[0] is legacy Tgd as defined in ICD-GPS-200L Section "
    "20.3.3.3.3.2. All other terms\n"
    "# not used.\n"
    "uint8 ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV=0\n"
    "\n"
    "# Description: Group delay terms, with interpretation provided by "
    "group_delay_enum. (Need to verify\n"
    "# that four is sufficient for all ephemeris.)\n"
    "# Units: sec\n"
    "float32[4] group_delay_vector";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeSatnavSvData__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME, 42, 42},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 3235, 3235},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavSvData__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeSatnavTime__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
