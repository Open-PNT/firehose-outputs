// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x57, 0xd8, 0x85, 0x08, 0x82, 0x32, 0x0a, 0xc5, 0x19, 0x34, 0x88,
          0xde, 0x15, 0x73, 0x68, 0x6d, 0xaa, 0xcf, 0x52, 0xa8, 0x2d, 0xf0,
          0xf7, 0x42, 0xdc, 0xd6, 0x6b, 0x22, 0x94, 0xd5, 0x56, 0x12,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_sv_data__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__functions.h"
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
    aspn23_ros_interfaces__msg__TypeSatnavObs__EXPECTED_HASH = {
        1,
        {
            0x11, 0xee, 0x77, 0xdc, 0x84, 0x8f, 0x92, 0x34, 0xc7, 0x3d, 0x2a,
            0x64, 0x9e, 0x43, 0x45, 0xc9, 0xbc, 0x7e, 0x65, 0x14, 0x78, 0xb5,
            0xbf, 0x5e, 0x45, 0x8b, 0x8f, 0x16, 0xaa, 0x7e, 0x68, 0x50,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__EXPECTED_HASH = {
        1,
        {
            0xfb, 0x18, 0xf1, 0xc5, 0x21, 0xc7, 0xd6, 0x91, 0x51, 0x57, 0x15,
            0x0c, 0x22, 0x58, 0x63, 0xf5, 0x31, 0x55, 0x1e, 0xf6, 0x3a, 0xc0,
            0x75, 0x7a, 0xeb, 0xbd, 0x05, 0xfc, 0x4a, 0xbc, 0xff, 0x3a,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__EXPECTED_HASH = {
        1,
        {
            0xd0, 0xd1, 0xea, 0x95, 0x8d, 0xde, 0x82, 0x7a, 0x70, 0x34, 0xd2,
            0xcf, 0xb2, 0xaf, 0x1d, 0x05, 0x62, 0xf2, 0x20, 0x1d, 0xae, 0x0d,
            0x58, 0x44, 0x56, 0x80, 0x93, 0xa4, 0xa7, 0xf8, 0xe4, 0xc0,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavSvData__EXPECTED_HASH = {
        1,
        {
            0xd8, 0x71, 0x4b, 0x62, 0x22, 0x37, 0x33, 0x49, 0xbe, 0x0a, 0x27,
            0x92, 0xb8, 0x17, 0x58, 0xbc, 0x82, 0x96, 0xf9, 0xa1, 0xcb, 0x12,
            0xa4, 0xb1, 0x0e, 0x83, 0xb7, 0xa7, 0x82, 0x8c, 0x71, 0x0c,
        }};
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeSatnavTime__EXPECTED_HASH = {
        1,
        {
            0x4f, 0x03, 0xeb, 0x4c, 0xf9, 0x94, 0xf6, 0x9b, 0x7a, 0x62, 0xaf,
            0x47, 0x1e, 0x74, 0x83, 0xf1, 0x56, 0x5a, 0x93, 0x8a, 0xe9, 0x24,
            0xf9, 0x2c, 0x9a, 0xb1, 0x12, 0x6c, 0xa7, 0x4c, 0xc6, 0x87,
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
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__TYPE_NAME[] =
        "aspn23_ros_interfaces/msg/MeasurementSatnavWithSvData";
static char aspn23_ros_interfaces__msg__TypeHeader__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeHeader";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavObs";
static char aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSatelliteSystem";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME[] =
        "aspn23_ros_interfaces/msg/TypeSatnavSignalDescriptor";
static char aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSvData";
static char aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavTime";
static char aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeTimestamp";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__header
        [] = "header";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__time_of_validity
        [] = "time_of_validity";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__receiver_clock_time
        [] = "receiver_clock_time";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_signal_types
        [] = "num_signal_types";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_signals_tracked
        [] = "num_signals_tracked";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__obs[] =
        "obs";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__sv_data
        [] = "sv_data";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_integrity
        [] = "num_integrity";
static char
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__integrity
        [] = "integrity";

static rosidl_runtime_c__type_description__Field
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELDS[] = {
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__header,
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
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__time_of_validity,
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
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__receiver_clock_time,
             19, 19},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_signal_types,
             16, 16},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_signals_tracked,
             19, 19},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
                0,
                0,
                {NULL, 0, 0},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__obs,
             3, 3},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME, 39, 39},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__sv_data,
             7, 7},
            {
                rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
                0,
                0,
                {aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME, 42,
                 42},
            },
            {NULL, 0, 0},
        },
        {
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__num_integrity,
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
            {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELD_NAME__integrity,
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
    aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__REFERENCED_TYPE_DESCRIPTIONS
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
                {aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME,
                 51, 51},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME,
                 52, 52},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavSvData__TYPE_NAME, 42,
                 42},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeSatnavTime__TYPE_NAME, 40, 40},
                {NULL, 0, 0},
            },
            {
                {aspn23_ros_interfaces__msg__TypeTimestamp__TYPE_NAME, 39, 39},
                {NULL, 0, 0},
            },
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__TYPE_NAME,
           53, 53},
          {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__FIELDS, 9,
           9},
      },
      {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__REFERENCED_TYPE_DESCRIPTIONS,
       8, 8},
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
        memcmp(&aspn23_ros_interfaces__msg__TypeSatnavObs__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(
            &aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_hash(
                NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields =
        aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_description(
            NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(
            &aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_hash(
                NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields =
        aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_description(
            NULL)
            ->type_description.fields;
    assert(0 ==
           memcmp(&aspn23_ros_interfaces__msg__TypeSatnavSvData__EXPECTED_HASH,
                  aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_hash(
                      NULL),
                  sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields =
        aspn23_ros_interfaces__msg__TypeSatnavSvData__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeSatnavTime__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields =
        aspn23_ros_interfaces__msg__TypeSatnavTime__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeTimestamp__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeTimestamp__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields =
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
    "# Raw measurements from a satnav receiver.\n"
    "\n"
    "# Description: Standard ASPN measurement header.\n"
    "# Units: none\n"
    "TypeHeader header\n"
    "\n"
    "# Description: Time at which the measurement is considered to be valid.\n"
    "# Units: none\n"
    "TypeTimestamp time_of_validity\n"
    "\n"
    "# Description: Receiver clock time. In a multi-GNSS receiver "
    "(GPS/GLONASS/Galileo/QZSS/BeiDou) all\n"
    "# pseudorange observations must refer to one receiver clock only. The "
    "receiver clock time of the\n"
    "# measurement is the receiver clock time of the received signals. It is "
    "identical for the phase and\n"
    "# range measurements and is identical for all satellites observed in a "
    "given epoch.\n"
    "# Units: none\n"
    "TypeSatnavTime receiver_clock_time\n"
    "\n"
    "# Description: Number of different signal types tracked in the current "
    "epoch. Examples of signal types\n"
    "# include GPS L1 C/A code, Galileo E1B.\n"
    "# Units: none\n"
    "uint16 num_signal_types\n"
    "\n"
    "# Description: Total number of signals tracked across all PRNs and signal "
    "types.\n"
    "# Units: none\n"
    "uint16 num_signals_tracked\n"
    "\n"
    "# Description: Array of satnav obs data for all of the signals/PRNs being "
    "tracked in this epoch.\n"
    "# Units: none\n"
    "# Note: array length is num_signals_tracked\n"
    "TypeSatnavObs[] obs\n"
    "\n"
    "# Description: Array of satellite position, velocity, and clock "
    "information. These line up precisely\n"
    "# with the obs, such that sv_data[N] is the satellite information for "
    "observations obs[N] for any\n"
    "# valid N.\n"
    "# Units: none\n"
    "# Note: array length is num_signals_tracked\n"
    "TypeSatnavSvData[] sv_data\n"
    "\n"
    "# Description: Number of integrity values.\n"
    "# Units: none\n"
    "uint8 num_integrity\n"
    "\n"
    "# Description: Measurement integrity at the sensor level. Integrity is "
    "also available for each\n"
    "# observable, which is found in the observable type definition. Includes "
    "the integrity method used and\n"
    "# an integrity value (which is to be interpreted based upon the integrity "
    "method). The intent of\n"
    "# allowing num_integrity > 1 is to report multiple integrity values based "
    "on multiple integrity\n"
    "# methods.\n"
    "# Units: none\n"
    "# Note: array length is num_integrity\n"
    "TypeIntegrity[] integrity";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__TYPE_NAME, 53,
       53},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 2134, 2134},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeHeader__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeSatnavObs__get_individual_type_description_source(
            NULL);
    sources[4] =
        *aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_individual_type_description_source(
            NULL);
    sources[5] =
        *aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_individual_type_description_source(
            NULL);
    sources[6] =
        *aspn23_ros_interfaces__msg__TypeSatnavSvData__get_individual_type_description_source(
            NULL);
    sources[7] =
        *aspn23_ros_interfaces__msg__TypeSatnavTime__get_individual_type_description_source(
            NULL);
    sources[8] =
        *aspn23_ros_interfaces__msg__TypeTimestamp__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
