// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeMounting__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xbf, 0x70, 0xb7, 0x88, 0x6b, 0x71, 0x97, 0xca, 0x20, 0x63, 0xa3,
          0xc8, 0xc3, 0xbc, 0x12, 0x79, 0xe9, 0x08, 0xc6, 0x63, 0x7e, 0xfd,
          0xb8, 0x7a, 0x43, 0x0a, 0x9f, 0xde, 0xb7, 0x3b, 0x7d, 0xa9,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMounting";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__lever_arm[] =
    "lever_arm";
static char
    aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__lever_arm_sigma[] =
        "lever_arm_sigma";
static char
    aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__orientation_quaternion
        [] = "orientation_quaternion";
static char
    aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__orientation_tilt_error_covariance
        [] = "orientation_tilt_error_covariance";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeMounting__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__lever_arm, 9,
             9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                3,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__lever_arm_sigma,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                3,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__orientation_quaternion,
             22, 22},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                4,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeMounting__FIELD_NAME__orientation_tilt_error_covariance,
             33, 33},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                9,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeMounting__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
              {aspn23_ros_interfaces__msg__TypeMounting__FIELDS, 4, 4},
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
    "# Describes the translational and angular offset between the sensor frame "
    "and the platform body frame.\n"
    "# Platform body frame is defined using axes in forward, right, and down "
    "convention, and the origin is\n"
    "# system defined. This type also contains the uncertainty associated with "
    "the translational and\n"
    "# angular offset.\n"
    "\n"
    "# Description: 3x1 lever arm vector describing the sensor position in the "
    "platform body frame.\n"
    "# Units: m\n"
    "float64[3] lever_arm\n"
    "\n"
    "# Description: 3x1 lever arm uncertainty vector as standard deviations in "
    "the platform body frame.\n"
    "# Units: m\n"
    "float64[3] lever_arm_sigma\n"
    "\n"
    "# Description: Four element quaternion, q = [a, b, c, d], where a = "
    "cos(phi/2), b =\n"
    "# (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = "
    "(phi_z/phi)*sin(phi/2). In this\n"
    "# description, the vector [phi_x, phi_y, phi_z] represents the rotation "
    "vector that describes the\n"
    "# frame rotation to be applied to the \"reference\" frame (ECI, ECEF, or "
    "NED) to rotate it into the axes\n"
    "# that describe the measured attitude, and the value phi is the magnitude "
    "of the [phi_x, phi_y, phi_z]\n"
    "# vector.\n"
    "# Orientation is optional in the sense that orientation shall be "
    "specified except in the case that\n"
    "# orientation is meaningless, for example, in the case of an RF antenna "
    "mounting.\n"
    "# See \"conventions\" documentation for more detailed information.\n"
    "# Units: none\n"
    "float64[4] orientation_quaternion\n"
    "\n"
    "# Description: Tilt error covariance matrix. This matrix represents the "
    "uncertainty in the \"tilt\n"
    "# errors\" that represent the additional rotation to be applied to the "
    "provided attitude quaternion in\n"
    "# order to convert it to the true attitude with no errors. By convention, "
    "these \"tilt errors\" are\n"
    "# expressed in the reference frame (ECI, ECEF, or NED).\n"
    "# Tilt error covariance is optional only because orientation itself is "
    "optional. Orientation error\n"
    "# covariance shall be provided if orientation is provided.\n"
    "# See \"conventions\" documentation for more detailed information.\n"
    "# Units: rad^2\n"
    "# Note: field represents a 3 x 3 matrix\n"
    "float64[9] orientation_tilt_error_covariance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeMounting__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2174, 2174},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeMounting__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeMounting__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
