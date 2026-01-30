// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from
// aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl generated
// code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0xe8, 0x14, 0xab, 0xd1, 0x84, 0x95, 0x36, 0x97, 0x82, 0x46, 0x3a,
          0x05, 0x5e, 0x8e, 0x82, 0x01, 0x62, 0xae, 0x26, 0x6a, 0x43, 0x54,
          0xf8, 0x96, 0x82, 0x40, 0x3b, 0xaa, 0x70, 0x7a, 0x4e, 0xbb,
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
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__TYPE_NAME
        [] = "aspn23_ros_interfaces/msg/MeasurementPositionVelocityAttitude";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__header
        [] = "header";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__reference_frame
        [] = "reference_frame";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p1
        [] = "p1";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p2
        [] = "p2";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p3
        [] = "p3";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v1
        [] = "v1";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v2
        [] = "v2";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v3
        [] = "v3";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__quaternion
        [] = "quaternion";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_meas
        [] = "num_meas";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__covariance
        [] = "covariance";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__error_model
        [] = "error_model";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_error_model_params
        [] = "num_error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__error_model_params
        [] = "error_model_params";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_integrity
        [] = "num_integrity";
static char
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__integrity
        [] = "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__header,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__reference_frame,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p1,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p2,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__p3,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v1,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v2,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__v3,
             2, 2},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__quaternion,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_meas,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__covariance,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__error_model,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_error_model_params,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__error_model_params,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__num_integrity,
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
            {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELD_NAME__integrity,
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
    aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__REFERENCED_TYPE_DESCRIPTIONS
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
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__TYPE_NAME,
           61, 61},
          {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__FIELDS,
           17, 17},
      },
      {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__REFERENCED_TYPE_DESCRIPTIONS,
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
    "# Position, velocity, and attitude. Position, in whole or in part, is "
    "optional. Velocity, in whole or\n"
    "# in part, is optional. Attitude is optional, but if included, must be "
    "3-dimensional. Position is\n"
    "# relative to a user-defined reference frame. Velocity is time rate of "
    "change of position with respect\n"
    "# to the user-specified reference frame. Attitude expressed as a "
    "quaternion, a four element vector\n"
    "# representation, the elements of which are functions of the orientation "
    "of the vector and the\n"
    "# magnitude of the rotation.\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Defines measurement reference.\n"
    "uint8 reference_frame\n"
    "\n"
    "# Sensor position, velocity, and attitude relative to the earth-centered, "
    "inertial (ECi) frame.\n"
    "# Position is expressed where p1, p2, and p3 are the x, y, and z "
    "components of ECI position in meters,\n"
    "# respectively. Velocity is expressed where v1, v2, and v3 are the x, y, "
    "and z components of velocity\n"
    "# with respect to the ECi frame in m/s, respectively. Attitude is "
    "expressed as a four-element\n"
    "# quaternion. Position, in whole or in part, is optional. Velocity, in "
    "whole or in part, is optional.\n"
    "# Attitude is optional, but if included, must be 3 dimensional. Error "
    "covariance is given using x-axis\n"
    "# position error component (meters), y-axis position error component "
    "(meters), z-axis position error\n"
    "# component (meters), x-axis velocity error component (m/s), y-axis "
    "velocity error component (m/s),\n"
    "# z-axis velocity error component (m/s), tilt error about the x-axis "
    "(rad), tilt error about the\n"
    "# y-axis (rad), and tilt error about the z-axis (rad). In the case of "
    "nulled position, velocity, or\n"
    "# attitude, the corresponding error covariance terms are omitted. See "
    "also ECi coordinate frame\n"
    "# definition for x, y, and z definitions.\n"
    "uint8 "
    "ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI=0\n"
    "\n"
    "# Sensor position, velocity, and attitude relative to the WGS-84 "
    "reference. Position is expressed\n"
    "# where p1 is the geodetic latitude in radians, p2 is the longitude in "
    "radians, and p3 is the geodetic\n"
    "# altitude (or height above the WGS-84 ellipsoid) in meters. Velocity "
    "with respect to the local level\n"
    "# geographical frame with the origin at the sensor position is expressed "
    "using the North-East-Down\n"
    "# (NED) convention, where v1 is the north velocity component in m/s, v2 "
    "is the east velocity component\n"
    "# in m/s, and v3 is the down velocity component in m/s. Attitude is the "
    "sensor frame rotation relative\n"
    "# to the local level frame expressed as a four-element quaternion. "
    "Position, in whole or in part, is\n"
    "# optional. Velocity, in whole or in part, is optional. Attitude is "
    "optional, but if included, must be\n"
    "# 3 dimensional. Error covariance is given using north-south position "
    "error (meters), east-west\n"
    "# position error (meters), geodetic altitude error (meters), north "
    "velocity component error (m/s),\n"
    "# east velocity component error (m/s), down velocity component error "
    "(m/s), tilt error about the north\n"
    "# axis (rad), tilt error about the east axis (rad), and tilt error about "
    "the down axis (rad). In the\n"
    "# case of nulled position, velocity, or attitude, the corresponding error "
    "covariance terms are\n"
    "# omitted.\n"
    "uint8 "
    "ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC=1\n"
    "\n"
    "# Description: First position term as defined in enum.\n"
    "# Units: various\n"
    "float64 p1\n"
    "\n"
    "# Description: Second position term as defined in enum.\n"
    "# Units: various\n"
    "float64 p2\n"
    "\n"
    "# Description: Third position term as defined in enum.\n"
    "# Units: m\n"
    "float64 p3\n"
    "\n"
    "# Description: Velocity along the first axis of the measurement reference "
    "frame enumerated in\n"
    "# reference_frame.\n"
    "# Units: m/s\n"
    "float64 v1\n"
    "\n"
    "# Description: Velocity along the second axis of the measurement "
    "reference frame enumerated in\n"
    "# reference_frame.\n"
    "# Units: m/s\n"
    "float64 v2\n"
    "\n"
    "# Description: Velocity along the third axis of the measurement reference "
    "frame enumerated in\n"
    "# reference_frame.\n"
    "# Units: m/s\n"
    "float64 v3\n"
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
    "# See \"conventions\" documentation for more detailed information.\n"
    "# Units: none\n"
    "float64[4] quaternion\n"
    "\n"
    "# Description: Dimension of measurement provided. In this sense, num_meas "
    "is the number of measurement\n"
    "# terms that include valid data.\n"
    "# Units: none\n"
    "uint8 num_meas\n"
    "\n"
    "# Description: Measurement error variance or covariance depending on "
    "measurement dimension. NOTE:\n"
    "# Attitude errors are expressed as tilt errors, so if an attitude is "
    "provided, that should count as 3\n"
    "# terms in num_meas. For example, a 3-D position, 3-D velocity, and "
    "attitude expressed as a quaternion\n"
    "# (which takes 10 terms total to describe) is num_meas = 9. A second "
    "example is a 3-D position and 3-D\n"
    "# velocity is num_meas = 6.\n"
    "# Units: various Dimensions of covariance must be num_meas\\xc2\\xb2\n"
    "# Note: field represents a num_meas x num_meas matrix\n"
    "float64[] covariance\n"
    "\n"
    "# Defines an optional error model for other than zero-mean, additive, "
    "white Gaussian noise (AWGN).\n"
    "uint8 error_model\n"
    "\n"
    "# No additional error model provided (num_error_model_params = 0).\n"
    "uint8 ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE=0\n"
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
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__TYPE_NAME,
       61, 61},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 6494, 6494},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_individual_type_description_source(
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
