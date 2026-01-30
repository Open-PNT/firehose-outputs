// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSignalDescriptor.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__FUNCTIONS_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "aspn23_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__struct.h"

/// Initialize msg/TypeSatnavSignalDescriptor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor
 * )) before or use
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg);

/// Finalize msg/TypeSatnavSignalDescriptor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg);

/// Create msg/TypeSatnavSignalDescriptor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__create();

/// Destroy msg/TypeSatnavSignalDescriptor message.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg);

/// Check for msg/TypeSatnavSignalDescriptor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *rhs);

/// Copy a msg/TypeSatnavSignalDescriptor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *input,
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *output);

/// Initialize array of msg/TypeSatnavSignalDescriptor messages.
/**
 * It allocates the memory for the number of elements and calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__init(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array,
    size_t size);

/// Finalize array of msg/TypeSatnavSignalDescriptor messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array);

/// Create array of msg/TypeSatnavSignalDescriptor messages.
/**
 * It allocates the memory for the array and calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__create(
        size_t size);

/// Destroy array of msg/TypeSatnavSignalDescriptor messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array);

/// Check for msg/TypeSatnavSignalDescriptor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality
 * operator. \param[in] rhs The message array on the right hand size of the
 * equality operator. \return true if message arrays are equal in size and
 * content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence
        *rhs);

/// Copy an array of msg/TypeSatnavSignalDescriptor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence
        *input,
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *output);

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_SATNAV_SIGNAL_DESCRIPTOR__FUNCTIONS_H_
