// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MeasurementSatnavWithSvData.idl
// generated code does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/measurement_satnav_with_sv_data__struct.hpp"
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

void MeasurementSatnavWithSvData_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory)
      aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData(_init);
}

void MeasurementSatnavWithSvData_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData *>(
          message_memory);
  typed_message->~MeasurementSatnavWithSvData();
}

size_t
size_function__MeasurementSatnavWithSvData__obs(const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeSatnavObs> *>(
      untyped_member);
  return member->size();
}

const void *
get_const_function__MeasurementSatnavWithSvData__obs(const void *untyped_member,
                                                     size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeSatnavObs> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementSatnavWithSvData__obs(void *untyped_member,
                                                     size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeSatnavObs> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementSatnavWithSvData__obs(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeSatnavObs *>(
          get_const_function__MeasurementSatnavWithSvData__obs(untyped_member,
                                                               index));
  auto &value = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeSatnavObs *>(
      untyped_value);
  value = item;
}

void assign_function__MeasurementSatnavWithSvData__obs(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeSatnavObs *>(
      get_function__MeasurementSatnavWithSvData__obs(untyped_member, index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeSatnavObs *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementSatnavWithSvData__obs(void *untyped_member,
                                                       size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeSatnavObs> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeSatnavSvData> *>(
      untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member, size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeSatnavSvData> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementSatnavWithSvData__sv_data(void *untyped_member,
                                                         size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeSatnavSvData> *>(
      untyped_member);
  return &member[index];
}

void fetch_function__MeasurementSatnavWithSvData__sv_data(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeSatnavSvData *>(
          get_const_function__MeasurementSatnavWithSvData__sv_data(
              untyped_member, index));
  auto &value =
      *reinterpret_cast<aspn23_ros_interfaces::msg::TypeSatnavSvData *>(
          untyped_value);
  value = item;
}

void assign_function__MeasurementSatnavWithSvData__sv_data(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item =
      *reinterpret_cast<aspn23_ros_interfaces::msg::TypeSatnavSvData *>(
          get_function__MeasurementSatnavWithSvData__sv_data(untyped_member,
                                                             index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeSatnavSvData *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementSatnavWithSvData__sv_data(void *untyped_member,
                                                           size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeSatnavSvData> *>(
      untyped_member);
  member->resize(size);
}

size_t size_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member) {
  const auto *member = reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return member->size();
}

const void *get_const_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member, size_t index) {
  const auto &member = *reinterpret_cast<
      const std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(
      untyped_member);
  return &member[index];
}

void *get_function__MeasurementSatnavWithSvData__integrity(void *untyped_member,
                                                           size_t index) {
  auto &member = *reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeasurementSatnavWithSvData__integrity(
    const void *untyped_member, size_t index, void *untyped_value) {
  const auto &item =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          get_const_function__MeasurementSatnavWithSvData__integrity(
              untyped_member, index));
  auto &value = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      untyped_value);
  value = item;
}

void assign_function__MeasurementSatnavWithSvData__integrity(
    void *untyped_member, size_t index, const void *untyped_value) {
  auto &item = *reinterpret_cast<aspn23_ros_interfaces::msg::TypeIntegrity *>(
      get_function__MeasurementSatnavWithSvData__integrity(untyped_member,
                                                           index));
  const auto &value =
      *reinterpret_cast<const aspn23_ros_interfaces::msg::TypeIntegrity *>(
          untyped_value);
  item = value;
}

void resize_function__MeasurementSatnavWithSvData__integrity(
    void *untyped_member, size_t size) {
  auto *member = reinterpret_cast<
      std::vector<aspn23_ros_interfaces::msg::TypeIntegrity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MeasurementSatnavWithSvData_message_member_array[9] = {
        {
            "header",                                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeHeader>(), // members of sub
                                                               // message
            false,                                             // is array
            0,                                                 // array size
            false,                                             // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
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
            false,                                                // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
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
            "receiver_clock_time",                                    // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeSatnavTime>(), // members of
                                                                   // sub
                                                                   // message
            false,                                                 // is array
            0,                                                     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     receiver_clock_time), // bytes offset in struct
            nullptr,                       // default value
            nullptr,                       // size() function pointer
            nullptr,                       // get_const(index) function pointer
            nullptr,                       // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "num_signal_types",                                      // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     num_signal_types), // bytes offset in struct
            nullptr,                    // default value
            nullptr,                    // size() function pointer
            nullptr,                    // get_const(index) function pointer
            nullptr,                    // get(index) function pointer
            nullptr,                    // fetch(index, &value) function pointer
            nullptr,                    // assign(index, value) function pointer
            nullptr                     // resize(index) function pointer
        },
        {
            "num_signals_tracked",                                   // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     num_signals_tracked), // bytes offset in struct
            nullptr,                       // default value
            nullptr,                       // size() function pointer
            nullptr,                       // get_const(index) function pointer
            nullptr,                       // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "obs",                                                    // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeSatnavObs>(), // members of
                                                                  // sub message
            true,                                                 // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     obs), // bytes offset in struct
            nullptr,       // default value
            size_function__MeasurementSatnavWithSvData__obs, // size() function
                                                             // pointer
            get_const_function__MeasurementSatnavWithSvData__obs, // get_const(index)
                                                                  // function
                                                                  // pointer
            get_function__MeasurementSatnavWithSvData__obs, // get(index)
                                                            // function pointer
            fetch_function__MeasurementSatnavWithSvData__obs,  // fetch(index,
                                                               // &value)
                                                               // function
                                                               // pointer
            assign_function__MeasurementSatnavWithSvData__obs, // assign(index,
                                                               // value)
                                                               // function
                                                               // pointer
            resize_function__MeasurementSatnavWithSvData__obs  // resize(index)
                                                               // function
                                                               // pointer
        },
        {
            "sv_data",                                                // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE, // type
            0, // upper bound of string
            ::rosidl_typesupport_introspection_cpp::
                get_message_type_support_handle<
                    aspn23_ros_interfaces::msg::TypeSatnavSvData>(), // members
                                                                     // of sub
                                                                     // message
            true,                                                    // is array
            0,     // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     sv_data), // bytes offset in struct
            nullptr,           // default value
            size_function__MeasurementSatnavWithSvData__sv_data, // size()
                                                                 // function
                                                                 // pointer
            get_const_function__MeasurementSatnavWithSvData__sv_data, // get_const(index)
                                                                      // function
                                                                      // pointer
            get_function__MeasurementSatnavWithSvData__sv_data,   // get(index)
                                                                  // function
                                                                  // pointer
            fetch_function__MeasurementSatnavWithSvData__sv_data, // fetch(index,
                                                                  // &value)
                                                                  // function
                                                                  // pointer
            assign_function__MeasurementSatnavWithSvData__sv_data, // assign(index,
                                                                   // value)
                                                                   // function
                                                                   // pointer
            resize_function__MeasurementSatnavWithSvData__sv_data // resize(index)
                                                                  // function
                                                                  // pointer
        },
        {
            "num_integrity",                                        // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
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
            true,                                                 // is array
            0,                                                    // array size
            false, // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData,
                     integrity), // bytes offset in struct
            nullptr,             // default value
            size_function__MeasurementSatnavWithSvData__integrity, // size()
                                                                   // function
                                                                   // pointer
            get_const_function__MeasurementSatnavWithSvData__integrity, // get_const(index)
                                                                        // function
                                                                        // pointer
            get_function__MeasurementSatnavWithSvData__integrity, // get(index)
                                                                  // function
                                                                  // pointer
            fetch_function__MeasurementSatnavWithSvData__integrity, // fetch(index,
                                                                    // &value)
                                                                    // function
                                                                    // pointer
            assign_function__MeasurementSatnavWithSvData__integrity, // assign(index,
                                                                     // value)
                                                                     // function
                                                                     // pointer
            resize_function__MeasurementSatnavWithSvData__integrity // resize(index)
                                                                    // function
                                                                    // pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MeasurementSatnavWithSvData_message_members = {
        "aspn23_ros_interfaces::msg",  // message namespace
        "MeasurementSatnavWithSvData", // message name
        9,                             // number of fields
        sizeof(aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData),
        MeasurementSatnavWithSvData_message_member_array, // message members
        MeasurementSatnavWithSvData_init_function, // function to initialize
                                                   // message memory (memory has
                                                   // to be allocated)
        MeasurementSatnavWithSvData_fini_function  // function to terminate
                                                   // message instance (will not
                                                   // free memory)
};

static const rosidl_message_type_support_t
    MeasurementSatnavWithSvData_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MeasurementSatnavWithSvData_message_members,
        get_message_typesupport_handle_function,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const
    rosidl_message_type_support_t *
    get_message_type_support_handle<
        aspn23_ros_interfaces::msg::MeasurementSatnavWithSvData>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementSatnavWithSvData_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MeasurementSatnavWithSvData)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MeasurementSatnavWithSvData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
