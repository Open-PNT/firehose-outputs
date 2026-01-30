// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aspn23_ros_interfaces:msg/MetadataMagneticField.idl
// generated code does not contain a copyright notice

#ifndef ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__STRUCT_H_
#define ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__STRUCT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "aspn23_ros_interfaces/msg/detail/type_metadataheader__struct.h"
// Member 'time_of_validity'
#include "aspn23_ros_interfaces/msg/detail/type_timestamp__struct.h"
// Member 'mounting'
#include "aspn23_ros_interfaces/msg/detail/type_mounting__struct.h"
// Member 'k'
// Member 'b'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MetadataMagneticField in the package
/// aspn23_ros_interfaces.
typedef struct aspn23_ros_interfaces__msg__MetadataMagneticField {
  /// This code is generated via firehose.
  /// DO NOT hand edit code.  Make any changes required using the firehose repo
  /// instead Metadata for a magnetic field measurement. In addition to generic
  /// metadata information, calibration parameters may be provided to account
  /// for effects such as soft iron, scale factor, non-orthogonality, zero-bias,
  /// and hard iron. In general, for an num_meas-dimensional measurement, the
  /// magnetic field calibration metadata (K and b) shall be used as
  ///
  /// m_calibrated = K * m_measured - b
  ///
  /// where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for
  /// num_meas = 1) and K is an num_meas x num_meas matrix (scalar for num_meas
  /// = 1). See magnetic_calibration.md for additional details.
  ///
  /// More sophisticated approaches that include calibration parameters such as
  /// time-varying effects, first-order Gauss-Markov bias models, and
  /// calibration parameter uncertainties may be included using an appropriate
  /// error model in the measurement message. Description: Standard ASPN
  /// metadata header. Units: none
  aspn23_ros_interfaces__msg__TypeMetadataheader info;
  /// Description: Time at which the measurement is considered to be valid.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeTimestamp time_of_validity;
  /// Description: Standard ASPN mounting information.
  /// Units: none
  aspn23_ros_interfaces__msg__TypeMounting mounting;
  /// Description: Dimension of measurement for which this metadata is
  /// applicable. May be 1, 2, or 3. Units: none
  uint8_t num_meas;
  /// Description: Optional calibration parameter to account for the combined
  /// effects of soft iron, scale factor, and non-orthogonality as a unitless
  /// num_meas x num_meas matrix. Optional, but if provided, b must also be
  /// provided. Units: none Note: field represents a num_meas x num_meas matrix
  rosidl_runtime_c__double__Sequence k;
  /// Description: Optional calibration parameter to account for the combined
  /// effects of zero-bias and hard iron as a num_meas x 1 vector in nanoTesla
  /// (nT). Optional, but if provided, K must also be provided. Units: nT Note:
  /// array length is num_meas
  rosidl_runtime_c__double__Sequence b;
} aspn23_ros_interfaces__msg__MetadataMagneticField;

// Struct for a sequence of aspn23_ros_interfaces__msg__MetadataMagneticField.
typedef struct aspn23_ros_interfaces__msg__MetadataMagneticField__Sequence {
  aspn23_ros_interfaces__msg__MetadataMagneticField *data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aspn23_ros_interfaces__msg__MetadataMagneticField__Sequence;

#ifdef __cplusplus
}
#endif

#endif // ASPN23_ROS_INTERFACES__MSG__DETAIL__METADATA_MAGNETIC_FIELD__STRUCT_H_
