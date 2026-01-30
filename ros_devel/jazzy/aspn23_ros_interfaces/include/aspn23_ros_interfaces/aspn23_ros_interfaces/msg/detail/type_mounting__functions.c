// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeMounting.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeMounting__init(
    aspn23_ros_interfaces__msg__TypeMounting *msg) {
  if (!msg) {
    return false;
  }
  // lever_arm
  // lever_arm_sigma
  // orientation_quaternion
  // orientation_tilt_error_covariance
  return true;
}

void aspn23_ros_interfaces__msg__TypeMounting__fini(
    aspn23_ros_interfaces__msg__TypeMounting *msg) {
  if (!msg) {
    return;
  }
  // lever_arm
  // lever_arm_sigma
  // orientation_quaternion
  // orientation_tilt_error_covariance
}

bool aspn23_ros_interfaces__msg__TypeMounting__are_equal(
    const aspn23_ros_interfaces__msg__TypeMounting *lhs,
    const aspn23_ros_interfaces__msg__TypeMounting *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // lever_arm
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->lever_arm[i] != rhs->lever_arm[i]) {
      return false;
    }
  }
  // lever_arm_sigma
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->lever_arm_sigma[i] != rhs->lever_arm_sigma[i]) {
      return false;
    }
  }
  // orientation_quaternion
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->orientation_quaternion[i] != rhs->orientation_quaternion[i]) {
      return false;
    }
  }
  // orientation_tilt_error_covariance
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->orientation_tilt_error_covariance[i] !=
        rhs->orientation_tilt_error_covariance[i]) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeMounting__copy(
    const aspn23_ros_interfaces__msg__TypeMounting *input,
    aspn23_ros_interfaces__msg__TypeMounting *output) {
  if (!input || !output) {
    return false;
  }
  // lever_arm
  for (size_t i = 0; i < 3; ++i) {
    output->lever_arm[i] = input->lever_arm[i];
  }
  // lever_arm_sigma
  for (size_t i = 0; i < 3; ++i) {
    output->lever_arm_sigma[i] = input->lever_arm_sigma[i];
  }
  // orientation_quaternion
  for (size_t i = 0; i < 4; ++i) {
    output->orientation_quaternion[i] = input->orientation_quaternion[i];
  }
  // orientation_tilt_error_covariance
  for (size_t i = 0; i < 9; ++i) {
    output->orientation_tilt_error_covariance[i] =
        input->orientation_tilt_error_covariance[i];
  }
  return true;
}

aspn23_ros_interfaces__msg__TypeMounting *
aspn23_ros_interfaces__msg__TypeMounting__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMounting *msg =
      (aspn23_ros_interfaces__msg__TypeMounting *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeMounting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeMounting));
  bool success = aspn23_ros_interfaces__msg__TypeMounting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeMounting__destroy(
    aspn23_ros_interfaces__msg__TypeMounting *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeMounting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeMounting__Sequence__init(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMounting *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeMounting *)allocator.zero_allocate(
        size, sizeof(aspn23_ros_interfaces__msg__TypeMounting),
        allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aspn23_ros_interfaces__msg__TypeMounting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeMounting__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void aspn23_ros_interfaces__msg__TypeMounting__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeMounting__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

aspn23_ros_interfaces__msg__TypeMounting__Sequence *
aspn23_ros_interfaces__msg__TypeMounting__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMounting__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeMounting__Sequence *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeMounting__Sequence),
          allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeMounting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeMounting__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeMounting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeMounting__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeMounting__are_equal(&(lhs->data[i]),
                                                             &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeMounting__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeMounting__Sequence *input,
    aspn23_ros_interfaces__msg__TypeMounting__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeMounting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeMounting *data =
        (aspn23_ros_interfaces__msg__TypeMounting *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeMounting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeMounting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeMounting__copy(&(input->data[i]),
                                                        &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
