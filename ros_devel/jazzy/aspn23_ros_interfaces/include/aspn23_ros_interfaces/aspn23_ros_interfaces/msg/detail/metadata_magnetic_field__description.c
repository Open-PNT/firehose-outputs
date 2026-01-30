// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MetadataMagneticField.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x95, 0x56, 0x64, 0x6e, 0x42, 0x1c, 0xaf, 0xde, 0xd4, 0xcc, 0xa2,
          0xe7, 0x44, 0xa9, 0x73, 0x4a, 0x91, 0x09, 0xf4, 0x35, 0xab, 0x65,
          0x17, 0x85, 0x95, 0xdc, 0x93, 0xa2, 0x6d, 0x2c, 0xc1, 0x2d,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"
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
    aspn23_ros_interfaces__msg__TypeMounting__EXPECTED_HASH = {
        1,
        {
            0xbf, 0x70, 0xb7, 0x88, 0x6b, 0x71, 0x97, 0xca, 0x20, 0x63, 0xa3,
            0xc8, 0xc3, 0xbc, 0x12, 0x79, 0xe9, 0x08, 0xc6, 0x63, 0x7e, 0xfd,
            0xb8, 0x7a, 0x43, 0x0a, 0x9f, 0xde, 0xb7, 0x3b, 0x7d, 0xa9,
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

static char aspn23_ros_interfaces__msg__MetadataMagneticField__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MetadataMagneticField";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeMetadataheader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMetadataheader";
static char aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeMounting";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__info[] =
        "info";
static char
    aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__mounting[] =
        "mounting";
static char
    aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__num_meas[] =
        "num_meas";
static char aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__k[] =
    "k";
static char aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__b[] =
    "b";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MetadataMagneticField__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__info,
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
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__mounting,
             8, 8},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__num_meas,
             8, 8},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__k,
             1, 1},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELD_NAME__b,
             1, 1},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MetadataMagneticField__REFERENCED_TYPE_DESCRIPTIONS
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
                {aspn23_ros_interfaces__msg__TypeMounting__TYPE_NAME, 38, 38},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MetadataMagneticField__TYPE_NAME, 47,
           47},
          {aspn23_ros_interfaces__msg__MetadataMagneticField__FIELDS, 6, 6},
      },
      {aspn23_ros_interfaces__msg__MetadataMagneticField__REFERENCED_TYPE_DESCRIPTIONS,
       4, 4},
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
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeMounting__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeMounting__get_type_hash(NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeMounting__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields =
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
    "# Metadata for a magnetic field measurement. In addition to generic "
    "metadata information,\n"
    "# calibration parameters may be provided to account for effects such as "
    "soft iron, scale factor,\n"
    "# non-orthogonality, zero-bias, and hard iron. In general, for an "
    "num_meas-dimensional measurement,\n"
    "# the magnetic field calibration metadata (K and b) shall be used as\n"
    "# \n"
    "# m_calibrated = K * m_measured - b\n"
    "# \n"
    "# where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar "
    "for num_meas = 1) and K is\n"
    "# an num_meas x num_meas matrix (scalar for num_meas = 1). See "
    "magnetic_calibration.md for\n"
    "# additional details.\n"
    "# \n"
    "# More sophisticated approaches that include calibration parameters such "
    "as time-varying effects,\n"
    "# first-order Gauss-Markov bias models, and calibration parameter "
    "uncertainties may be included\n"
    "# using an appropriate error model in the measurement message.\n"
    "\n"
    "# Description: Standard ASPN metadata header.\n"
    "# Units: none\n"
    "TypeMetadataheader info\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Standard ASPN mounting information.\n"
    "# Units: none\n"
    "TypeMounting mounting\n"
    "\n"
    "# Description: Dimension of measurement for which this metadata is "
    "applicable. May be 1, 2, or 3.\n"
    "# Units: none\n"
    "uint8 num_meas\n"
    "\n"
    "# Description: Optional calibration parameter to account for the combined "
    "effects of soft iron, scale\n"
    "# factor, and non-orthogonality as a unitless num_meas x num_meas matrix. "
    "Optional, but if provided, b\n"
    "# must also be provided.\n"
    "# Units: none\n"
    "# Note: field represents a num_meas x num_meas matrix\n"
    "float64[] k\n"
    "\n"
    "# Description: Optional calibration parameter to account for the combined "
    "effects of zero-bias and\n"
    "# hard iron as a num_meas x 1 vector in nanoTesla (nT). Optional, but if "
    "provided, K must also be\n"
    "# provided.\n"
    "# Units: nT\n"
    "# Note: array length is num_meas\n"
    "float64[] b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MetadataMagneticField__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MetadataMagneticField__TYPE_NAME, 47, 47},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 1993, 1993},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MetadataMagneticField__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeMetadataheader__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeMounting__get_individual_type_description_source(
            NULL);
    sources[4] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
