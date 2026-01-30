// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MeasurementPositionVelocityAttitude.idl
// generated code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_position_velocity_attitude__struct.hpp"
#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"
#include "string"
#include "vector"

namespace aspn23_ros_interfaces {

namespace msg {

namespace rosidl_typesupport_introspection_cpp {

void MeasurementPositionVelocityAttitude_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude(_init);
}

void MeasurementPositionVelocityAttitude_fini_function(void *message_memory) {
  auto typed_message = static_cast<
      aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude *>(
      message_memory);
  typed_message->~MeasurementPositionVelocityAttitude();
}

size_t size_function__MeasurementPositionVelocityAttitude__quaternion(
    const void *untyped_member) {
  (void)untyped_member;
  return 4;
}

const void *get_const_function__MeasurementPositionVelocityAttitude__quaternion(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void *get_function__MeasurementPositionVelocityAttitude__quaternion(
    void *untyped_member, size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementPositionVelocityAttitude__quaternion(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementPositionVelocityAttitude__quaternion(
          untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementPositionVelocityAttitude__quaternion(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementPositionVelocityAttitude__quaternion(
          untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MeasurementPositionVelocityAttitude__covariance(
    const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementPositionVelocityAttitude__covariance(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *get_function__MeasurementPositionVelocityAttitude__covariance(
    void *untyped_member, size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementPositionVelocityAttitude__covariance(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementPositionVelocityAttitude__covariance(
          untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementPositionVelocityAttitude__covariance(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementPositionVelocityAttitude__covariance(
          untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MeasurementPositionVelocityAttitude__covariance(
    void *untyped_member, size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeasurementPositionVelocityAttitude__error_model_params(
    const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *
get_const_function__MeasurementPositionVelocityAttitude__error_model_params(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *get_function__MeasurementPositionVelocityAttitude__error_model_params(
    void *untyped_member, size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementPositionVelocityAttitude__error_model_params(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementPositionVelocityAttitude__error_model_params(
          untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementPositionVelocityAttitude__error_model_params(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementPositionVelocityAttitude__error_model_params(
          untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MeasurementPositionVelocityAttitude__error_model_params(
    void *untyped_member, size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeasurementPositionVelocityAttitude__integrity(
    const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementPositionVelocityAttitude__integrity(
    const void *untyped_member, size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementPositionVelocityAttitude__integrity(
    void *untyped_member, size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementPositionVelocityAttitude__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          get_const_function__MeasurementPositionVelocityAttitude__integrity(
              untyped_member, index));
  auto &value = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      untyped_value);
  value = item;
}

void assign_function__MeasurementPositionVelocityAttitude__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      get_function__MeasurementPositionVelocityAttitude__integrity(
          untyped_member, index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementPositionVelocityAttitude__integrity(
    void *untyped_member, size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeasurementPositionVelocityAttitude_message_member_array[17] =
    {{
         "header",                                                 // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
         0, // upper bound of string
         ::rosidl_typesupport_introspection_cpp::
             get_message_type_support_handle<
                 aspn23_ros_interfaces::msg::TypeHeader>(), // members of sub
                                                            // message
         false,                                             // is key
         false,                                             // is array
         0,                                                 // array size
         false,                                             // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             header), // bytes offset in struct
         nullptr,     // default value
         nullptr,     // size() function pointer
         nullptr,     // get_const(index) function pointer
         nullptr,     // get(index) function pointer
         nullptr,     // fetch(index, &value) function pointer
         nullptr,     // assign(index, value) function pointer
         nullptr      // resize(index) function pointer
     },
     {
         "time_of_validity",                                       // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
         0, // upper bound of string
         ::rosidl_typesupport_introspection_cpp::
             get_message_type_support_handle<
                 aspn23_ros_interfaces::msg::TypeTimestamp>(), // members of sub
                                                               // message
         false,                                                // is key
         false,                                                // is array
         0,                                                    // array size
         false,                                                // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             time_of_validity), // bytes offset in struct
         nullptr,               // default value
         nullptr,               // size() function pointer
         nullptr,               // get_const(index) function pointer
         nullptr,               // get(index) function pointer
         nullptr,               // fetch(index, &value) function pointer
         nullptr,               // assign(index, value) function pointer
         nullptr                // resize(index) function pointer
     },
     {
         "reference_frame",                                      // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             reference_frame), // bytes offset in struct
         nullptr,              // default value
         nullptr,              // size() function pointer
         nullptr,              // get_const(index) function pointer
         nullptr,              // get(index) function pointer
         nullptr,              // fetch(index, &value) function pointer
         nullptr,              // assign(index, value) function pointer
         nullptr               // resize(index) function pointer
     },
     {
         "p1",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             p1), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "p2",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             p2), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "p3",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             p3), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "v1",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             v1), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "v2",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             v2), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "v3",                                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             v3), // bytes offset in struct
         nullptr, // default value
         nullptr, // size() function pointer
         nullptr, // get_const(index) function pointer
         nullptr, // get(index) function pointer
         nullptr, // fetch(index, &value) function pointer
         nullptr, // assign(index, value) function pointer
         nullptr  // resize(index) function pointer
     },
     {
         "quaternion",                                            // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         true,    // is array
         4,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             quaternion), // bytes offset in struct
         nullptr,         // default value
         size_function__MeasurementPositionVelocityAttitude__quaternion, // size()
                                                                         // function
                                                                         // pointer
         get_const_function__MeasurementPositionVelocityAttitude__quaternion, // get_const(index) function pointer
         get_function__MeasurementPositionVelocityAttitude__quaternion, // get(index)
                                                                        // function
                                                                        // pointer
         fetch_function__MeasurementPositionVelocityAttitude__quaternion, // fetch(index,
                                                                          // &value)
                                                                          // function
                                                                          // pointer
         assign_function__MeasurementPositionVelocityAttitude__quaternion, // assign(index,
                                                                           // value)
                                                                           // function
                                                                           // pointer
         nullptr // resize(index) function pointer
     },
     {
         "num_meas",                                             // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             num_meas), // bytes offset in struct
         nullptr,       // default value
         nullptr,       // size() function pointer
         nullptr,       // get_const(index) function pointer
         nullptr,       // get(index) function pointer
         nullptr,       // fetch(index, &value) function pointer
         nullptr,       // assign(index, value) function pointer
         nullptr        // resize(index) function pointer
     },
     {
         "covariance",                                            // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         true,    // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             covariance), // bytes offset in struct
         nullptr,         // default value
         size_function__MeasurementPositionVelocityAttitude__covariance, // size()
                                                                         // function
                                                                         // pointer
         get_const_function__MeasurementPositionVelocityAttitude__covariance, // get_const(index) function pointer
         get_function__MeasurementPositionVelocityAttitude__covariance, // get(index)
                                                                        // function
                                                                        // pointer
         fetch_function__MeasurementPositionVelocityAttitude__covariance, // fetch(index,
                                                                          // &value)
                                                                          // function
                                                                          // pointer
         assign_function__MeasurementPositionVelocityAttitude__covariance, // assign(index,
                                                                           // value)
                                                                           // function
                                                                           // pointer
         resize_function__MeasurementPositionVelocityAttitude__covariance // resize(index)
                                                                          // function
                                                                          // pointer
     },
     {
         "error_model",                                          // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             error_model), // bytes offset in struct
         nullptr,          // default value
         nullptr,          // size() function pointer
         nullptr,          // get_const(index) function pointer
         nullptr,          // get(index) function pointer
         nullptr,          // fetch(index, &value) function pointer
         nullptr,          // assign(index, value) function pointer
         nullptr           // resize(index) function pointer
     },
     {
         "num_error_model_params",                                // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             num_error_model_params), // bytes offset in struct
         nullptr,                     // default value
         nullptr,                     // size() function pointer
         nullptr,                     // get_const(index) function pointer
         nullptr,                     // get(index) function pointer
         nullptr,                     // fetch(index, &value) function pointer
         nullptr,                     // assign(index, value) function pointer
         nullptr                      // resize(index) function pointer
     },
     {
         "error_model_params",                                    // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         true,    // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             error_model_params), // bytes offset in struct
         nullptr,                 // default value
         size_function__MeasurementPositionVelocityAttitude__error_model_params, // size() function pointer
         get_const_function__MeasurementPositionVelocityAttitude__error_model_params, // get_const(index) function pointer
         get_function__MeasurementPositionVelocityAttitude__error_model_params, // get(index) function pointer
         fetch_function__MeasurementPositionVelocityAttitude__error_model_params, // fetch(index, &value) function pointer
         assign_function__MeasurementPositionVelocityAttitude__error_model_params, // assign(index, value) function pointer
         resize_function__MeasurementPositionVelocityAttitude__error_model_params // resize(index) function pointer
     },
     {
         "num_integrity",                                        // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
         0,       // upper bound of string
         nullptr, // members of sub message
         false,   // is key
         false,   // is array
         0,       // array size
         false,   // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             num_integrity), // bytes offset in struct
         nullptr,            // default value
         nullptr,            // size() function pointer
         nullptr,            // get_const(index) function pointer
         nullptr,            // get(index) function pointer
         nullptr,            // fetch(index, &value) function pointer
         nullptr,            // assign(index, value) function pointer
         nullptr             // resize(index) function pointer
     },
     {
         "integrity",                                              // name
         ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
         0, // upper bound of string
         ::rosidl_typesupport_introspection_cpp::
             get_message_type_support_handle<
                 aspn23_ros_interfaces::msg::TypeIntegrity>(), // members of sub
                                                               // message
         false,                                                // is key
         true,                                                 // is array
         0,                                                    // array size
         false,                                                // is upper bound
         offsetof(
             aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude,
             integrity), // bytes offset in struct
         nullptr,        // default value
         size_function__MeasurementPositionVelocityAttitude__integrity, // size()
                                                                        // function
                                                                        // pointer
         get_const_function__MeasurementPositionVelocityAttitude__integrity, // get_const(index) function pointer
         get_function__MeasurementPositionVelocityAttitude__integrity, // get(index)
                                                                       // function
                                                                       // pointer
         fetch_function__MeasurementPositionVelocityAttitude__integrity, // fetch(index,
                                                                         // &value)
                                                                         // function
                                                                         // pointer
         assign_function__MeasurementPositionVelocityAttitude__integrity, // assign(index,
                                                                          // value)
                                                                          // function
                                                                          // pointer
         resize_function__MeasurementPositionVelocityAttitude__integrity // resize(index)
                                                                         // function
                                                                         // pointer
     }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MeasurementPositionVelocityAttitude_message_members = {
        "aspn23_ros_interfaces::msg",          // message namespace
        "MeasurementPositionVelocityAttitude", // message name
        17,                                    // number of fields
        sizeof(aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude),
        false, // has_any_key_member_
        MeasurementPositionVelocityAttitude_message_member_array, // message
                                                                  // members
        MeasurementPositionVelocityAttitude_init_function,        // function to
                                                           // initialize message
                                                           // memory (memory has
                                                           // to be allocated)
        MeasurementPositionVelocityAttitude_fini_function // function to
                                                          // terminate message
                                                          // instance (will not
                                                          // free memory)
};

static const rosidl_message_type_support_t
    MeasurementPositionVelocityAttitude_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MeasurementPositionVelocityAttitude_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_hash,
        &aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_description,
        &aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MeasurementPositionVelocityAttitude>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementPositionVelocityAttitude_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MeasurementPositionVelocityAttitude)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementPositionVelocityAttitude_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
