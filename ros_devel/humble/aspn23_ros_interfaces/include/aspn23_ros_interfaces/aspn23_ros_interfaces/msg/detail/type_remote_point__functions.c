// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeRemotePoint.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_remote_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `position_covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool aspn23_ros_interfaces__msg__TypeRemotePoint__init(
    aspn23_ros_interfaces__msg__TypeRemotePoint *msg) {
  if (!msg) {
    return false;
  }
  // included_terms
  // id
  // position_reference_frame
  // position1
  // position2
  // position3
  // num_position_components
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position_covariance, 0)) {
    aspn23_ros_interfaces__msg__TypeRemotePoint__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__TypeRemotePoint__fini(
    aspn23_ros_interfaces__msg__TypeRemotePoint *msg) {
  if (!msg) {
    return;
  }
  // included_terms
  // id
  // position_reference_frame
  // position1
  // position2
  // position3
  // num_position_components
  // position_covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->position_covariance);
}

bool aspn23_ros_interfaces__msg__TypeRemotePoint__are_equal(
    const aspn23_ros_interfaces__msg__TypeRemotePoint *lhs,
    const aspn23_ros_interfaces__msg__TypeRemotePoint *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // included_terms
  if (lhs->included_terms != rhs->included_terms) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position_reference_frame
  if (lhs->position_reference_frame != rhs->position_reference_frame) {
    return false;
  }
  // position1
  if (lhs->position1 != rhs->position1) {
    return false;
  }
  // position2
  if (lhs->position2 != rhs->position2) {
    return false;
  }
  // position3
  if (lhs->position3 != rhs->position3) {
    return false;
  }
  // num_position_components
  if (lhs->num_position_components != rhs->num_position_components) {
    return false;
  }
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
          &(lhs->position_covariance), &(rhs->position_covariance))) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeRemotePoint__copy(
    const aspn23_ros_interfaces__msg__TypeRemotePoint *input,
    aspn23_ros_interfaces__msg__TypeRemotePoint *output) {
  if (!input || !output) {
    return false;
  }
  // included_terms
  output->included_terms = input->included_terms;
  // id
  output->id = input->id;
  // position_reference_frame
  output->position_reference_frame = input->position_reference_frame;
  // position1
  output->position1 = input->position1;
  // position2
  output->position2 = input->position2;
  // position3
  output->position3 = input->position3;
  // num_position_components
  output->num_position_components = input->num_position_components;
  // position_covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
          &(input->position_covariance), &(output->position_covariance))) {
    return false;
  }
  return true;
}

aspn23_ros_interfaces__msg__TypeRemotePoint *
aspn23_ros_interfaces__msg__TypeRemotePoint__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeRemotePoint *msg =
      (aspn23_ros_interfaces__msg__TypeRemotePoint *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeRemotePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeRemotePoint));
  bool success = aspn23_ros_interfaces__msg__TypeRemotePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeRemotePoint__destroy(
    aspn23_ros_interfaces__msg__TypeRemotePoint *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeRemotePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__init(
    aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeRemotePoint *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeRemotePoint *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__TypeRemotePoint),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeRemotePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeRemotePoint__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeRemotePoint__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *
aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeRemotePoint__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *input,
    aspn23_ros_interfaces__msg__TypeRemotePoint__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeRemotePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeRemotePoint *data =
        (aspn23_ros_interfaces__msg__TypeRemotePoint *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeRemotePoint__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeRemotePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeRemotePoint__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
