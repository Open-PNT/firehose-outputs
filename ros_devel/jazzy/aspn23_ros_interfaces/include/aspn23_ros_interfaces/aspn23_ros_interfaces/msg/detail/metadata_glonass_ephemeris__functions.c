// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aspn23_ros_interfaces:msg/MetadataGlonassEphemeris.idl
// generated code does not contain a copyright notice
#include "aspn23_ros_interfaces/msg/detail/metadata_glonass_ephemeris__functions.h"

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

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__init(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *msg) {
  if (!msg) {
    return false;
  }
  // info
  if (!aspn23_ros_interfaces__msg__TypeMetadataheader__init(&msg->info)) {
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(msg);
    return false;
  }
  // time_of_validity
  if (!aspn23_ros_interfaces__msg__TypeTimestamp__init(
          &msg->time_of_validity)) {
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(msg);
    return false;
  }
  // slot_number
  // freq_o
  // n_t
  // t_k
  // t_b
  // gamma_n
  // tau_n
  // sv_pos_x
  // sv_vel_x
  // sv_accel_x
  // sv_pos_y
  // sv_vel_y
  // sv_accel_y
  // sv_pos_z
  // sv_vel_z
  // sv_accel_z
  return true;
}

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *msg) {
  if (!msg) {
    return;
  }
  // info
  aspn23_ros_interfaces__msg__TypeMetadataheader__fini(&msg->info);
  // time_of_validity
  aspn23_ros_interfaces__msg__TypeTimestamp__fini(&msg->time_of_validity);
  // slot_number
  // freq_o
  // n_t
  // t_k
  // t_b
  // gamma_n
  // tau_n
  // sv_pos_x
  // sv_vel_x
  // sv_accel_x
  // sv_pos_y
  // sv_vel_y
  // sv_accel_y
  // sv_pos_z
  // sv_vel_z
  // sv_accel_z
}

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *lhs,
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *rhs) {
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
  // slot_number
  if (lhs->slot_number != rhs->slot_number) {
    return false;
  }
  // freq_o
  if (lhs->freq_o != rhs->freq_o) {
    return false;
  }
  // n_t
  if (lhs->n_t != rhs->n_t) {
    return false;
  }
  // t_k
  if (lhs->t_k != rhs->t_k) {
    return false;
  }
  // t_b
  if (lhs->t_b != rhs->t_b) {
    return false;
  }
  // gamma_n
  if (lhs->gamma_n != rhs->gamma_n) {
    return false;
  }
  // tau_n
  if (lhs->tau_n != rhs->tau_n) {
    return false;
  }
  // sv_pos_x
  if (lhs->sv_pos_x != rhs->sv_pos_x) {
    return false;
  }
  // sv_vel_x
  if (lhs->sv_vel_x != rhs->sv_vel_x) {
    return false;
  }
  // sv_accel_x
  if (lhs->sv_accel_x != rhs->sv_accel_x) {
    return false;
  }
  // sv_pos_y
  if (lhs->sv_pos_y != rhs->sv_pos_y) {
    return false;
  }
  // sv_vel_y
  if (lhs->sv_vel_y != rhs->sv_vel_y) {
    return false;
  }
  // sv_accel_y
  if (lhs->sv_accel_y != rhs->sv_accel_y) {
    return false;
  }
  // sv_pos_z
  if (lhs->sv_pos_z != rhs->sv_pos_z) {
    return false;
  }
  // sv_vel_z
  if (lhs->sv_vel_z != rhs->sv_vel_z) {
    return false;
  }
  // sv_accel_z
  if (lhs->sv_accel_z != rhs->sv_accel_z) {
    return false;
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__copy(
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *input,
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *output) {
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
  // slot_number
  output->slot_number = input->slot_number;
  // freq_o
  output->freq_o = input->freq_o;
  // n_t
  output->n_t = input->n_t;
  // t_k
  output->t_k = input->t_k;
  // t_b
  output->t_b = input->t_b;
  // gamma_n
  output->gamma_n = input->gamma_n;
  // tau_n
  output->tau_n = input->tau_n;
  // sv_pos_x
  output->sv_pos_x = input->sv_pos_x;
  // sv_vel_x
  output->sv_vel_x = input->sv_vel_x;
  // sv_accel_x
  output->sv_accel_x = input->sv_accel_x;
  // sv_pos_y
  output->sv_pos_y = input->sv_pos_y;
  // sv_vel_y
  output->sv_vel_y = input->sv_vel_y;
  // sv_accel_y
  output->sv_accel_y = input->sv_accel_y;
  // sv_pos_z
  output->sv_pos_z = input->sv_pos_z;
  // sv_vel_z
  output->sv_vel_z = input->sv_vel_z;
  // sv_accel_z
  output->sv_accel_z = input->sv_accel_z;
  return true;
}

aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__create(void) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *msg =
      (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *)
          allocator.allocate(
              sizeof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris),
              allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris));
  bool success =
      aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__destroy(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *msg) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__init(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *array,
    size_t size) {
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *data = NULL;

  if (size) {
    data = (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *)
               allocator.zero_allocate(
                   size,
                   sizeof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris),
                   allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success =
          aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array
      // elements
      for (; i > 0; --i) {
        aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(
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

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__fini(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *array) {
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(
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

aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *
aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__create(
    size_t size) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *array =
      (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *)
          allocator.allocate(
              sizeof(
                  aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence),
              allocator.state);
  if (!array) {
    return NULL;
  }
  bool success =
      aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__init(
          array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__destroy(
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *array) {
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__are_equal(
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *lhs,
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *rhs) {
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__are_equal(
            &(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence__copy(
    const aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *input,
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__Sequence *output) {
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
        input->size *
        sizeof(aspn23_ros_interfaces__msg__MetadataGlonassEphemeris);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *data =
        (aspn23_ros_interfaces__msg__MetadataGlonassEphemeris *)allocator
            .reallocate(output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__init(
              &output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity;) {
          aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__fini(
              &output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aspn23_ros_interfaces__msg__MetadataGlonassEphemeris__copy(
            &(input->data[i]), &(output->data[i]))) {
      return false;
    }
  }
  return true;
}
