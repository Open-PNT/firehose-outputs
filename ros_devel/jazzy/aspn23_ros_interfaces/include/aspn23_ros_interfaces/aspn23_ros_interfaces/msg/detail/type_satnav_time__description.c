// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavTime.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x4f, 0x03, 0xeb, 0x4c, 0xf9, 0x94, 0xf6, 0x9b, 0x7a, 0x62, 0xaf,
          0x47, 0x1e, 0x74, 0x83, 0xf1, 0x56, 0x5a, 0x93, 0x8a, 0xe9, 0x24,
          0xf9, 0x2c, 0x9a, 0xb1, 0x12, 0x6c, 0xa7, 0x4c, 0xc6, 0x87,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavTime";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__week_number[] =
        "week_number";
static char
    aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__seconds_of_week[] =
        "seconds_of_week";
static char
    aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__time_reference[] =
        "time_reference";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeSatnavTime__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__week_number,
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
            {aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__seconds_of_week,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeSatnavTime__FIELD_NAME__time_reference,
             14, 14},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
              {aspn23_ros_interfaces__msg__TypeSatnavTime__FIELDS, 3, 3},
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
    "# Satellite system time\n"
    "\n"
    "# Description: Full Week number since zero epoch at which the data "
    "provided in this message is valid,\n"
    "# expressed in time system defined by time_reference enum (below).\n"
    "# Units: weeks\n"
    "uint16 week_number\n"
    "\n"
    "# Description: Seconds since start of current week at which the data "
    "provided in this message is\n"
    "# valid, expressed in time system defined by time_reference enum "
    "(below).\n"
    "# Units: seconds\n"
    "float64 seconds_of_week\n"
    "\n"
    "# Reference time system used to express the data in this message. In a "
    "multi-GNSS receiver\n"
    "# (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must "
    "refer to one receiver clock\n"
    "# only. The receiver clock time of the measurement is the receiver clock "
    "time of the received signals.\n"
    "# It is identical for the phase and range measurements and is identical "
    "for all satellites observed in\n"
    "# a given epoch.\n"
    "uint8 time_reference\n"
    "\n"
    "# GPS system time.\n"
    "uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS=0\n"
    "\n"
    "# Galileo system time.\n"
    "uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO=1\n"
    "\n"
    "# BeiDou system time.\n"
    "uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU=2\n"
    "\n"
    "# GLONASS system time.\n"
    "uint8 ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeSatnavTime__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1326, 1326},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavTime__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
