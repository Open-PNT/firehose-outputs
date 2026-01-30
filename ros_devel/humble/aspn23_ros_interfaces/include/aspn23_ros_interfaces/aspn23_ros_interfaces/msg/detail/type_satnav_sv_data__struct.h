// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSvData.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM'.
/**
 * To be used when a system only uses one ephemeris representation, so knowing
 * the satellite_system fully defines what ephemeris is being used.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV'.
/**
 * Calculated using legacy GPS (LNAV) messages
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV'.
/**
 * Calculated using GPS CNAV messages
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV =
      2
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV'.
/**
 * Calculated using GPS MNAV messages
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV =
      3
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF'.
/**
 * International Terrestrial Reference Frame
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF'.
/**
 * Earth-centered earth-fixed frame as defined by WGS-84 (nearly identical with
 * ITRF)
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF'.
/**
 * Galileo Terrestrial Reference Frame (nearly identical with ITRF)
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF =
      2
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90'.
/**
 * Parametri Zemli 1990 (PZ-90) reference frame
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90 =
      3
};

/// Constant 'ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV'.
/**
 * group_delay_vector is legacy Tgd as defined in ICD-GPS-200L
 * Section 20.3.3.3.3.2. All other terms not used.
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSvData__ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV =
      0
};

// Include directives for member types
// Member 'satellite_system'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__struct.h"
// Member 'sv_data_time'
#include "aspn23_ros_interfaces/msg/detail/type_satnav_time__struct.h"

/// Struct defined in msg/TypeSatnavSvData in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavSvData {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Satellite position, velocity and clock error at a particular time
  /// epoch Description: PRN code which identifies satellite (or slot number, in
  /// the case of GLONASS) of this ephemeris. Units: none
  int16_t prn;
  /// Description: Describes the Satellite System which was used to generate the
  /// satellite information provided in this message. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem satellite_system;
  /// Provides further clarification of which ephemeris was used to generate the
  /// satellite information provided in this message for systems which have more
  /// than one ephemeris representation.
  uint8_t ephemeris_type;
  /// Description: Receiver time at which the data provided in this message is
  /// valid. Units: none
  aspn23_ros_interfaces__msg__TypeSatnavTime sv_data_time;
  /// Coordinate frame system used to describe satellite position and velocity.
  uint8_t coordinate_frame;
  /// Description: Satellite position in frame specified by coordinate_frame at
  /// time specified by sv_data_time_week_number and
  /// sv_data_time_seconds_of_week. Units: m
  double sv_pos[3];
  /// Description: Satellite velocity in frame specified by coordinate_frame at
  /// time specified by sv_data_time_week_number and
  /// sv_data_time_seconds_of_week. Units: m/s
  double sv_vel[3];
  /// Description: Satellite clock bias at the sv_data_time, used to correct the
  /// satellite time like delta_t_sv in equation (1) of ICD-GPS-200L,
  /// Section 20.3.3.3.3.1. Units: sec
  double sv_clock_bias;
  /// Description: Satellite clock drift rate at the sv_data_time. By way of
  /// example, for GPS this would be af1 in equation (2) of ICD-GPS-200L,
  /// Section 20.3.3.3.3.1. Units: sec/sec
  double sv_clock_drift;
  /// Describes how to interpret group delay terms, because they vary by
  /// ephemeris type. Descriptions assume zero-indexing.
  uint8_t group_delay_enum;
  /// Description: Group delay terms, with interpretation provided by
  /// group_delay_enum. (Need to verify that four is sufficient for all
  /// ephemeris.) Units: sec
  float group_delay_vector[4];
} aspn23_ros_interfaces__msg__TypeSatnavSvData;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeSatnavSvData.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavSvData *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavSvData__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SV_DATA__STRUCT_H_
