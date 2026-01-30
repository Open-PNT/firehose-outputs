// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice

#include "aspn23_ros_interfaces/msg/detail/type_satnav_obs__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces const rosidl_type_hash_t *
aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_hash(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_type_hash_t hash = {
      1,
      {
          0x11, 0xee, 0x77, 0xdc, 0x84, 0x8f, 0x92, 0x34, 0xc7, 0x3d, 0x2a,
          0x64, 0x9e, 0x43, 0x45, 0xc9, 0xbc, 0x7e, 0x65, 0x14, 0x78, 0xb5,
          0xbf, 0x5e, 0x45, 0x8b, 0x8f, 0x16, 0xaa, 0x7e, 0x68, 0x50,
      }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t
    aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH = {
        1,
        {
            0xb6, 0x77, 0x12, 0x1d, 0xee, 0x5b, 0xa0, 0xc1, 0xa8, 0x96, 0xd0,
            0x99, 0xad, 0x0e, 0x84, 0x6b, 0x52, 0x32, 0x69, 0x4b, 0x6d, 0xab,
            0x9d, 0x31, 0xca, 0xdb, 0xa6, 0x0d, 0xe1, 0x5d, 0x66, 0x17,
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
#endif

static char aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavObs";
static char aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeIntegrity";
static char aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME[] =
    "aspn23_ros_interfaces/msg/TypeSatnavSatelliteSystem";
static char
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME[] =
        "aspn23_ros_interfaces/msg/TypeSatnavSignalDescriptor";

// Define type names, field names, and default values
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__satellite_system[] =
        "satellite_system";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__signal_descriptor[] =
        "signal_descriptor";
static char aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__prn[] =
    "prn";
static char aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__frequency[] =
    "frequency";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange[] =
        "pseudorange";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_variance
        [] = "pseudorange_variance";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate_type
        [] = "pseudorange_rate_type";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate[] =
        "pseudorange_rate";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate_variance
        [] = "pseudorange_rate_variance";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__carrier_phase[] =
        "carrier_phase";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__carrier_phase_variance
        [] = "carrier_phase_variance";
static char aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__c_n0[] =
    "c_n0";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__lock_count[] =
        "lock_count";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__iono_correction_source
        [] = "iono_correction_source";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__iono_correction_applied
        [] = "iono_correction_applied";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__tropo_correction_applied
        [] = "tropo_correction_applied";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__signal_bias_correction_applied
        [] = "signal_bias_correction_applied";
static char
    aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__num_integrity[] =
        "num_integrity";
static char aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__integrity[] =
    "integrity";

static rosidl_runtime_c__type_description__Field aspn23_ros_interfaces__msg__TypeSatnavObs__FIELDS[] = {
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__satellite_system,
         16, 16},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
            0,
            0,
            {aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__TYPE_NAME,
             51, 51},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__signal_descriptor,
         17, 17},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
            0,
            0,
            {aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__TYPE_NAME,
             52, 52},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__prn, 3, 3},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__frequency, 9,
         9},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange, 11,
         11},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_variance,
         20, 20},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate_type,
         21, 21},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate,
         16, 16},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__pseudorange_rate_variance,
         25, 25},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__carrier_phase,
         13, 13},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__carrier_phase_variance,
         22, 22},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__c_n0, 4, 4},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__lock_count, 10,
         10},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__iono_correction_source,
         22, 22},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__iono_correction_applied,
         23, 23},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__tropo_correction_applied,
         24, 24},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__signal_bias_correction_applied,
         30, 30},
        {
            rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
            0,
            0,
            {NULL, 0, 0},
        },
        {NULL, 0, 0},
    },
    {
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__num_integrity,
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
        {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELD_NAME__integrity, 9,
         9},
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
    aspn23_ros_interfaces__msg__TypeSatnavObs__REFERENCED_TYPE_DESCRIPTIONS[] = {
        {
            {aspn23_ros_interfaces__msg__TypeIntegrity__TYPE_NAME, 39, 39},
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
};

const rosidl_runtime_c__type_description__TypeDescription *
aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_description(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
      {
          {aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME, 39, 39},
          {aspn23_ros_interfaces__msg__TypeSatnavObs__FIELDS, 19, 19},
      },
      {aspn23_ros_interfaces__msg__TypeSatnavObs__REFERENCED_TYPE_DESCRIPTIONS,
       3, 3},
  };
  if (!constructed) {
    assert(
        0 ==
        memcmp(&aspn23_ros_interfaces__msg__TypeIntegrity__EXPECTED_HASH,
               aspn23_ros_interfaces__msg__TypeIntegrity__get_type_hash(NULL),
               sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields =
        aspn23_ros_interfaces__msg__TypeIntegrity__get_type_description(NULL)
            ->type_description.fields;
    assert(
        0 ==
        memcmp(
            &aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__EXPECTED_HASH,
            aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_type_hash(
                NULL),
            sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields =
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
    description.referenced_type_descriptions.data[2].fields =
        aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_type_description(
            NULL)
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
    "# Defines measurements that come from a satnav receiver tracking a single "
    "signal from a single\n"
    "# satellite.\n"
    "\n"
    "# Description: Enumerated field which describes the Satellite System that "
    "generated the observations.\n"
    "# Units: none\n"
    "TypeSatnavSatelliteSystem satellite_system\n"
    "\n"
    "# Description: Satellite signal descriptor as defined in RINEX 3.05\n"
    "# Units: none\n"
    "TypeSatnavSignalDescriptor signal_descriptor\n"
    "\n"
    "# Description: PRN code which identifies satellite (or slot number, in "
    "the case of GLONASS) for the\n"
    "# observables.\n"
    "# Units: none\n"
    "int16 prn\n"
    "\n"
    "# Description: Center frequency of signal. For GLONASS, this should be "
    "the center frequency of the\n"
    "# frequency-shifted signal with the k value taken into account.\n"
    "# Units: Hz\n"
    "float64 frequency\n"
    "\n"
    "# Description: Pseudorange measurement\n"
    "# Units: m\n"
    "float64 pseudorange\n"
    "\n"
    "# Description: Variance of pseudorange measurement noise/multipath. This "
    "value must be provided if the\n"
    "# pseudorange measurement is provided. Note: This is not intended to "
    "represent clock, atmospheric, or\n"
    "# satellite position errors.\n"
    "# Units: m^2\n"
    "float32 pseudorange_variance\n"
    "\n"
    "# Indicates the type of measurement contained in pseudorange_rate.\n"
    "uint8 pseudorange_rate_type\n"
    "\n"
    "# Instantaneous Doppler at measurement time. Units = Hz Cov. Units = "
    "Hz^2\n"
    "uint8 ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER=0\n"
    "\n"
    "# Change in pseudorange (integrated Doppler) over a specified time "
    "interval. The interval is provided\n"
    "# in metadata_satnav_obs. Units = m Cov. Units = m^2\n"
    "uint8 "
    "ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE=1\n"
    "\n"
    "# Description: Measurement of the change in the pseudorange. See "
    "pseudorange_rate_type for details.\n"
    "# Units: Hz or m\n"
    "float64 pseudorange_rate\n"
    "\n"
    "# Description: Variance of pseudorange_rate noise. This value must be "
    "provided if the pseudorange_rate\n"
    "# measurement is provided.\n"
    "# Units: Hz^2 or m^2\n"
    "float32 pseudorange_rate_variance\n"
    "\n"
    "# Description: Carrier-phase (integrated Doppler) measurement. This "
    "measurement has an N cycle\n"
    "# ambiguity (where N is unknown and arbitrary integer).\n"
    "# Units: cycles (1 cycle = wavelength of carrier frequency)\n"
    "float64 carrier_phase\n"
    "\n"
    "# Description: Variance of carrier-phase noise/multipath. This value must "
    "be provided if the\n"
    "# carrier-phase measurement is provided. Note: This is not intended to "
    "represent clock, atmospheric,\n"
    "# or satellite position errors or the integer N ambiguity.\n"
    "# Units: cycles^2\n"
    "float32 carrier_phase_variance\n"
    "\n"
    "# Description: Carrier to noise density ratio. C/N0 = 10[log10(S/N0)]\n"
    "# Units: db-Hz\n"
    "float32 c_n0\n"
    "\n"
    "# Description: Number of observations with continuous tracking (no cycle "
    "slips). Value of -1 means\n"
    "# that there is no loss of lock information available. First lock_count "
    "after cycle slip has occurred\n"
    "# will have a value of 0. The lock_count only applies to the "
    "carrier-phase measurement.\n"
    "# Units: none\n"
    "int32 lock_count\n"
    "\n"
    "# Enumerated field which describes the source of the ionospheric delay "
    "correction.\n"
    "uint8 iono_correction_source\n"
    "\n"
    "# unknown source\n"
    "uint8 ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN=0\n"
    "\n"
    "# modeled using the ionospheric models in IS-GPS-200, IS-GPS-700, or "
    "IS-GPS-800\n"
    "uint8 ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED=1\n"
    "\n"
    "# measured using dual frequencies\n"
    "uint8 ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED=2\n"
    "\n"
    "# Description: Identifies if the ionospheric correction has been applied "
    "to the measurement. 1 =\n"
    "# Applied.\n"
    "# Units: none\n"
    "bool iono_correction_applied\n"
    "\n"
    "# Description: Identifies if the tropospheric correction has been applied "
    "to the measurement. 1 =\n"
    "# Applied.\n"
    "# Units: none\n"
    "bool tropo_correction_applied\n"
    "\n"
    "# Description: Represents biases within the transmitting signal that are "
    "identified in the downlink\n"
    "# data, Group Delay for LNAV, and Interchannel Signal Correction (ISC) "
    "message for MNAV. This term\n"
    "# indicates whether the correction is known, being applied to Pseudorange "
    "Correction, and its\n"
    "# associated estimated error applied to the ERE. When invalid the "
    "correction and estimated error are\n"
    "# not known and therefore not applied. 1 = Valid.\n"
    "# Units: none\n"
    "bool signal_bias_correction_applied\n"
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
aspn23_ros_interfaces__msg__TypeSatnavObs__get_individual_type_description_source(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
      {aspn23_ros_interfaces__msg__TypeSatnavObs__TYPE_NAME, 39, 39},
      {msg_encoding, 3, 3},
      {toplevel_type_raw_source, 4631, 4631},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavObs__get_type_description_sources(
    const rosidl_message_type_support_t *type_support) {
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence
      source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] =
        *aspn23_ros_interfaces__msg__TypeSatnavObs__get_individual_type_description_source(
            NULL),
    sources[1] =
        *aspn23_ros_interfaces__msg__TypeIntegrity__get_individual_type_description_source(
            NULL);
    sources[2] =
        *aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__get_individual_type_description_source(
            NULL);
    sources[3] =
        *aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__get_individual_type_description_source(
            NULL);
    constructed = true;
  }
  return &source_sequence;
}
