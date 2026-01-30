// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/TypeMounting.idl generated code does not
// contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__functions.h"
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.hpp"
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

void TypeMounting_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::TypeMounting(_init);
}

void TypeMounting_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::TypeMounting *>(message_memory);
  typed_message->~TypeMounting();
}

size_t size_function__TypeMounting__lever_arm(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__TypeMounting__lever_arm(const void *untyped_member,
                                            size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeMounting__lever_arm(void *untyped_member,
                                            size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeMounting__lever_arm(const void *untyped_member,
                                             size_t index,
                                             void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeMounting__lever_arm(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeMounting__lever_arm(void *untyped_member,
                                              size_t index,
                                              const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeMounting__lever_arm(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t
size_function__TypeMounting__lever_arm_sigma(const void *untyped_member) {
  (void)untyped_member;
  return 3;
}

const void *
get_const_function__TypeMounting__lever_arm_sigma(const void *untyped_member,
                                                  size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeMounting__lever_arm_sigma(void *untyped_member,
                                                  size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeMounting__lever_arm_sigma(const void *untyped_member,
                                                   size_t index,
                                                   void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeMounting__lever_arm_sigma(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeMounting__lever_arm_sigma(void *untyped_member,
                                                    size_t index,
                                                    const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeMounting__lever_arm_sigma(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__TypeMounting__orientation_quaternion(
    const void *untyped_member) {
  (void)untyped_member;
  return 4;
}

const void *get_const_function__TypeMounting__orientation_quaternion(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeMounting__orientation_quaternion(void *untyped_member,
                                                         size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeMounting__orientation_quaternion(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeMounting__orientation_quaternion(untyped_member,
                                                               index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeMounting__orientation_quaternion(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeMounting__orientation_quaternion(untyped_member,
                                                         index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__TypeMounting__orientation_tilt_error_covariance(
    const void *untyped_member) {
  (void)untyped_member;
  return 9;
}

const void *get_const_function__TypeMounting__orientation_tilt_error_covariance(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void *get_function__TypeMounting__orientation_tilt_error_covariance(
    void *untyped_member, size_t index) {
  auto &member = *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__TypeMounting__orientation_tilt_error_covariance(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__TypeMounting__orientation_tilt_error_covariance(
          untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__TypeMounting__orientation_tilt_error_covariance(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__TypeMounting__orientation_tilt_error_covariance(
          untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    TypeMounting_message_member_array[4] = {
        {
            "lever_arm",                                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeMounting,
                     lever_arm),                    // bytes offset in struct
            nullptr,                                // default value
            size_function__TypeMounting__lever_arm, // size() function pointer
            get_const_function__TypeMounting__lever_arm, // get_const(index)
                                                         // function pointer
            get_function__TypeMounting__lever_arm,       // get(index) function
                                                         // pointer
            fetch_function__TypeMounting__lever_arm,     // fetch(index, &value)
                                                         // function pointer
            assign_function__TypeMounting__lever_arm,    // assign(index, value)
                                                         // function pointer
            nullptr // resize(index) function pointer
        },
        {
            "lever_arm_sigma",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            3,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeMounting,
                     lever_arm_sigma), // bytes offset in struct
            nullptr,                   // default value
            size_function__TypeMounting__lever_arm_sigma, // size() function
                                                          // pointer
            get_const_function__TypeMounting__lever_arm_sigma, // get_const(index)
                                                               // function
                                                               // pointer
            get_function__TypeMounting__lever_arm_sigma, // get(index) function
                                                         // pointer
            fetch_function__TypeMounting__lever_arm_sigma,  // fetch(index,
                                                            // &value) function
                                                            // pointer
            assign_function__TypeMounting__lever_arm_sigma, // assign(index,
                                                            // value) function
                                                            // pointer
            nullptr // resize(index) function pointer
        },
        {
            "orientation_quaternion",                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            4,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::TypeMounting,
                     orientation_quaternion), // bytes offset in struct
            nullptr,                          // default value
            size_function__TypeMounting__orientation_quaternion, // size()
                                                                 // function
                                                                 // pointer
            get_const_function__TypeMounting__orientation_quaternion, // get_const(index)
                                                                      // function
                                                                      // pointer
            get_function__TypeMounting__orientation_quaternion,   // get(index)
                                                                  // function
                                                                  // pointer
            fetch_function__TypeMounting__orientation_quaternion, // fetch(index,
                                                                  // &value)
                                                                  // function
                                                                  // pointer
            assign_function__TypeMounting__orientation_quaternion, // assign(index,
                                                                   // value)
                                                                   // function
                                                                   // pointer
            nullptr // resize(index) function pointer
        },
        {
            "orientation_tilt_error_covariance",                     // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            9,       // array size
            false,   // is upper bound
            offsetof(
                aspn23_ros_interfaces::msg::TypeMounting,
                orientation_tilt_error_covariance), // bytes offset in struct
            nullptr,                                // default value
            size_function__TypeMounting__orientation_tilt_error_covariance, // size() function pointer
            get_const_function__TypeMounting__orientation_tilt_error_covariance, // get_const(index) function pointer
            get_function__TypeMounting__orientation_tilt_error_covariance, // get(index)
                                                                           // function
                                                                           // pointer
            fetch_function__TypeMounting__orientation_tilt_error_covariance, // fetch(index, &value) function pointer
            assign_function__TypeMounting__orientation_tilt_error_covariance, // assign(index, value) function pointer
            nullptr // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    TypeMounting_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "TypeMounting",               // message name
        4,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::TypeMounting),
        false,                             // has_any_key_member_
        TypeMounting_message_member_array, // message members
        TypeMounting_init_function, // function to initialize message memory
                                    // (memory has to be allocated)
        TypeMounting_fini_function  // function to terminate message instance
                                    // (will not free memory)
};

static const rosidl_message_type_support_t
    TypeMounting_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &TypeMounting_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__TypeMounting__get_type_hash,
        &aspn23_ros_interfaces__msg__TypeMounting__get_type_description,
        &aspn23_ros_interfaces__msg__TypeMounting__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<aspn23_ros_interfaces::msg::TypeMounting>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeMounting_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    TypeMounting)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      TypeMounting_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
