// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataMagneticField.idl generated code
// does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_magnetic_field__struct.hpp"
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

void MetadataMagneticField_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::MetadataMagneticField(_init);
}

void MetadataMagneticField_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataMagneticField *>(
          message_memory);
  typed_message->~MetadataMagneticField();
}

size_t size_function__MetadataMagneticField__k(const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *
get_const_function__MetadataMagneticField__k(const void *untyped_member,
                                             size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *get_function__MetadataMagneticField__k(void *untyped_member,
                                             size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MetadataMagneticField__k(const void *untyped_member,
                                              size_t index,
                                              void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MetadataMagneticField__k(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MetadataMagneticField__k(void *untyped_member,
                                               size_t index,
                                               const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MetadataMagneticField__k(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MetadataMagneticField__k(void *untyped_member,
                                               size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MetadataMagneticField__b(const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *
get_const_function__MetadataMagneticField__b(const void *untyped_member,
                                             size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *get_function__MetadataMagneticField__b(void *untyped_member,
                                             size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MetadataMagneticField__b(const void *untyped_member,
                                              size_t index,
                                              void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MetadataMagneticField__b(untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MetadataMagneticField__b(void *untyped_member,
                                               size_t index,
                                               const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MetadataMagneticField__b(untyped_member, index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MetadataMagneticField__b(void *untyped_member,
                                               size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataMagneticField_message_member_array[6] = {
        {
            "info",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::
                        TypeMetadataheader>(), // members of sub message
            false,                             // is key
            false,                             // is array
            0,                                 // array size
            false,                             // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     info), // bytes offset in struct
            nullptr,        // default value
            nullptr,        // size() function pointer
            nullptr,        // get_const(index) function pointer
            nullptr,        // get(index) function pointer
            nullptr,        // fetch(index, &value) function pointer
            nullptr,        // assign(index, value) function pointer
            nullptr         // resize(index) function pointer
        },
        {
            "time_of_validity",                                       // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeTimestamp>(), // members of
                                                                  // sub message
            false,                                                // is key
            false,                                                // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     time_of_validity), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "mounting",                                               // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeMounting>(), // members of
                                                                 // sub message
            false,                                               // is key
            false,                                               // is array
            0,                                                   // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     mounting), // bytes offset in struct
            nullptr,            // default value
            nullptr,            // size() function pointer
            nullptr,            // get_const(index) function pointer
            nullptr,            // get(index) function pointer
            nullptr,            // fetch(index, &value) function pointer
            nullptr,            // assign(index, value) function pointer
            nullptr             // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     num_meas), // bytes offset in struct
            nullptr,            // default value
            nullptr,            // size() function pointer
            nullptr,            // get_const(index) function pointer
            nullptr,            // get(index) function pointer
            nullptr,            // fetch(index, &value) function pointer
            nullptr,            // assign(index, value) function pointer
            nullptr             // resize(index) function pointer
        },
        {
            "k",                                                     // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     k),                             // bytes offset in struct
            nullptr,                                 // default value
            size_function__MetadataMagneticField__k, // size() function pointer
            get_const_function__MetadataMagneticField__k, // get_const(index)
                                                          // function pointer
            get_function__MetadataMagneticField__k,       // get(index) function
                                                          // pointer
            fetch_function__MetadataMagneticField__k,  // fetch(index, &value)
                                                       // function pointer
            assign_function__MetadataMagneticField__k, // assign(index, value)
                                                       // function pointer
            resize_function__MetadataMagneticField__k  // resize(index) function
                                                       // pointer
        },
        {
            "b",                                                     // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            true,    // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataMagneticField,
                     b),                             // bytes offset in struct
            nullptr,                                 // default value
            size_function__MetadataMagneticField__b, // size() function pointer
            get_const_function__MetadataMagneticField__b, // get_const(index)
                                                          // function pointer
            get_function__MetadataMagneticField__b,       // get(index) function
                                                          // pointer
            fetch_function__MetadataMagneticField__b,  // fetch(index, &value)
                                                       // function pointer
            assign_function__MetadataMagneticField__b, // assign(index, value)
                                                       // function pointer
            resize_function__MetadataMagneticField__b  // resize(index) function
                                                       // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataMagneticField_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataMagneticField",      // message name
        6,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataMagneticField),
        false,                                      // has_any_key_member_
        MetadataMagneticField_message_member_array, // message members
        MetadataMagneticField_init_function, // function to initialize message
                                             // memory (memory has to be
                                             // allocated)
        MetadataMagneticField_fini_function  // function to terminate message
                                             // instance (will not free memory)
};

static const rosidl_message_type_support_t
    MetadataMagneticField_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataMagneticField_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataMagneticField__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataMagneticField>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataMagneticField_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataMagneticField)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataMagneticField_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
