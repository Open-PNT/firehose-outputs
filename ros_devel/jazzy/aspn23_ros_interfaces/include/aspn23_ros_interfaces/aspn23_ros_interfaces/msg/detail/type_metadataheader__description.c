// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x3a, 0x58, 0xaa, 0x12, 0xef, 0x88, 0x36, 0x85, 0x41, 0x1b, 0xcc,
          0x8c, 0x74, 0xf9, 0x79, 0xb4, 0xed, 0xcc, 0x43, 0x5b, 0x38, 0xaa,
          0x6f, 0x8b, 0xb9, 0x5b, 0xff, 0x43, 0x57, 0x4a, 0x17, 0xf5,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"

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
#endif

static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__header[] =
        "header";
static char
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__sensor_description
        [] = "sensor_description";
static char
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__delta_t_nom[] =
        "delta_t_nom";
static char
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__timestamp_clock_id
        [] = "timestamp_clock_id";
static char
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__digits_of_precision
        [] = "digits_of_precision";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeMetadataheader__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__header,
             6, 6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__sensor_description,
             18, 18},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__delta_t_nom,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__timestamp_clock_id,
             18, 18},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELD_NAME__digits_of_precision,
             19, 19},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__TypeMetadataheader__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44, 44},
          {aspn23_ros_interfaces__msg__TypeMetadataheader__FIELDS, 5, 5},
      },
      {aspn23_ros_interfaces__msg__TypeMetadataheader__REFERENCED_TYPE_DESCRIPTIONS,
       1, 1},
  };
  if (!constructed) {
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeHeader__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeHeader__get_type_hash(NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields =
        aspn23_ros_interfaces__msg__TypeHeader__get_type_description(NULL)
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
    "# Sensor metadata header.\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Describes the device used to generate the measurement "
    "(user defined).\n"
    "# Units: none\n"
    "string sensor_description\n"
    "\n"
    "# Description: Optional nominal time interval between each measurement. "
    "Actual time interval may vary.\n"
    "# Do not report a delta_t_nom if the nominal time interval is not known "
    "ahead of time.\n"
    "# Units: seconds\n"
    "float64 delta_t_nom\n"
    "\n"
    "# Description: Identifier for the timestamp's clock/timing source. See "
    "clock_identifiers.md for a full\n"
    "# description, but the summary is as follows:\n"
    "# 0 = ASPN System Time\n"
    "# 1 = International Atomic Time (TAI)\n"
    "# 2 = Universal Coordinated Time (UTC)\n"
    "# 3 = GPS System Time\n"
    "# 4 = Galileo System Time\n"
    "# 5 = GLONASS System Time\n"
    "# 6 = BeiDou System Time\n"
    "# 7-50: Reserved for future additional time scale representations.\n"
    "# \n"
    "# Each message source must provide metadata information (the method used "
    "to provide the metadata\n"
    "# information depends on the system, e.g., over the wire, written to "
    "file, etc.), and the information\n"
    "# contained in this type (type_metadataheader) will be included in that "
    "information. In this manner,\n"
    "# each message source's clock ID will be defined. If the clock source is "
    "updated, new metadata must be\n"
    "# provided with an updated clock ID.\n"
    "# If used, ASPN system time shall be represented as a monotonically "
    "increasing quantity defined by the\n"
    "# system. System time zero epoch must be defined. For example, system "
    "time may be the time difference\n"
    "# with respect to a system power on event. Other user-defined "
    "clocks/timing sources must be similarly\n"
    "# defined by the system designer.\n"
    "# Units: none\n"
    "uint8 timestamp_clock_id\n"
    "\n"
    "# Description: Defines how many decimal digits of precision are "
    "represented in the timestamp after the\n"
    "# decimal point. The precision of the timestamps is 10E-N, where N is "
    "digits_of_precision. A value of\n"
    "# 3 would mean that the timestamp has precision at the 10E-3 "
    "(millisecond) level, a value of 6 would\n"
    "# mean the timestamp has precision at the 10E-6 (microsecond) level, "
    "etc.\n"
    "# If an implementation is using 64bit integers for their internal time "
    "representations, digits of\n"
    "# precision may be ignored with no additional complexity. If an "
    "implementation is converting to a\n"
    "# double, because of their choice of internal representation (which "
    "likely most estimators would use),\n"
    "# then knowing digits of precision would be important to avoid losing "
    "resolution.\n"
    "# Units: none\n"
    "uint8 digits_of_precision";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME, 44, 44},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2628, 2628},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeMetadataheader__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
