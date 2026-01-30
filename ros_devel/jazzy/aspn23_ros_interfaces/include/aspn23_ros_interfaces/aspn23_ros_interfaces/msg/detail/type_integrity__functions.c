// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeIntegrity.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_integrity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeIntegrity__init(
    aspn23_ros_interfaces__msg__TypeIntegrity *msg) {
  if (!msg) {
    return false;
  }
  // integrity_method
  // integrity_value
  return true;
}

void aspn23_ros_interfaces__msg__TypeIntegrity__fini(
    aspn23_ros_interfaces__msg__TypeIntegrity *msg) {
  if (!msg) {
    return;
  }
  // integrity_method
  // integrity_value
}

bool aspn23_ros_interfaces__msg__TypeIntegrity__are_equal(
    const aspn23_ros_interfaces__msg__TypeIntegrity *lhs,
    const aspn23_ros_interfaces__msg__TypeIntegrity *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // integrity_method
  if (lhs->integrity_method != rhs->integrity_method) {
    return false;
  }
  // integrity_value
  if (lhs->integrity_value != rhs->integrity_value) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeIntegrity__copy(
    const aspn23_ros_interfaces__msg__TypeIntegrity *input,
    aspn23_ros_interfaces__msg__TypeIntegrity *output) {
  if (!input || !output) {
    return false;
  }
  // integrity_method
  output->integrity_method = input->integrity_method;
  // integrity_value
  output->integrity_value = input->integrity_value;
  return true;
}

aspn23_ros_interfaces__msg__TypeIntegrity *
aspn23_ros_interfaces__msg__TypeIntegrity__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeIntegrity *msg =
      (aspn23_ros_interfaces__msg__TypeIntegrity *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeIntegrity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeIntegrity));
  bool success = aspn23_ros_interfaces__msg__TypeIntegrity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeIntegrity__destroy(
    aspn23_ros_interfaces__msg__TypeIntegrity *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeIntegrity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(
    aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *array, size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeIntegrity *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeIntegrity *)allocator.zero_allocate(
        size, sizeof(aspn23_ros_interfaces__msg__TypeIntegrity),
        allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aspn23_ros_interfaces__msg__TypeIntegrity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeIntegrity__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeIntegrity__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *
aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeIntegrity__Sequence),
          allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeIntegrity__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeIntegrity__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *input,
    aspn23_ros_interfaces__msg__TypeIntegrity__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeIntegrity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeIntegrity *data =
        (aspn23_ros_interfaces__msg__TypeIntegrity *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeIntegrity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeIntegrity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeIntegrity__copy(&(input->data[i]),
                                                         &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
