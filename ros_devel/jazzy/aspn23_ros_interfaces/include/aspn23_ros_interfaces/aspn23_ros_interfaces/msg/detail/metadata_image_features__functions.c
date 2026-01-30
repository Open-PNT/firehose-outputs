// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `info`
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__functions.h"
// Member `time_of_validity`
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__functions.h"

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__init(
    aspn23_ros_interfaces__msg__MetadataImageFeatures *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(msg);
    return false;
  }
  // keypoint_detector
  // orientation_calculated
  // descriptor_extractor
  // is_bigendian
  // descriptor_type
  // descriptor_number_of_elements
  return true;
}

void aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(
    aspn23_ros_interfaces__msg__MetadataImageFeatures *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // keypoint_detector
  // orientation_calculated
  // descriptor_extractor
  // is_bigendian
  // descriptor_type
  // descriptor_number_of_elements
}

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__are_equal(
    const aspn23_ros_interfaces__msg__MetadataImageFeatures *lhs,
    const aspn23_ros_interfaces__msg__MetadataImageFeatures *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__are_equal(
          &(lhs->info), &(rhs->info))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__are_equal(
          &(lhs->time_of_validity), &(rhs->time_of_validity))) {
    return false;
  }
  // keypoint_detector
  if (lhs->keypoint_detector != rhs->keypoint_detector) {
    return false;
  }
  // orientation_calculated
  if (lhs->orientation_calculated != rhs->orientation_calculated) {
    return false;
  }
  // descriptor_extractor
  if (lhs->descriptor_extractor != rhs->descriptor_extractor) {
    return false;
  }
  // is_bigendian
  if (lhs->is_bigendian != rhs->is_bigendian) {
    return false;
  }
  // descriptor_type
  if (lhs->descriptor_type != rhs->descriptor_type) {
    return false;
  }
  // descriptor_number_of_elements
  if (lhs->descriptor_number_of_elements !=
      rhs->descriptor_number_of_elements) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__copy(
    const aspn23_ros_interfaces__msg__MetadataImageFeatures *input,
    aspn23_ros_interfaces__msg__MetadataImageFeatures *output) {
  if (!input || !output) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__copy(&(input->info),
                                                            &(output->info))) {
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__copy(
          &(input->time_of_validity), &(output->time_of_validity))) {
    return false;
  }
  // keypoint_detector
  output->keypoint_detector = input->keypoint_detector;
  // orientation_calculated
  output->orientation_calculated = input->orientation_calculated;
  // descriptor_extractor
  output->descriptor_extractor = input->descriptor_extractor;
  // is_bigendian
  output->is_bigendian = input->is_bigendian;
  // descriptor_type
  output->descriptor_type = input->descriptor_type;
  // descriptor_number_of_elements
  output->descriptor_number_of_elements = input->descriptor_number_of_elements;
  return true;
}

aspn23_ros_interfaces__msg__MetadataImageFeatures *
aspn23_ros_interfaces__msg__MetadataImageFeatures__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImageFeatures *msg =
      (aspn23_ros_interfaces__msg__MetadataImageFeatures *)allocator.allocate(
          sizeof(aspn23_ros_interfaces__msg__MetadataImageFeatures),
          allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MetadataImageFeatures));
  bool success = aspn23_ros_interfaces__msg__MetadataImageFeatures__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataImageFeatures__destroy(
    aspn23_ros_interfaces__msg__MetadataImageFeatures *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImageFeatures *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MetadataImageFeatures *)
            allocator.zero_allocate(
                size, sizeof(aspn23_ros_interfaces__msg__MetadataImageFeatures),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MetadataImageFeatures__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(&data[i - 1]);
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

void aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(&array->data[i]);
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

aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *
aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__init(array,
                                                                        size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataImageFeatures__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *input,
    aspn23_ros_interfaces__msg__MetadataImageFeatures__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size * sizeof(aspn23_ros_interfaces__msg__MetadataImageFeatures);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataImageFeatures *data =
        (aspn23_ros_interfaces__msg__MetadataImageFeatures *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataImageFeatures__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataImageFeatures__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataImageFeatures__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
