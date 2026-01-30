// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavObs.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER'.
/**
 * Instantaneous Doppler at measurement time. Units = Hz Cov. Units = Hz^2
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavObs__ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER =
      0
};

/// Constant
/// 'ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE'.
/**
 * Change in pseudorange (integrated Doppler) over a specified time interval.
 * The interval is provided in metadata_satnav_obs. Units = m Cov. Units = m^2
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavObs__ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN'.
/**
 * unknown source
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavObs__ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED'.
/**
 * modeled using the ionospheric models in IS-GPS-200, IS-GPS-700, or IS-GPS-800
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavObs__ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED'.
/**
 * measured using dual frequencies
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavObs__ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED =
      2
};

// Include directives for member types
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.h"
// Member 'signal_descriptor'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__struct.h"
// Member 'integrity'
#include "aspn23_ros_interfaces/msg/detail/type_integrity__struct.h"

/// Struct defined in msg/TypeSatnavObs in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavObs {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Defines measurements that come from a satnav receiver tracking a
  /// single signal from a single satellite. Description: Enumerated field which
  /// describes the Satellite System that generated the observations. Units:
  /// none
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem satellite_system;
  /// Description: Satellite signal descriptor as defined in RINEX 3.05
  /// Units: none
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor signal_descriptor;
  /// Description: PRN code which identifies satellite (or slot number, in the
  /// case of GLONASS) for the observables. Units: none
  int16_t prn;
  /// Description: Center frequency of signal. For GLONASS, this should be the
  /// center frequency of the frequency-shifted signal with the k value taken
  /// into account. Units: Hz
  double frequency;
  /// Description: Pseudorange measurement
  /// Units: m
  double pseudorange;
  /// Description: Variance of pseudorange measurement noise/multipath. This
  /// value must be provided if the pseudorange measurement is provided. Note:
  /// This is not intended to represent clock, atmospheric, or satellite
  /// position errors. Units: m^2
  float pseudorange_variance;
  /// Indicates the type of measurement contained in pseudorange_rate.
  uint8_t pseudorange_rate_type;
  /// Description: Measurement of the change in the pseudorange. See
  /// pseudorange_rate_type for details. Units: Hz or m
  double pseudorange_rate;
  /// Description: Variance of pseudorange_rate noise. This value must be
  /// provided if the pseudorange_rate measurement is provided. Units: Hz^2 or
  /// m^2
  float pseudorange_rate_variance;
  /// Description: Carrier-phase (integrated Doppler) measurement. This
  /// measurement has an N cycle ambiguity (where N is unknown and arbitrary
  /// integer). Units: cycles (1 cycle = wavelength of carrier frequency)
  double carrier_phase;
  /// Description: Variance of carrier-phase noise/multipath. This value must be
  /// provided if the carrier-phase measurement is provided. Note: This is not
  /// intended to represent clock, atmospheric, or satellite position errors or
  /// the integer N ambiguity. Units: cycles^2
  float carrier_phase_variance;
  /// Description: Carrier to noise density ratio. C/N0 = 10
  /// Units: db-Hz
  float c_n0;
  /// Description: Number of observations with continuous tracking (no cycle
  /// slips). Value of -1 means that there is no loss of lock information
  /// available. First lock_count after cycle slip has occurred will have a
  /// value of 0. The lock_count only applies to the carrier-phase measurement.
  /// Units: none
  int32_t lock_count;
  /// Enumerated field which describes the source of the ionospheric delay
  /// correction.
  uint8_t iono_correction_source;
  /// Description: Identifies if the ionospheric correction has been applied to
  /// the measurement. 1 = Applied. Units: none
  bool iono_correction_applied;
  /// Description: Identifies if the tropospheric correction has been applied to
  /// the measurement. 1 = Applied. Units: none
  bool tropo_correction_applied;
  /// Description: Represents biases within the transmitting signal that are
  /// identified in the downlink data, Group Delay for LNAV, and Interchannel
  /// Signal Correction (ISC) message for MNAV. This term indicates whether the
  /// correction is known, being applied to Pseudorange Correction, and its
  /// associated estimated error applied to the ERE. When invalid the correction
  /// and estimated error are not known and therefore not applied. 1 = Valid.
  /// Units: none
  bool signal_bias_correction_applied;
  /// Description: Number of integrity values.
  /// Units: none
  uint8_t num_integrity;
  /// Description: Measurement integrity. Includes the integrity method used and
  /// an integrity value (which is to be interpreted based upon the integrity
  /// method). The intent of allowing num_integrity > 1 is to report multiple
  /// integrity values based on multiple integrity methods. Units: none Note:
  /// array length is num_integrity
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence integrity;
} aspn23_ros_interfaces__msg__TypeSatnavObs;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeSatnavObs.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavObs *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavObs__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_OBS__STRUCT_H_
