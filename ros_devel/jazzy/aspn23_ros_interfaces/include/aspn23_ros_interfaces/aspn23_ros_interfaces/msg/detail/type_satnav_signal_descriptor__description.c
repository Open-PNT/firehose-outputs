// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSignalDescriptor.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xd0, 0xd1, 0xea, 0x95, 0x8d, 0xde, 0x82, 0x7a, 0x70, 0x34, 0xd2,
          0xcf, 0xb2, 0xaf, 0x1d, 0x05, 0x62, 0xf2, 0x20, 0x1d, 0xae, 0x0d,
          0x58, 0x44, 0x56, 0x80, 0x93, 0xa4, 0xa7, 0xf8, 0xe4, 0xc0,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME[] =
        "aspn23_ros_interfaces/msg/TypeSatnavSignalDescriptor";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__FIELD_NAME__signal_descriptor
        [] = "signal_descriptor";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__FIELD_NAME__signal_descriptor,
             17, 17},
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
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME,
               52, 52},
              {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__FIELDS,
               1, 1},
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
    "# Satellite signal descriptor as defined in RINEX 3.05\n"
    "\n"
    "# Three letter RINEX Observation Code of signal as given in Table A23 of "
    "RINEX 3.05 specification\n"
    "# (https://files.igs.org/pub/data/format/rinex305.pdf). RINEX Observation "
    "Code must be paired with\n"
    "# Satellite system to determine a unique identifier\n"
    "uint8 signal_descriptor\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C=0\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S=1\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L=2\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X=3\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P=4\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W=5\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N=6\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C=7\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D=8\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S=9\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L=10\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X=11\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P=12\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W=13\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N=14\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I=15\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q=16\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X=17\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A=18\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B=19\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X=20\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A=21\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B=22\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X=23\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I=24\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q=25\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X=26\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B=27\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I=28\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q=29\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X=30\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I=31\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q=32\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X=33\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C=34\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z=35\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D=36\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P=37\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z=38\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S=39\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L=40\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E=41\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z=42\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I=43\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q=44\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D=45\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D=46\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P=47\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z=48\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D=49\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P=50\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I=51\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q=52\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D=53\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P=54\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A=55\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B=56\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C=57\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A=58\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B=59\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C=60\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X=61\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y=62\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M=63\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y=64\n"
    "\n"
    "# See RINEX 3.05 Table A23\n"
    "uint8 ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M=65";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME, 52,
       52},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 6780, 6780},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
