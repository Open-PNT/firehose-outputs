// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementDeltaPosition.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_delta_position__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MeasurementDeltaPosition__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x18, 0x7b, 0xc8, 0x3a, 0x78, 0x27, 0xe2, 0xfc, 0x90, 0x28, 0x22,
          0x5b, 0x54, 0x71, 0x57, 0x9f, 0xf4, 0x3c, 0x47, 0xcf, 0xd0, 0x7a,
          0x2d, 0xf3, 0xc8, 0x54, 0x1c, 0x76, 0xab, 0x0d, 0xf4, 0xbc,
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

static char aspn23_ros_interfaces__msg__MeasurementDeltaPosition__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/MeasurementDeltaPosition";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__header[] =
        "header";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__reference_frame
        [] = "reference_frame";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__delta_t
        [] = "delta_t";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_meas
        [] = "num_meas";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term1[] =
        "term1";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term2[] =
        "term2";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term3[] =
        "term3";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__covariance
        [] = "covariance";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__error_model
        [] = "error_model";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_error_model_params
        [] = "num_error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__error_model_params
        [] = "error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_integrity
        [] = "num_integrity";
static char
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__integrity
        [] = "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__header,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__reference_frame,
             15, 15},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__delta_t,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_meas,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term1,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term2,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__term3,
             5, 5},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__covariance,
             10, 10},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__error_model,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_error_model_params,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__error_model_params,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__num_integrity,
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
            {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELD_NAME__integrity,
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
    aspn23_ros_interfaces__msg__MeasurementDeltaPosition__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MeasurementDeltaPosition__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__TYPE_NAME, 50,
           50},
          {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__FIELDS, 14,
           14},
      },
      {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# Delta position is the change in position from the position at time "
    "(time_of_validity - delta_t) to\n"
    "# the position at time (time_of_validity), where the change in position "
    "is reported along each axis of\n"
    "# the reference frame. The reference frame is chosen by the user in the "
    "reference enum.\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid at "
    "the end of the\n"
    "# delta-position period.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Specifies measurement reference frame.\n"
    "uint8 reference_frame\n"
    "\n"
    "# Change in position along the N, E, and D axes of the locally level NED "
    "frame. Each direction is\n"
    "# optional. term1, term2, and term3, if provided, describe the change in "
    "position along the N, E, and\n"
    "# D axes, respectively. For example, a depth sensor may report a change "
    "in position of +2m along the D\n"
    "# axis by omitting term1 and term2 (using the appropriate null) and using "
    "term3 = 2. This observation\n"
    "# may be interpreted as (1) the sensor has no knowledge of the change in "
    "position in the N and E\n"
    "# directions, and (2) the sensor observed that the position at the end of "
    "the observation time\n"
    "# interval, time_of_validity, is 2 meters lower than the position at the "
    "start of the time interval,\n"
    "# time_of_validity - delta_t. See also NED coordinate frame definition "
    "for N, E, and D definitions.\n"
    "uint8 ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED=0\n"
    "\n"
    "# Change in position expressed in the sensor frame at the start of the "
    "measurement interval as defined\n"
    "# in mounting. Each direction is optional. term1, term2, and term3, if "
    "provided, describe the change\n"
    "# in position along the sensor x, y, and z axes, respectively.\n"
    "uint8 ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START=1\n"
    "\n"
    "# Change in position expressed in the sensor frame at the end of the "
    "measurement interval as defined\n"
    "# in mounting. Each direction is optional. term1, term2, and term3, if "
    "provided, describe the change\n"
    "# in position along the sensor x, y, and z axes, respectively.\n"
    "uint8 ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END=2\n"
    "\n"
    "# Description: Duration of the observation time interval. The "
    "time_of_validity denotes the end of the\n"
    "# time interval. The start of the time interval is time_of_validity - "
    "delta_t.\n"
    "# Units: sec\n"
    "float64 delta_t\n"
    "\n"
    "# Description: Dimension of measurement provided.\n"
    "# Units: none\n"
    "uint8 num_meas\n"
    "\n"
    "# Description: Delta position over the first dimension specified by the "
    "enum.\n"
    "# Units: m\n"
    "float64 term1\n"
    "\n"
    "# Description: Delta position over the second dimension specified by the "
    "enum.\n"
    "# Units: m\n"
    "float64 term2\n"
    "\n"
    "# Description: Delta position over the third dimension specified by the "
    "enum.\n"
    "# Units: m\n"
    "float64 term3\n"
    "\n"
    "# Description: Variance or covariance matrix depending on measurement "
    "dimension.\n"
    "# Units: m^2 Dimensions of covariance must be num_meas\\xc2\\xb2\n"
    "# Note: field represents a num_meas x num_meas matrix\n"
    "float64[] covariance\n"
    "\n"
    "# Defines an optional error model for other than zero-mean, additive, "
    "white Gaussian noise (AWGN).\n"
    "uint8 error_model\n"
    "\n"
    "# No additional error model provided (num_error_model_params = 0).\n"
    "uint8 ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE=0\n"
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
aspn23_ros_interfaces__msg__MeasurementDeltaPosition__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MeasurementDeltaPosition__TYPE_NAME, 50, 50},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 4050, 4050},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MeasurementDeltaPosition__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MeasurementDeltaPosition__get_individual_type_description_source(
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
