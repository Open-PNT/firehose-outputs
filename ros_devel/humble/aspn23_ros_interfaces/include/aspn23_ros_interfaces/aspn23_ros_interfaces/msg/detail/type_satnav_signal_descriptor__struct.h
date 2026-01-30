// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSignalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C =
      0
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S =
      1
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L =
      2
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X =
      3
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P =
      4
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W =
      5
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N =
      6
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C =
      7
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D =
      8
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S =
      9
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L =
      10
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X =
      11
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P =
      12
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W =
      13
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N =
      14
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I =
      15
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q =
      16
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X =
      17
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A =
      18
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B =
      19
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X =
      20
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A =
      21
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B =
      22
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X =
      23
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I =
      24
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q =
      25
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X =
      26
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B =
      27
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I =
      28
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q =
      29
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X =
      30
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I =
      31
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q =
      32
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X =
      33
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C =
      34
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z =
      35
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D =
      36
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P =
      37
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z =
      38
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S =
      39
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L =
      40
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E =
      41
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z =
      42
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I =
      43
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q =
      44
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D =
      45
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D =
      46
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P =
      47
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z =
      48
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D =
      49
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P =
      50
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I =
      51
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q =
      52
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D =
      53
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P =
      54
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A =
      55
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B =
      56
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C =
      57
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A =
      58
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B =
      59
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C =
      60
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X =
      61
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y =
      62
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M =
      63
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y =
      64
};

/// Constant 'ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M'.
/**
 * See RINEX 3.05 Table A23
 */
enum {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M =
      65
};

/// Struct defined in msg/TypeSatnavSignalDescriptor in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Satellite signal descriptor as defined in RINEX 3.05 Three letter
  /// RINEX Observation Code of signal as given in Table A23 of RINEX 3.05
  /// specification (https://files.igs.org/pub/data/format/rinex305.pdf). RINEX
  /// Observation Code must be paired with Satellite system to determine a
  /// unique identifier
  uint8_t signal_descriptor;
} aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor;

// Struct for a sequence of
// aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor.
typedef struct
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence {
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__STRUCT_H_
