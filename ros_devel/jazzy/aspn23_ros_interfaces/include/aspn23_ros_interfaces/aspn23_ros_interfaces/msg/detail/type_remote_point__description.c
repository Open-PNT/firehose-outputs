// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeRemotePoint__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xfd, 0x67, 0x29, 0x69, 0xed, 0xd4, 0xf7, 0xdd, 0x62, 0xd8, 0x36,
          0x20, 0xf5, 0x66, 0xe4, 0xdb, 0x18, 0xf6, 0x70, 0x0f, 0x0b, 0x81,
          0xee, 0xcc, 0x23, 0x0a, 0xb9, 0x3c, 0x57, 0x5c, 0xf8, 0xff,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeRemotePoint";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__included_terms[] =
        "included_terms";
static char aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__id[] =
    "id";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position_reference_frame
        [] = "position_reference_frame";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position1[] =
        "position1";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position2[] =
        "position2";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position3[] =
        "position3";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__num_position_components
        [] = "num_position_components";
static char
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position_covariance
        [] = "position_covariance";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeRemotePoint__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__included_terms,
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
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__id, 2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position_reference_frame,
             24, 24},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position1,
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
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position2,
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
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position3,
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
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__num_position_components,
             23, 23},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELD_NAME__position_covariance,
             19, 19},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeRemotePoint__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME, 41, 41},
              {aspn23_ros_interfaces__msg__TypeRemotePoint__FIELDS, 8, 8},
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
    "# ASPN custom type representing a point. This includes optional "
    "information\n"
    "# (indicated by included_terms) for the position and a correspondence ID "
    "for the\n"
    "# point.\n"
    "\n"
    "# Description: Indicates which information is included about the point\n"
    "# 0 = no information included (unknown point)\n"
    "# 1 = id included (corresponded point)\n"
    "# 2 = position included (known point)\n"
    "# 3 = id and position included\n"
    "# Units: none\n"
    "uint8 included_terms\n"
    "\n"
    "# Description: Unique identification number assigned by the sensor. "
    "Points that have the same id from\n"
    "# a sensor are multiple instances of the same point as determined by a "
    "sensor's point correspondence.\n"
    "# Units: none\n"
    "uint32 id\n"
    "\n"
    "# Defines position reference.\n"
    "uint8 position_reference_frame\n"
    "\n"
    "# No reference frame. This is only valid if position is not included\n"
    "# (included_terms is 0 or 1).\n"
    "uint8 ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE=0\n"
    "\n"
    "# Point position relative to the WGS-84 reference expressed using "
    "position1 as geodetic latitude\n"
    "# in radians, position2 as longitude in radians, and position3 as "
    "geodetic altitude (or height\n"
    "# above the WGS-84 ellipsoid) in meters. Each term is optional.\n"
    "# position_covariance is given using north-south position error in meters "
    "(an expression of\n"
    "# geodetic latitude error), east-west position error in meters (an "
    "expression of longitude\n"
    "# error), and geodetic altitude error in meters. In the case of nulled "
    "position components, the\n"
    "# corresponding error covariance terms are omitted.\n"
    "uint8 ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC=1\n"
    "\n"
    "# Description: First position term as defined in "
    "position_reference_frame.\n"
    "# Units: various\n"
    "float64 position1\n"
    "\n"
    "# Description: Second position term as defined in "
    "position_reference_frame.\n"
    "# Units: various\n"
    "float64 position2\n"
    "\n"
    "# Description: Third position term as defined in "
    "position_reference_frame.\n"
    "# Units: various\n"
    "float64 position3\n"
    "\n"
    "# Description: Dimension of position provided.\n"
    "# Units: none\n"
    "uint8 num_position_components\n"
    "\n"
    "# Description: Position error covariance (or variance depending on "
    "num_position_components) as defined\n"
    "# in position_reference_frame.\n"
    "# Units: m^2\n"
    "# Note: field represents a num_position_components x "
    "num_position_components matrix\n"
    "float64[] position_covariance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeRemotePoint__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME, 41, 41},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2349, 2349},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeRemotePoint__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeRemotePoint__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
