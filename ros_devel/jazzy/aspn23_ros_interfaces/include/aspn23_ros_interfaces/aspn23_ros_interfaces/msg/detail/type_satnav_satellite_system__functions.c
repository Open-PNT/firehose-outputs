// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeSatnavSatelliteSystem.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_satnav_satellite_system__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *msg) {
  if (!msg) {
    return false;
  }
  // satellite_system
  return true;
}

void aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *msg) {
  if (!msg) {
    return;
  }
  // satellite_system
}

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // satellite_system
  if (lhs->satellite_system != rhs->satellite_system) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *input,
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *output) {
  if (!input || !output) {
    return false;
  }
  // satellite_system
  output->satellite_system = input->satellite_system;
  return true;
}

aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *msg =
      (aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem));
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__init(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *)
            allocator.zero_allocate(
                size,
                sizeof(aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
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

void aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
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

aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *
aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence
        *input,
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *data =
        (aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
