// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeDirection3DToPoint.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_direction3_d_to_point__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x63, 0xfe, 0x2e, 0x68, 0x7e, 0xe6, 0x03, 0xc2, 0xa1, 0x45, 0x6b,
          0x8c, 0xc6, 0x76, 0xd1, 0xd7, 0x02, 0x2a, 0xf4, 0xa4, 0xa6, 0xfe,
          0xac, 0xc7, 0xf3, 0x2c, 0xe2, 0x5a, 0x16, 0xba, 0x94, 0x78,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeImageFeature__EXPECTED_HASH = {
        1,
        {
            0xb0, 0xa1, 0xc6, 0xee, 0x74, 0x7d, 0x70, 0x4a, 0xd3, 0xda, 0xdc,
            0x18, 0x86, 0xeb, 0x4f, 0xa1, 0xbd, 0xa0, 0xae, 0x0a, 0xdb, 0x93,
            0xba, 0x2c, 0x14, 0xb8, 0x59, 0x7a, 0xac, 0xf5, 0x2f, 0x83,
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
    aspn23_ros_interfaces__msg__TypeRemotePoint__EXPECTED_HASH = {
        1,
        {
            0xfd, 0x67, 0x29, 0x69, 0xed, 0xd4, 0xf7, 0xdd, 0x62, 0xd8, 0x36,
            0x20, 0xf5, 0x66, 0xe4, 0xdb, 0x18, 0xf6, 0x70, 0x0f, 0x0b, 0x81,
            0xee, 0xcc, 0x23, 0x0a, 0xb9, 0x3c, 0x57, 0x5c, 0xf8, 0xff,
        }};
#endif

static char aspn23_ros_interfaces__msg__TypeDirection3DToPoint__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeDirection3DToPoint";
static char aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeImageFeature";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeRemotePoint";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__remote_point
        [] = "remote_point";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__reference_frame
        [] = "reference_frame";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__obs[] =
        "obs";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__covariance
        [] = "covariance";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__has_observation_characteristics
        [] = "has_observation_characteristics";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__observation_characteristics
        [] = "observation_characteristics";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__error_model
        [] = "error_model";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__num_error_model_params
        [] = "num_error_model_params";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__error_model_params
        [] = "error_model_params";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__num_integrity
        [] = "num_integrity";
static char
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__integrity
        [] = "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__remote_point,
             12, 12},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME, 41,
                 41},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__reference_frame,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__obs,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
                2,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__covariance,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__has_observation_characteristics,
             31, 31},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__observation_characteristics,
             27, 27},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME, 42,
                 42},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__error_model,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__num_error_model_params,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__error_model_params,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__num_integrity,
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
            {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELD_NAME__integrity,
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
    aspn23_ros_interfaces__msg__TypeDirection3DToPoint__REFERENCED_TYPE_DESCRIPTIONS
        [] = {
            {
                {aspn23_ros_interfaces__msg__TypeImageFeature__TYPE_NAME, 42,
                 42},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeRemotePoint__TYPE_NAME, 41,
                 41},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__TYPE_NAME, 48,
           48},
          {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__FIELDS, 11, 11},
      },
      {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__REFERENCED_TYPE_DESCRIPTIONS,
       3, 3},
  };
  if (!constructed) {
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeImageFeature__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeImageFeature__get_type_hash(
                      NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields =
        aspn23_ros_interfaces__msg__TypeImageFeature__get_type_description(NULL)
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
        memcmp(&aspn23_ros_interfaces__msg__TypeRemotePoint__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeRemotePoint__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeRemotePoint__get_type_description(NULL)
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
    "# 3D direction to or from a point as defined by the reference enum. "
    "Information about the remote\n"
    "# point (its position and/or correspondence with previous or future "
    "appearances\n"
    "# of this same point) may be determined using remote_point.\n"
    "\n"
    "# Description: Position and/or correspondence information about the "
    "remote point.\n"
    "# Units: various\n"
    "TypeRemotePoint remote_point\n"
    "\n"
    "# Defines measurement reference frame.\n"
    "uint8 reference_frame\n"
    "\n"
    "# Azimuth (first component of obs) is the angle between the sensor frame "
    "x-axis (boresight) and the\n"
    "# projection of the point onto the sensor frame's x-y plane (positive "
    "right-hand rule about the sensor\n"
    "# frame z-axis). Elevation (second component of obs) is the angle between "
    "the sensor frame's x-y plane\n"
    "# and the vector from the sensor to the point (positive right-hand rule "
    "about the intermediate axis\n"
    "# formed by the azimuth rotation). The covariance is for the azimuth and "
    "elevation errors. Units for\n"
    "# the observation are in rad, covariance rad^2.\n"
    "uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL=0\n"
    "\n"
    "# The pixel coordinates of the point in an image (sub-pixel resolution is "
    "allowed). When combined with\n"
    "# the camera model, these can be converted to the NORMALIZED_IMAGE "
    "reference frame representation.\n"
    "# Units for the observation are in pixels, covariance pixels^2.\n"
    "uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL=1\n"
    "\n"
    "# 2D position from the sensor frame origin to the point expressed in "
    "components y and z of the sensor\n"
    "# frame normalized by the boresight distance. The x component of the "
    "sensor frame is the boresight\n"
    "# axis. Units for the observation are m/m, covariance (m/m)^2.\n"
    "uint8 "
    "ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE=2\n"
    "\n"
    "# 2D position from the sensor frame origin to the point expressed in "
    "components y and z of the sensor\n"
    "# frame normalized by the range to the point. The x component of the "
    "sensor frame is the boresight\n"
    "# axis. Units for the observation are m/m, covariance (m/m)^2.\n"
    "uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE=3\n"
    "\n"
    "# Description: 3D direction to the remote point as defined in "
    "reference_frame.\n"
    "# Units: various\n"
    "float64[2] obs\n"
    "\n"
    "# Description: Covariance of the direction measurement as defined in "
    "reference_frame.\n"
    "# Units: various\n"
    "# Note: field represents a 2 x 2 matrix\n"
    "float64[4] covariance\n"
    "\n"
    "# Description: Switch for whether observation_characteristics is valid or "
    "not.\n"
    "# Units: none\n"
    "bool has_observation_characteristics\n"
    "\n"
    "# Description: Image feature characteristics.\n"
    "# Units: various\n"
    "TypeImageFeature observation_characteristics\n"
    "\n"
    "# Defines an optional error model for other than zero-mean, additive, "
    "white Gaussian noise (AWGN).\n"
    "uint8 error_model\n"
    "\n"
    "# No additional error model provided (num_error_model_params = 0).\n"
    "uint8 ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE=0\n"
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
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeDirection3DToPoint__TYPE_NAME, 48, 48},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 3671, 3671},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeDirection3DToPoint__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeDirection3DToPoint__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeImageFeature__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeRemotePoint__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
