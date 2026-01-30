// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aspn23_ros_interfaces:msg/TypeKeplerOrbit.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_HPP_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"

#ifndef _WIN32
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeKeplerOrbit                \
  __attribute__((deprecated))
#else
#define DEPRECATED__aspn23_ros_interfaces__msg__TypeKeplerOrbit                \
  __declspec(deprecated)
#endif

namespace aspn23_ros_interfaces {

namespace msg {

// message struct
template <class ContainerAllocator> struct TypeKeplerOrbit_ {
  using Type = TypeKeplerOrbit_<ContainerAllocator>;

  explicit TypeKeplerOrbit_(
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->m_0 = 0.0;
      this->delta_n = 0.0;
      this->e = 0.0;
      this->sqrt_a = 0.0;
      this->omega_0 = 0.0;
      this->i_0 = 0.0;
      this->i_dot = 0.0;
      this->omega = 0.0;
      this->omega_dot = 0.0;
      this->c_uc = 0.0;
      this->c_us = 0.0;
      this->c_rc = 0.0;
      this->c_rs = 0.0;
      this->c_ic = 0.0;
      this->c_is = 0.0;
      this->t_oe = 0.0;
    }
  }

  explicit TypeKeplerOrbit_(
      const ContainerAllocator &_alloc,
      rosidl_runtime_cpp::MessageInitialization _init =
          rosidl_runtime_cpp::MessageInitialization::ALL) {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
        rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->m_0 = 0.0;
      this->delta_n = 0.0;
      this->e = 0.0;
      this->sqrt_a = 0.0;
      this->omega_0 = 0.0;
      this->i_0 = 0.0;
      this->i_dot = 0.0;
      this->omega = 0.0;
      this->omega_dot = 0.0;
      this->c_uc = 0.0;
      this->c_us = 0.0;
      this->c_rc = 0.0;
      this->c_rs = 0.0;
      this->c_ic = 0.0;
      this->c_is = 0.0;
      this->t_oe = 0.0;
    }
  }

  // field types and members
  using _m_0_type = double;
  _m_0_type m_0;
  using _delta_n_type = double;
  _delta_n_type delta_n;
  using _e_type = double;
  _e_type e;
  using _sqrt_a_type = double;
  _sqrt_a_type sqrt_a;
  using _omega_0_type = double;
  _omega_0_type omega_0;
  using _i_0_type = double;
  _i_0_type i_0;
  using _i_dot_type = double;
  _i_dot_type i_dot;
  using _omega_type = double;
  _omega_type omega;
  using _omega_dot_type = double;
  _omega_dot_type omega_dot;
  using _c_uc_type = double;
  _c_uc_type c_uc;
  using _c_us_type = double;
  _c_us_type c_us;
  using _c_rc_type = double;
  _c_rc_type c_rc;
  using _c_rs_type = double;
  _c_rs_type c_rs;
  using _c_ic_type = double;
  _c_ic_type c_ic;
  using _c_is_type = double;
  _c_is_type c_is;
  using _t_oe_type = double;
  _t_oe_type t_oe;

  // setters for named parameter idiom
  Type &set__m_0(const double &_arg) {
    this->m_0 = _arg;
    return *this;
  }
  Type &set__delta_n(const double &_arg) {
    this->delta_n = _arg;
    return *this;
  }
  Type &set__e(const double &_arg) {
    this->e = _arg;
    return *this;
  }
  Type &set__sqrt_a(const double &_arg) {
    this->sqrt_a = _arg;
    return *this;
  }
  Type &set__omega_0(const double &_arg) {
    this->omega_0 = _arg;
    return *this;
  }
  Type &set__i_0(const double &_arg) {
    this->i_0 = _arg;
    return *this;
  }
  Type &set__i_dot(const double &_arg) {
    this->i_dot = _arg;
    return *this;
  }
  Type &set__omega(const double &_arg) {
    this->omega = _arg;
    return *this;
  }
  Type &set__omega_dot(const double &_arg) {
    this->omega_dot = _arg;
    return *this;
  }
  Type &set__c_uc(const double &_arg) {
    this->c_uc = _arg;
    return *this;
  }
  Type &set__c_us(const double &_arg) {
    this->c_us = _arg;
    return *this;
  }
  Type &set__c_rc(const double &_arg) {
    this->c_rc = _arg;
    return *this;
  }
  Type &set__c_rs(const double &_arg) {
    this->c_rs = _arg;
    return *this;
  }
  Type &set__c_ic(const double &_arg) {
    this->c_ic = _arg;
    return *this;
  }
  Type &set__c_is(const double &_arg) {
    this->c_is = _arg;
    return *this;
  }
  Type &set__t_oe(const double &_arg) {
    this->t_oe = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator> *;
  using ConstRawPtr =
      const aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator> *;
  using SharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>>;
  using ConstSharedPtr = std::shared_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator> const>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>>>
  using UniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>,
      Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template <
      typename Deleter = std::default_delete<
          aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter = std::unique_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator> const,
      Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>>;
  using ConstWeakPtr = std::weak_ptr<
      aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes
  // properly
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeKeplerOrbit
      std::shared_ptr<
          aspn23_ros_interfaces::msg::TypeKeplerOrbit_<ContainerAllocator>>
          Ptr;
  typedef DEPRECATED__aspn23_ros_interfaces__msg__TypeKeplerOrbit
      std::shared_ptr<aspn23_ros_interfaces::msg::TypeKeplerOrbit_<
          ContainerAllocator> const>
          ConstPtr;

  // comparison operators
  bool operator==(const TypeKeplerOrbit_ &other) const {
    if (this->m_0 != other.m_0) {
      return false;
    }
    if (this->delta_n != other.delta_n) {
      return false;
    }
    if (this->e != other.e) {
      return false;
    }
    if (this->sqrt_a != other.sqrt_a) {
      return false;
    }
    if (this->omega_0 != other.omega_0) {
      return false;
    }
    if (this->i_0 != other.i_0) {
      return false;
    }
    if (this->i_dot != other.i_dot) {
      return false;
    }
    if (this->omega != other.omega) {
      return false;
    }
    if (this->omega_dot != other.omega_dot) {
      return false;
    }
    if (this->c_uc != other.c_uc) {
      return false;
    }
    if (this->c_us != other.c_us) {
      return false;
    }
    if (this->c_rc != other.c_rc) {
      return false;
    }
    if (this->c_rs != other.c_rs) {
      return false;
    }
    if (this->c_ic != other.c_ic) {
      return false;
    }
    if (this->c_is != other.c_is) {
      return false;
    }
    if (this->t_oe != other.t_oe) {
      return false;
    }
    return true;
  }
  bool operator!=(const TypeKeplerOrbit_ &other) const {
    return !this->operator==(other);
  }
}; // struct TypeKeplerOrbit_

// alias to use template instance with default allocator
using TypeKeplerOrbit =
    aspn23_ros_interfaces::msg::TypeKeplerOrbit_<std::allocator<void>>;

// constant definitions

} // namespace msg

} // namespace aspn23_ros_interfaces

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__TYPE_KEPLER_ORBIT__STRUCT_HPP_
