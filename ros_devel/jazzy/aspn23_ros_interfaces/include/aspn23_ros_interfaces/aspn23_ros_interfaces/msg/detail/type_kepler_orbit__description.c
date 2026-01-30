// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_kepler_orbit__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x15, 0x40, 0x0c, 0xe9, 0xe2, 0x67, 0x39, 0xde, 0xd3, 0x04, 0x1d,
          0x01, 0xec, 0x8b, 0x17, 0x2e, 0x8f, 0x54, 0xc0, 0x2e, 0x4c, 0x23,
          0xf8, 0x1e, 0x6c, 0xe1, 0x92, 0x72, 0xa5, 0x29, 0xf4, 0x25,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeKeplerOrbit";

// Define type names, field names, and default values
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__m_0[] =
    "m_0";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__delta_n[] =
    "delta_n";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__e[] = "e";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__sqrt_a[] =
    "sqrt_a";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega_0[] =
    "omega_0";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__i_0[] =
    "i_0";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__i_dot[] =
    "i_dot";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega[] =
    "omega";
static char
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega_dot[] =
        "omega_dot";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_uc[] =
    "c_uc";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_us[] =
    "c_us";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_rc[] =
    "c_rc";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_rs[] =
    "c_rs";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_ic[] =
    "c_ic";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_is[] =
    "c_is";
static char aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__t_oe[] =
    "t_oe";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__m_0, 3,
             3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__delta_n,
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
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__e, 1, 1},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__sqrt_a, 6,
             6},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega_0,
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
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__i_0, 3,
             3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__i_dot, 5,
             5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega, 5,
             5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__omega_dot,
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
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_uc, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_us, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_rc, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_rs, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_ic, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__c_is, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELD_NAME__t_oe, 4,
             4},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description =
      {
          {
              {aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME, 41, 41},
              {aspn23_ros_interfaces__msg__TypeKeplerOrbit__FIELDS, 16, 16},
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
    "# Keplerian orbit parameters required to calculate satellite position\n"
    "\n"
    "# Description: Mean anomaly at reference time.\n"
    "# Units: rad\n"
    "float64 m_0\n"
    "\n"
    "# Description: Mean motion difference from computed value.\n"
    "# Units: rad/s\n"
    "float64 delta_n\n"
    "\n"
    "# Description: Eccentricity.\n"
    "# Units: none\n"
    "float64 e\n"
    "\n"
    "# Description: Square root of semi-major axis.\n"
    "# Units: sqrt(m)\n"
    "float64 sqrt_a\n"
    "\n"
    "# Description: Longitude of ascending node of orbit plane at weekly "
    "epoch\n"
    "# Units: rad\n"
    "float64 omega_0\n"
    "\n"
    "# Description: Inclination angle at reference time.\n"
    "# Units: rad\n"
    "float64 i_0\n"
    "\n"
    "# Description: Rate of change of inclination angle.\n"
    "# Units: rad\n"
    "float64 i_dot\n"
    "\n"
    "# Description: Argument of perigee.\n"
    "# Units: rad\n"
    "float64 omega\n"
    "\n"
    "# Description: Rate of right ascension.\n"
    "# Units: rad/s\n"
    "float64 omega_dot\n"
    "\n"
    "# Description: Amplitude of cosine harmonic correction terms to the "
    "argument of latitude.\n"
    "# Units: rad\n"
    "float64 c_uc\n"
    "\n"
    "# Description: Amplitude of sine harmonic correction terms to the "
    "argument of latitude.\n"
    "# Units: rad\n"
    "float64 c_us\n"
    "\n"
    "# Description: Amplitude of cosine harmonic correction terms to the orbit "
    "radius.\n"
    "# Units: m\n"
    "float64 c_rc\n"
    "\n"
    "# Description: Amplitude of sine harmonic correction terms to the orbit "
    "radius.\n"
    "# Units: m\n"
    "float64 c_rs\n"
    "\n"
    "# Description: Amplitude of cosine harmonic correction terms to the angle "
    "of inclination.\n"
    "# Units: rad\n"
    "float64 c_ic\n"
    "\n"
    "# Description: Amplitude of sine harmonic correction terms to the angle "
    "of inclination.\n"
    "# Units: rad\n"
    "float64 c_is\n"
    "\n"
    "# Description: Ephemeris reference time.\n"
    "# Units: s\n"
    "float64 t_oe";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeKeplerOrbit__TYPE_NAME, 41, 41},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1635, 1635},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeKeplerOrbit__get_individual_type_description_source(
            NULL),
    constructed = true;
  }
  return &source_sequence;
}
