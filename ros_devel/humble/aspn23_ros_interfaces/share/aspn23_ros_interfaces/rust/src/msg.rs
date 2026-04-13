#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to aspn23_ros_interfaces__msg__TypeDirection2DToPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeDirection2DToPoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// 2D direction to or from a point as defined by the reference enum. Information about the remote
    /// point (its position and/or correspondence with previous or future appearances
    /// of this same point) may be determined using remote_point.
    /// Description: Position and/or correspondence information about the remote point.
    /// Units: various
    pub remote_point: super::msg::TypeRemotePoint,

    /// Specifies measurement reference.
    pub reference: u8,

    /// Description: Observations as specified in the reference enum.
    /// Units: rad
    pub obs: f64,

    /// Description: Measurement error variance.
    /// Units: rad^2
    pub variance: f64,

    /// Description: Switch for whether observation_characteristics is valid or not.
    /// Units: none
    pub has_observation_characteristics: bool,

    /// Description: Image feature characteristics.
    /// Units: various
    pub observation_characteristics: super::msg::TypeImageFeature,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl TypeDirection2DToPoint {
    /// Angle between the sensor's local level N-axis and the vector from the sensor to the point projected
    /// onto the sensor's local level North-East plane. Positive angle is defined as a rotation towards the
    /// E-axis.
    /// See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
    /// definition is included in the conventions documentation.
    pub const ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO: u8 = 0;

    /// Angle between the point's local level N-axis and the vector from the point to the sensor projected
    /// onto the point's local level North-East plane. Positive angle is defined as a rotation towards the
    /// E-axis.
    /// The significant difference between NE_TO and NE_FROM is where the NED frame originates (NE_FROM has
    /// its origin located at the point's location).
    /// See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
    /// definition is included in the conventions documentation.
    pub const ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM: u8 = 1;

    /// Angle between the sensor's local level North-East plane and the vector from the sensor to the point.
    /// Positive angle is defined as a rotation towards the negative D-axis of the NED frame.
    /// See also NED coordinate frame definition for N, E, and D definitions. A figure depicting the angle
    /// definition is included in the conventions documentation.
    pub const ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION: u8 = 2;

    /// Angle between the sensor's x-axis and the vector from the sensor to the point projected onto the
    /// sensor frame x-y plane. Positive angle is defined as a rotation towards the y-axis.
    /// Sensor frame is defined in mounting. A figure depicting the angle definition is included in the
    /// conventions documentation.
    pub const ASPN23_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for TypeDirection2DToPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeDirection2DToPoint::default())
  }
}

impl rosidl_runtime_rs::Message for TypeDirection2DToPoint {
  type RmwMsg = super::msg::rmw::TypeDirection2DToPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.remote_point)).into_owned(),
        reference: msg.reference,
        obs: msg.obs,
        variance: msg.variance,
        has_observation_characteristics: msg.has_observation_characteristics,
        observation_characteristics: super::msg::TypeImageFeature::into_rmw_message(std::borrow::Cow::Owned(msg.observation_characteristics)).into_owned(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.remote_point)).into_owned(),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      has_observation_characteristics: msg.has_observation_characteristics,
        observation_characteristics: super::msg::TypeImageFeature::into_rmw_message(std::borrow::Cow::Borrowed(&msg.observation_characteristics)).into_owned(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      remote_point: super::msg::TypeRemotePoint::from_rmw_message(msg.remote_point),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      has_observation_characteristics: msg.has_observation_characteristics,
      observation_characteristics: super::msg::TypeImageFeature::from_rmw_message(msg.observation_characteristics),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeDirection3DToPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeDirection3DToPoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// 3D direction to or from a point as defined by the reference enum. Information about the remote
    /// point (its position and/or correspondence with previous or future appearances
    /// of this same point) may be determined using remote_point.
    /// Description: Position and/or correspondence information about the remote point.
    /// Units: various
    pub remote_point: super::msg::TypeRemotePoint,

    /// Defines measurement reference frame.
    pub reference_frame: u8,

    /// Description: 3D direction to the remote point as defined in reference_frame.
    /// Units: various
    pub obs: [f64; 2],

    /// Description: Covariance of the direction measurement as defined in reference_frame.
    /// Units: various
    /// Note: field represents a 2 x 2 matrix
    pub covariance: [f64; 4],

    /// Description: Switch for whether observation_characteristics is valid or not.
    /// Units: none
    pub has_observation_characteristics: bool,

    /// Description: Image feature characteristics.
    /// Units: various
    pub observation_characteristics: super::msg::TypeImageFeature,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl TypeDirection3DToPoint {
    /// Azimuth (first component of obs) is the angle between the sensor frame x-axis (boresight) and the
    /// projection of the point onto the sensor frame's x-y plane (positive right-hand rule about the sensor
    /// frame z-axis). Elevation (second component of obs) is the angle between the sensor frame's x-y plane
    /// and the vector from the sensor to the point (positive right-hand rule about the intermediate axis
    /// formed by the azimuth rotation). The covariance is for the azimuth and elevation errors. Units for
    /// the observation are in rad, covariance rad^2.
    pub const ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL: u8 = 0;

    /// The pixel coordinates of the point in an image (sub-pixel resolution is allowed). When combined with
    /// the camera model, these can be converted to the NORMALIZED_IMAGE reference frame representation.
    /// Units for the observation are in pixels, covariance pixels^2.
    pub const ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL: u8 = 1;

    /// 2D position from the sensor frame origin to the point expressed in components y and z of the sensor
    /// frame normalized by the boresight distance. The x component of the sensor frame is the boresight
    /// axis. Units for the observation are m/m, covariance (m/m)^2.
    pub const ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE: u8 = 2;

    /// 2D position from the sensor frame origin to the point expressed in components y and z of the sensor
    /// frame normalized by the range to the point. The x component of the sensor frame is the boresight
    /// axis. Units for the observation are m/m, covariance (m/m)^2.
    pub const ASPN23_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for TypeDirection3DToPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeDirection3DToPoint::default())
  }
}

impl rosidl_runtime_rs::Message for TypeDirection3DToPoint {
  type RmwMsg = super::msg::rmw::TypeDirection3DToPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.remote_point)).into_owned(),
        reference_frame: msg.reference_frame,
        obs: msg.obs,
        covariance: msg.covariance,
        has_observation_characteristics: msg.has_observation_characteristics,
        observation_characteristics: super::msg::TypeImageFeature::into_rmw_message(std::borrow::Cow::Owned(msg.observation_characteristics)).into_owned(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.remote_point)).into_owned(),
      reference_frame: msg.reference_frame,
        obs: msg.obs,
        covariance: msg.covariance,
      has_observation_characteristics: msg.has_observation_characteristics,
        observation_characteristics: super::msg::TypeImageFeature::into_rmw_message(std::borrow::Cow::Borrowed(&msg.observation_characteristics)).into_owned(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      remote_point: super::msg::TypeRemotePoint::from_rmw_message(msg.remote_point),
      reference_frame: msg.reference_frame,
      obs: msg.obs,
      covariance: msg.covariance,
      has_observation_characteristics: msg.has_observation_characteristics,
      observation_characteristics: super::msg::TypeImageFeature::from_rmw_message(msg.observation_characteristics),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeHeader

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeHeader {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Header for each ASPN measurement
    /// Description: Unique identifier that identifies the device or application vendor. Vendor ID is
    /// user-selected, inspired by your company name to mitigate conflicts with other users. Vendor IDs 0x23
    /// 00 00 00 through 0x23 FF FF FF inclusive are reserved and shall not be chosen as user-selected
    /// vendor IDs.
    /// Units: none
    pub vendor_id: u32,

    /// Description: Unique identifier that identifies the sensor or device type as assigned by the vendor.
    /// Device_ids are unique within a given vendor_id.
    /// Units: none
    pub device_id: u64,

    /// Description: Unique identifier that provides additional context to define a logical stream of data
    /// from the sensor or device as assigned by the vendor. This identifier allows multiple measurements of
    /// the same type to be provided by a device. Context_ids are unique within a given vendor_id and
    /// device_id.
    /// Units: none
    pub context_id: u32,

    /// Description: Unique identifier for a specific message within a data stream as defined by a
    /// vendor_id, device_id, and context_id. Sequential messages from each data source (identified by
    /// vendor_id, device_id, and context_id) shall increment by exactly 1 and rollover to 0 after an
    /// overflow.
    /// Units: none
    pub sequence_id: u16,

}



impl Default for TypeHeader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeHeader::default())
  }
}

impl rosidl_runtime_rs::Message for TypeHeader {
  type RmwMsg = super::msg::rmw::TypeHeader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vendor_id: msg.vendor_id,
        device_id: msg.device_id,
        context_id: msg.context_id,
        sequence_id: msg.sequence_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vendor_id: msg.vendor_id,
      device_id: msg.device_id,
      context_id: msg.context_id,
      sequence_id: msg.sequence_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vendor_id: msg.vendor_id,
      device_id: msg.device_id,
      context_id: msg.context_id,
      sequence_id: msg.sequence_id,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeImageFeature

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeImageFeature {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Image feature characteristics
    /// Description: Value representing the magnitude of the response of the keypoint detection algorithm
    /// used to locate this keypoint in the image.
    /// Units: none
    pub response: f64,

    /// Description: Value representing the orientation of the detected keypoint, as measured relative to
    /// the image coordinate system (radians, clockwise). Metadata flag determines if this field is
    /// calculated by the current keypoint detector.
    /// Units: rad
    pub orientation: f64,

    /// Description: Effective size (pixels) of the detected keypoint. This field takes into consideration
    /// the octave and kernel used to localize the keypoint, and normalizes to the original size of the
    /// image.
    /// Units: pixels
    pub size: f64,

    /// Description: ID that ties the detected keypoint to a class or group of keypoints.
    /// Units: none
    pub class_id: u16,

    /// Description: Octave or pyramid layer from which the detected keypoint was extracted.
    /// Units: none
    pub octave: u16,

    /// Description: Size of the descriptor in bytes.
    /// Units: none
    pub descriptor_size: u16,

    /// Description: Feature descriptor.
    /// Units: none
    /// Note: array length is descriptor_size
    pub descriptor: Vec<u8>,

}



impl Default for TypeImageFeature {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeImageFeature::default())
  }
}

impl rosidl_runtime_rs::Message for TypeImageFeature {
  type RmwMsg = super::msg::rmw::TypeImageFeature;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response,
        orientation: msg.orientation,
        size: msg.size,
        class_id: msg.class_id,
        octave: msg.octave,
        descriptor_size: msg.descriptor_size,
        descriptor: msg.descriptor.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      response: msg.response,
      orientation: msg.orientation,
      size: msg.size,
      class_id: msg.class_id,
      octave: msg.octave,
      descriptor_size: msg.descriptor_size,
        descriptor: msg.descriptor.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response,
      orientation: msg.orientation,
      size: msg.size,
      class_id: msg.class_id,
      octave: msg.octave,
      descriptor_size: msg.descriptor_size,
      descriptor: msg.descriptor
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeIntegrity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeIntegrity {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Integrity provides a numerical measure of the trustworthiness of the associated measurement. The
    /// integrity_method enum specifies the integrity method and the appropriate interpretation of the
    /// integrity_value.
    /// Enumerated field which describes the meaning of the integrity value. Integrity methods may use
    /// multiple enum entries if there is a need to pass multiple integrity values. For example, an
    /// integrity method with 3 parameters may use 3 enum entries (e.g., MY_METHOD_VALUE1, MY_METHOD_VALUE2,
    /// MY_METHOD_VALUE3). When integrity is reported in a message, a vector of integrity types is passed.
    /// In the MY_METHOD example, num_integrity = 3 just for the MY_METHOD integrity. If additional
    /// integrity methods are also reported, then num_integrity would be greater than 3 to include those
    /// additional methods.
    pub integrity_method: u8,

    /// Description: Measurement integrity value to be interpreted based on the definition in the
    /// integrity_type enum.
    /// Units: none
    pub integrity_value: f64,

}

impl TypeIntegrity {
    /// Reserved for future use.
    pub const ASPN23_TYPE_INTEGRITY_INTEGRITY_METHOD_RESERVED: u8 = 17;

}


impl Default for TypeIntegrity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeIntegrity::default())
  }
}

impl rosidl_runtime_rs::Message for TypeIntegrity {
  type RmwMsg = super::msg::rmw::TypeIntegrity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        integrity_method: msg.integrity_method,
        integrity_value: msg.integrity_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      integrity_method: msg.integrity_method,
      integrity_value: msg.integrity_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      integrity_method: msg.integrity_method,
      integrity_value: msg.integrity_value,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeKeplerOrbit

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeKeplerOrbit {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Keplerian orbit parameters required to calculate satellite position
    /// Description: Mean anomaly at reference time.
    /// Units: rad
    pub m_0: f64,

    /// Description: Mean motion difference from computed value.
    /// Units: rad/s
    pub delta_n: f64,

    /// Description: Eccentricity.
    /// Units: none
    pub e: f64,

    /// Description: Square root of semi-major axis.
    /// Units: sqrt(m)
    pub sqrt_a: f64,

    /// Description: Longitude of ascending node of orbit plane at weekly epoch
    /// Units: rad
    pub omega_0: f64,

    /// Description: Inclination angle at reference time.
    /// Units: rad
    pub i_0: f64,

    /// Description: Rate of change of inclination angle.
    /// Units: rad
    pub i_dot: f64,

    /// Description: Argument of perigee.
    /// Units: rad
    pub omega: f64,

    /// Description: Rate of right ascension.
    /// Units: rad/s
    pub omega_dot: f64,

    /// Description: Amplitude of cosine harmonic correction terms to the argument of latitude.
    /// Units: rad
    pub c_uc: f64,

    /// Description: Amplitude of sine harmonic correction terms to the argument of latitude.
    /// Units: rad
    pub c_us: f64,

    /// Description: Amplitude of cosine harmonic correction terms to the orbit radius.
    /// Units: m
    pub c_rc: f64,

    /// Description: Amplitude of sine harmonic correction terms to the orbit radius.
    /// Units: m
    pub c_rs: f64,

    /// Description: Amplitude of cosine harmonic correction terms to the angle of inclination.
    /// Units: rad
    pub c_ic: f64,

    /// Description: Amplitude of sine harmonic correction terms to the angle of inclination.
    /// Units: rad
    pub c_is: f64,

    /// Description: Ephemeris reference time.
    /// Units: s
    pub t_oe: f64,

}



impl Default for TypeKeplerOrbit {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeKeplerOrbit::default())
  }
}

impl rosidl_runtime_rs::Message for TypeKeplerOrbit {
  type RmwMsg = super::msg::rmw::TypeKeplerOrbit;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        m_0: msg.m_0,
        delta_n: msg.delta_n,
        e: msg.e,
        sqrt_a: msg.sqrt_a,
        omega_0: msg.omega_0,
        i_0: msg.i_0,
        i_dot: msg.i_dot,
        omega: msg.omega,
        omega_dot: msg.omega_dot,
        c_uc: msg.c_uc,
        c_us: msg.c_us,
        c_rc: msg.c_rc,
        c_rs: msg.c_rs,
        c_ic: msg.c_ic,
        c_is: msg.c_is,
        t_oe: msg.t_oe,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      m_0: msg.m_0,
      delta_n: msg.delta_n,
      e: msg.e,
      sqrt_a: msg.sqrt_a,
      omega_0: msg.omega_0,
      i_0: msg.i_0,
      i_dot: msg.i_dot,
      omega: msg.omega,
      omega_dot: msg.omega_dot,
      c_uc: msg.c_uc,
      c_us: msg.c_us,
      c_rc: msg.c_rc,
      c_rs: msg.c_rs,
      c_ic: msg.c_ic,
      c_is: msg.c_is,
      t_oe: msg.t_oe,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      m_0: msg.m_0,
      delta_n: msg.delta_n,
      e: msg.e,
      sqrt_a: msg.sqrt_a,
      omega_0: msg.omega_0,
      i_0: msg.i_0,
      i_dot: msg.i_dot,
      omega: msg.omega,
      omega_dot: msg.omega_dot,
      c_uc: msg.c_uc,
      c_us: msg.c_us,
      c_rc: msg.c_rc,
      c_rs: msg.c_rs,
      c_ic: msg.c_ic,
      c_is: msg.c_is,
      t_oe: msg.t_oe,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeMetadataheader

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeMetadataheader {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Sensor metadata header.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Describes the device used to generate the measurement (user defined).
    /// Units: none
    pub sensor_description: std::string::String,

    /// Description: Optional nominal time interval between each measurement. Actual time interval may vary.
    /// Do not report a delta_t_nom if the nominal time interval is not known ahead of time.
    /// Units: seconds
    pub delta_t_nom: f64,

    /// Description: Identifier for the timestamp's clock/timing source. See clock_identifiers.md for a full
    /// description, but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    ///
    /// Each message source must provide metadata information (the method used to provide the metadata
    /// information depends on the system, e.g., over the wire, written to file, etc.), and the information
    /// contained in this type (type_metadataheader) will be included in that information. In this manner,
    /// each message source's clock ID will be defined. If the clock source is updated, new metadata must be
    /// provided with an updated clock ID.
    /// If used, ASPN system time shall be represented as a monotonically increasing quantity defined by the
    /// system. System time zero epoch must be defined. For example, system time may be the time difference
    /// with respect to a system power on event. Other user-defined clocks/timing sources must be similarly
    /// defined by the system designer.
    /// Units: none
    pub timestamp_clock_id: u8,

    /// Description: Defines how many decimal digits of precision are represented in the timestamp after the
    /// decimal point. The precision of the timestamps is 10E-N, where N is digits_of_precision. A value of
    /// 3 would mean that the timestamp has precision at the 10E-3 (millisecond) level, a value of 6 would
    /// mean the timestamp has precision at the 10E-6 (microsecond) level, etc.
    /// If an implementation is using 64bit integers for their internal time representations, digits of
    /// precision may be ignored with no additional complexity. If an implementation is converting to a
    /// double, because of their choice of internal representation (which likely most estimators would use),
    /// then knowing digits of precision would be important to avoid losing resolution.
    /// Units: none
    pub digits_of_precision: u8,

}



impl Default for TypeMetadataheader {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeMetadataheader::default())
  }
}

impl rosidl_runtime_rs::Message for TypeMetadataheader {
  type RmwMsg = super::msg::rmw::TypeMetadataheader;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_description: msg.sensor_description.as_str().into(),
        delta_t_nom: msg.delta_t_nom,
        timestamp_clock_id: msg.timestamp_clock_id,
        digits_of_precision: msg.digits_of_precision,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        sensor_description: msg.sensor_description.as_str().into(),
      delta_t_nom: msg.delta_t_nom,
      timestamp_clock_id: msg.timestamp_clock_id,
      digits_of_precision: msg.digits_of_precision,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      sensor_description: msg.sensor_description.to_string(),
      delta_t_nom: msg.delta_t_nom,
      timestamp_clock_id: msg.timestamp_clock_id,
      digits_of_precision: msg.digits_of_precision,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeMounting

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeMounting {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Describes the translational and angular offset between the sensor frame and the platform body frame.
    /// Platform body frame is defined using axes in forward, right, and down convention, and the origin is
    /// system defined. This type also contains the uncertainty associated with the translational and
    /// angular offset.
    /// Description: 3x1 lever arm vector describing the sensor position in the platform body frame.
    /// Units: m
    pub lever_arm: [f64; 3],

    /// Description: 3x1 lever arm uncertainty vector as standard deviations in the platform body frame.
    /// Units: m
    pub lever_arm_sigma: [f64; 3],

    /// Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
    /// (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
    /// description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
    /// frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
    /// that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
    /// vector.
    /// Orientation is optional in the sense that orientation shall be specified except in the case that
    /// orientation is meaningless, for example, in the case of an RF antenna mounting.
    /// See "conventions" documentation for more detailed information.
    /// Units: none
    pub orientation_quaternion: [f64; 4],

    /// Description: Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt
    /// errors" that represent the additional rotation to be applied to the provided attitude quaternion in
    /// order to convert it to the true attitude with no errors. By convention, these "tilt errors" are
    /// expressed in the reference frame (ECI, ECEF, or NED).
    /// Tilt error covariance is optional only because orientation itself is optional. Orientation error
    /// covariance shall be provided if orientation is provided.
    /// See "conventions" documentation for more detailed information.
    /// Units: rad^2
    /// Note: field represents a 3 x 3 matrix
    pub orientation_tilt_error_covariance: [f64; 9],

}



impl Default for TypeMounting {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeMounting::default())
  }
}

impl rosidl_runtime_rs::Message for TypeMounting {
  type RmwMsg = super::msg::rmw::TypeMounting;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lever_arm: msg.lever_arm,
        lever_arm_sigma: msg.lever_arm_sigma,
        orientation_quaternion: msg.orientation_quaternion,
        orientation_tilt_error_covariance: msg.orientation_tilt_error_covariance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lever_arm: msg.lever_arm,
        lever_arm_sigma: msg.lever_arm_sigma,
        orientation_quaternion: msg.orientation_quaternion,
        orientation_tilt_error_covariance: msg.orientation_tilt_error_covariance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lever_arm: msg.lever_arm,
      lever_arm_sigma: msg.lever_arm_sigma,
      orientation_quaternion: msg.orientation_quaternion,
      orientation_tilt_error_covariance: msg.orientation_tilt_error_covariance,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeRemotePoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeRemotePoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// ASPN custom type representing a point. This includes optional information
    /// (indicated by included_terms) for the position and a correspondence ID for the
    /// point.
    /// Description: Indicates which information is included about the point
    /// 0 = no information included (unknown point)
    /// 1 = id included (corresponded point)
    /// 2 = position included (known point)
    /// 3 = id and position included
    /// Units: none
    pub included_terms: u8,

    /// Description: Unique identification number assigned by the sensor. Points that have the same id from
    /// a sensor are multiple instances of the same point as determined by a sensor's point correspondence.
    /// Units: none
    pub id: u32,

    /// Defines position reference.
    pub position_reference_frame: u8,

    /// Description: First position term as defined in position_reference_frame.
    /// Units: various
    pub position1: f64,

    /// Description: Second position term as defined in position_reference_frame.
    /// Units: various
    pub position2: f64,

    /// Description: Third position term as defined in position_reference_frame.
    /// Units: various
    pub position3: f64,

    /// Description: Dimension of position provided.
    /// Units: none
    pub num_position_components: u8,

    /// Description: Position error covariance (or variance depending on num_position_components) as defined
    /// in position_reference_frame.
    /// Units: m^2
    /// Note: field represents a num_position_components x num_position_components matrix
    pub position_covariance: Vec<f64>,

}

impl TypeRemotePoint {
    /// No reference frame. This is only valid if position is not included
    /// (included_terms is 0 or 1).
    pub const ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE: u8 = 0;

    /// Point position relative to the WGS-84 reference expressed using position1 as geodetic latitude
    /// in radians, position2 as longitude in radians, and position3 as geodetic altitude (or height
    /// above the WGS-84 ellipsoid) in meters. Each term is optional.
    /// position_covariance is given using north-south position error in meters (an expression of
    /// geodetic latitude error), east-west position error in meters (an expression of longitude
    /// error), and geodetic altitude error in meters. In the case of nulled position components, the
    /// corresponding error covariance terms are omitted.
    pub const ASPN23_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC: u8 = 1;

}


impl Default for TypeRemotePoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeRemotePoint::default())
  }
}

impl rosidl_runtime_rs::Message for TypeRemotePoint {
  type RmwMsg = super::msg::rmw::TypeRemotePoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        included_terms: msg.included_terms,
        id: msg.id,
        position_reference_frame: msg.position_reference_frame,
        position1: msg.position1,
        position2: msg.position2,
        position3: msg.position3,
        num_position_components: msg.num_position_components,
        position_covariance: msg.position_covariance.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      included_terms: msg.included_terms,
      id: msg.id,
      position_reference_frame: msg.position_reference_frame,
      position1: msg.position1,
      position2: msg.position2,
      position3: msg.position3,
      num_position_components: msg.num_position_components,
        position_covariance: msg.position_covariance.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      included_terms: msg.included_terms,
      id: msg.id,
      position_reference_frame: msg.position_reference_frame,
      position1: msg.position1,
      position2: msg.position2,
      position3: msg.position3,
      num_position_components: msg.num_position_components,
      position_covariance: msg.position_covariance
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavClock

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavClock {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// satnav broadcast parameters required to calculate sv clock corrections
    /// Description: Clock reference time.
    /// Units: s
    pub t_oc: f64,

    /// Description: Satellite clock bias.
    /// Units: s
    pub af_0: f64,

    /// Description: Satellite clock drift.
    /// Units: s/s
    pub af_1: f64,

    /// Description: Satellite clock drift rate.
    /// Units: s/s^2
    pub af_2: f64,

}



impl Default for TypeSatnavClock {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavClock::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavClock {
  type RmwMsg = super::msg::rmw::TypeSatnavClock;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        t_oc: msg.t_oc,
        af_0: msg.af_0,
        af_1: msg.af_1,
        af_2: msg.af_2,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      t_oc: msg.t_oc,
      af_0: msg.af_0,
      af_1: msg.af_1,
      af_2: msg.af_2,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      t_oc: msg.t_oc,
      af_0: msg.af_0,
      af_1: msg.af_1,
      af_2: msg.af_2,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavObs

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavObs {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Defines measurements that come from a satnav receiver tracking a single signal from a single
    /// satellite.
    /// Description: Enumerated field which describes the Satellite System that generated the observations.
    /// Units: none
    pub satellite_system: super::msg::TypeSatnavSatelliteSystem,

    /// Description: Satellite signal descriptor as defined in RINEX 3.05
    /// Units: none
    pub signal_descriptor: super::msg::TypeSatnavSignalDescriptor,

    /// Description: PRN code which identifies satellite (or slot number, in the case of GLONASS) for the
    /// observables.
    /// Units: none
    pub prn: i16,

    /// Description: Center frequency of signal. For GLONASS, this should be the center frequency of the
    /// frequency-shifted signal with the k value taken into account.
    /// Units: Hz
    pub frequency: f64,

    /// Description: Pseudorange measurement
    /// Units: m
    pub pseudorange: f64,

    /// Description: Variance of pseudorange measurement noise/multipath. This value must be provided if the
    /// pseudorange measurement is provided. Note: This is not intended to represent clock, atmospheric, or
    /// satellite position errors.
    /// Units: m^2
    pub pseudorange_variance: f32,

    /// Indicates the type of measurement contained in pseudorange_rate.
    pub pseudorange_rate_type: u8,

    /// Description: Measurement of the change in the pseudorange. See pseudorange_rate_type for details.
    /// Units: Hz or m
    pub pseudorange_rate: f64,

    /// Description: Variance of pseudorange_rate noise. This value must be provided if the pseudorange_rate
    /// measurement is provided.
    /// Units: Hz^2 or m^2
    pub pseudorange_rate_variance: f32,

    /// Description: Carrier-phase (integrated Doppler) measurement. This measurement has an N cycle
    /// ambiguity (where N is unknown and arbitrary integer).
    /// Units: cycles (1 cycle = wavelength of carrier frequency)
    pub carrier_phase: f64,

    /// Description: Variance of carrier-phase noise/multipath. This value must be provided if the
    /// carrier-phase measurement is provided. Note: This is not intended to represent clock, atmospheric,
    /// or satellite position errors or the integer N ambiguity.
    /// Units: cycles^2
    pub carrier_phase_variance: f32,

    /// Description: Carrier to noise density ratio. C/N0 = 10
    /// Units: db-Hz
    pub c_n0: f32,

    /// Description: Number of observations with continuous tracking (no cycle slips). Value of -1 means
    /// that there is no loss of lock information available. First lock_count after cycle slip has occurred
    /// will have a value of 0. The lock_count only applies to the carrier-phase measurement.
    /// Units: none
    pub lock_count: i32,

    /// Enumerated field which describes the source of the ionospheric delay correction.
    pub iono_correction_source: u8,

    /// Description: Identifies if the ionospheric correction has been applied to the measurement. 1 =
    /// Applied.
    /// Units: none
    pub iono_correction_applied: bool,

    /// Description: Identifies if the tropospheric correction has been applied to the measurement. 1 =
    /// Applied.
    /// Units: none
    pub tropo_correction_applied: bool,

    /// Description: Represents biases within the transmitting signal that are identified in the downlink
    /// data, Group Delay for LNAV, and Interchannel Signal Correction (ISC) message for MNAV. This term
    /// indicates whether the correction is known, being applied to Pseudorange Correction, and its
    /// associated estimated error applied to the ERE. When invalid the correction and estimated error are
    /// not known and therefore not applied. 1 = Valid.
    /// Units: none
    pub signal_bias_correction_applied: bool,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl TypeSatnavObs {
    /// Instantaneous Doppler at measurement time. Units = Hz Cov. Units = Hz^2
    pub const ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER: u8 = 0;

    /// Change in pseudorange (integrated Doppler) over a specified time interval. The interval is provided
    /// in metadata_satnav_obs. Units = m Cov. Units = m^2
    pub const ASPN23_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE: u8 = 1;

    /// unknown source
    pub const ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN: u8 = 0;

    /// modeled using the ionospheric models in IS-GPS-200, IS-GPS-700, or IS-GPS-800
    pub const ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED: u8 = 1;

    /// measured using dual frequencies
    pub const ASPN23_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED: u8 = 2;

}


impl Default for TypeSatnavObs {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavObs::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavObs {
  type RmwMsg = super::msg::rmw::TypeSatnavObs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Owned(msg.satellite_system)).into_owned(),
        signal_descriptor: super::msg::TypeSatnavSignalDescriptor::into_rmw_message(std::borrow::Cow::Owned(msg.signal_descriptor)).into_owned(),
        prn: msg.prn,
        frequency: msg.frequency,
        pseudorange: msg.pseudorange,
        pseudorange_variance: msg.pseudorange_variance,
        pseudorange_rate_type: msg.pseudorange_rate_type,
        pseudorange_rate: msg.pseudorange_rate,
        pseudorange_rate_variance: msg.pseudorange_rate_variance,
        carrier_phase: msg.carrier_phase,
        carrier_phase_variance: msg.carrier_phase_variance,
        c_n0: msg.c_n0,
        lock_count: msg.lock_count,
        iono_correction_source: msg.iono_correction_source,
        iono_correction_applied: msg.iono_correction_applied,
        tropo_correction_applied: msg.tropo_correction_applied,
        signal_bias_correction_applied: msg.signal_bias_correction_applied,
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Borrowed(&msg.satellite_system)).into_owned(),
        signal_descriptor: super::msg::TypeSatnavSignalDescriptor::into_rmw_message(std::borrow::Cow::Borrowed(&msg.signal_descriptor)).into_owned(),
      prn: msg.prn,
      frequency: msg.frequency,
      pseudorange: msg.pseudorange,
      pseudorange_variance: msg.pseudorange_variance,
      pseudorange_rate_type: msg.pseudorange_rate_type,
      pseudorange_rate: msg.pseudorange_rate,
      pseudorange_rate_variance: msg.pseudorange_rate_variance,
      carrier_phase: msg.carrier_phase,
      carrier_phase_variance: msg.carrier_phase_variance,
      c_n0: msg.c_n0,
      lock_count: msg.lock_count,
      iono_correction_source: msg.iono_correction_source,
      iono_correction_applied: msg.iono_correction_applied,
      tropo_correction_applied: msg.tropo_correction_applied,
      signal_bias_correction_applied: msg.signal_bias_correction_applied,
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      satellite_system: super::msg::TypeSatnavSatelliteSystem::from_rmw_message(msg.satellite_system),
      signal_descriptor: super::msg::TypeSatnavSignalDescriptor::from_rmw_message(msg.signal_descriptor),
      prn: msg.prn,
      frequency: msg.frequency,
      pseudorange: msg.pseudorange,
      pseudorange_variance: msg.pseudorange_variance,
      pseudorange_rate_type: msg.pseudorange_rate_type,
      pseudorange_rate: msg.pseudorange_rate,
      pseudorange_rate_variance: msg.pseudorange_rate_variance,
      carrier_phase: msg.carrier_phase,
      carrier_phase_variance: msg.carrier_phase_variance,
      c_n0: msg.c_n0,
      lock_count: msg.lock_count,
      iono_correction_source: msg.iono_correction_source,
      iono_correction_applied: msg.iono_correction_applied,
      tropo_correction_applied: msg.tropo_correction_applied,
      signal_bias_correction_applied: msg.signal_bias_correction_applied,
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavSatelliteSystem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavSatelliteSystem {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Satellite system name
    /// Enumerated field which describes the Satellite System.
    pub satellite_system: u8,

}

impl TypeSatnavSatelliteSystem {
    /// GPS.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS: u8 = 0;

    /// Galileo.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO: u8 = 1;

    /// GLONASS.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS: u8 = 2;

    /// BeiDou.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU: u8 = 3;

    /// SBAS.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS: u8 = 4;

    /// QZSS.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS: u8 = 5;

    /// IRNSS.
    pub const ASPN23_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS: u8 = 6;

}


impl Default for TypeSatnavSatelliteSystem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavSatelliteSystem::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavSatelliteSystem {
  type RmwMsg = super::msg::rmw::TypeSatnavSatelliteSystem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        satellite_system: msg.satellite_system,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      satellite_system: msg.satellite_system,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      satellite_system: msg.satellite_system,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavSignalDescriptor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavSignalDescriptor {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Satellite signal descriptor as defined in RINEX 3.05
    /// Three letter RINEX Observation Code of signal as given in Table A23 of RINEX 3.05 specification
    /// (https://files.igs.org/pub/data/format/rinex305.pdf). RINEX Observation Code must be paired with
    /// Satellite system to determine a unique identifier
    pub signal_descriptor: u8,

}

impl TypeSatnavSignalDescriptor {
    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C: u8 = 0;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S: u8 = 1;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L: u8 = 2;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X: u8 = 3;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P: u8 = 4;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W: u8 = 5;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N: u8 = 6;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C: u8 = 7;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D: u8 = 8;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S: u8 = 9;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L: u8 = 10;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X: u8 = 11;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P: u8 = 12;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W: u8 = 13;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N: u8 = 14;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I: u8 = 15;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q: u8 = 16;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X: u8 = 17;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A: u8 = 18;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B: u8 = 19;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X: u8 = 20;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A: u8 = 21;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B: u8 = 22;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X: u8 = 23;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I: u8 = 24;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q: u8 = 25;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X: u8 = 26;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B: u8 = 27;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I: u8 = 28;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q: u8 = 29;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X: u8 = 30;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I: u8 = 31;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q: u8 = 32;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X: u8 = 33;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C: u8 = 34;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z: u8 = 35;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D: u8 = 36;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P: u8 = 37;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z: u8 = 38;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S: u8 = 39;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L: u8 = 40;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E: u8 = 41;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z: u8 = 42;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I: u8 = 43;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q: u8 = 44;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D: u8 = 45;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D: u8 = 46;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P: u8 = 47;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z: u8 = 48;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D: u8 = 49;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P: u8 = 50;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I: u8 = 51;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q: u8 = 52;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D: u8 = 53;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P: u8 = 54;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A: u8 = 55;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B: u8 = 56;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C: u8 = 57;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A: u8 = 58;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B: u8 = 59;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C: u8 = 60;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X: u8 = 61;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y: u8 = 62;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M: u8 = 63;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y: u8 = 64;

    /// See RINEX 3.05 Table A23
    pub const ASPN23_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M: u8 = 65;

}


impl Default for TypeSatnavSignalDescriptor {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavSignalDescriptor::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavSignalDescriptor {
  type RmwMsg = super::msg::rmw::TypeSatnavSignalDescriptor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        signal_descriptor: msg.signal_descriptor,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      signal_descriptor: msg.signal_descriptor,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      signal_descriptor: msg.signal_descriptor,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavSvData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavSvData {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Satellite position, velocity and clock error at a particular time epoch
    /// Description: PRN code which identifies satellite (or slot number, in the case of GLONASS) of this
    /// ephemeris.
    /// Units: none
    pub prn: i16,

    /// Description: Describes the Satellite System which was used to generate the satellite information
    /// provided in this message.
    /// Units: none
    pub satellite_system: super::msg::TypeSatnavSatelliteSystem,

    /// Provides further clarification of which ephemeris was used to generate the satellite information
    /// provided in this message for systems which have more than one ephemeris representation.
    pub ephemeris_type: u8,

    /// Description: Receiver time at which the data provided in this message is valid.
    /// Units: none
    pub sv_data_time: super::msg::TypeSatnavTime,

    /// Coordinate frame system used to describe satellite position and velocity.
    pub coordinate_frame: u8,

    /// Description: Satellite position in frame specified by coordinate_frame at time specified by
    /// sv_data_time_week_number and sv_data_time_seconds_of_week.
    /// Units: m
    pub sv_pos: [f64; 3],

    /// Description: Satellite velocity in frame specified by coordinate_frame at time specified by
    /// sv_data_time_week_number and sv_data_time_seconds_of_week.
    /// Units: m/s
    pub sv_vel: [f64; 3],

    /// Description: Satellite clock bias at the sv_data_time, used to correct the satellite time like
    /// delta_t_sv in equation (1) of ICD-GPS-200L, Section 20.3.3.3.3.1.
    /// Units: sec
    pub sv_clock_bias: f64,

    /// Description: Satellite clock drift rate at the sv_data_time. By way of example, for GPS this would
    /// be af1 in equation (2) of ICD-GPS-200L, Section 20.3.3.3.3.1.
    /// Units: sec/sec
    pub sv_clock_drift: f64,

    /// Describes how to interpret group delay terms, because they vary by ephemeris type. Descriptions
    /// assume zero-indexing.
    pub group_delay_enum: u8,

    /// Description: Group delay terms, with interpretation provided by group_delay_enum. (Need to verify
    /// that four is sufficient for all ephemeris.)
    /// Units: sec
    pub group_delay_vector: [f32; 4],

}

impl TypeSatnavSvData {
    /// To be used when a system only uses one ephemeris representation, so knowing the satellite_system
    /// fully defines what ephemeris is being used.
    pub const ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM: u8 = 0;

    /// Calculated using legacy GPS (LNAV) messages
    pub const ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV: u8 = 1;

    /// Calculated using GPS CNAV messages
    pub const ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV: u8 = 2;

    /// Calculated using GPS MNAV messages
    pub const ASPN23_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV: u8 = 3;

    /// International Terrestrial Reference Frame
    pub const ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF: u8 = 0;

    /// Earth-centered earth-fixed frame as defined by WGS-84 (nearly identical with ITRF)
    pub const ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF: u8 = 1;

    /// Galileo Terrestrial Reference Frame (nearly identical with ITRF)
    pub const ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF: u8 = 2;

    /// Parametri Zemli 1990 (PZ-90) reference frame
    pub const ASPN23_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90: u8 = 3;

    /// group_delay_vector is legacy Tgd as defined in ICD-GPS-200L Section 20.3.3.3.3.2. All other terms
    /// not used.
    pub const ASPN23_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV: u8 = 0;

}


impl Default for TypeSatnavSvData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavSvData::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavSvData {
  type RmwMsg = super::msg::rmw::TypeSatnavSvData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        prn: msg.prn,
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Owned(msg.satellite_system)).into_owned(),
        ephemeris_type: msg.ephemeris_type,
        sv_data_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Owned(msg.sv_data_time)).into_owned(),
        coordinate_frame: msg.coordinate_frame,
        sv_pos: msg.sv_pos,
        sv_vel: msg.sv_vel,
        sv_clock_bias: msg.sv_clock_bias,
        sv_clock_drift: msg.sv_clock_drift,
        group_delay_enum: msg.group_delay_enum,
        group_delay_vector: msg.group_delay_vector,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      prn: msg.prn,
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Borrowed(&msg.satellite_system)).into_owned(),
      ephemeris_type: msg.ephemeris_type,
        sv_data_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sv_data_time)).into_owned(),
      coordinate_frame: msg.coordinate_frame,
        sv_pos: msg.sv_pos,
        sv_vel: msg.sv_vel,
      sv_clock_bias: msg.sv_clock_bias,
      sv_clock_drift: msg.sv_clock_drift,
      group_delay_enum: msg.group_delay_enum,
        group_delay_vector: msg.group_delay_vector,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      prn: msg.prn,
      satellite_system: super::msg::TypeSatnavSatelliteSystem::from_rmw_message(msg.satellite_system),
      ephemeris_type: msg.ephemeris_type,
      sv_data_time: super::msg::TypeSatnavTime::from_rmw_message(msg.sv_data_time),
      coordinate_frame: msg.coordinate_frame,
      sv_pos: msg.sv_pos,
      sv_vel: msg.sv_vel,
      sv_clock_bias: msg.sv_clock_bias,
      sv_clock_drift: msg.sv_clock_drift,
      group_delay_enum: msg.group_delay_enum,
      group_delay_vector: msg.group_delay_vector,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeSatnavTime

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeSatnavTime {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Satellite system time
    /// Description: Full Week number since zero epoch at which the data provided in this message is valid,
    /// expressed in time system defined by time_reference enum (below).
    /// Units: weeks
    pub week_number: u16,

    /// Description: Seconds since start of current week at which the data provided in this message is
    /// valid, expressed in time system defined by time_reference enum (below).
    /// Units: seconds
    pub seconds_of_week: f64,

    /// Reference time system used to express the data in this message. In a multi-GNSS receiver
    /// (GPS/GLONASS/Galileo/QZSS/BeiDou) all pseudorange observations must refer to one receiver clock
    /// only. The receiver clock time of the measurement is the receiver clock time of the received signals.
    /// It is identical for the phase and range measurements and is identical for all satellites observed in
    /// a given epoch.
    pub time_reference: u8,

}

impl TypeSatnavTime {
    /// GPS system time.
    pub const ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS: u8 = 0;

    /// Galileo system time.
    pub const ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO: u8 = 1;

    /// BeiDou system time.
    pub const ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU: u8 = 2;

    /// GLONASS system time.
    pub const ASPN23_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS: u8 = 3;

}


impl Default for TypeSatnavTime {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeSatnavTime::default())
  }
}

impl rosidl_runtime_rs::Message for TypeSatnavTime {
  type RmwMsg = super::msg::rmw::TypeSatnavTime;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        week_number: msg.week_number,
        seconds_of_week: msg.seconds_of_week,
        time_reference: msg.time_reference,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      week_number: msg.week_number,
      seconds_of_week: msg.seconds_of_week,
      time_reference: msg.time_reference,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      week_number: msg.week_number,
      seconds_of_week: msg.seconds_of_week,
      time_reference: msg.time_reference,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__TypeTimestamp

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TypeTimestamp {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole number nanoseconds
    /// until timestamp's zero epoch. The zero epoch definition is based on the timing source used by the
    /// message provider. The timing source used by the message provider is defined by the
    /// `timestamp_clock_id` included in the `type_metadataheader` as part of the metadata. Additionally,
    /// the timestamp's digits of precision are included in the `type_metadataheader` as part of the
    /// metadata, which may be useful if an implementation is converting the timestamp to another type
    /// internally.
    /// If needed, the time elapsed in seconds is equal to elapsed_nsec * 1e-9.
    /// Description: Whole number nanoseconds elapsed since timestamp's zero epoch. If negative, whole
    /// number nanoseconds until timestamp's zero epoch.
    /// Units: nanoseconds
    pub elapsed_nsec: i64,

}



impl Default for TypeTimestamp {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TypeTimestamp::default())
  }
}

impl rosidl_runtime_rs::Message for TypeTimestamp {
  type RmwMsg = super::msg::rmw::TypeTimestamp;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        elapsed_nsec: msg.elapsed_nsec,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      elapsed_nsec: msg.elapsed_nsec,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      elapsed_nsec: msg.elapsed_nsec,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataBeidouEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataBeidouEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// BeiDou Ephemeris describing satellite locations. Definitions and usage are covered in
    /// BDS-SIS-ICD-BII-3.0, February 2019,
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Satellite PRN number.
    /// Units: none
    pub prn: i32,

    /// Description: GNSS broadcast parameters required to calculate sv clock corrections.
    /// Units: none
    pub clock: super::msg::TypeSatnavClock,

    /// Description: Keplerian orbit parameters required to calculate satellite position.
    /// Units: none
    pub orbit: super::msg::TypeKeplerOrbit,

    /// Description: Group delay differential for B1I user.
    /// Units: s
    pub t_gd1: f64,

    /// Description: Group delay differential for B2I user.
    /// Units: s
    pub t_gd2: f64,

    /// Description: Age of data, clock is updated at start of each hour in BDT per table 5-6 in
    /// BDS-SIS-ICD-BII-3.0.
    /// Units: none
    pub aodc: i16,

    /// Description: Age of data, ephemeris is updated at start of each hour in BDT per table 5-8 in
    /// BDS-SIS-ICD-BII-3.0.
    /// Units: none
    pub aode: i16,

}



impl Default for MetadataBeidouEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataBeidouEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataBeidouEphemeris {
  type RmwMsg = super::msg::rmw::MetadataBeidouEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Owned(msg.orbit)).into_owned(),
        t_gd1: msg.t_gd1,
        t_gd2: msg.t_gd2,
        aodc: msg.aodc,
        aode: msg.aode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orbit)).into_owned(),
      t_gd1: msg.t_gd1,
      t_gd2: msg.t_gd2,
      aodc: msg.aodc,
      aode: msg.aode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      prn: msg.prn,
      clock: super::msg::TypeSatnavClock::from_rmw_message(msg.clock),
      orbit: super::msg::TypeKeplerOrbit::from_rmw_message(msg.orbit),
      t_gd1: msg.t_gd1,
      t_gd2: msg.t_gd2,
      aodc: msg.aodc,
      aode: msg.aode,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGlonassEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGlonassEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// GLONASS Ephemeris describing GLONASS satellite locations. Definitions and usage are covered in
    /// GLONASS ICD L1,L2 - Edition 5.1 2008, Section 4.4.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: GLONASS satellite slot number.
    /// Units: none
    pub slot_number: i32,

    /// Description: Frequency channel offset number in range from 0 to 20.
    /// Units: none
    pub freq_o: i32,

    /// Description: Calender number of day within 4 year interval starting at Jan 1 of a leap year
    /// Units: days
    pub n_t: i32,

    /// Description: Time referenced to the beginning of the frame within the current day.
    /// Units: s
    pub t_k: f64,

    /// Description: Index of time interval within current day according to UTC(SU) + 03 hrs.
    /// Units: minutes
    pub t_b: f64,

    /// Description: Relative Satellite frequency bias
    /// Units: s/s
    pub gamma_n: f64,

    /// Description: Satellite clock bias.
    /// Units: s
    pub tau_n: f64,

    /// Description: Satellite X position in PZ-90 coordinate system at time t_b.
    /// Units: km
    pub sv_pos_x: f64,

    /// Description: Satellite X velocity in PZ-90 coordinate system at time t_b.
    /// Units: km/s
    pub sv_vel_x: f64,

    /// Description: Satellite X acceleration in PZ-90 coordinate system at time t_b.
    /// Units: km/s^2
    pub sv_accel_x: f64,

    /// Description: Satellite Y position in PZ-90 coordinate system at time t_b.
    /// Units: km
    pub sv_pos_y: f64,

    /// Description: Satellite Y velocity in PZ-90 coordinate system at time t_b.
    /// Units: km/s
    pub sv_vel_y: f64,

    /// Description: Satellite Y acceleration in PZ-90 coordinate system at time t_b.
    /// Units: km/s^2
    pub sv_accel_y: f64,

    /// Description: Satellite Z position in PZ-90 coordinate system at time t_b.
    /// Units: km
    pub sv_pos_z: f64,

    /// Description: Satellite Z velocity in PZ-90 coordinate system at time t_b.
    /// Units: km/s
    pub sv_vel_z: f64,

    /// Description: Satellite Z acceleration in PZ-90 coordinate system at time t_b.
    /// Units: km/s^2
    pub sv_accel_z: f64,

}



impl Default for MetadataGlonassEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGlonassEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGlonassEphemeris {
  type RmwMsg = super::msg::rmw::MetadataGlonassEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        slot_number: msg.slot_number,
        freq_o: msg.freq_o,
        n_t: msg.n_t,
        t_k: msg.t_k,
        t_b: msg.t_b,
        gamma_n: msg.gamma_n,
        tau_n: msg.tau_n,
        sv_pos_x: msg.sv_pos_x,
        sv_vel_x: msg.sv_vel_x,
        sv_accel_x: msg.sv_accel_x,
        sv_pos_y: msg.sv_pos_y,
        sv_vel_y: msg.sv_vel_y,
        sv_accel_y: msg.sv_accel_y,
        sv_pos_z: msg.sv_pos_z,
        sv_vel_z: msg.sv_vel_z,
        sv_accel_z: msg.sv_accel_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      slot_number: msg.slot_number,
      freq_o: msg.freq_o,
      n_t: msg.n_t,
      t_k: msg.t_k,
      t_b: msg.t_b,
      gamma_n: msg.gamma_n,
      tau_n: msg.tau_n,
      sv_pos_x: msg.sv_pos_x,
      sv_vel_x: msg.sv_vel_x,
      sv_accel_x: msg.sv_accel_x,
      sv_pos_y: msg.sv_pos_y,
      sv_vel_y: msg.sv_vel_y,
      sv_accel_y: msg.sv_accel_y,
      sv_pos_z: msg.sv_pos_z,
      sv_vel_z: msg.sv_vel_z,
      sv_accel_z: msg.sv_accel_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      slot_number: msg.slot_number,
      freq_o: msg.freq_o,
      n_t: msg.n_t,
      t_k: msg.t_k,
      t_b: msg.t_b,
      gamma_n: msg.gamma_n,
      tau_n: msg.tau_n,
      sv_pos_x: msg.sv_pos_x,
      sv_vel_x: msg.sv_vel_x,
      sv_accel_x: msg.sv_accel_x,
      sv_pos_y: msg.sv_pos_y,
      sv_vel_y: msg.sv_vel_y,
      sv_accel_y: msg.sv_accel_y,
      sv_pos_z: msg.sv_pos_z,
      sv_vel_z: msg.sv_vel_z,
      sv_accel_z: msg.sv_accel_z,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGpsCnavEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGpsCnavEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// CNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
    /// ICD-GPS-200L, Section 20.3.3.4 and following.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of
    /// GPS week rollovers
    /// Units: weeks
    pub week_number: u16,

    /// Description: Satellite PRN number.
    /// Units: none
    pub prn: i32,

    /// Description: GNSS broadcast parameters required to calculate sv clock corrections.
    /// Units: none
    pub clock: super::msg::TypeSatnavClock,

    /// Description: Keplerian orbit parameters required to calculate satellite position.
    /// Units: none
    pub orbit: super::msg::TypeKeplerOrbit,

    /// Description: Group delay differential between L1 and L2.
    /// Units: s
    pub t_gd: f64,

    /// Description: Issue of Data Clock. 10 bit value from Subframe 1
    /// Units: none
    pub iodc: u16,

    /// Description: Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the
    /// 8 LSBs of the IODC.
    /// Units: none
    pub iode: u8,

    /// Description: L1 P(Y) to L1 C/A inter-signal correction.
    /// Units: s
    pub isc_l1_ca: f64,

    /// Description: L1 P(Y) to L2C inter-signal correction.
    /// Units: s
    pub isc_l2_c: f64,

    /// Description: L1 P(Y) to L5 I5 inter-signal correction.
    /// Units: s
    pub isc_l5_i5: f64,

    /// Description: L1 P(Y) to L5 Q5 inter-signal correction.
    /// Units: s
    pub isc_l5_q5: f64,

    /// Description: Semi-major axis difference at reference time.
    /// Units: m
    pub delta_a_0: f64,

    /// Description: Change rate of semi-major axis.
    /// Units: m/s
    pub a_dot: f64,

}



impl Default for MetadataGpsCnavEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGpsCnavEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGpsCnavEphemeris {
  type RmwMsg = super::msg::rmw::MetadataGpsCnavEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        week_number: msg.week_number,
        prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Owned(msg.orbit)).into_owned(),
        t_gd: msg.t_gd,
        iodc: msg.iodc,
        iode: msg.iode,
        isc_l1_ca: msg.isc_l1_ca,
        isc_l2_c: msg.isc_l2_c,
        isc_l5_i5: msg.isc_l5_i5,
        isc_l5_q5: msg.isc_l5_q5,
        delta_a_0: msg.delta_a_0,
        a_dot: msg.a_dot,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      week_number: msg.week_number,
      prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orbit)).into_owned(),
      t_gd: msg.t_gd,
      iodc: msg.iodc,
      iode: msg.iode,
      isc_l1_ca: msg.isc_l1_ca,
      isc_l2_c: msg.isc_l2_c,
      isc_l5_i5: msg.isc_l5_i5,
      isc_l5_q5: msg.isc_l5_q5,
      delta_a_0: msg.delta_a_0,
      a_dot: msg.a_dot,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      week_number: msg.week_number,
      prn: msg.prn,
      clock: super::msg::TypeSatnavClock::from_rmw_message(msg.clock),
      orbit: super::msg::TypeKeplerOrbit::from_rmw_message(msg.orbit),
      t_gd: msg.t_gd,
      iodc: msg.iodc,
      iode: msg.iode,
      isc_l1_ca: msg.isc_l1_ca,
      isc_l2_c: msg.isc_l2_c,
      isc_l5_i5: msg.isc_l5_i5,
      isc_l5_q5: msg.isc_l5_q5,
      delta_a_0: msg.delta_a_0,
      a_dot: msg.a_dot,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGpsLnavEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGpsLnavEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// LNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
    /// ICD-GPS-200L, Section 20.3.3.4 and following.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of
    /// GPS week rollovers
    /// Units: weeks
    pub week_number: u16,

    /// Description: Satellite PRN number.
    /// Units: none
    pub prn: i32,

    /// Description: GNSS broadcast parameters required to calculate sv clock corrections.
    /// Units: none
    pub clock: super::msg::TypeSatnavClock,

    /// Description: Keplerian orbit parameters required to calculate satellite position.
    /// Units: none
    pub orbit: super::msg::TypeKeplerOrbit,

    /// Description: Group delay differential between L1 and L2.
    /// Units: s
    pub t_gd: f64,

    /// Description: Issue of Data Clock. 10 bit value from Subframe 1
    /// Units: none
    pub iodc: u16,

    /// Description: Issue of Data Ephemeris. 8 bits repeated in Subframe 2 and Subframe 3. Should match the
    /// 8 LSBs of the IODC.
    /// Units: none
    pub iode: u8,

}



impl Default for MetadataGpsLnavEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGpsLnavEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGpsLnavEphemeris {
  type RmwMsg = super::msg::rmw::MetadataGpsLnavEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        week_number: msg.week_number,
        prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Owned(msg.orbit)).into_owned(),
        t_gd: msg.t_gd,
        iodc: msg.iodc,
        iode: msg.iode,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      week_number: msg.week_number,
      prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orbit)).into_owned(),
      t_gd: msg.t_gd,
      iodc: msg.iodc,
      iode: msg.iode,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      week_number: msg.week_number,
      prn: msg.prn,
      clock: super::msg::TypeSatnavClock::from_rmw_message(msg.clock),
      orbit: super::msg::TypeKeplerOrbit::from_rmw_message(msg.orbit),
      t_gd: msg.t_gd,
      iodc: msg.iodc,
      iode: msg.iode,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGpsMnavEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGpsMnavEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// MNAV Ephemeris describing GPS satellite locations. Definitions and usage are covered in
    /// ICD-GPS-200L, Section 20.3.3.4 and following, with additional military use definitions and usage
    /// covered in ICD-GPS-700D.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Full GPS week number calculated from the Modulo 1024 WN in Subframe 1 and the number of
    /// GPS week rollovers
    /// Units: weeks
    pub week_number: u16,

    /// Description: Satellite PRN number.
    /// Units: none
    pub prn: i32,

    /// Description: GNSS broadcast parameters required to calculate sv clock corrections.
    /// Units: none
    pub clock: super::msg::TypeSatnavClock,

    /// Description: Keplerian orbit parameters required to calculate satellite position.
    /// Units: none
    pub orbit: super::msg::TypeKeplerOrbit,

    /// Description: Change rate of semi-major axis.
    /// Units: m/s
    pub a_dot: f64,

    /// Description: SV clock bias correction provided by the Mnav Message Correction (MMC).
    /// Units: s
    pub delta_af_0: f64,

    /// Description: SV clock drift correction provided by the Mnav Message Correction (MMC).
    /// Units: s
    pub delta_af_1: f64,

    /// Description: Ephemeris parameters correction provided by the Mnav Message Correction (MMC).
    /// Units: radians
    pub delta_gamma: f64,

    /// Description: Angle of inclination correction provided by the Mnav Message Correction (MMC).
    /// Units: radians
    pub delta_i: f64,

    /// Description: Angle of Right Ascension correction provided by the Mnav Message Correction (MMC).
    /// Units: radians
    pub delta_omega: f64,

    /// Description: Semi-major axis correction provided by the Mnav Message Correction (MMC).
    /// Units: m
    pub delta_a: f64,

    /// Description: L M1_E to L1 P(Y) inter-signal correction.
    /// Units: s
    pub isc_l1_m_e: f64,

    /// Description: L M2_E to L1 P(Y) inter-signal correction.
    /// Units: s
    pub isc_l2_m_e: f64,

    /// Description: L M1_S to L1 P(Y) inter-signal correction.
    /// Units: s
    pub isc_l1_m_s: f64,

    /// Description: L M2_S to L1 P(Y) inter-signal correction.
    /// Units: s
    pub isc_l2_m_s: f64,

    /// Description: L2 P(Y) to L1 P(Y) inter-signal accuracy index.
    /// Units: none
    pub isa_l2_py: f64,

    /// Description: L M1_E to L1 P(Y) inter-signal accuracy index.
    /// Units: none
    pub isa_l1_m_e: f64,

    /// Description: L M2_E to L1 P(Y) inter-signal accuracy index.
    /// Units: none
    pub isa_l2_m_e: f64,

    /// Description: L M1_S to L1 P(Y) inter-signal accuracy index.
    /// Units: none
    pub isa_l1_m_s: f64,

    /// Description: L M2_S to L1 P(Y) inter-signal accuracy index.
    /// Units: none
    pub isa_l2_m_s: f64,

}



impl Default for MetadataGpsMnavEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGpsMnavEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGpsMnavEphemeris {
  type RmwMsg = super::msg::rmw::MetadataGpsMnavEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        week_number: msg.week_number,
        prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Owned(msg.orbit)).into_owned(),
        a_dot: msg.a_dot,
        delta_af_0: msg.delta_af_0,
        delta_af_1: msg.delta_af_1,
        delta_gamma: msg.delta_gamma,
        delta_i: msg.delta_i,
        delta_omega: msg.delta_omega,
        delta_a: msg.delta_a,
        isc_l1_m_e: msg.isc_l1_m_e,
        isc_l2_m_e: msg.isc_l2_m_e,
        isc_l1_m_s: msg.isc_l1_m_s,
        isc_l2_m_s: msg.isc_l2_m_s,
        isa_l2_py: msg.isa_l2_py,
        isa_l1_m_e: msg.isa_l1_m_e,
        isa_l2_m_e: msg.isa_l2_m_e,
        isa_l1_m_s: msg.isa_l1_m_s,
        isa_l2_m_s: msg.isa_l2_m_s,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      week_number: msg.week_number,
      prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orbit)).into_owned(),
      a_dot: msg.a_dot,
      delta_af_0: msg.delta_af_0,
      delta_af_1: msg.delta_af_1,
      delta_gamma: msg.delta_gamma,
      delta_i: msg.delta_i,
      delta_omega: msg.delta_omega,
      delta_a: msg.delta_a,
      isc_l1_m_e: msg.isc_l1_m_e,
      isc_l2_m_e: msg.isc_l2_m_e,
      isc_l1_m_s: msg.isc_l1_m_s,
      isc_l2_m_s: msg.isc_l2_m_s,
      isa_l2_py: msg.isa_l2_py,
      isa_l1_m_e: msg.isa_l1_m_e,
      isa_l2_m_e: msg.isa_l2_m_e,
      isa_l1_m_s: msg.isa_l1_m_s,
      isa_l2_m_s: msg.isa_l2_m_s,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      week_number: msg.week_number,
      prn: msg.prn,
      clock: super::msg::TypeSatnavClock::from_rmw_message(msg.clock),
      orbit: super::msg::TypeKeplerOrbit::from_rmw_message(msg.orbit),
      a_dot: msg.a_dot,
      delta_af_0: msg.delta_af_0,
      delta_af_1: msg.delta_af_1,
      delta_gamma: msg.delta_gamma,
      delta_i: msg.delta_i,
      delta_omega: msg.delta_omega,
      delta_a: msg.delta_a,
      isc_l1_m_e: msg.isc_l1_m_e,
      isc_l2_m_e: msg.isc_l2_m_e,
      isc_l1_m_s: msg.isc_l1_m_s,
      isc_l2_m_s: msg.isc_l2_m_s,
      isa_l2_py: msg.isa_l2_py,
      isa_l1_m_e: msg.isa_l1_m_e,
      isa_l2_m_e: msg.isa_l2_m_e,
      isa_l1_m_s: msg.isa_l1_m_s,
      isa_l2_m_s: msg.isa_l2_m_s,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGpsIonoUtcParameters

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGpsIonoUtcParameters {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Broadcasted GPS navigation data for estimation of single frequency ionospheric correction and
    /// determination of UTC. Definitions and usage are covered in ICD-GPS-200L, Section 20.3.3.5.1.6 and
    /// 20.3.3.5.1.7.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Bias coefficient of GPS time scale relative to UTC time scale.
    /// Units: s
    pub a_0: f64,

    /// Description: Drift coefficient of GPS time scale relative to UTC time scale.
    /// Units: s/s
    pub a_1: f64,

    /// Description: Leap second count.
    /// Units: s
    pub delta_t_ls: i8,

    /// Description: Reference GPS time of week for UTC parameters
    /// Units: s
    pub tot: u32,

    /// Description: Reference Modulo 256 GPS Week number for UTC parameters
    /// Units: weeks
    pub wn_t: u8,

    /// Description: Modulo 256 GPS Week number at the end of which delta_t_lsf becomes effective.
    /// Units: weeks
    pub wn_lsf: u8,

    /// Description: Day number at the end of which delta_t_lsf becomes effective (1 to 7).
    /// Units: days
    pub dn: u8,

    /// Description: Future leap second count.
    /// Units: s
    pub delta_t_lsf: i8,

    /// Description: Zeroth-order coefficient of amplitude of vertical ionospheric delay.
    /// Units: s
    pub alpha_0: f64,

    /// Description: First-order coefficient of amplitude of vertical ionospheric delay.
    /// Units: s/rad
    pub alpha_1: f64,

    /// Description: Second-order coefficient of amplitude of vertical ionospheric delay.
    /// Units: s/rad^2
    pub alpha_2: f64,

    /// Description: Third-order coefficient of amplitude of vertical ionospheric delay.
    /// Units: s/rads^3
    pub alpha_3: f64,

    /// Description: Zeroth-order coefficient of period of ionospheric delay model.
    /// Units: s
    pub beta_0: f64,

    /// Description: First-order coefficient of period of ionospheric delay model.
    /// Units: s/rad
    pub beta_1: f64,

    /// Description: Second-order coefficient of period of ionospheric delay model.
    /// Units: s/rad^2
    pub beta_2: f64,

    /// Description: Third-order coefficient of period of ionospheric delay model.
    /// Units: s/rad^3
    pub beta_3: f64,

}



impl Default for MetadataGpsIonoUtcParameters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGpsIonoUtcParameters::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGpsIonoUtcParameters {
  type RmwMsg = super::msg::rmw::MetadataGpsIonoUtcParameters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        a_0: msg.a_0,
        a_1: msg.a_1,
        delta_t_ls: msg.delta_t_ls,
        tot: msg.tot,
        wn_t: msg.wn_t,
        wn_lsf: msg.wn_lsf,
        dn: msg.dn,
        delta_t_lsf: msg.delta_t_lsf,
        alpha_0: msg.alpha_0,
        alpha_1: msg.alpha_1,
        alpha_2: msg.alpha_2,
        alpha_3: msg.alpha_3,
        beta_0: msg.beta_0,
        beta_1: msg.beta_1,
        beta_2: msg.beta_2,
        beta_3: msg.beta_3,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      a_0: msg.a_0,
      a_1: msg.a_1,
      delta_t_ls: msg.delta_t_ls,
      tot: msg.tot,
      wn_t: msg.wn_t,
      wn_lsf: msg.wn_lsf,
      dn: msg.dn,
      delta_t_lsf: msg.delta_t_lsf,
      alpha_0: msg.alpha_0,
      alpha_1: msg.alpha_1,
      alpha_2: msg.alpha_2,
      alpha_3: msg.alpha_3,
      beta_0: msg.beta_0,
      beta_1: msg.beta_1,
      beta_2: msg.beta_2,
      beta_3: msg.beta_3,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      a_0: msg.a_0,
      a_1: msg.a_1,
      delta_t_ls: msg.delta_t_ls,
      tot: msg.tot,
      wn_t: msg.wn_t,
      wn_lsf: msg.wn_lsf,
      dn: msg.dn,
      delta_t_lsf: msg.delta_t_lsf,
      alpha_0: msg.alpha_0,
      alpha_1: msg.alpha_1,
      alpha_2: msg.alpha_2,
      alpha_3: msg.alpha_3,
      beta_0: msg.beta_0,
      beta_1: msg.beta_1,
      beta_2: msg.beta_2,
      beta_3: msg.beta_3,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGalileoEphemeris

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGalileoEphemeris {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// GALILEO Ephemeris describing satellite locations. Definitions and usage are covered in OS SIS ICD,
    /// Issue 2.0, January 2021, Section 4.2, 4.3, and 5.1.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Enumerated field which describes the GALILEO message type used to define clock correction
    /// parameters.
    pub nav_msg_type: u8,

    /// Description: Satellite PRN number.
    /// Units: none
    pub prn: i32,

    /// Description: GNSS broadcast parameters required to calculate sv clock corrections.
    /// Units: none
    pub clock: super::msg::TypeSatnavClock,

    /// Description: Keplerian orbit parameters required to calculate satellite position.
    /// Units: none
    pub orbit: super::msg::TypeKeplerOrbit,

    /// Description: Broadcast group delay (E1-E5b if F/Nav, E1-E5b if I/NAV)
    /// Units: s
    pub bgd: f64,

}

impl MetadataGalileoEphemeris {
    /// I/NAV ephemeris.
    pub const ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV: u8 = 0;

    /// F/NAV ephemeris.
    pub const ASPN23_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV: u8 = 1;

}


impl Default for MetadataGalileoEphemeris {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGalileoEphemeris::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGalileoEphemeris {
  type RmwMsg = super::msg::rmw::MetadataGalileoEphemeris;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        nav_msg_type: msg.nav_msg_type,
        prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Owned(msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Owned(msg.orbit)).into_owned(),
        bgd: msg.bgd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      nav_msg_type: msg.nav_msg_type,
      prn: msg.prn,
        clock: super::msg::TypeSatnavClock::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clock)).into_owned(),
        orbit: super::msg::TypeKeplerOrbit::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orbit)).into_owned(),
      bgd: msg.bgd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      nav_msg_type: msg.nav_msg_type,
      prn: msg.prn,
      clock: super::msg::TypeSatnavClock::from_rmw_message(msg.clock),
      orbit: super::msg::TypeKeplerOrbit::from_rmw_message(msg.orbit),
      bgd: msg.bgd,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataImu

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataImu {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Metadata for inertial measurement unit.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Standard ASPN mounting information.
    /// Units: none
    pub mounting: super::msg::TypeMounting,

    /// Allows the user to select an appropriate error model. Parameters are defined here. The number of
    /// parameters and the values for those parameters are included in subsequent fields.
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

}

impl MetadataImu {
    /// All axes are identical and uncorrelated with each other axis (num_error_model_params = 14).
    /// 1) accel_bias_sigma, units: m/s/s, description: Standard deviation of constant bias for
    /// accelerometer measurements.
    /// 2) accel_bias_mean, units: m/s/s, description: Mean of constant bias for accelerometer
    /// measurements.
    /// 3) accel_time_correlated_bias_sigma, units: m/s/s, description: Standard deviation of
    /// zero-mean time-correlated bias for accelerometer measurement.
    /// 4) accel_time_correlated_bias_time_constant, units: s, description: Time constant of
    /// zero-mean time-correlated bias for accelerometer measurement.
    /// 5) accel_scale_factor_mean, units: ppm, description: Mean of accelerometer scale factor
    /// modeled as a constant with Gaussian uncertainty.
    /// 6) accel_scale_factor_sigma, units: ppm, description: Standard deviation of accelerometer
    /// scale factor modeled as a constant with Gaussian uncertainty.
    /// 7) velocity_random_walk, units: m/s/sqrt(s), description: Velocity random walk due to
    /// acceleration.
    /// 8) gyro_bias_sigma, units: rad/s, description: Standard deviation of constant bias for gyro
    /// measurements.
    /// 9) gyro_bias_mean, units: rad/s, description: Mean of constant bias for gyro measurements.
    /// 10) gyro_time_correlated_bias_sigma, units: rad/s, description: Standard deviation of
    /// zero-mean time-correlated bias for gyro measurements.
    /// 11) gyro_time_correlated_bias_time_constant, units: s, description: Time constant of
    /// zero-mean time-correlated bias for gyro measurements.
    /// 12) gyro_scale_factor_mean, units: ppm, description: Mean of gyro scale factor modeled as a
    /// constant with Gaussian uncertainty.
    /// 13) gyro_scale_factor_sigma, units: ppm, description: Standard deviation of gyro scale
    /// factor modeled as a constant with Gaussian uncertainty.
    /// 14) angular_random_walk, units: rad/sqrt(s), description: Angular random walk due to gyros.
    pub const ASPN23_METADATA_IMU_ERROR_MODEL_BASIC: u8 = 0;

}


impl Default for MetadataImu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataImu::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataImu {
  type RmwMsg = super::msg::rmw::MetadataImu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Owned(msg.mounting)).into_owned(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mounting)).into_owned(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      mounting: super::msg::TypeMounting::from_rmw_message(msg.mounting),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataGeneric

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataGeneric {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Metadata for a generic sensor.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Standard ASPN mounting information.
    /// Units: none
    pub mounting: super::msg::TypeMounting,

}



impl Default for MetadataGeneric {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataGeneric::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataGeneric {
  type RmwMsg = super::msg::rmw::MetadataGeneric;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Owned(msg.mounting)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mounting)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      mounting: super::msg::TypeMounting::from_rmw_message(msg.mounting),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataImageFeatures

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataImageFeatures {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Features from an optical camera.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Enumerated field which provides the type of keypoint detector used.
    pub keypoint_detector: u8,

    /// Description: Set to true if the keypoint detector or descriptor extractor calculates and assigns a
    /// primary orientation to the features represented in the measurements.
    /// Units: none
    pub orientation_calculated: bool,

    /// Enumerated field which provides the type of descriptor extractor used to generate the measurement
    /// descriptor vector.
    pub descriptor_extractor: u8,

    /// Description: True if the descriptor byte order is big endian, false if it is little endian. Only
    /// applicable for descriptor_types with multi-byte elements.
    /// Units: none
    pub is_bigendian: bool,

    /// Enumerated field describing the underlying datatype of the provided descriptor vector.
    pub descriptor_type: u8,

    /// Description: The number of elements of type 'descriptor_type' in the descriptor data array. In
    /// type_image_feature, descriptor data is represented as an array of uint8 values whose length is given
    /// by 'descriptor_size'. Inconjunction with descriptor_type, these fields describe how that data should
    /// be interpreted. For example - descriptor_type UINT8: descriptor_number_of_elements ==
    /// descriptor_size - descriptor_type FLOAT32: (descriptor_number_of_elements * 4) == descriptor_size
    /// Units: none
    pub descriptor_number_of_elements: u16,

}

impl MetadataImageFeatures {
    /// Keypoint detected using AGAST based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST: u8 = 0;

    /// Keypoint detected using AKAZE based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE: u8 = 1;

    /// Keypoint detected using BRISK based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK: u8 = 2;

    /// Keypoint detected using FAST based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST: u8 = 3;

    /// Keypoint detected using GFTT based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT: u8 = 4;

    /// Keypoint detected using KAZE based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE: u8 = 5;

    /// Keypoint detected using MSER based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER: u8 = 6;

    /// Keypoint detected using ORB based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB: u8 = 7;

    /// Keypoint detected using SIFT based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT: u8 = 8;

    /// Keypoint detected using SURF based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF: u8 = 9;

    /// Keypoint detected using Harris based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS: u8 = 10;

    /// Keypoint detected using Shi-Tomasi based detector.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI: u8 = 11;

    /// Keypoint detected using a detector not represented in this enum.
    pub const ASPN23_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER: u8 = 12;

    /// Descriptor computed using the AKAZE extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE: u8 = 0;

    /// Descriptor computed using the BRISK extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK: u8 = 1;

    /// Descriptor computed using the KAZE extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE: u8 = 2;

    /// Descriptor computed using the ORB extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB: u8 = 3;

    /// Descriptor computed using the SIFT extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT: u8 = 4;

    /// Descriptor computed using the SURF extractor.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF: u8 = 5;

    /// Descriptor computed using an extractor not represented in this enum.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER: u8 = 6;

    /// The descriptor data should be interpreted as an array of unsigned 8-bit ints.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8: u8 = 0;

    /// The descriptor data should be interpreted as an array of 32-bit floats.
    pub const ASPN23_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32: u8 = 1;

}


impl Default for MetadataImageFeatures {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataImageFeatures::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataImageFeatures {
  type RmwMsg = super::msg::rmw::MetadataImageFeatures;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        keypoint_detector: msg.keypoint_detector,
        orientation_calculated: msg.orientation_calculated,
        descriptor_extractor: msg.descriptor_extractor,
        is_bigendian: msg.is_bigendian,
        descriptor_type: msg.descriptor_type,
        descriptor_number_of_elements: msg.descriptor_number_of_elements,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      keypoint_detector: msg.keypoint_detector,
      orientation_calculated: msg.orientation_calculated,
      descriptor_extractor: msg.descriptor_extractor,
      is_bigendian: msg.is_bigendian,
      descriptor_type: msg.descriptor_type,
      descriptor_number_of_elements: msg.descriptor_number_of_elements,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      keypoint_detector: msg.keypoint_detector,
      orientation_calculated: msg.orientation_calculated,
      descriptor_extractor: msg.descriptor_extractor,
      is_bigendian: msg.is_bigendian,
      descriptor_type: msg.descriptor_type,
      descriptor_number_of_elements: msg.descriptor_number_of_elements,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataMagneticField

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataMagneticField {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Metadata for a magnetic field measurement. In addition to generic metadata information,
    /// calibration parameters may be provided to account for effects such as soft iron, scale factor,
    /// non-orthogonality, zero-bias, and hard iron. In general, for an num_meas-dimensional measurement,
    /// the magnetic field calibration metadata (K and b) shall be used as
    ///
    /// m_calibrated = K * m_measured - b
    ///
    /// where m_calibrated, m_measured, and b are num_meas x 1 vectors (scalar for num_meas = 1) and K is
    /// an num_meas x num_meas matrix (scalar for num_meas = 1). See magnetic_calibration.md for
    /// additional details.
    ///
    /// More sophisticated approaches that include calibration parameters such as time-varying effects,
    /// first-order Gauss-Markov bias models, and calibration parameter uncertainties may be included
    /// using an appropriate error model in the measurement message.
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Standard ASPN mounting information.
    /// Units: none
    pub mounting: super::msg::TypeMounting,

    /// Description: Dimension of measurement for which this metadata is applicable. May be 1, 2, or 3.
    /// Units: none
    pub num_meas: u8,

    /// Description: Optional calibration parameter to account for the combined effects of soft iron, scale
    /// factor, and non-orthogonality as a unitless num_meas x num_meas matrix. Optional, but if provided, b
    /// must also be provided.
    /// Units: none
    /// Note: field represents a num_meas x num_meas matrix
    pub k: Vec<f64>,

    /// Description: Optional calibration parameter to account for the combined effects of zero-bias and
    /// hard iron as a num_meas x 1 vector in nanoTesla (nT). Optional, but if provided, K must also be
    /// provided.
    /// Units: nT
    /// Note: array length is num_meas
    pub b: Vec<f64>,

}



impl Default for MetadataMagneticField {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataMagneticField::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataMagneticField {
  type RmwMsg = super::msg::rmw::MetadataMagneticField;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Owned(msg.mounting)).into_owned(),
        num_meas: msg.num_meas,
        k: msg.k.into(),
        b: msg.b.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        mounting: super::msg::TypeMounting::into_rmw_message(std::borrow::Cow::Borrowed(&msg.mounting)).into_owned(),
      num_meas: msg.num_meas,
        k: msg.k.as_slice().into(),
        b: msg.b.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      mounting: super::msg::TypeMounting::from_rmw_message(msg.mounting),
      num_meas: msg.num_meas,
      k: msg.k
          .into_iter()
          .collect(),
      b: msg.b
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MetadataSatnavObs

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MetadataSatnavObs {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Metadata for satnav_obs
    /// Description: Standard ASPN metadata header.
    /// Units: none
    pub info: super::msg::TypeMetadataheader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Start time of the interval over which the deltarange is measured with respect to the
    /// measurement time. This value must be provided if the deltarange measurement is provided.
    /// Units: seconds
    pub deltarange_interval_start: f32,

    /// Description: Stop time of the interval over which the deltarange is measured with respect to the
    /// measurement time. This value must be provided if the deltarange measurement is provided. If the
    /// deltarange integration period is the same as the measurement time, this value should be 0.
    /// Units: seconds
    pub deltarange_interval_stop: f32,

}



impl Default for MetadataSatnavObs {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MetadataSatnavObs::default())
  }
}

impl rosidl_runtime_rs::Message for MetadataSatnavObs {
  type RmwMsg = super::msg::rmw::MetadataSatnavObs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Owned(msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        deltarange_interval_start: msg.deltarange_interval_start,
        deltarange_interval_stop: msg.deltarange_interval_stop,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        info: super::msg::TypeMetadataheader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.info)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      deltarange_interval_start: msg.deltarange_interval_start,
      deltarange_interval_stop: msg.deltarange_interval_stop,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      info: super::msg::TypeMetadataheader::from_rmw_message(msg.info),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      deltarange_interval_start: msg.deltarange_interval_start,
      deltarange_interval_stop: msg.deltarange_interval_stop,
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementImu

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementImu {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Inertial Measurement Unit (IMU) measurements from the device's three axis accelerometers and three
    /// axis gyroscopes.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// IMU type
    pub imu_type: u8,

    /// Description: Accelerometer (specific force) measurements in 3 axes per enumerated definition.
    /// Units: various
    pub meas_accel: [f64; 3],

    /// Description: Gyroscope measurements in 3 axes per enumerated definition.
    /// Units: various
    pub meas_gyro: [f64; 3],

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementImu {
    /// delta velocity and delta rotation measurements from the device's three axis accelerometers and three
    /// axis gyroscopes. Specific force integrated over last measurement period expressed as delta_v array
    /// in m/s. Angular rate integrated over last measurement period expressed as delta_theta array in
    /// radians. Time of validity is the end of integration period. Integration period is from previous
    /// measurement to the current measurement.
    pub const ASPN23_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED: u8 = 0;

    /// sampled specific force and rotation rates from the device's three axis accelerometers and three axis
    /// gyroscopes. Specific force is sampled expressed as an array in m/s/s. Angular rate is sampled and
    /// expressed as an array in rad/s.
    pub const ASPN23_MEASUREMENT_IMU_IMU_TYPE_SAMPLED: u8 = 1;

}


impl Default for MeasurementImu {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementImu::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementImu {
  type RmwMsg = super::msg::rmw::MeasurementImu;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        imu_type: msg.imu_type,
        meas_accel: msg.meas_accel,
        meas_gyro: msg.meas_gyro,
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      imu_type: msg.imu_type,
        meas_accel: msg.meas_accel,
        meas_gyro: msg.meas_gyro,
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      imu_type: msg.imu_type,
      meas_accel: msg.meas_accel,
      meas_gyro: msg.meas_gyro,
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTdoa1Tx2Rx

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTdoa1Tx2Rx {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Time difference of arrival of a single transmitter (Tx) to two receivers.
    /// Receiver 1 (Rx1) is at a known location. Receiver 2 is the sensor system
    /// providing the measurement.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Transmitter (Tx)'s known location.
    /// Units: none
    pub tx_position_and_covariance: super::msg::TypeRemotePoint,

    /// Description: Receiver 1 (Rx1)'s known location.
    /// Units: none
    pub rx1_position_and_covariance: super::msg::TypeRemotePoint,

    /// Description: Time difference of arrival (in meters). Time difference of Tx signal's arrival time at
    /// Rx1 minus Tx signal's arrival time at the sensor. Positive obs indicates Tx arrived at Rx1 later
    /// than arriving at the sensor.
    /// Units: m
    pub obs: f64,

    /// Description: Measurement variance.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTdoa1Tx2Rx {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TDOA_1TX_2RX_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTdoa1Tx2Rx {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTdoa1Tx2Rx::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTdoa1Tx2Rx {
  type RmwMsg = super::msg::rmw::MeasurementTdoa1Tx2Rx;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        tx_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.tx_position_and_covariance)).into_owned(),
        rx1_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.rx1_position_and_covariance)).into_owned(),
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        tx_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tx_position_and_covariance)).into_owned(),
        rx1_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.rx1_position_and_covariance)).into_owned(),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      tx_position_and_covariance: super::msg::TypeRemotePoint::from_rmw_message(msg.tx_position_and_covariance),
      rx1_position_and_covariance: super::msg::TypeRemotePoint::from_rmw_message(msg.rx1_position_and_covariance),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTdoa2Tx1Rx

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTdoa2Tx1Rx {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Time difference of arrival of two signals (Tx) to a sensor (Rx).
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Transmitter 1 (Tx1)'s known location.
    /// Units: none
    pub tx1_position_and_covariance: super::msg::TypeRemotePoint,

    /// Description: Transmitter 2 (Tx2)'s known location.
    /// Units: none
    pub tx2_position_and_covariance: super::msg::TypeRemotePoint,

    /// Description: Time difference of arrival (in meters). Time difference of Tx1 signal's arrival time
    /// minus Tx2 signal's arrival time at the sensor. Positive obs indicates Tx1 arrived later than Tx2.
    /// Units: m
    pub obs: f64,

    /// Description: Measurement variance.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTdoa2Tx1Rx {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTdoa2Tx1Rx {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTdoa2Tx1Rx::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTdoa2Tx1Rx {
  type RmwMsg = super::msg::rmw::MeasurementTdoa2Tx1Rx;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        tx1_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.tx1_position_and_covariance)).into_owned(),
        tx2_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.tx2_position_and_covariance)).into_owned(),
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        tx1_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tx1_position_and_covariance)).into_owned(),
        tx2_position_and_covariance: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.tx2_position_and_covariance)).into_owned(),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      tx1_position_and_covariance: super::msg::TypeRemotePoint::from_rmw_message(msg.tx1_position_and_covariance),
      tx2_position_and_covariance: super::msg::TypeRemotePoint::from_rmw_message(msg.tx2_position_and_covariance),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAccumulatedDistanceTraveled

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAccumulatedDistanceTraveled {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Accumulated distance traveled over the time period from (time_of_validity - delta_t) to
    /// time_of_validity. For example, a sensor that travels (over the observation time period) in one
    /// direction 1m and reverses course to travel 1m back (and ends at its starting position) would have an
    /// accumulated distance traveled of 2m. Sensor examples may include an odometer or a wheel encoder.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Duration of the observation time interval. The time_of_validity denotes the end of the
    /// time interval. The start of the time interval is time_of_validity - delta_t.
    /// Units: sec
    pub delta_t: f64,

    /// Description: Accumulated distance traveled over time period.
    /// Units: m
    pub obs: f64,

    /// Description: Accumulated distance traveled variance.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAccumulatedDistanceTraveled {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementAccumulatedDistanceTraveled {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAccumulatedDistanceTraveled::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAccumulatedDistanceTraveled {
  type RmwMsg = super::msg::rmw::MeasurementAccumulatedDistanceTraveled;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        delta_t: msg.delta_t,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      delta_t: msg.delta_t,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      delta_t: msg.delta_t,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAltitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAltitude {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Height above a user-specified reference frame.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Specifies altitude reference.
    pub reference: u8,

    /// Description: Altitude in meters, with altitude defined by the enum, altitude_type.
    /// Units: m
    pub altitude: f64,

    /// Description: Altitude variance.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAltitude {
    /// height above ground level (AGL). Generally, position and terrain elevation data are required to
    /// convert between AGL and (MSL or HAE).
    pub const ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_AGL: u8 = 0;

    /// height above mean sea level (MSL). Generally, position is required to convert between MSL and HAE.
    pub const ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_MSL: u8 = 1;

    /// height above the WGS-84 ellipsoid (HAE), also known as geodetic altitude.
    pub const ASPN23_MEASUREMENT_ALTITUDE_REFERENCE_HAE: u8 = 2;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE: u8 = 0;

    /// First-order Gauss-Markov (FOGM) process, defined by the following parameters
    /// (num_error_model_params = 3):
    /// 1) standard_deviation, units: m, description: standard deviation of a scalar, first order
    /// Gauss-Markov measurement noise model.
    /// 2) time_constant, units: seconds, description: time constant of a scalar, first order
    /// Gauss-Markov measurement noise model.
    /// 3) initial_standard_deviation, units: m, description: initial standard deviation of a
    /// scalar, first order Gauss-Markov measurement noise model.
    pub const ASPN23_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM: u8 = 1;

}


impl Default for MeasurementAltitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAltitude::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAltitude {
  type RmwMsg = super::msg::rmw::MeasurementAltitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference: msg.reference,
        altitude: msg.altitude,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference: msg.reference,
      altitude: msg.altitude,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference: msg.reference,
      altitude: msg.altitude,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAngularVelocity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAngularVelocity {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Three dimensional angular velocity relative to and expressed in a user-defined reference frame.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// IMU type
    pub imu_type: u8,

    /// Description: Angular velocity in 3 axes per enumerated definition.
    /// Units: various
    pub meas: [f64; 3],

    /// Description: Measurement error covariance.
    /// Units: various
    /// Note: field represents a 3 x 3 matrix
    pub covariance: [f64; 9],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAngularVelocity {
    /// Angular velocity with respect to earth-centered inertial frame, expressed in an earth-centered
    /// inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECI: u8 = 0;

    /// Angular velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed
    /// (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECEF: u8 = 1;

    /// Angular velocity with respect to earth-fixed frame expressed in the North-East-Down (NED),
    /// local level frame. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_NED: u8 = 2;

    /// Angular velocity with respect to an inertial frame expressed in sensor coordinate frame.
    /// Sensor coordinate frame is defined in sensor metadataHeader.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_SENSOR: u8 = 3;

    /// delta rotation measurements. Angular rate integrated over last measurement period expressed in
    /// radians. Time of validity is the end of the integration period. Integration period is from the
    /// previous measurement to the current measurement.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_INTEGRATED: u8 = 0;

    /// sampled rotation rates. Angular rate is sampled and expressed in rad/s.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_SAMPLED: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementAngularVelocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAngularVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAngularVelocity {
  type RmwMsg = super::msg::rmw::MeasurementAngularVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        imu_type: msg.imu_type,
        meas: msg.meas,
        covariance: msg.covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      imu_type: msg.imu_type,
        meas: msg.meas,
        covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      imu_type: msg.imu_type,
      meas: msg.meas,
      covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAngularVelocity1D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAngularVelocity1D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Measures the angular velocity about the sense-axis. The sense-axis is the sensor frame x-axis as
    /// defined in mounting.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// sensor integration type
    pub sensor_type: u8,

    /// Description: Angular velocity defined in sensor_type enum.
    /// Units: various
    pub obs: f64,

    /// Description: Variance of the observation with units defined in sensor_type enum.
    /// Units: various
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAngularVelocity1D {
    /// Angular velocity integrated over last measurement period expressed as delta rotation in radians.
    /// Variance units are radians^2. Time of validity is the end of integration period. Integration period
    /// is from previous measurement to the current measurement.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED: u8 = 0;

    /// Angular velocity is sampled expressed in rad/s. Variance units are (rad/s)^2.
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementAngularVelocity1D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAngularVelocity1D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAngularVelocity1D {
  type RmwMsg = super::msg::rmw::MeasurementAngularVelocity1D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        sensor_type: msg.sensor_type,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      sensor_type: msg.sensor_type,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      sensor_type: msg.sensor_type,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAttitude2D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAttitude2D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Two-dimensional, local level, geographic attitude expressed in the locally level NED frame as a
    /// rotation about two axes as defined by the reference_frame.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid .
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: Two-dimensional, local level, geographic attitude.
    /// Units: rad
    pub attitude2d: [f64; 2],

    /// Description: Covariance of the measurement.
    /// Units: rad^2
    /// Note: field represents a 2 x 2 matrix
    pub covariance: [f64; 4],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAttitude2D {
    /// Local level, geographic attitude expressed in the locally level NED frame as a rotation about the
    /// E-axis followed by rotation about the N-axis. Positive rotation follows the right-hand rule. The
    /// third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d to report a sensed
    /// third dimension that is zero. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE: u8 = 0;

    /// Local level, geographic attitude expressed in the locally level NED frame as a rotation about the
    /// D-axis followed by rotation about the N-axis. Positive rotation follows the right-hand rule. The
    /// third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d to report a sensed
    /// third dimension that is zero. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND: u8 = 1;

    /// Local level, geographic attitude expressed in the locally level NED frame as a rotation about the
    /// D-axis followed by rotation about the E-axis. Positive rotation follows the right-hand rule. The
    /// third rotation in the NED-frame is unspecified and is not sensed. Use attitude_3d to report a sensed
    /// third dimension that is zero. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED: u8 = 2;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementAttitude2D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAttitude2D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAttitude2D {
  type RmwMsg = super::msg::rmw::MeasurementAttitude2D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        attitude2d: msg.attitude2d,
        covariance: msg.covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
        attitude2d: msg.attitude2d,
        covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      attitude2d: msg.attitude2d,
      covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementAttitude3D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementAttitude3D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Three-dimensional attitude expressed as a quaternion, a four element vector representation, the
    /// elements of which are functions of the orientation of the vector and the magnitude of the rotation.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid .
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
    /// (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
    /// description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
    /// frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
    /// that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
    /// vector.
    /// See "conventions" documentation for more detailed information.
    /// Units: none
    pub quaternion: [f64; 4],

    /// Description: Tilt error covariance matrix. This matrix represents the uncertainty in the "tilt
    /// errors" that represent the additional rotation to be applied to the provided attitude quaternion in
    /// order to convert it to the true attitude with no errors. By convention, these "tilt errors" are
    /// expressed in the reference frame (ECI, ECEF, or NED).
    /// See "conventions" documentation for more detailed information.
    /// Units: rad^2
    /// Note: field represents a 3 x 3 matrix
    pub tilt_error_covariance: [f64; 9],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementAttitude3D {
    /// Absolute inertial attitude. Sensor frame attitude relative to the earth-centered, inertial (ECi)
    /// frame. See also ECi coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI: u8 = 0;

    /// Attitude relative to Earth. Sensor frame attitude relative to the ECEF frame. Generally, time is
    /// required to convert between absolute inertial attitude and attitude relative to Earth. See also ECEF
    /// coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF: u8 = 1;

    /// Local level, geographic attitude. Sensor frame attitude with respect to earth-fixed frame expressed
    /// in the North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E,
    /// and D definitions. Generally, position is required to convert between attitude relative to the earth
    /// and locally level, geographic attitude. See also NED coordinate frame definition for N, E, and D
    /// definitions.
    pub const ASPN23_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED: u8 = 2;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementAttitude3D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementAttitude3D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementAttitude3D {
  type RmwMsg = super::msg::rmw::MeasurementAttitude3D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        quaternion: msg.quaternion,
        tilt_error_covariance: msg.tilt_error_covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
        quaternion: msg.quaternion,
        tilt_error_covariance: msg.tilt_error_covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      quaternion: msg.quaternion,
      tilt_error_covariance: msg.tilt_error_covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementBarometer

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementBarometer {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Barometric pressure.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Reading from a barometric pressure sensor.
    /// Units: pascal
    pub pressure: f64,

    /// Description: Pressure variance.
    /// Units: pascal^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementBarometer {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_BAROMETER_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementBarometer {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementBarometer::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementBarometer {
  type RmwMsg = super::msg::rmw::MeasurementBarometer;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        pressure: msg.pressure,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      pressure: msg.pressure,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      pressure: msg.pressure,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDeltaPosition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDeltaPosition {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Delta position is the change in position from the position at time (time_of_validity - delta_t) to
    /// the position at time (time_of_validity), where the change in position is reported along each axis of
    /// the reference frame. The reference frame is chosen by the user in the reference enum.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid at the end of the
    /// delta-position period.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Specifies measurement reference frame.
    pub reference_frame: u8,

    /// Description: Duration of the observation time interval. The time_of_validity denotes the end of the
    /// time interval. The start of the time interval is time_of_validity - delta_t.
    /// Units: sec
    pub delta_t: f64,

    /// Description: Dimension of measurement provided.
    /// Units: none
    pub num_meas: u8,

    /// Description: Delta position over the first dimension specified by the enum.
    /// Units: m
    pub term1: f64,

    /// Description: Delta position over the second dimension specified by the enum.
    /// Units: m
    pub term2: f64,

    /// Description: Delta position over the third dimension specified by the enum.
    /// Units: m
    pub term3: f64,

    /// Description: Variance or covariance matrix depending on measurement dimension.
    /// Units: m^2 Dimensions of covariance must be num_meas²
    /// Note: field represents a num_meas x num_meas matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementDeltaPosition {
    /// Change in position along the N, E, and D axes of the locally level NED frame. Each direction is
    /// optional. term1, term2, and term3, if provided, describe the change in position along the N, E, and
    /// D axes, respectively. For example, a depth sensor may report a change in position of +2m along the D
    /// axis by omitting term1 and term2 (using the appropriate null) and using term3 = 2. This observation
    /// may be interpreted as (1) the sensor has no knowledge of the change in position in the N and E
    /// directions, and (2) the sensor observed that the position at the end of the observation time
    /// interval, time_of_validity, is 2 meters lower than the position at the start of the time interval,
    /// time_of_validity - delta_t. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED: u8 = 0;

    /// Change in position expressed in the sensor frame at the start of the measurement interval as defined
    /// in mounting. Each direction is optional. term1, term2, and term3, if provided, describe the change
    /// in position along the sensor x, y, and z axes, respectively.
    pub const ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START: u8 = 1;

    /// Change in position expressed in the sensor frame at the end of the measurement interval as defined
    /// in mounting. Each direction is optional. term1, term2, and term3, if provided, describe the change
    /// in position along the sensor x, y, and z axes, respectively.
    pub const ASPN23_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END: u8 = 2;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementDeltaPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDeltaPosition::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDeltaPosition {
  type RmwMsg = super::msg::rmw::MeasurementDeltaPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        delta_t: msg.delta_t,
        num_meas: msg.num_meas,
        term1: msg.term1,
        term2: msg.term2,
        term3: msg.term3,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      delta_t: msg.delta_t,
      num_meas: msg.num_meas,
      term1: msg.term1,
      term2: msg.term2,
      term3: msg.term3,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      delta_t: msg.delta_t,
      num_meas: msg.num_meas,
      term1: msg.term1,
      term2: msg.term2,
      term3: msg.term3,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDeltaRange

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDeltaRange {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Delta range is the distance between the sensor position at time_of_validity and the sensor position
    /// at time_of_validity - delta_t.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Duration of the observation time interval. The time_of_validity denotes the end of the
    /// time interval. The start of the time interval is time_of_validity - delta_t.
    /// Units: sec
    pub delta_t: f64,

    /// Description: Delta range over time period.
    /// Units: m
    pub obs: f64,

    /// Description: Measurement error variance.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementDeltaRange {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_DELTA_RANGE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementDeltaRange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDeltaRange::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDeltaRange {
  type RmwMsg = super::msg::rmw::MeasurementDeltaRange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        delta_t: msg.delta_t,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      delta_t: msg.delta_t,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      delta_t: msg.delta_t,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDeltaRangeToPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDeltaRangeToPoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Delta range to a point is the difference, d1 - d0, where
    ///
    /// d1 is the distance between the sensor and the point at time = (time_of_validity)
    /// d0 is the distance between the sensor and the point at time = (time_of_validity - delta_t)
    ///
    /// Note, a negative obs indicates the sensor is closer to the point at time_of_validity than it was
    /// at time_of_validity - delta_t. Information about the remote point (its position and/or
    /// correspondence with previous or future appearances of this same point) may be determined using
    /// remote_point.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Position and/or correspondence information about the remote point.
    /// Units: various
    pub remote_point: super::msg::TypeRemotePoint,

    /// Description: Delta range to the remote point.
    /// Units: m
    pub obs: f64,

    /// Description: Duration of the observation time interval. The time_of_validity denotes the end of the
    /// time interval. The start of the time interval is time_of_validity - delta_t.
    /// Units: sec
    pub delta_t: f64,

    /// Description: Variance of the delta range measurement.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementDeltaRangeToPoint {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementDeltaRangeToPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDeltaRangeToPoint::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDeltaRangeToPoint {
  type RmwMsg = super::msg::rmw::MeasurementDeltaRangeToPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.remote_point)).into_owned(),
        obs: msg.obs,
        delta_t: msg.delta_t,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.remote_point)).into_owned(),
      obs: msg.obs,
      delta_t: msg.delta_t,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      remote_point: super::msg::TypeRemotePoint::from_rmw_message(msg.remote_point),
      obs: msg.obs,
      delta_t: msg.delta_t,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDirection2DToPoints

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDirection2DToPoints {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// 2D direction to points.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Total number of observations.
    /// Units: none
    pub num_obs: u16,

    /// Description: Array of observations.
    /// Units: none
    /// Note: array length is num_obs
    pub obs: Vec<super::msg::TypeDirection2DToPoint>,

}



impl Default for MeasurementDirection2DToPoints {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDirection2DToPoints::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDirection2DToPoints {
  type RmwMsg = super::msg::rmw::MeasurementDirection2DToPoints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        num_obs: msg.num_obs,
        obs: msg.obs
          .into_iter()
          .map(|elem| super::msg::TypeDirection2DToPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      num_obs: msg.num_obs,
        obs: msg.obs
          .iter()
          .map(|elem| super::msg::TypeDirection2DToPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      num_obs: msg.num_obs,
      obs: msg.obs
          .into_iter()
          .map(super::msg::TypeDirection2DToPoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDirection3DToPoints

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDirection3DToPoints {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// 3D direction to points.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Total number of observations.
    /// Units: none
    pub num_obs: u16,

    /// Description: Array of observations.
    /// Units: none
    /// Note: array length is num_obs
    pub obs: Vec<super::msg::TypeDirection3DToPoint>,

}



impl Default for MeasurementDirection3DToPoints {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDirection3DToPoints::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDirection3DToPoints {
  type RmwMsg = super::msg::rmw::MeasurementDirection3DToPoints;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        num_obs: msg.num_obs,
        obs: msg.obs
          .into_iter()
          .map(|elem| super::msg::TypeDirection3DToPoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      num_obs: msg.num_obs,
        obs: msg.obs
          .iter()
          .map(|elem| super::msg::TypeDirection3DToPoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      num_obs: msg.num_obs,
      obs: msg.obs
          .into_iter()
          .map(super::msg::TypeDirection3DToPoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion2D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDirectionOfMotion2D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Direction of motion represented in a two-dimensional reference frame as defined by the enum.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Specifies measurement reference.
    pub reference: u8,

    /// Description: Observations as specified in the reference enum.
    /// Units: rad
    pub obs: f64,

    /// Description: Measurement error variance.
    /// Units: rad^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementDirectionOfMotion2D {
    /// Direction of motion expressed in the two-dimensional North-East plane of the locally level NED frame
    /// as the angle between the N-axis and the direction of motion. Positive angle is defined as a rotation
    /// towards the E-axis. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE: u8 = 0;

    /// Direction of motion expressed in the two-dimensional North-Down plane of the locally level NED frame
    /// as the angle between the N-axis and the direction of motion. Positive angle is defined as a rotation
    /// towards the D-axis. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND: u8 = 1;

    /// Direction of motion expressed in the two-dimensional East-Down plane of the locally level NED frame
    /// as the angle between the E-axis and the direction of motion. Positive angle is defined as a rotation
    /// towards the D-axis. See also NED coordinate frame definition for N, E, and D definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED: u8 = 2;

    /// Direction of motion expressed in the sensor frame as the angle between the sensor frame x-axis and
    /// the direction of motion. Positive angle is defined as a rotation towards the sensor frame y-axis.
    /// (Sensor frame is two dimensional, x and y, as defined in mounting.)
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementDirectionOfMotion2D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDirectionOfMotion2D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDirectionOfMotion2D {
  type RmwMsg = super::msg::rmw::MeasurementDirectionOfMotion2D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference: msg.reference,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementDirectionOfMotion3D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementDirectionOfMotion3D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Direction of motion represented as a unit vector.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: Direction of motion represented as a unit vector.
    /// Units: none
    pub obs: [f64; 3],

    /// Description: Error is expressed as rotation uncertainty about two axes, error_vector and and a
    /// second error vector that is orthogonal to both the obs vector and the error_vector.
    /// Units: none
    pub error_vector: [f64; 3],

    /// Description: Error is expressed as rotation uncertainty about the following two axes: 1)
    /// error_vector, and 2) a second error vector that is orthogonal to both the obs direction vector and
    /// the error_vector.
    /// Units: rad^2
    /// Note: field represents a 2 x 2 matrix
    pub covariance: [f64; 4],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementDirectionOfMotion3D {
    /// Direction of motion with respect to earth-centered inertial (ECi) frame, expressed in an
    /// earth-centered inertial frame. See also ECi coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI: u8 = 0;

    /// Direction of motion with respect to earth-fixed frame expressed in earth-centered, earth-fixed
    /// (ECEF) frame. See also ECEF coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF: u8 = 1;

    /// Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
    /// North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E, and D
    /// definitions.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED: u8 = 2;

    /// Direction of motion with respect to earth-fixed frame expressed in sensor coordinate frame. Sensor
    /// coordinate frame is defined in sensor metadataHeader.
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementDirectionOfMotion3D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementDirectionOfMotion3D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementDirectionOfMotion3D {
  type RmwMsg = super::msg::rmw::MeasurementDirectionOfMotion3D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        obs: msg.obs,
        error_vector: msg.error_vector,
        covariance: msg.covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
        obs: msg.obs,
        error_vector: msg.error_vector,
        covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      obs: msg.obs,
      error_vector: msg.error_vector,
      covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementFrequencyDifference

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementFrequencyDifference {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Frequency difference between two clocks or timing sources.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Whole number of attoseconds used to provide additional timestamp fidelity describing
    /// the time at which the measurement is considered to be valid. This is only needed if the time of
    /// validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be sure
    /// to report the timestamp's digits of precision in the `type_metadataheader` as part of the metadata.
    /// The full timestamp in nanoseconds is calculated as
    ///
    /// time_of_validity + ( time_of_validity_attosec * 1E-9 )
    ///
    /// and if needed, a timestamp in seconds is calculated as
    ///
    /// time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
    ///
    /// (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
    /// Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may be
    /// positive or negative. It is recommended to make time_of_validity and time_of_validity_attosec the
    /// same sign. Care should be taken when constructing the timestamp components to be sure the summation
    /// produces the desired result.
    /// Units: attoseconds
    pub time_of_validity_attosec: i32,

    /// Description: Identifier for clock/timing source 1. See clock_identifiers.md for a full description,
    /// but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id1: u8,

    /// Description: Identifier for clock/timing source 2. See clock_identifiers.md for a full description,
    /// but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id2: u8,

    /// Description: Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
    /// Units: Hertz
    pub freq_diff: f64,

    /// Description: Variance of the error in the frequency difference measurement.
    /// Units: Hertz^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementFrequencyDifference {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementFrequencyDifference {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementFrequencyDifference::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementFrequencyDifference {
  type RmwMsg = super::msg::rmw::MeasurementFrequencyDifference;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        time_of_validity_attosec: msg.time_of_validity_attosec,
        clock_id1: msg.clock_id1,
        clock_id2: msg.clock_id2,
        freq_diff: msg.freq_diff,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      freq_diff: msg.freq_diff,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      freq_diff: msg.freq_diff,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementHeading

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementHeading {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Local level, geographic attitude expressed in the locally level NED frame as
    /// a rotation about the D-axis.
    ///
    /// Positive rotation follows the right-hand rule. Attitude about the other axes
    /// in the NED-frame are unspecified and not sensed. Use attitude_2d or
    /// attitude_3d to report a sensed dimension that is zero. See also NED
    /// coordinate frame definition for N, E, and D definitions.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines heading reference.
    pub reference: u8,

    /// Description: Heading.
    /// Units: rad
    pub obs: f64,

    /// Description: Variance of the measurement.
    /// Units: rad^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementHeading {
    /// True heading. Direction to the geographic north expressed in the locally level NED frame as a
    /// rotation about the D-axis. This is akin to attitude_1d, which would be consistent with attitude_2d
    /// and attitude_3d. In that case, a ref frame enum could be used to define multiple one-dimensional
    /// attitudes, of which, heading could be one. The simpler approach of just having heading was chosen
    /// over the more general approach until there is a requirement for multiple, one-dimensional attitudes.
    pub const ASPN23_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING: u8 = 0;

    /// Magnetic heading. Direction to magnetic north expressed in the locally level NED frame as a rotation
    /// about the D-axis. In general, geographic position and time is required to convert from magnetic
    /// heading to true heading.
    pub const ASPN23_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_HEADING_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementHeading {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementHeading::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementHeading {
  type RmwMsg = super::msg::rmw::MeasurementHeading;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference: msg.reference,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference: msg.reference,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementImage

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementImage {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// 2D Raster Image
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: The number of pixel rows in this image.
    /// Units: pixels
    pub height: u32,

    /// Description: The number of pixel columns in this image.
    /// Units: pixels
    pub width: u32,

    /// Description: True if the image_data byte order is big endian, false if it is little endian. For raw
    /// image_types, this is only applicable for image_types with multi-byte pixels.
    /// Units: none
    pub is_bigendian: bool,

    /// Enumerated field which specifies the datatype of the pixels represented in this image.
    /// Raw images are stored in row-major order. In multi-channel raw images, the first element contains
    /// the first pixel of the first channel, the second element contains the first pixel of the second
    /// channel, and so on. The data of each multi-byte pixel should be contiguous within the data array
    /// with the endianness defined by the is_bigendian field.
    /// Example - 2x2 RAW_RGB8 image_data[0] row1 col1 chanR image_data[1] row1 col1 chanG image_data[2]
    /// row1 col1 chanB image_data[3] row1 col2 chanR image_data[4] row1 col2 chanG image_data[5] row1 col2
    /// chanB image_data[6] row2 col1 chanR image_data[7] row2 col1 chanG image_data[8] row2 col1 chanB
    /// image_data[9] row2 col2 chanR image_data[10] row2 col2 chanG image_data[11] row2 col2 chanB
    /// Example - 2x2 RAW_GRAY16, is_bigendian = 1 Where byte 1 is the most significant byte (byte1 << 8 |
    /// byte2): image_data[0] row1 col1 byte1 image_data[1] row1 col1 byte2 image_data[2] row1 col2 byte1
    /// image_data[3] row1 col2 byte2 image_data[4] row2 col1 byte1 image_data[5] row2 col1 byte2
    /// image_data[6] row2 col2 byte1 image_data[7] row2 col2 byte2
    pub image_type: u8,

    /// Description: Length of the byte array holding the encoded image. For raw image types, this should be
    /// equal to height * width * num_channels * bytes_per_pixel.
    /// Units: byte
    pub image_data_length: u64,

    /// Description: Stores the encoded image. Interpretation varies based on the image_type.
    /// Units: none
    /// Note: array length is image_data_length
    pub image_data: Vec<u8>,

    /// The model used to map 3D points in the world to 2D points on the image plane
    pub camera_model: u8,

    /// Description: The number of coefficients used in camera model.
    /// Units: none
    pub num_model_coefficients: u8,

    /// Description: The camera model parameters, size depending on the distortion model.
    /// Units: none
    /// Note: array length is num_model_coefficients
    pub model_coefficients: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementImage {
    /// Windows Bitmaps
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP: u8 = 0;

    /// Portable Network Graphics
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG: u8 = 1;

    /// Joint Photographic Experts Group
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG: u8 = 2;

    /// Tag Image File Format
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF: u8 = 3;

    /// Single channel raw gray scale image. One byte per pixel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8: u8 = 4;

    /// Three channel raw RGB image. One byte per pixel per channel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8: u8 = 5;

    /// Three channel raw BGR image. One byte per pixel per channel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8: u8 = 6;

    /// Four channel raw RGBA image. One byte per pixel per channel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8: u8 = 7;

    /// Four channel raw BGRA image. One byte per pixel per channel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8: u8 = 8;

    /// Single channel raw gray scale image. Two bytes per pixel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16: u8 = 9;

    /// Single channel raw gray scale image. Eight bytes per pixel.
    pub const ASPN23_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64: u8 = 10;

    /// A 10 parameter model, 4 parameters composing the 2D focal length fc = (fx, fy) and camera principal
    /// point cc = (cx, cy) in pixels, a model of radial and tangential distortion specified using the 5
    /// parameters (kc1, kc2, kc3, kc4, kc5). And the skew parameter, alpha_c. Mapping from 3D points in the
    /// world to 2D points in the image is described at
    /// http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html
    pub const ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB: u8 = 0;

    /// A 4 parameter model, modeling only the the 2D focal length fc = (fx, fy) and camera principal point
    /// cc = (cx, cy). Effectively using the same model as described in described at
    /// http://www.vision.caltech.edu/bouguetj/calib_doc/htmls/parameters.html, with all distortion and skew
    /// parameters zeroed out
    pub const ASPN23_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL: u8 = 1;

}


impl Default for MeasurementImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementImage::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementImage {
  type RmwMsg = super::msg::rmw::MeasurementImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        height: msg.height,
        width: msg.width,
        is_bigendian: msg.is_bigendian,
        image_type: msg.image_type,
        image_data_length: msg.image_data_length,
        image_data: msg.image_data.into(),
        camera_model: msg.camera_model,
        num_model_coefficients: msg.num_model_coefficients,
        model_coefficients: msg.model_coefficients.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      height: msg.height,
      width: msg.width,
      is_bigendian: msg.is_bigendian,
      image_type: msg.image_type,
      image_data_length: msg.image_data_length,
        image_data: msg.image_data.as_slice().into(),
      camera_model: msg.camera_model,
      num_model_coefficients: msg.num_model_coefficients,
        model_coefficients: msg.model_coefficients.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      height: msg.height,
      width: msg.width,
      is_bigendian: msg.is_bigendian,
      image_type: msg.image_type,
      image_data_length: msg.image_data_length,
      image_data: msg.image_data
          .into_iter()
          .collect(),
      camera_model: msg.camera_model,
      num_model_coefficients: msg.num_model_coefficients,
      model_coefficients: msg.model_coefficients
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementMagneticField

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementMagneticField {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Vector magnetic field. Represents the magnetic field strength along sensor x, y, and z axes as
    /// defined in mounting. May represent 1-D, 2-D, or 3-D measurement
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Dimension of measurement provided. May be 1, 2, or 3.
    /// Units: none
    pub num_meas: u8,

    /// Description: Field strength of magnetic field in nanoTesla (nT).
    /// Units: nT
    pub x_field_strength: f64,

    /// Description: Field strength of magnetic field in nanoTesla (nT).
    /// Units: nT
    pub y_field_strength: f64,

    /// Description: Field strength of magnetic field in nanoTesla (nT).
    /// Units: nT
    pub z_field_strength: f64,

    /// Description: Measurement error variance or covariance depending on measurement dimension.
    /// Units: (nT)^2 Dimensions of covariance must be num_meas²
    /// Note: field represents a num_meas x num_meas matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementMagneticField {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementMagneticField {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementMagneticField::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementMagneticField {
  type RmwMsg = super::msg::rmw::MeasurementMagneticField;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        num_meas: msg.num_meas,
        x_field_strength: msg.x_field_strength,
        y_field_strength: msg.y_field_strength,
        z_field_strength: msg.z_field_strength,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      num_meas: msg.num_meas,
      x_field_strength: msg.x_field_strength,
      y_field_strength: msg.y_field_strength,
      z_field_strength: msg.z_field_strength,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      num_meas: msg.num_meas,
      x_field_strength: msg.x_field_strength,
      y_field_strength: msg.y_field_strength,
      z_field_strength: msg.z_field_strength,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementMagneticFieldMagnitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementMagneticFieldMagnitude {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Magnetic field magnitude measurement.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Field strength magnitude of magnetic field in nanoTesla (nT).
    /// Units: nT
    pub field_strength: f64,

    /// Description: Magnetic field strength magnitude variance.
    /// Units: (nT)^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementMagneticFieldMagnitude {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementMagneticFieldMagnitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementMagneticFieldMagnitude::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementMagneticFieldMagnitude {
  type RmwMsg = super::msg::rmw::MeasurementMagneticFieldMagnitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        field_strength: msg.field_strength,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      field_strength: msg.field_strength,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      field_strength: msg.field_strength,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementPosition

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementPosition {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// One, two, or three dimensional position relative to a user-defined reference frame.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: First position term as defined in enum.
    /// Units: various
    pub term1: f64,

    /// Description: Second position term as defined in enum.
    /// Units: various
    pub term2: f64,

    /// Description: Third position term as defined in enum.
    /// Units: various
    pub term3: f64,

    /// Description: Dimension of measurement provided.
    /// Units: none
    pub num_meas: u8,

    /// Description: Error covariance or variance depending on observation dimension.
    /// Units: various Dimensions of covariance must be num_meas²
    /// Note: field represents a num_meas x num_meas matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementPosition {
    /// Sensor position relative to the earth-centered, inertial (ECi) frame expressed where term1, term2,
    /// and term3 are the x, y, and z components of ECI position in meters, respectively. Each term is
    /// optional. Error covariance is given using x-axis position error component (meters), y-axis position
    /// error component (meters), and z-axis position error component (meters). In the case of nulled
    /// position components, the corresponding error covariance terms are omitted. See also ECi coordinate
    /// frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI: u8 = 0;

    /// Sensor position relative to the WGS-84 reference expressed using term1 as geodetic latitude in
    /// radians, term2 as longitude in radians, and term3 as geodetic altitude (or height above the WGS-84
    /// ellipsoid) in meters. Each term is optional. Error covariance is given using north-south position
    /// error in meters (an expression of geodetic latitude error), east-west position error in meters (an
    /// expression of longitude error in meters), and geodetic altitude error in meters. In the case of
    /// nulled position components, the corresponding error covariance terms are omitted.
    pub const ASPN23_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_POSITION_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementPosition {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementPosition::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementPosition {
  type RmwMsg = super::msg::rmw::MeasurementPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        term1: msg.term1,
        term2: msg.term2,
        term3: msg.term3,
        num_meas: msg.num_meas,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      term1: msg.term1,
      term2: msg.term2,
      term3: msg.term3,
      num_meas: msg.num_meas,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      term1: msg.term1,
      term2: msg.term2,
      term3: msg.term3,
      num_meas: msg.num_meas,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementPositionAttitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementPositionAttitude {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Position and attitude, also known as pose. Position is relative to a user-defined reference frame.
    /// Attitude expressed as a quaternion, a four element vector representation, the elements of which are
    /// functions of the orientation of the vector and the magnitude of the rotation.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: First position term as defined in enum.
    /// Units: rad
    pub p1: f64,

    /// Description: First position term as defined in enum.
    /// Units: rad
    pub p2: f64,

    /// Description: First position term as defined in enum.
    /// Units: m
    pub p3: f64,

    /// Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
    /// (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
    /// description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
    /// frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
    /// that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
    /// vector.
    /// See "conventions" documentation for more detailed information.
    /// Units: none
    pub quaternion: [f64; 4],

    /// Description: Measurement error variance or covariance depending on measurement dimension.
    /// Units: various
    /// Note: field represents a 6 x 6 matrix
    #[cfg_attr(feature = "serde", serde(with = "serde_big_array::BigArray"))]
    pub covariance: [f64; 36],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementPositionAttitude {
    /// Sensor position and attitude relative to the earth-centered, inertial (ECi) frame. Position is
    /// expressed where p1, p2, and p3 are the x, y, and z components of ECI position in meters,
    /// respectively. Attitude is expressed as a four-element quaternion. Error covariance is given using
    /// x-axis position error component (meters), y-axis position error component (meters), z-axis position
    /// error component (meters), tilt error about the x-axis (rad), tilt error about the y-axis (rad), and
    /// tilt error about the z-axis (rad). See also ECi coordinate frame definition for x, y, and z
    /// definitions.
    pub const ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI: u8 = 0;

    /// Sensor position, and attitude relative to the WGS-84 reference. Position is expressed where p1 is
    /// the geodetic latitude in radians, p2 is the longitude in radians, and p3 is the geodetic altitude
    /// (or height above the WGS-84 ellipsoid) in meters. Attitude is the sensor frame rotation relative to
    /// the local level frame expressed as a four-element quaternion. Error covariance is given using
    /// north-south position error (meters), east-west position error (meters), geodetic altitude error
    /// (meters), tilt error about the north axis (rad), tilt error about the east axis (rad), and tilt
    /// error about the down axis (rad).
    pub const ASPN23_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementPositionAttitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementPositionAttitude::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementPositionAttitude {
  type RmwMsg = super::msg::rmw::MeasurementPositionAttitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        p1: msg.p1,
        p2: msg.p2,
        p3: msg.p3,
        quaternion: msg.quaternion,
        covariance: msg.covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      p1: msg.p1,
      p2: msg.p2,
      p3: msg.p3,
        quaternion: msg.quaternion,
        covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      p1: msg.p1,
      p2: msg.p2,
      p3: msg.p3,
      quaternion: msg.quaternion,
      covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementPositionVelocityAttitude

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementPositionVelocityAttitude {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Position, velocity, and attitude. Position, in whole or in part, is optional. Velocity, in whole or
    /// in part, is optional. Attitude is optional, but if included, must be 3-dimensional. Position is
    /// relative to a user-defined reference frame. Velocity is time rate of change of position with respect
    /// to the user-specified reference frame. Attitude expressed as a quaternion, a four element vector
    /// representation, the elements of which are functions of the orientation of the vector and the
    /// magnitude of the rotation.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: First position term as defined in enum.
    /// Units: various
    pub p1: f64,

    /// Description: Second position term as defined in enum.
    /// Units: various
    pub p2: f64,

    /// Description: Third position term as defined in enum.
    /// Units: m
    pub p3: f64,

    /// Description: Velocity along the first axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub v1: f64,

    /// Description: Velocity along the second axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub v2: f64,

    /// Description: Velocity along the third axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub v3: f64,

    /// Description: Four element quaternion, q = [a, b, c, d], where a = cos(phi/2), b =
    /// (phi_x/phi)*sin(phi/2), c = (phi_y/phi)*sin(phi/2), and d = (phi_z/phi)*sin(phi/2). In this
    /// description, the vector [phi_x, phi_y, phi_z] represents the rotation vector that describes the
    /// frame rotation to be applied to the "reference" frame (ECI, ECEF, or NED) to rotate it into the axes
    /// that describe the measured attitude, and the value phi is the magnitude of the [phi_x, phi_y, phi_z]
    /// vector.
    /// See "conventions" documentation for more detailed information.
    /// Units: none
    pub quaternion: [f64; 4],

    /// Description: Dimension of measurement provided. In this sense, num_meas is the number of measurement
    /// terms that include valid data.
    /// Units: none
    pub num_meas: u8,

    /// Description: Measurement error variance or covariance depending on measurement dimension. NOTE:
    /// Attitude errors are expressed as tilt errors, so if an attitude is provided, that should count as 3
    /// terms in num_meas. For example, a 3-D position, 3-D velocity, and attitude expressed as a quaternion
    /// (which takes 10 terms total to describe) is num_meas = 9. A second example is a 3-D position and 3-D
    /// velocity is num_meas = 6.
    /// Units: various Dimensions of covariance must be num_meas²
    /// Note: field represents a num_meas x num_meas matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementPositionVelocityAttitude {
    /// Sensor position, velocity, and attitude relative to the earth-centered, inertial (ECi) frame.
    /// Position is expressed where p1, p2, and p3 are the x, y, and z components of ECI position in meters,
    /// respectively. Velocity is expressed where v1, v2, and v3 are the x, y, and z components of velocity
    /// with respect to the ECi frame in m/s, respectively. Attitude is expressed as a four-element
    /// quaternion. Position, in whole or in part, is optional. Velocity, in whole or in part, is optional.
    /// Attitude is optional, but if included, must be 3 dimensional. Error covariance is given using x-axis
    /// position error component (meters), y-axis position error component (meters), z-axis position error
    /// component (meters), x-axis velocity error component (m/s), y-axis velocity error component (m/s),
    /// z-axis velocity error component (m/s), tilt error about the x-axis (rad), tilt error about the
    /// y-axis (rad), and tilt error about the z-axis (rad). In the case of nulled position, velocity, or
    /// attitude, the corresponding error covariance terms are omitted. See also ECi coordinate frame
    /// definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI: u8 = 0;

    /// Sensor position, velocity, and attitude relative to the WGS-84 reference. Position is expressed
    /// where p1 is the geodetic latitude in radians, p2 is the longitude in radians, and p3 is the geodetic
    /// altitude (or height above the WGS-84 ellipsoid) in meters. Velocity with respect to the local level
    /// geographical frame with the origin at the sensor position is expressed using the North-East-Down
    /// (NED) convention, where v1 is the north velocity component in m/s, v2 is the east velocity component
    /// in m/s, and v3 is the down velocity component in m/s. Attitude is the sensor frame rotation relative
    /// to the local level frame expressed as a four-element quaternion. Position, in whole or in part, is
    /// optional. Velocity, in whole or in part, is optional. Attitude is optional, but if included, must be
    /// 3 dimensional. Error covariance is given using north-south position error (meters), east-west
    /// position error (meters), geodetic altitude error (meters), north velocity component error (m/s),
    /// east velocity component error (m/s), down velocity component error (m/s), tilt error about the north
    /// axis (rad), tilt error about the east axis (rad), and tilt error about the down axis (rad). In the
    /// case of nulled position, velocity, or attitude, the corresponding error covariance terms are
    /// omitted.
    pub const ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementPositionVelocityAttitude {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementPositionVelocityAttitude::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementPositionVelocityAttitude {
  type RmwMsg = super::msg::rmw::MeasurementPositionVelocityAttitude;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        p1: msg.p1,
        p2: msg.p2,
        p3: msg.p3,
        v1: msg.v1,
        v2: msg.v2,
        v3: msg.v3,
        quaternion: msg.quaternion,
        num_meas: msg.num_meas,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      p1: msg.p1,
      p2: msg.p2,
      p3: msg.p3,
      v1: msg.v1,
      v2: msg.v2,
      v3: msg.v3,
        quaternion: msg.quaternion,
      num_meas: msg.num_meas,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      p1: msg.p1,
      p2: msg.p2,
      p3: msg.p3,
      v1: msg.v1,
      v2: msg.v2,
      v3: msg.v3,
      quaternion: msg.quaternion,
      num_meas: msg.num_meas,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementRangeRateToPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementRangeRateToPoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Range rate to a point is the instantaneous rate of change in the distance between the sensor and the
    /// point at time_of_validity. Information about the remote point (its position and/or correspondence
    /// with previous or future appearances of this same point) may be determined using remote_point.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Position and/or correspondence information about the remote point.
    /// Units: various
    pub remote_point: super::msg::TypeRemotePoint,

    /// Description: Range rate to the remote point.
    /// Units: m/s
    pub obs: f64,

    /// Description: Variance of the range rate measurement.
    /// Units: (m/s)^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementRangeRateToPoint {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_RANGE_RATE_TO_POINT_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementRangeRateToPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementRangeRateToPoint::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementRangeRateToPoint {
  type RmwMsg = super::msg::rmw::MeasurementRangeRateToPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.remote_point)).into_owned(),
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.remote_point)).into_owned(),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      remote_point: super::msg::TypeRemotePoint::from_rmw_message(msg.remote_point),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementRangeToPoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementRangeToPoint {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Range to a point is the distance between the sensor and the point at time_of_validity. Information
    /// about the remote point (its position and/or correspondence with previous or future appearances of
    /// this same point) may be determined using remote_point.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Position and/or correspondence information about the remote point.
    /// Units: various
    pub remote_point: super::msg::TypeRemotePoint,

    /// Description: Range to the remote point.
    /// Units: m
    pub obs: f64,

    /// Description: Variance of the range measurement.
    /// Units: m^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementRangeToPoint {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_RANGE_TO_POINT_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementRangeToPoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementRangeToPoint::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementRangeToPoint {
  type RmwMsg = super::msg::rmw::MeasurementRangeToPoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Owned(msg.remote_point)).into_owned(),
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        remote_point: super::msg::TypeRemotePoint::into_rmw_message(std::borrow::Cow::Borrowed(&msg.remote_point)).into_owned(),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      remote_point: super::msg::TypeRemotePoint::from_rmw_message(msg.remote_point),
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementSatnav

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementSatnav {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Raw measurements from a satnav receiver.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
    /// pseudorange observations must refer to one receiver clock only. The receiver clock time of the
    /// measurement is the receiver clock time of the received signals. It is identical for the phase and
    /// range measurements and is identical for all satellites observed in a given epoch.
    /// Units: none
    pub receiver_clock_time: super::msg::TypeSatnavTime,

    /// Description: Number of different signal types tracked in the current epoch. Examples of signal types
    /// include GPS L1 C/A code, Galileo E1B.
    /// Units: none
    pub num_signal_types: u16,

    /// Description: Total number of signals tracked across all PRNs and signal types.
    /// Units: none
    pub num_signals_tracked: u16,

    /// Description: Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
    /// Units: none
    /// Note: array length is num_signals_tracked
    pub obs: Vec<super::msg::TypeSatnavObs>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity at the sensor level. Integrity is also available for each
    /// observable, which is found in the observable type definition. Includes the integrity method used and
    /// an integrity value (which is to be interpreted based upon the integrity method). The intent of
    /// allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
    /// methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}



impl Default for MeasurementSatnav {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementSatnav::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementSatnav {
  type RmwMsg = super::msg::rmw::MeasurementSatnav;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        receiver_clock_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Owned(msg.receiver_clock_time)).into_owned(),
        num_signal_types: msg.num_signal_types,
        num_signals_tracked: msg.num_signals_tracked,
        obs: msg.obs
          .into_iter()
          .map(|elem| super::msg::TypeSatnavObs::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        receiver_clock_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Borrowed(&msg.receiver_clock_time)).into_owned(),
      num_signal_types: msg.num_signal_types,
      num_signals_tracked: msg.num_signals_tracked,
        obs: msg.obs
          .iter()
          .map(|elem| super::msg::TypeSatnavObs::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      receiver_clock_time: super::msg::TypeSatnavTime::from_rmw_message(msg.receiver_clock_time),
      num_signal_types: msg.num_signal_types,
      num_signals_tracked: msg.num_signals_tracked,
      obs: msg.obs
          .into_iter()
          .map(super::msg::TypeSatnavObs::from_rmw_message)
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementSatnavSubframe

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementSatnavSubframe {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// satnav navigation data bit subframe.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Message ID provided from the satnav receiver.
    /// Units: none
    pub gnss_message_id: i64,

    /// Description: Satellite ID number.
    /// Units: none
    pub prn: i32,

    /// Description: Describes the satellite system that generated the subframe.
    /// Units: none
    pub satellite_system: super::msg::TypeSatnavSatelliteSystem,

    /// Description: Frequency slot +7 (range from 0-13). Only used for GLONASS.
    /// Units: none
    pub freq_slot_id: i32,

    /// Description: Number of bytes of subframe data.
    /// Units: none
    pub num_bytes: u16,

    /// Description: num_bytes sized array of raw subframe message collected by the sensor. The underlying
    /// type and shape of the data vector is given by satnav_msg_id.
    /// Units: none
    /// Note: array length is num_bytes
    pub data_vector: Vec<i8>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}



impl Default for MeasurementSatnavSubframe {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementSatnavSubframe::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementSatnavSubframe {
  type RmwMsg = super::msg::rmw::MeasurementSatnavSubframe;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        gnss_message_id: msg.gnss_message_id,
        prn: msg.prn,
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Owned(msg.satellite_system)).into_owned(),
        freq_slot_id: msg.freq_slot_id,
        num_bytes: msg.num_bytes,
        data_vector: msg.data_vector.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      gnss_message_id: msg.gnss_message_id,
      prn: msg.prn,
        satellite_system: super::msg::TypeSatnavSatelliteSystem::into_rmw_message(std::borrow::Cow::Borrowed(&msg.satellite_system)).into_owned(),
      freq_slot_id: msg.freq_slot_id,
      num_bytes: msg.num_bytes,
        data_vector: msg.data_vector.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      gnss_message_id: msg.gnss_message_id,
      prn: msg.prn,
      satellite_system: super::msg::TypeSatnavSatelliteSystem::from_rmw_message(msg.satellite_system),
      freq_slot_id: msg.freq_slot_id,
      num_bytes: msg.num_bytes,
      data_vector: msg.data_vector
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementSatnavWithSvData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementSatnavWithSvData {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Raw measurements from a satnav receiver.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Receiver clock time. In a multi-GNSS receiver (GPS/GLONASS/Galileo/QZSS/BeiDou) all
    /// pseudorange observations must refer to one receiver clock only. The receiver clock time of the
    /// measurement is the receiver clock time of the received signals. It is identical for the phase and
    /// range measurements and is identical for all satellites observed in a given epoch.
    /// Units: none
    pub receiver_clock_time: super::msg::TypeSatnavTime,

    /// Description: Number of different signal types tracked in the current epoch. Examples of signal types
    /// include GPS L1 C/A code, Galileo E1B.
    /// Units: none
    pub num_signal_types: u16,

    /// Description: Total number of signals tracked across all PRNs and signal types.
    /// Units: none
    pub num_signals_tracked: u16,

    /// Description: Array of satnav obs data for all of the signals/PRNs being tracked in this epoch.
    /// Units: none
    /// Note: array length is num_signals_tracked
    pub obs: Vec<super::msg::TypeSatnavObs>,

    /// Description: Array of satellite position, velocity, and clock information. These line up precisely
    /// with the obs, such that sv_data[N] is the satellite information for observations obs[N] for any
    /// valid N.
    /// Units: none
    /// Note: array length is num_signals_tracked
    pub sv_data: Vec<super::msg::TypeSatnavSvData>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity at the sensor level. Integrity is also available for each
    /// observable, which is found in the observable type definition. Includes the integrity method used and
    /// an integrity value (which is to be interpreted based upon the integrity method). The intent of
    /// allowing num_integrity > 1 is to report multiple integrity values based on multiple integrity
    /// methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}



impl Default for MeasurementSatnavWithSvData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementSatnavWithSvData::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementSatnavWithSvData {
  type RmwMsg = super::msg::rmw::MeasurementSatnavWithSvData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        receiver_clock_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Owned(msg.receiver_clock_time)).into_owned(),
        num_signal_types: msg.num_signal_types,
        num_signals_tracked: msg.num_signals_tracked,
        obs: msg.obs
          .into_iter()
          .map(|elem| super::msg::TypeSatnavObs::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        sv_data: msg.sv_data
          .into_iter()
          .map(|elem| super::msg::TypeSatnavSvData::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
        receiver_clock_time: super::msg::TypeSatnavTime::into_rmw_message(std::borrow::Cow::Borrowed(&msg.receiver_clock_time)).into_owned(),
      num_signal_types: msg.num_signal_types,
      num_signals_tracked: msg.num_signals_tracked,
        obs: msg.obs
          .iter()
          .map(|elem| super::msg::TypeSatnavObs::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        sv_data: msg.sv_data
          .iter()
          .map(|elem| super::msg::TypeSatnavSvData::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      receiver_clock_time: super::msg::TypeSatnavTime::from_rmw_message(msg.receiver_clock_time),
      num_signal_types: msg.num_signal_types,
      num_signals_tracked: msg.num_signals_tracked,
      obs: msg.obs
          .into_iter()
          .map(super::msg::TypeSatnavObs::from_rmw_message)
          .collect(),
      sv_data: msg.sv_data
          .into_iter()
          .map(super::msg::TypeSatnavSvData::from_rmw_message)
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementSpecificForce1D

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementSpecificForce1D {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Measures the apparent specific force along the sense-axis. Example sensors are an atomic
    /// interferometer, quantum gravimeter, or accelerometer. The apparent specific force is corrupted by
    /// inertial (Coriolis and Centrifugal) effects. The sense-axis is the sensor frame x-axis as defined in
    /// mounting.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// sensor type
    pub sensor_type: u8,

    /// Description: Specific force defined in sensor_type enum.
    /// Units: various
    pub obs: f64,

    /// Description: Variance of the observation with units defined in sensor_type enum.
    /// Units: various
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementSpecificForce1D {
    /// Specific force integrated over last measurement period expressed as delta velocity in m/s. Variance
    /// units are (m/s)^2. Time of validity is the end of integration period. Integration period is from
    /// previous measurement to the current measurement.
    pub const ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_INTEGRATED: u8 = 0;

    /// Specific force is sampled expressed in m/s/s. Variance units are (m/s/s)^2.
    pub const ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_SAMPLED: u8 = 1;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_SPECIFIC_FORCE_1D_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementSpecificForce1D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementSpecificForce1D::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementSpecificForce1D {
  type RmwMsg = super::msg::rmw::MeasurementSpecificForce1D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        sensor_type: msg.sensor_type,
        obs: msg.obs,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      sensor_type: msg.sensor_type,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      sensor_type: msg.sensor_type,
      obs: msg.obs,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementSpeed

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementSpeed {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Speed is the magnitude of the velocity vector with respect to the user-specified reference frame.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference: u8,

    /// Description: Speed as the magnitude of the velocity.
    /// Units: m/s
    pub speed: f64,

    /// Description: Speed variance.
    /// Units: (m/s)^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementSpeed {
    /// Speed with respect to air measured as true airspeed (TAS) with respect to air mass expressed in
    /// sensor coordinate frame.
    pub const ASPN23_MEASUREMENT_SPEED_REFERENCE_TAS: u8 = 0;

    /// Speed with respect to air measured as indicated airspeed (IAS) with respect to air mass expressed in
    /// sensor coordinate frame; for example, dynamic pressure from a pitot tube converted to airspeed
    /// without compensation for instrument error, position, altitude, or temperature.
    pub const ASPN23_MEASUREMENT_SPEED_REFERENCE_IAS: u8 = 1;

    /// Speed with respect to water. Speed with respect to water expressed in sensor coordinate frame.
    pub const ASPN23_MEASUREMENT_SPEED_REFERENCE_WATER: u8 = 2;

    /// Speed with respect to ground. An example source is a ground Doppler radar.
    pub const ASPN23_MEASUREMENT_SPEED_REFERENCE_GROUND: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_SPEED_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementSpeed {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementSpeed::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementSpeed {
  type RmwMsg = super::msg::rmw::MeasurementSpeed;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference: msg.reference,
        speed: msg.speed,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference: msg.reference,
      speed: msg.speed,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference: msg.reference,
      speed: msg.speed,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTemperature

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTemperature {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Ambient temperature as measured by a sensor
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Reading from a temperature sensor.
    /// Units: degree_celsius
    pub temperature: f64,

    /// Description: Temperature variance.
    /// Units: (degree-celsius)^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTemperature {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TEMPERATURE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTemperature {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTemperature::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTemperature {
  type RmwMsg = super::msg::rmw::MeasurementTemperature;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        temperature: msg.temperature,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      temperature: msg.temperature,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      temperature: msg.temperature,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTime

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTime {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Expresses time measurements from one or more clocks/timing sources.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Whole number of attoseconds used to provide additional timestamp fidelity describing
    /// the time at which the measurement is considered to be valid. This is only needed if the time of
    /// validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be sure
    /// to report the timestamp's digits of precision in the `type_metadataheader` as part of the metadata.
    /// The full timestamp in nanoseconds is calculated as
    ///
    /// time_of_validity + ( time_of_validity_attosec * 1E-9 )
    ///
    /// and if needed, a timestamp in seconds is calculated as
    ///
    /// time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
    ///
    /// (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
    /// Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may be
    /// positive or negative. It is recommended to make time_of_validity and time_of_validity_attosec the
    /// same sign. Care should be taken when constructing the timestamp components to be sure the summation
    /// produces the desired result.
    /// Units: attoseconds
    pub time_of_validity_attosec: i32,

    /// Description: Number of absolute clock/timing source measurements reported in this measurement. May
    /// be 0 through 255. The clock_id, elapsed_nsec, and elapsed_attosec values are provided for each
    /// measurement, indexed by the observation number.
    /// Units: none
    pub num_obs: u8,

    /// Description: Identifier for clock/timing source for each measurement. See clock_identifiers.md for a
    /// full description, but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    /// Note: array length is num_obs
    pub clock_id: Vec<u8>,

    /// Description: Whole number nanoseconds elapsed since each clock's zero epoch. If negative, whole
    /// number nanoseconds until each clock's zero epoch. Additionally, the timestamp's digits of precision
    /// are included as `digits_of_precision`.
    /// Units: nanoseconds
    /// Note: array length is num_obs
    pub elapsed_nsec: Vec<i64>,

    /// Description: Whole number of attoseconds used to provide additional observation fidelity. This is
    /// only needed if the observation is known to more precision than 1ns; otherwise, set
    /// time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision.
    /// The full observation in nanoseconds is calculated as
    ///
    /// elapsed_nsec + ( elapsed_attosec * 1E-9 )
    ///
    /// and the observation in seconds is calculated as
    ///
    /// elapsed_nsec * 1E-9 + elapsed_attosec * 1E-18
    ///
    /// Furthermore, both elapsed_nsec and elapsed_attosec are signed integers and may be positive or
    /// negative. It is recommended to make elapsed_nsec and elapsed_attosec the same sign. Care should be
    /// taken when constructing the observation components to be sure the summation produces the desired
    /// result.
    /// Units: attoseconds
    /// Note: array length is num_obs
    pub elapsed_attosec: Vec<i32>,

    /// Description: Defines how many decimal digits of precision are represented in the observation after
    /// the decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
    /// value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a value
    /// of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
    /// Units: none
    pub digits_of_precision: u8,

    /// Description: Measurement error variance or covariance depending on measurement dimension in the
    /// absolute clock/timing signal measurements. Note: These measurements are assuming that there is no
    /// error in the ASPN system clock. Errors in the ASPN system clock time tag for the time measurements
    /// should be included in the overall errors for the respective time measurements as expressed in the
    /// covariance matrix.
    /// Units: sec^2 Dimensions of covariance must be num_obs²
    /// Note: field represents a num_obs x num_obs matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTime {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TIME_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTime {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTime::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTime {
  type RmwMsg = super::msg::rmw::MeasurementTime;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        time_of_validity_attosec: msg.time_of_validity_attosec,
        num_obs: msg.num_obs,
        clock_id: msg.clock_id.into(),
        elapsed_nsec: msg.elapsed_nsec.into(),
        elapsed_attosec: msg.elapsed_attosec.into(),
        digits_of_precision: msg.digits_of_precision,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      num_obs: msg.num_obs,
        clock_id: msg.clock_id.as_slice().into(),
        elapsed_nsec: msg.elapsed_nsec.as_slice().into(),
        elapsed_attosec: msg.elapsed_attosec.as_slice().into(),
      digits_of_precision: msg.digits_of_precision,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      num_obs: msg.num_obs,
      clock_id: msg.clock_id
          .into_iter()
          .collect(),
      elapsed_nsec: msg.elapsed_nsec
          .into_iter()
          .collect(),
      elapsed_attosec: msg.elapsed_attosec
          .into_iter()
          .collect(),
      digits_of_precision: msg.digits_of_precision,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTimeDifference

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTimeDifference {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Time difference between two clocks or timing sources.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Whole number of attoseconds used to provide additional timestamp fidelity describing
    /// the time at which the measurement is considered to be valid. This is only needed if the time of
    /// validity is known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be sure
    /// to report the timestamp's digits of precision in the `type_metadataheader` as part of the metadata.
    /// The full timestamp in nanoseconds is calculated as
    ///
    /// time_of_validity + ( time_of_validity_attosec * 1E-9 )
    ///
    /// and if needed, a timestamp in seconds is calculated as
    ///
    /// time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
    ///
    /// (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
    /// Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may be
    /// positive or negative. It is recommended to make time_of_validity and time_of_validity_attosec the
    /// same sign. Care should be taken when constructing the timestamp components to be sure the summation
    /// produces the desired result.
    /// Units: attoseconds
    pub time_of_validity_attosec: i32,

    /// Description: Identifier for clock/timing source 1. See clock_identifiers.md for a full description,
    /// but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id1: u8,

    /// Description: Identifier for clock/timing source 2. See clock_identifiers.md for a full description,
    /// but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id2: u8,

    /// Description: Whole number nanoseconds in time difference (time from clock_id1) - (time from
    /// clock_id2). This value shall be positive when (time from clock_id1) - (time from clock_id2) is
    /// greater than or equal to zero. This value shall be negative when (time from clock_id1) - (time from
    /// clock_id2) is less than zero.Additionally, the timestamp's digits of precision are included as
    /// `digits_of_precision`.
    /// Units: nanoseconds
    pub time_diff_nsec: i64,

    /// Description: Whole number attoseconds in time difference (time from clock_id1) - (time from
    /// clock_id2). Must be less than 1e9. This value shall be positive when (time from clock_id1) - (time
    /// from clock_id2) is greater than or equal to zero. This value shall be negative when (time from
    /// clock_id1) - (time from clock_id2) is less than zero.
    /// This is only needed if the time of validity is known to more precision than 1ns; otherwise, set
    /// time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision.
    /// The time difference in seconds is calculated as
    ///
    /// time difference = time_diff_nsec * 1e-9 + time_diff_attosec * 1e-18
    ///
    /// It shall be assumed that time_diff_nsec and time_diff_attosec have the same sign. Therefore, the
    /// time difference is positive when (time from clock_id1) - (time from clock_id2) is positive and the
    /// time difference is negative when (time from clock_id1) - (time from clock_id2) is negative.
    /// A cautionary note: Both timediff_nsec and time_diff_attosec are signed integers and may be positive
    /// or negative. It is mandated to make timediff_nsec and time_diff_attosec the same sign; however, care
    /// should be taken when constructing the observation components to be sure the summation produces the
    /// desired result.
    /// Units: attoseconds
    pub time_diff_attosec: i32,

    /// Description: Defines how many decimal digits of precision are represented in the observation after
    /// the decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
    /// value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a value
    /// of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
    /// Units: none
    pub digits_of_precision: u8,

    /// Description: Variance of the error in the time difference measurement.
    /// Units: sec^2
    pub variance: f64,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTimeDifference {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TIME_DIFFERENCE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTimeDifference {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTimeDifference::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTimeDifference {
  type RmwMsg = super::msg::rmw::MeasurementTimeDifference;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        time_of_validity_attosec: msg.time_of_validity_attosec,
        clock_id1: msg.clock_id1,
        clock_id2: msg.clock_id2,
        time_diff_nsec: msg.time_diff_nsec,
        time_diff_attosec: msg.time_diff_attosec,
        digits_of_precision: msg.digits_of_precision,
        variance: msg.variance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      time_diff_nsec: msg.time_diff_nsec,
      time_diff_attosec: msg.time_diff_attosec,
      digits_of_precision: msg.digits_of_precision,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      time_diff_nsec: msg.time_diff_nsec,
      time_diff_attosec: msg.time_diff_attosec,
      digits_of_precision: msg.digits_of_precision,
      variance: msg.variance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementTimeFrequencyDifference

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementTimeFrequencyDifference {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Time and frequency difference between two clocks or timing sources. This measurement
    /// requires both time and frequency to be provided.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Description: Whole number of attoseconds used to provide additional timestamp fidelity describing
    /// the time at
    /// which the measurement is considered to be valid. This is only needed if the time of validity is
    /// known to more precision than 1ns; otherwise, set time_of_validity_attosec = 0. Be sure to
    /// report the timestamp's digits of precision in the `type_metadataheader` as part of the metadata.
    ///
    /// The full timestamp in nanoseconds is calculated as
    ///
    /// time_of_validity + ( time_of_validity_attosec * 1E-9 )
    ///
    /// and if needed, a timestamp in seconds is calculated as
    ///
    /// time_of_validity * 1E-9 + time_of_validity_attosec * 1E-18
    ///
    /// (Recall time_of_validity is in nanoseconds and time_of_validity_attosec is in attoseconds.)
    /// Furthermore, both time_of_validity and time_of_validity_attosec are signed integers and may be
    /// positive or negative. It is recommended to make time_of_validity and time_of_validity_attosec
    /// the same sign. Care should be taken when constructing the timestamp components to be sure the
    /// summation produces the desired result.
    /// Units: attoseconds
    pub time_of_validity_attosec: i32,

    /// Description: Identifier for clock/timing source 2. See clock_identifiers.md for a full description,
    /// but the
    /// summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id1: u8,

    /// Description: Identifier for clock/timing source 2. See clock_identifiers.md for a full description,
    /// but the summary is as follows:
    /// 0 = ASPN System Time
    /// 1 = International Atomic Time (TAI)
    /// 2 = Universal Coordinated Time (UTC)
    /// 3 = GPS System Time
    /// 4 = Galileo System Time
    /// 5 = GLONASS System Time
    /// 6 = BeiDou System Time
    /// 7-50: Reserved for future additional time scale representations.
    /// Units: none
    pub clock_id2: u8,

    /// Description: Whole number nanoseconds in time difference (time from clock_id1) - (time from
    /// clock_id2). This value shall be positive when (time from clock_id1) - (time from clock_id2) is
    /// greater than or equal to zero. This value shall be negative when (time from clock_id1) - (time from
    /// clock_id2) is less than zero.Additionally, the timestamp's digits of precision are included as
    /// `digits_of_precision`.
    /// Units: nanoseconds
    pub time_diff_nsec: i64,

    /// Description: Whole number attoseconds in time difference (time from clock_id1) - (time from
    /// clock_id2). Must be less than 1e9. This value shall be positive when (time from clock_id1) - (time
    /// from clock_id2) is greater than or equal to zero. This value shall be negative when (time from
    /// clock_id1) - (time from clock_id2) is less than zero.
    /// This is only needed if the time of validity is known to more precision than 1ns; otherwise, set
    /// time_of_validity_attosec = 0. Be sure to report the timestamp's digits of precision.
    /// The time difference in seconds is calculated as
    ///
    /// time difference = time_diff_nsec * 1e-9 + time_diff_attosec * 1e-18
    ///
    /// It shall be assumed that time_diff_nsec and time_diff_attosec have the same sign. Therefore, the
    /// time difference is positive when (time from clock_id1) - (time from clock_id2) is positive and the
    /// time difference is negative when (time from clock_id1) - (time from clock_id2) is negative.
    /// A cautionary note: Both timediff_nsec and time_diff_attosec are signed integers and may be positive
    /// or negative. It is mandated to make timediff_nsec and time_diff_attosec the same sign; however, care
    /// should be taken when constructing the observation components to be sure the summation produces the
    /// desired result.
    /// Units: attoseconds
    pub time_diff_attosec: i32,

    /// Description: Defines how many decimal digits of precision are represented in the observation after
    /// the decimal point. The precision of the observation is 10E-N, where N is digits_of_precision. A
    /// value of 3 would mean that the observation has precision at the 10E-3 (millisecond) level, a value
    /// of 6 would mean the observation has precision at the 10E-6 (microsecond) level, etc.
    /// Units: none
    pub digits_of_precision: u8,

    /// Description: Frequency difference formed as (frequency from clock_id1) - (frequency from clock_id2).
    /// Units: Hertz
    pub freq_diff: f64,

    /// Description: Covariance information for the time/frequency measurement. Using zero-indexing, the
    /// [0,0] element has units of sec^2, the [1,1] element has units of Hertz^2, and the off-diagonal terms
    /// have units of sec*Hertz.
    /// Units: various
    /// Note: field represents a 2 x 2 matrix
    pub covariance: [f64; 4],

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementTimeFrequencyDifference {
    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementTimeFrequencyDifference {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementTimeFrequencyDifference::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementTimeFrequencyDifference {
  type RmwMsg = super::msg::rmw::MeasurementTimeFrequencyDifference;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        time_of_validity_attosec: msg.time_of_validity_attosec,
        clock_id1: msg.clock_id1,
        clock_id2: msg.clock_id2,
        time_diff_nsec: msg.time_diff_nsec,
        time_diff_attosec: msg.time_diff_attosec,
        digits_of_precision: msg.digits_of_precision,
        freq_diff: msg.freq_diff,
        covariance: msg.covariance,
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      time_diff_nsec: msg.time_diff_nsec,
      time_diff_attosec: msg.time_diff_attosec,
      digits_of_precision: msg.digits_of_precision,
      freq_diff: msg.freq_diff,
        covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      time_of_validity_attosec: msg.time_of_validity_attosec,
      clock_id1: msg.clock_id1,
      clock_id2: msg.clock_id2,
      time_diff_nsec: msg.time_diff_nsec,
      time_diff_attosec: msg.time_diff_attosec,
      digits_of_precision: msg.digits_of_precision,
      freq_diff: msg.freq_diff,
      covariance: msg.covariance,
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to aspn23_ros_interfaces__msg__MeasurementVelocity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MeasurementVelocity {
    /// This code is generated via firehose.
    /// DO NOT hand edit code.  Make any changes required using the firehose repo instead
    /// Velocity is time rate of change of position with respect to the user-specified reference frame. May
    /// be one, two, or three dimensional.
    /// Description: Standard ASPN measurement header.
    /// Units: none
    pub header: super::msg::TypeHeader,

    /// Description: Time at which the measurement is considered to be valid.
    /// Units: none
    pub time_of_validity: super::msg::TypeTimestamp,

    /// Defines measurement reference.
    pub reference_frame: u8,

    /// Description: Velocity along the first axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub x: f64,

    /// Description: Velocity along the second axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub y: f64,

    /// Description: Velocity along the third axis of the measurement reference frame enumerated in
    /// reference_frame.
    /// Units: m/s
    pub z: f64,

    /// Description: Dimension of measurement provided.
    /// Units: none
    pub num_meas: u8,

    /// Description: Measurement error covariance or variance depending on measurement dimension.
    /// Units: (m/s)^2 Dimensions of covariance must be num_meas²
    /// Note: field represents a num_meas x num_meas matrix
    pub covariance: Vec<f64>,

    /// Defines an optional error model for other than zero-mean, additive, white Gaussian noise (AWGN).
    pub error_model: u8,

    /// Description: Number of parameters required for the error model chosen.
    /// Units: none
    pub num_error_model_params: u16,

    /// Description: Error model parameters that characterize the optional error model.
    /// Units: various
    /// Note: array length is num_error_model_params
    pub error_model_params: Vec<f64>,

    /// Description: Number of integrity values.
    /// Units: none
    pub num_integrity: u8,

    /// Description: Measurement integrity. Includes the integrity method used and an integrity value (which
    /// is to be interpreted based upon the integrity method). The intent of allowing num_integrity > 1 is
    /// to report multiple integrity values based on multiple integrity methods.
    /// Units: none
    /// Note: array length is num_integrity
    pub integrity: Vec<super::msg::TypeIntegrity>,

}

impl MeasurementVelocity {
    /// Velocity with respect to earth-centered inertial frame, expressed in an earth-centered inertial
    /// frame. See also ECi coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI: u8 = 0;

    /// Velocity with respect to earth-fixed frame expressed in earth-centered, earth-fixed (ECEF) frame.
    /// See also ECEF coordinate frame definition for x, y, and z definitions.
    pub const ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF: u8 = 1;

    /// Local level, geodetic velocity: Velocity with respect to earth-fixed frame expressed in the
    /// North-East-Down (NED), local level frame. See also NED coordinate frame definition for N, E, and D
    /// definitions.
    pub const ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED: u8 = 2;

    /// Velocity with respect to earth-fixed frame expressed in sensor coordinate frame. Sensor coordinate
    /// frame is defined in sensor metadataHeader.
    pub const ASPN23_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR: u8 = 3;

    /// No additional error model provided (num_error_model_params = 0).
    pub const ASPN23_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE: u8 = 0;

}


impl Default for MeasurementVelocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MeasurementVelocity::default())
  }
}

impl rosidl_runtime_rs::Message for MeasurementVelocity {
  type RmwMsg = super::msg::rmw::MeasurementVelocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Owned(msg.time_of_validity)).into_owned(),
        reference_frame: msg.reference_frame,
        x: msg.x,
        y: msg.y,
        z: msg.z,
        num_meas: msg.num_meas,
        covariance: msg.covariance.into(),
        error_model: msg.error_model,
        num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.into(),
        num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .into_iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: super::msg::TypeHeader::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        time_of_validity: super::msg::TypeTimestamp::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_of_validity)).into_owned(),
      reference_frame: msg.reference_frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      num_meas: msg.num_meas,
        covariance: msg.covariance.as_slice().into(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
        error_model_params: msg.error_model_params.as_slice().into(),
      num_integrity: msg.num_integrity,
        integrity: msg.integrity
          .iter()
          .map(|elem| super::msg::TypeIntegrity::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: super::msg::TypeHeader::from_rmw_message(msg.header),
      time_of_validity: super::msg::TypeTimestamp::from_rmw_message(msg.time_of_validity),
      reference_frame: msg.reference_frame,
      x: msg.x,
      y: msg.y,
      z: msg.z,
      num_meas: msg.num_meas,
      covariance: msg.covariance
          .into_iter()
          .collect(),
      error_model: msg.error_model,
      num_error_model_params: msg.num_error_model_params,
      error_model_params: msg.error_model_params
          .into_iter()
          .collect(),
      num_integrity: msg.num_integrity,
      integrity: msg.integrity
          .into_iter()
          .map(super::msg::TypeIntegrity::from_rmw_message)
          .collect(),
    }
  }
}


