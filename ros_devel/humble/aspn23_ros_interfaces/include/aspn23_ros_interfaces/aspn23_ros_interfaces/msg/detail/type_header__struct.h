// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/TypeHeader.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TypeHeader in the package aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__TypeHeader {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Header for each ASPN measurement Description: Unique identifier
  /// that identifies the device or application vendor. Vendor ID is
  /// user-selected, inspired by your company name to mitigate conflicts with
  /// other users. Vendor IDs 0x23 00 00 00 through 0x23 FF FF FF inclusive are
  /// reserved and shall not be chosen as user-selected vendor IDs. Units: none
  uint32_t vendor_id;
  /// Description: Unique identifier that identifies the sensor or device type
  /// as assigned by the vendor. Device_ids are unique within a given vendor_id.
  /// Units: none
  uint64_t device_id;
  /// Description: Unique identifier that provides additional context to define
  /// a logical stream of data from the sensor or device as assigned by the
  /// vendor. This identifier allows multiple measurements of the same type to
  /// be provided by a device. Context_ids are unique within a given vendor_id
  /// and device_id. Units: none
  uint32_t context_id;
  /// Description: Unique identifier for a specific message within a data stream
  /// as defined by a vendor_id, device_id, and context_id. Sequential messages
  /// from each data source (identified by vendor_id, device_id, and context_id)
  /// shall increment by exactly 1 and rollover to 0 after an overflow. Units:
  /// none
  uint16_t sequence_id;
} aspn23_ros_interfaces__msg__TypeHeader;

// Struct for a sequence of aspn23_ros_interfaces__msg__TypeHeader.
typedef struct aspn23_ros_interfaces__msg__TypeHeader__Sequence {
  aspn23_ros_interfaces__msg__TypeHeader *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__TypeHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_HEADER__STRUCT_H_
