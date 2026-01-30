// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aspn23_ros_interfaces:msg/MeasurementRangeRateToPoint.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__FUNCTIONS_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "aspn23_ros_interfaces/msg/rosidl_generator_c__visibility_control.h"
#include "rosidl_runtime_c/visibility_control.h"

#include "aspn23_ros_interfaces/msg/detail/measurement_range_rate_to_point__struct.h"

/// Initialize msg/MeasurementRangeRateToPoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint
 * )) before or use
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__init(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *msg);

/// Finalize msg/MeasurementRangeRateToPoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__fini(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *msg);

/// Create msg/MeasurementRangeRateToPoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__create();

/// Destroy msg/MeasurementRangeRateToPoint message.
/**
 * It calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__destroy(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *msg);

/// Check for msg/MeasurementRangeRateToPoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *lhs,
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *rhs);

/// Copy a msg/MeasurementRangeRateToPoint message.
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
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__copy(
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *input,
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint *output);

/// Initialize array of msg/MeasurementRangeRateToPoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence *array,
    size_t size);

/// Finalize array of msg/MeasurementRangeRateToPoint messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence *array);

/// Create array of msg/MeasurementRangeRateToPoint messages.
/**
 * It allocates the memory for the array and calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence *
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__create(
        size_t size);

/// Destroy array of msg/MeasurementRangeRateToPoint messages.
/**
 * It calls
 * aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces void
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence *array);

/// Check for msg/MeasurementRangeRateToPoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality
 * operator. \param[in] rhs The message array on the right hand size of the
 * equality operator. \return true if message arrays are equal in size and
 * content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aspn23_ros_interfaces bool
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence
        *lhs,
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence
        *rhs);

/// Copy an array of msg/MeasurementRangeRateToPoint messages.
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
aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence
        *input,
    aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint__Sequence *output);

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__MEASUREMENT_RANGE_RATE_TO_POINT__FUNCTIONS_H_
