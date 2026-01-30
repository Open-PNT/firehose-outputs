// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xfb, 0x18, 0xf1, 0xc5, 0x21, 0xc7, 0xd6, 0x91, 0x51, 0x57, 0x15,
          0x0c, 0x22, 0x58, 0x63, 0xf5, 0x31, 0x55, 0x1e, 0xf6, 0x3a, 0xc0,
          0x75, 0x7a, 0xeb, 0xbd, 0x05, 0xfc, 0x4a, 0xbc, 0xff, 0x3a,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSatelliteSystem";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__FIELD_NAME__satellite_system
        [] = "satellite_system";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__FIELD_NAME__satellite_system,
             16, 16},
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
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME,
               51, 51},
              {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__FIELDS, 1,
               1},
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
    "# Satellite system name\n"
    "\n"
    "# Enumerated field which describes the Satellite System.\n"
    "uint8 satellite_system\n"
    "\n"
    "# GPS.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS=0\n"
    "\n"
    "# Galileo.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO=1\n"
    "\n"
    "# GLONASS.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS=2\n"
    "\n"
    "# BeiDou.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU=3\n"
    "\n"
    "# SBAS.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS=4\n"
    "\n"
    "# QZSS.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS=5\n"
    "\n"
    "# IRNSS.\n"
    "uint8 ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS=6";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME, 51,
       51},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 799, 799},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
