// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TypeKeplerOrbit in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeKeplerOrbit {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Keplerian orbit parameters required to calculate satellite
  /// position Description: Mean anomaly at reference time. Units: rad
  double m_0;
  /// Description: Mean motion difference from computed value.
  /// Units: rad/s
  double delta_n;
  /// Description: Eccentricity.
  /// Units: none
  double e;
  /// Description: Square root of semi-major axis.
  /// Units: sqrt(m)
  double sqrt_a;
  /// Description: Longitude of ascending node of orbit plane at weekly epoch
  /// Units: rad
  double omega_0;
  /// Description: Inclination angle at reference time.
  /// Units: rad
  double i_0;
  /// Description: Rate of change of inclination angle.
  /// Units: rad
  double i_dot;
  /// Description: Argument of perigee.
  /// Units: rad
  double omega;
  /// Description: Rate of right ascension.
  /// Units: rad/s
  double omega_dot;
  /// Description: Amplitude of cosine harmonic correction terms to the argument
  /// of latitude. Units: rad
  double c_uc;
  /// Description: Amplitude of sine harmonic correction terms to the argument
  /// of latitude. Units: rad
  double c_us;
  /// Description: Amplitude of cosine harmonic correction terms to the orbit
  /// radius. Units: m
  double c_rc;
  /// Description: Amplitude of sine harmonic correction terms to the orbit
  /// radius. Units: m
  double c_rs;
  /// Description: Amplitude of cosine harmonic correction terms to the angle of
  /// inclination. Units: rad
  double c_ic;
  /// Description: Amplitude of sine harmonic correction terms to the angle of
  /// inclination. Units: rad
  double c_is;
  /// Description: Ephemeris reference time.
  /// Units: s
  double t_oe;
} aspn23_ros_interfaces__msg__TypeKeplerOrbit;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeKeplerOrbit.
typedef struct aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence {
  aspn23_ros_interfaces__msg__TypeKeplerOrbit *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeKeplerOrbit__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_H_
