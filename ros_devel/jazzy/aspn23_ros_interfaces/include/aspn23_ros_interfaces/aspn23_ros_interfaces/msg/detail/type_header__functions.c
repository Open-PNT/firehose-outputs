// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeHeader.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeHeader__init(
    aspn23_ros_interfaces__msg__TypeHeader *msg) {
  if (!msg) {
    return false;
  }
  // vendor_id
  // device_id
  // context_id
  // sequence_id
  return true;
}

void aspn23_ros_interfaces__msg__TypeHeader__fini(
    aspn23_ros_interfaces__msg__TypeHeader *msg) {
  if (!msg) {
    return;
  }
  // vendor_id
  // device_id
  // context_id
  // sequence_id
}

bool aspn23_ros_interfaces__msg__TypeHeader__are_equal(
    const aspn23_ros_interfaces__msg__TypeHeader *lhs,
    const aspn23_ros_interfaces__msg__TypeHeader *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // vendor_id
  if (lhs->vendor_id != rhs->vendor_id) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // context_id
  if (lhs->context_id != rhs->context_id) {
    return false;
  }
  // sequence_id
  if (lhs->sequence_id != rhs->sequence_id) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeHeader__copy(
    const aspn23_ros_interfaces__msg__TypeHeader *input,
    aspn23_ros_interfaces__msg__TypeHeader *output) {
  if (!input || !output) {
    return false;
  }
  // vendor_id
  output->vendor_id = input->vendor_id;
  // device_id
  output->device_id = input->device_id;
  // context_id
  output->context_id = input->context_id;
  // sequence_id
  output->sequence_id = input->sequence_id;
  return true;
}

aspn23_ros_interfaces__msg__TypeHeader *
aspn23_ros_interfaces__msg__TypeHeader__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeHeader *msg =
      (aspn23_ros_interfaces__msg__TypeHeader *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeHeader));
  bool success = aspn23_ros_interfaces__msg__TypeHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeHeader__destroy(
    aspn23_ros_interfaces__msg__TypeHeader *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeHeader__Sequence__init(
    aspn23_ros_interfaces__msg__TypeHeader__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeHeader *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeHeader *)allocator.zero_allocate(
        size, sizeof(aspn23_ros_interfaces__msg__TypeHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aspn23_ros_interfaces__msg__TypeHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeHeader__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeHeader__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeHeader__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeHeader__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeHeader__Sequence *
aspn23_ros_interfaces__msg__TypeHeader__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeHeader__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeHeader__Sequence *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeHeader__Sequence),
          allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeHeader__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeHeader__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeHeader__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeHeader__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeHeader__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeHeader__are_equal(&(lhs->data[i]),
                                                           &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeHeader__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeHeader__Sequence *input,
    aspn23_ros_interfaces__msg__TypeHeader__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeHeader *data =
        (aspn23_ros_interfaces__msg__TypeHeader *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeHeader__copy(&(input->data[i]),
                                                      &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
