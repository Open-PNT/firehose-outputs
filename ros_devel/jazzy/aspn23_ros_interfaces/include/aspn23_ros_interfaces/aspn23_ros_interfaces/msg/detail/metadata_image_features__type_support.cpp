// generated from
// rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em with
// input from aspn23_ros_interfaces:msg/MetadataImageFeatures.idl generated code
// does not contain a copyright notice

#include "array"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__functions.h"
#include "aspn23_ros_interfaces/msg/detail/metadata_image_features__struct.hpp"
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

void MetadataImageFeatures_init_function(
    void *message_memory, rosidl_runtime_cpp::MessageInitialization _init) {
  new (message_memory) aspn23_ros_interfaces::msg::MetadataImageFeatures(_init);
}

void MetadataImageFeatures_fini_function(void *message_memory) {
  auto typed_message =
      static_cast<aspn23_ros_interfaces::msg::MetadataImageFeatures *>(
          message_memory);
  typed_message->~MetadataImageFeatures();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember
    MetadataImageFeatures_message_member_array[8] = {
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
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
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
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
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
            "keypoint_detector",                                    // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     keypoint_detector), // bytes offset in struct
            nullptr,                     // default value
            nullptr,                     // size() function pointer
            nullptr,                     // get_const(index) function pointer
            nullptr,                     // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "orientation_calculated",                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     orientation_calculated), // bytes offset in struct
            nullptr,                          // default value
            nullptr,                          // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "descriptor_extractor",                                 // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     descriptor_extractor), // bytes offset in struct
            nullptr,                        // default value
            nullptr,                        // size() function pointer
            nullptr,                        // get_const(index) function pointer
            nullptr,                        // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        },
        {
            "is_bigendian",                                           // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     is_bigendian), // bytes offset in struct
            nullptr,                // default value
            nullptr,                // size() function pointer
            nullptr,                // get_const(index) function pointer
            nullptr,                // get(index) function pointer
            nullptr,                // fetch(index, &value) function pointer
            nullptr,                // assign(index, value) function pointer
            nullptr                 // resize(index) function pointer
        },
        {
            "descriptor_type",                                      // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     descriptor_type), // bytes offset in struct
            nullptr,                   // default value
            nullptr,                   // size() function pointer
            nullptr,                   // get_const(index) function pointer
            nullptr,                   // get(index) function pointer
            nullptr,                   // fetch(index, &value) function pointer
            nullptr,                   // assign(index, value) function pointer
            nullptr                    // resize(index) function pointer
        },
        {
            "descriptor_number_of_elements",                         // name
            ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16, // type
            0,       // upper bound of string
            nullptr, // members of sub message
            false,   // is key
            false,   // is array
            0,       // array size
            false,   // is upper bound
            offsetof(aspn23_ros_interfaces::msg::MetadataImageFeatures,
                     descriptor_number_of_elements), // bytes offset in struct
            nullptr,                                 // default value
            nullptr,                                 // size() function pointer
            nullptr, // get_const(index) function pointer
            nullptr, // get(index) function pointer
            nullptr, // fetch(index, &value) function pointer
            nullptr, // assign(index, value) function pointer
            nullptr  // resize(index) function pointer
        }};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers
    MetadataImageFeatures_message_members = {
        "aspn23_ros_interfaces::msg", // message namespace
        "MetadataImageFeatures",      // message name
        8,                            // number of fields
        sizeof(aspn23_ros_interfaces::msg::MetadataImageFeatures),
        false,                                      // has_any_key_member_
        MetadataImageFeatures_message_member_array, // message members
        MetadataImageFeatures_init_function, // function to initialize message
                                             // memory (memory has to be
                                             // allocated)
        MetadataImageFeatures_fini_function  // function to terminate message
                                             // instance (will not free memory)
};

static const rosidl_message_type_support_t
    MetadataImageFeatures_message_type_support_handle = {
        ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
        &MetadataImageFeatures_message_members,
        get_message_typesupport_handle_function,
        &aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_hash,
        &aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_description,
        &aspn23_ros_interfaces__msg__MetadataImageFeatures__get_type_description_sources,
};

} // namespace rosidl_typesupport_introspection_cpp

} // namespace msg

} // namespace aspn23_ros_interfaces

namespace rosidl_typesupport_introspection_cpp {

template <>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC const rosidl_message_type_support_t *
get_message_type_support_handle<
    aspn23_ros_interfaces::msg::MetadataImageFeatures>() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataImageFeatures_message_type_support_handle;
}

} // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C" {
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_introspection_cpp, aspn23_ros_interfaces, msg,
    MetadataImageFeatures)() {
  return &::aspn23_ros_interfaces::msg::rosidl_typesupport_introspection_cpp::
      MetadataImageFeatures_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
