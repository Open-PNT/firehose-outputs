// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSignalDescriptor.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_satnav_signal_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg) {
  if (!msg) {
    return false;
  }
  // signal_descriptor
  return true;
}

void aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg) {
  if (!msg) {
    return;
  }
  // signal_descriptor
}

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // signal_descriptor
  if (lhs->signal_descriptor != rhs->signal_descriptor) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *input,
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *output) {
  if (!input || !output) {
    return false;
  }
  // signal_descriptor
  output->signal_descriptor = input->signal_descriptor;
  return true;
}

aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg =
      (aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0,
         sizeof(aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor));
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__init(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *)
            allocator.zero_allocate(
                size,
                sizeof(aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(
              &data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
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

void aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
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

aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence
        *input,
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *data =
        (aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
