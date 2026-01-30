// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGpsIonoUtcParameters.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_gps_iono_utc_parameters__functions.h"

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

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__init(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(msg);
    return false;
  }
  // a_0
  // a_1
  // delta_t_ls
  // tot
  // wn_t
  // wn_lsf
  // dn
  // delta_t_lsf
  // alpha_0
  // alpha_1
  // alpha_2
  // alpha_3
  // beta_0
  // beta_1
  // beta_2
  // beta_3
  return true;
}

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // a_0
  // a_1
  // delta_t_ls
  // tot
  // wn_t
  // wn_lsf
  // dn
  // delta_t_lsf
  // alpha_0
  // alpha_1
  // alpha_2
  // alpha_3
  // beta_0
  // beta_1
  // beta_2
  // beta_3
}

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *lhs,
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *rhs) {
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
  // a_0
  if (lhs->a_0 != rhs->a_0) {
    return false;
  }
  // a_1
  if (lhs->a_1 != rhs->a_1) {
    return false;
  }
  // delta_t_ls
  if (lhs->delta_t_ls != rhs->delta_t_ls) {
    return false;
  }
  // tot
  if (lhs->tot != rhs->tot) {
    return false;
  }
  // wn_t
  if (lhs->wn_t != rhs->wn_t) {
    return false;
  }
  // wn_lsf
  if (lhs->wn_lsf != rhs->wn_lsf) {
    return false;
  }
  // dn
  if (lhs->dn != rhs->dn) {
    return false;
  }
  // delta_t_lsf
  if (lhs->delta_t_lsf != rhs->delta_t_lsf) {
    return false;
  }
  // alpha_0
  if (lhs->alpha_0 != rhs->alpha_0) {
    return false;
  }
  // alpha_1
  if (lhs->alpha_1 != rhs->alpha_1) {
    return false;
  }
  // alpha_2
  if (lhs->alpha_2 != rhs->alpha_2) {
    return false;
  }
  // alpha_3
  if (lhs->alpha_3 != rhs->alpha_3) {
    return false;
  }
  // beta_0
  if (lhs->beta_0 != rhs->beta_0) {
    return false;
  }
  // beta_1
  if (lhs->beta_1 != rhs->beta_1) {
    return false;
  }
  // beta_2
  if (lhs->beta_2 != rhs->beta_2) {
    return false;
  }
  // beta_3
  if (lhs->beta_3 != rhs->beta_3) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__copy(
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *input,
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *output) {
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
  // a_0
  output->a_0 = input->a_0;
  // a_1
  output->a_1 = input->a_1;
  // delta_t_ls
  output->delta_t_ls = input->delta_t_ls;
  // tot
  output->tot = input->tot;
  // wn_t
  output->wn_t = input->wn_t;
  // wn_lsf
  output->wn_lsf = input->wn_lsf;
  // dn
  output->dn = input->dn;
  // delta_t_lsf
  output->delta_t_lsf = input->delta_t_lsf;
  // alpha_0
  output->alpha_0 = input->alpha_0;
  // alpha_1
  output->alpha_1 = input->alpha_1;
  // alpha_2
  output->alpha_2 = input->alpha_2;
  // alpha_3
  output->alpha_3 = input->alpha_3;
  // beta_0
  output->beta_0 = input->beta_0;
  // beta_1
  output->beta_1 = input->beta_1;
  // beta_2
  output->beta_2 = input->beta_2;
  // beta_3
  output->beta_3 = input->beta_3;
  return true;
}

aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__create() {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *msg =
      (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0,
         sizeof(aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters));
  bool success =
      aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__destroy(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *data = NULL;

  if (size) {
    data =
        (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *)
            allocator.zero_allocate(
                size,
                sizeof(
                    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters),
                allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__init(
              &data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(
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

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(
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

aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *
aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__fini(
        array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence
        *lhs,
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence
        *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence
        *input,
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__Sequence
        *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *data =
        (aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
