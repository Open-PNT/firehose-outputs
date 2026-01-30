// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MeasurementTdoa1Tx2Rx.idl generated code
// does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa1_tx2_rx__functions.h"
#include "aspn23_ros_interfaces/msg/detail/measurement_tdoa1_tx2_rx__struct.hpp"
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

void MeasurementTdoa1Tx2Rx_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx(_init);
}

void MeasurementTdoa1Tx2Rx_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx *>(
          message_memory);
  typed_message->~MeasurementTdoa1Tx2Rx();
}

size_t size_function__MeasurementTdoa1Tx2Rx__error_model_params(
    const void *untyped_member) {
  const auto *member =
      reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementTdoa1Tx2Rx__error_model_params(
    const void *untyped_member, size_t index) {
  const auto &member =
      *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void *
get_function__MeasurementTdoa1Tx2Rx__error_model_params(void *untyped_member,
                                                        size_t index) {
  auto &member = *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementTdoa1Tx2Rx__error_model_params(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item = *reinterpret_cast<const double *>(
      get_const_function__MeasurementTdoa1Tx2Rx__error_model_params(
          untyped_member, index));
  auto &value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MeasurementTdoa1Tx2Rx__error_model_params(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<double *>(
      get_function__MeasurementTdoa1Tx2Rx__error_model_params(untyped_member,
                                                              index));
  const auto &value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MeasurementTdoa1Tx2Rx__error_model_params(
    void *untyped_member, size_t size) {
  auto *member = reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t
size_function__MeasurementTdoa1Tx2Rx__integrity(const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return member->size();
}

const void *
get_const_function__MeasurementTdoa1Tx2Rx__integrity(const void *untyped_member,
                                                     size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementTdoa1Tx2Rx__integrity(void *untyped_member,
                                                     size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementTdoa1Tx2Rx__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          get_const_function__MeasurementTdoa1Tx2Rx__integrity(untyped_member,
                                                               index));
  auto &value = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      untyped_value);
  value = item;
}

void assign_function__MeasurementTdoa1Tx2Rx__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      get_function__MeasurementTdoa1Tx2Rx__integrity(untyped_member, index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementTdoa1Tx2Rx__integrity(void *untyped_member,
                                                       size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MeasurementTdoa1Tx2Rx_message_member_array[11] = {
        {
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     header), // bytes offset in struct
            nullptr,          // default value
            nullptr,          // size() function pointer
            nullptr,          // get_const(index) function pointer
            nullptr,          // get(index) function pointer
            nullptr,          // fetch(index, &value) function pointer
            nullptr,          // assign(index, value) function pointer
            nullptr           // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
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
            "tx_position_and_covariance",                             // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeRemotePoint>(), // members
                                                                    // of sub
                                                                    // message
            false,                                                  // is key
            false,                                                  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     tx_position_and_covariance), // bytes offset in struct
            nullptr,                              // default value
            nullptr,                              // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "rx1_position_and_covariance",                            // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeRemotePoint>(), // members
                                                                    // of sub
                                                                    // message
            false,                                                  // is key
            false,                                                  // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     rx1_position_and_covariance), // bytes offset in struct
            nullptr,                               // default value
            nullptr,                               // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "obs",                                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     obs), // bytes offset in struct
            nullptr,       // default value
            nullptr,       // size() function pointer
            nullptr,       // get_const(index) function pointer
            nullptr,       // get(index) function pointer
            nullptr,       // fetch(index, &value) function pointer
            nullptr,       // assign(index, value) function pointer
            nullptr        // resize(index) function pointer
        },
        {
            "variance",                                              // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     variance), // bytes offset in struct
            nullptr,            // default value
            nullptr,            // size() function pointer
            nullptr,            // get_const(index) function pointer
            nullptr,            // get(index) function pointer
            nullptr,            // fetch(index, &value) function pointer
            nullptr,            // assign(index, value) function pointer
            nullptr             // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     error_model), // bytes offset in struct
            nullptr,               // default value
            nullptr,               // size() function pointer
            nullptr,               // get_const(index) function pointer
            nullptr,               // get(index) function pointer
            nullptr,               // fetch(index, &value) function pointer
            nullptr,               // assign(index, value) function pointer
            nullptr                // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     num_error_model_params), // bytes offset in struct
            nullptr,                          // default value
            nullptr,                          // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     error_model_params), // bytes offset in struct
            nullptr,                      // default value
            size_function__MeasurementTdoa1Tx2Rx__error_model_params, // size()
                                                                      // function
                                                                      // pointer
            get_const_function__MeasurementTdoa1Tx2Rx__error_model_params, // get_const(index)
                                                                           // function
                                                                           // pointer
            get_function__MeasurementTdoa1Tx2Rx__error_model_params, // get(index)
                                                                     // function
                                                                     // pointer
            fetch_function__MeasurementTdoa1Tx2Rx__error_model_params, // fetch(index,
                                                                       // &value)
                                                                       // function
                                                                       // pointer
            assign_function__MeasurementTdoa1Tx2Rx__error_model_params, // assign(index,
                                                                        // value)
                                                                        // function
                                                                        // pointer
            resize_function__MeasurementTdoa1Tx2Rx__error_model_params // resize(index)
                                                                       // function
                                                                       // pointer
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
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     num_integrity), // bytes offset in struct
            nullptr,                 // default value
            nullptr,                 // size() function pointer
            nullptr,                 // get_const(index) function pointer
            nullptr,                 // get(index) function pointer
            nullptr,                 // fetch(index, &value) function pointer
            nullptr,                 // assign(index, value) function pointer
            nullptr                  // resize(index) function pointer
        },
        {
            "integrity",                                              // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeIntegrity>(), // members of
                                                                  // sub message
            false,                                                // is key
            true,                                                 // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx,
                     integrity), // bytes offset in struct
            nullptr,             // default value
            size_function__MeasurementTdoa1Tx2Rx__integrity, // size() function
                                                             // pointer
            get_const_function__MeasurementTdoa1Tx2Rx__integrity, // get_const(index)
                                                                  // function
                                                                  // pointer
            get_function__MeasurementTdoa1Tx2Rx__integrity, // get(index)
                                                            // function pointer
            fetch_function__MeasurementTdoa1Tx2Rx__integrity,  // fetch(index,
                                                               // &value)
                                                               // function
                                                               // pointer
            assign_function__MeasurementTdoa1Tx2Rx__integrity, // assign(index,
                                                               // value)
                                                               // function
                                                               // pointer
            resize_function__MeasurementTdoa1Tx2Rx__integrity  // resize(index)
                                                               // function
                                                               // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MeasurementTdoa1Tx2Rx_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MeasurementTdoa1Tx2Rx",      // message name
        11,                           // number of fields
        sizeof(aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx),
        false,                                      // has_any_key_member_
        MeasurementTdoa1Tx2Rx_message_member_array, // message members
        MeasurementTdoa1Tx2Rx_init_function, // function to initialize message
                                             // memory (memory has to be
                                             // allocated)
        MeasurementTdoa1Tx2Rx_fini_function  // function to terminate message
                                             // instance (will not free memory)
};

static const rosidl_message_type_support_t
    MeasurementTdoa1Tx2Rx_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MeasurementTdoa1Tx2Rx_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx__get_type_hash,
        &aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx__get_type_description,
        &aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MeasurementTdoa1Tx2Rx>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementTdoa1Tx2Rx_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MeasurementTdoa1Tx2Rx)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementTdoa1Tx2Rx_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
