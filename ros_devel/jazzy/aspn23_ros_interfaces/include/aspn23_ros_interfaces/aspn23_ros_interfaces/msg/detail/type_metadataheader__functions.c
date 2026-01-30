// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeMetadataheader.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "aspn23_ros_interfaces/msg/detail/type_header__functions.h"
// Member `sensor_description`
#include "rosidl_runtime_c/string_functions.h"

bool aspn23_ros_interfaces__msg__TypeMetadataheader__init(
    aspn23_ros_interfaces__msg__TypeMetadataheader *msg) {
  if (!msg) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__init(&msg->header)) {
    aspn23_ros_interfaces__msg__TypeMetadataheader__fini(msg);
    return false;
  }
  // sensor_description
  if (!rosidl_runtime_c__String__init(&msg->sensor_description)) {
    aspn23_ros_interfaces__msg__TypeMetadataheader__fini(msg);
    return false;
  }
  // delta_t_nom
  // timestamp_clock_id
  // digits_of_precision
  return true;
}

void aspn23_ros_interfaces__msg__TypeMetadataheader__fini(
    aspn23_ros_interfaces__msg__TypeMetadataheader *msg) {
  if (!msg) {
    return;
  }
  // header
  aspn23_ros_interfaces__msg__TypeHeader__fini(&msg->header);
  // sensor_description
  rosidl_runtime_c__String__fini(&msg->sensor_description);
  // delta_t_nom
  // timestamp_clock_id
  // digits_of_precision
}

bool aspn23_ros_interfaces__msg__TypeMetadataheader__are_equal(
    const aspn23_ros_interfaces__msg__TypeMetadataheader *lhs,
    const aspn23_ros_interfaces__msg__TypeMetadataheader *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__are_equal(&(lhs->header),
                                                         &(rhs->header))) {
    return false;
  }
  // sensor_description
  if (!rosidl_runtime_c__String__are_equal(&(lhs->sensor_description),
                                           &(rhs->sensor_description))) {
    return false;
  }
  // delta_t_nom
  if (lhs->delta_t_nom != rhs->delta_t_nom) {
    return false;
  }
  // timestamp_clock_id
  if (lhs->timestamp_clock_id != rhs->timestamp_clock_id) {
    return false;
  }
  // digits_of_precision
  if (lhs->digits_of_precision != rhs->digits_of_precision) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeMetadataheader__copy(
    const aspn23_ros_interfaces__msg__TypeMetadataheader *input,
    aspn23_ros_interfaces__msg__TypeMetadataheader *output) {
  if (!input || !output) {
    return false;
  }
  // header
  if (!aspn23_ros_interfaces__msg__TypeHeader__copy(&(input->header),
                                                    &(output->header))) {
    return false;
  }
  // sensor_description
  if (!rosidl_runtime_c__String__copy(&(input->sensor_description),
                                      &(output->sensor_description))) {
    return false;
  }
  // delta_t_nom
  output->delta_t_nom = input->delta_t_nom;
  // timestamp_clock_id
  output->timestamp_clock_id = input->timestamp_clock_id;
  // digits_of_precision
  output->digits_of_precision = input->digits_of_precision;
  return true;
}

aspn23_ros_interfaces__msg__TypeMetadataheader *
aspn23_ros_interfaces__msg__TypeMetadataheader__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMetadataheader *msg =
      (aspn23_ros_interfaces__msg__TypeMetadataheader *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader));
  bool success = aspn23_ros_interfaces__msg__TypeMetadataheader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeMetadataheader__destroy(
    aspn23_ros_interfaces__msg__TypeMetadataheader *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeMetadataheader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__init(
    aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMetadataheader *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__TypeMetadataheader *)
               allocator.zero_allocate(
                   size, sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader),
                   allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeMetadataheader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *
aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__init(
      array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeMetadataheader__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *input,
    aspn23_ros_interfaces__msg__TypeMetadataheader__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeMetadataheader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeMetadataheader *data =
        (aspn23_ros_interfaces__msg__TypeMetadataheader *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeMetadataheader__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeMetadataheader__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
