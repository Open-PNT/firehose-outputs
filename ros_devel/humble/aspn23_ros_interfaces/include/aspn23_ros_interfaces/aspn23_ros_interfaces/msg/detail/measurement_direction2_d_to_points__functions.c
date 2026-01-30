// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MeasurementDirection2DToPoints.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/measurement_direction2_d_to_points__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"
// Member `obs`
#include "aspn23_ros_interfaces/msg/detail/type_direction2_d_to_point__functions.h"

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__init(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(msg);
    return false;
  }
  // num_obs
  // obs
  if (!aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence__init(
          &msg->obs, 0)) {
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // num_obs
  // obs
  aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence__fini(&msg->obs);
}

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *lhs,
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__are_equal(&(lhs->header),
                                                         &(rhs->header))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__are_equal(
          &(lhs->time_of_validity), &(rhs->time_of_validity))) {
    return false;
  }
  // num_obs
  if (lhs->num_obs != rhs->num_obs) {
    return false;
  }
  // obs
  if (!aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence__are_equal(
          &(lhs->obs), &(rhs->obs))) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__copy(
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *input,
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *output) {
  if (!input || !output) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__copy(&(input->header),
                                                    &(output->header))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__copy(
          &(input->time_of_validity), &(output->time_of_validity))) {
    return false;
  }
  // num_obs
  output->num_obs = input->num_obs;
  // obs
  if (!aspn23_ros_interfaces__msg__TypeDirection2DToPoint__Sequence__copy(
          &(input->obs), &(output->obs))) {
    return false;
  }
  return true;
}

aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *
aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *msg =
      (aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0,
         sizeof(aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints));
  bool success =
      aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__destroy(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__init(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *)
            allocator.zero_allocate(
                size,
                sizeof(
                    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__init(
              &data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(
            &data[i - 1]);
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

void aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__fini(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(
          &array->data[i]);
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

aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence *
aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence *array =
      (aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__destroy(
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *lhs,
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence__copy(
    const aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *input,
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__Sequence
        *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *data =
        (aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
