// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementTimeFrequencyDifference.idl generated
// code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_time_frequency_difference__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x13, 0x73, 0x76, 0x84, 0x4d, 0x1a, 0x96, 0x17, 0xaa, 0x54, 0x3d,
          0x60, 0x6c, 0xc4, 0x8e, 0x23, 0xb5, 0x08, 0x4a, 0x43, 0xd5, 0x88,
          0x29, 0x5b, 0x43, 0xb6, 0x44, 0x24, 0x77, 0xe0, 0x86, 0xee,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
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
    aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH = {
        1,
        {
            0xb6, 0x77, 0x12, 0x1d, 0xee, 0x5b, 0xa0, 0xc1, 0xa8, 0x96, 0xd0,
            0x99, 0xad, 0x0e, 0x84, 0x6b, 0x52, 0x32, 0x69, 0x4b, 0x6d, 0xab,
            0x9d, 0x31, 0xca, 0xdb, 0xa6, 0x0d, 0xe1, 0x5d, 0x66, 0x17,
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

static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__TYPE_NAME
        [] = "aspn23_ros_interfaces/msg/MeasurementTimeFrequencyDifference";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__header
        [] = "header";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_of_validity_attosec
        [] = "time_of_validity_attosec";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__clock_id1
        [] = "clock_id1";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__clock_id2
        [] = "clock_id2";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_diff_nsec
        [] = "time_diff_nsec";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_diff_attosec
        [] = "time_diff_attosec";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__digits_of_precision
        [] = "digits_of_precision";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__freq_diff
        [] = "freq_diff";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__covariance
        [] = "covariance";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__error_model
        [] = "error_model";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__num_error_model_params
        [] = "num_error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__error_model_params
        [] = "error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__num_integrity
        [] = "num_integrity";
static char
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__integrity
        [] = "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__header,
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
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_of_validity_attosec,
             24, 24},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__clock_id1,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__clock_id2,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_diff_nsec,
             14, 14},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__time_diff_attosec,
             17, 17},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__digits_of_precision,
             19, 19},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__freq_diff,
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
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__covariance,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                4,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__error_model,
             11, 11},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__num_error_model_params,
             22, 22},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__error_model_params,
             18, 18},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__num_integrity,
             13, 13},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELD_NAME__integrity,
             9, 9},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
            },
            {NULL, 0, 0},
        },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription
    aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME, 36, 36},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__TYPE_NAME,
           60, 60},
          {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__FIELDS,
           15, 15},
      },
      {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__REFERENCED_TYPE_DESCRIPTIONS,
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
        memcmp(&aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeIntegrity__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
        aspn23_ros_interfaces__msg__TypeIntegrity__get_type_description(NULL)
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
    "# Time and frequency difference between two clocks or timing sources. "
    "This measurement\n"
    "# requires both time and frequency to be provided.\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Whole number of attoseconds used to provide additional "
    "timestamp fidelity describing\n"
    "# the time at\n"
    "# which the measurement is considered to be valid. This is only needed if "
    "the time of validity is\n"
    "# known to more precision than 1ns; otherwise, set "
    "time_of_validity_attosec = 0. Be sure to\n"
    "# report the timestamp's digits of precision in the `type_metadataheader` "
    "as part of the metadata.\n"
    "# \n"
    "# The full timestamp in nanoseconds is calculated as\n"
    "# \n"
    "# time_of_validity + ( time_of_validity_attosec * 1E-9 )\n"
    "# \n"
    "# and if needed, a timestamp in seconds is calculated as\n"
    "# \n"
    "# time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18\n"
    "# \n"
    "# (Recall time_of_validity is in nanoseconds and time_of_validity_attosec "
    "is in attoseconds.)\n"
    "# Furthermore, both time_of_validity and time_of_validity_attosec are "
    "signed integers and may be\n"
    "# positive or negative. It is recommended to make time_of_validity and "
    "time_of_validity_attosec\n"
    "# the same sign. Care should be taken when constructing the timestamp "
    "components to be sure the\n"
    "# summation produces the desired result.\n"
    "# Units: attoseconds\n"
    "int32 time_of_validity_attosec\n"
    "\n"
    "# Description: Identifier for clock/timing source 2. See "
    "clock_identifiers.md for a full description,\n"
    "# but the\n"
    "# summary is as follows:\n"
    "# 0 = ASPN System Time\n"
    "# 1 = International Atomic Time (TAI)\n"
    "# 2 = Universal Coordinated Time (UTC)\n"
    "# 3 = GPS System Time\n"
    "# 4 = Galileo System Time\n"
    "# 5 = GLONASS System Time\n"
    "# 6 = BeiDou System Time\n"
    "# 7-50: Reserved for future additional time scale representations.\n"
    "# Units: none\n"
    "uint8 clock_id1\n"
    "\n"
    "# Description: Identifier for clock/timing source 2. See "
    "clock_identifiers.md for a full description,\n"
    "# but the summary is as follows:\n"
    "# 0 = ASPN System Time\n"
    "# 1 = International Atomic Time (TAI)\n"
    "# 2 = Universal Coordinated Time (UTC)\n"
    "# 3 = GPS System Time\n"
    "# 4 = Galileo System Time\n"
    "# 5 = GLONASS System Time\n"
    "# 6 = BeiDou System Time\n"
    "# 7-50: Reserved for future additional time scale representations.\n"
    "# Units: none\n"
    "uint8 clock_id2\n"
    "\n"
    "# Description: Whole number nanoseconds in time difference (time from "
    "clock_id1) - (time from\n"
    "# clock_id2). This value shall be positive when (time from clock_id1) - "
    "(time from clock_id2) is\n"
    "# greater than or equal to zero. This value shall be negative when (time "
    "from clock_id1) - (time from\n"
    "# clock_id2) is less than zero.Additionally, the timestamp's digits of "
    "precision are included as\n"
    "# `digits_of_precision`.\n"
    "# Units: nanoseconds\n"
    "int64 time_diff_nsec\n"
    "\n"
    "# Description: Whole number attoseconds in time difference (time from "
    "clock_id1) - (time from\n"
    "# clock_id2). Must be less than 1e9. This value shall be positive when "
    "(time from clock_id1) - (time\n"
    "# from clock_id2) is greater than or equal to zero. This value shall be "
    "negative when (time from\n"
    "# clock_id1) - (time from clock_id2) is less than zero.\n"
    "# This is only needed if the time of validity is known to more precision "
    "than 1ns; otherwise, set\n"
    "# time_of_validity_attosec = 0. Be sure to report the timestamp's digits "
    "of precision.\n"
    "# The time difference in seconds is calculated as\n"
    "# \n"
    "# time difference = time_diff_nsec * 1e-9 + time_diff_attosec * 1e-18\n"
    "# \n"
    "# It shall be assumed that time_diff_nsec and time_diff_attosec have the "
    "same sign. Therefore, the\n"
    "# time difference is positive when (time from clock_id1) - (time from "
    "clock_id2) is positive and the\n"
    "# time difference is negative when (time from clock_id1) - (time from "
    "clock_id2) is negative.\n"
    "# A cautionary note: Both timediff_nsec and time_diff_attosec are signed "
    "integers and may be positive\n"
    "# or negative. It is mandated to make timediff_nsec and time_diff_attosec "
    "the same sign; however, care\n"
    "# should be taken when constructing the observation components to be sure "
    "the summation produces the\n"
    "# desired result.\n"
    "# Units: attoseconds\n"
    "int32 time_diff_attosec\n"
    "\n"
    "# Description: Defines how many decimal digits of precision are "
    "represented in the observation after\n"
    "# the decimal point. The precision of the observation is 10E-N, where N "
    "is digits_of_precision. A\n"
    "# value of 3 would mean that the observation has precision at the 10E-3 "
    "(millisecond) level, a value\n"
    "# of 6 would mean the observation has precision at the 10E-6 "
    "(microsecond) level, etc.\n"
    "# Units: none\n"
    "uint8 digits_of_precision\n"
    "\n"
    "# Description: Frequency difference formed as (frequency from clock_id1) "
    "- (frequency from clock_id2).\n"
    "# Units: Hertz\n"
    "float64 freq_diff\n"
    "\n"
    "# Description: Covariance information for the time/frequency measurement. "
    "Using zero-indexing, the\n"
    "# [0,0] element has units of sec^2, the [1,1] element has units of "
    "Hertz^2, and the off-diagonal terms\n"
    "# have units of sec*Hertz.\n"
    "# Units: various\n"
    "# Note: field represents a 2 x 2 matrix\n"
    "float64[4] covariance\n"
    "\n"
    "# Defines an optional error model for other than zero-mean, additive, "
    "white Gaussian noise (AWGN).\n"
    "uint8 error_model\n"
    "\n"
    "# No additional error model provided (num_error_model_params = 0).\n"
    "uint8 ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE=0\n"
    "\n"
    "# Description: Number of parameters required for the error model chosen.\n"
    "# Units: none\n"
    "uint16 num_error_model_params\n"
    "\n"
    "# Description: Error model parameters that characterize the optional "
    "error model.\n"
    "# Units: various\n"
    "# Note: array length is num_error_model_params\n"
    "float64[] error_model_params\n"
    "\n"
    "# Description: Number of integrity values.\n"
    "# Units: none\n"
    "uint8 num_integrity\n"
    "\n"
    "# Description: Measurement integrity. Includes the integrity method used "
    "and an integrity value (which\n"
    "# is to be interpreted based upon the integrity method). The intent of "
    "allowing num_integrity > 1 is\n"
    "# to report multiple integrity values based on multiple integrity "
    "methods.\n"
    "# Units: none\n"
    "# Note: array length is num_integrity\n"
    "TypeIntegrity[] integrity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__TYPE_NAME,
       60, 60},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 6093, 6093},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
