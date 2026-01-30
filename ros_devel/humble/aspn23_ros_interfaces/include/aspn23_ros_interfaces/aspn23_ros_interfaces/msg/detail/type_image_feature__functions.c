// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/TypeImageFeature.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/type_image_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `descriptor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool aspn23_ros_interfaces__msg__TypeImageFeature__init(
    aspn23_ros_interfaces__msg__TypeImageFeature *msg) {
  if (!msg) {
    return false;
  }
  // response
  // orientation
  // size
  // class_id
  // octave
  // descriptor_size
  // descriptor
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->descriptor, 0)) {
    aspn23_ros_interfaces__msg__TypeImageFeature__fini(msg);
    return false;
  }
  return true;
}

void aspn23_ros_interfaces__msg__TypeImageFeature__fini(
    aspn23_ros_interfaces__msg__TypeImageFeature *msg) {
  if (!msg) {
    return;
  }
  // response
  // orientation
  // size
  // class_id
  // octave
  // descriptor_size
  // descriptor
  rosidl_runtime_c__uint8__Sequence__fini(&msg->descriptor);
}

bool aspn23_ros_interfaces__msg__TypeImageFeature__are_equal(
    const aspn23_ros_interfaces__msg__TypeImageFeature *lhs,
    const aspn23_ros_interfaces__msg__TypeImageFeature *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (lhs->response != rhs->response) {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  // class_id
  if (lhs->class_id != rhs->class_id) {
    return false;
  }
  // octave
  if (lhs->octave != rhs->octave) {
    return false;
  }
  // descriptor_size
  if (lhs->descriptor_size != rhs->descriptor_size) {
    return false;
  }
  // descriptor
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(&(lhs->descriptor),
                                                    &(rhs->descriptor))) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeImageFeature__copy(
    const aspn23_ros_interfaces__msg__TypeImageFeature *input,
    aspn23_ros_interfaces__msg__TypeImageFeature *output) {
  if (!input || !output) {
    return false;
  }
  // response
  output->response = input->response;
  // orientation
  output->orientation = input->orientation;
  // size
  output->size = input->size;
  // class_id
  output->class_id = input->class_id;
  // octave
  output->octave = input->octave;
  // descriptor_size
  output->descriptor_size = input->descriptor_size;
  // descriptor
  if (!rosidl_runtime_c__uint8__Sequence__copy(&(input->descriptor),
                                               &(output->descriptor))) {
    return false;
  }
  return true;
}

aspn23_ros_interfaces__msg__TypeImageFeature *
aspn23_ros_interfaces__msg__TypeImageFeature__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeImageFeature *msg =
      (aspn23_ros_interfaces__msg__TypeImageFeature *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__TypeImageFeature),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__TypeImageFeature));
  bool success = aspn23_ros_interfaces__msg__TypeImageFeature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__TypeImageFeature__destroy(
    aspn23_ros_interfaces__msg__TypeImageFeature *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__TypeImageFeature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__init(
    aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeImageFeature *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__TypeImageFeature *)allocator.zero_allocate(
            size, sizeof(aspn23_ros_interfaces__msg__TypeImageFeature),
            allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__TypeImageFeature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__TypeImageFeature__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__fini(
    aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__TypeImageFeature__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *
aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__create(size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *array =
      (aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__TypeImageFeature__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__destroy(
    aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *lhs,
    const aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeImageFeature__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__TypeImageFeature__Sequence__copy(
    const aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *input,
    aspn23_ros_interfaces__msg__TypeImageFeature__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__TypeImageFeature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__TypeImageFeature *data =
        (aspn23_ros_interfaces__msg__TypeImageFeature *)allocator.reallocate(
            output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__TypeImageFeature__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__TypeImageFeature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__TypeImageFeature__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
