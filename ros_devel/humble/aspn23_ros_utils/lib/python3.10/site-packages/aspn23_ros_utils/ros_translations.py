from typing import Callable, TypeAlias, Union

import numpy as np
from aspn23.measurement_accumulated_distance_traveled import (
    MeasurementAccumulatedDistanceTraveled,
    MeasurementAccumulatedDistanceTraveledErrorModel,
)
from aspn23.measurement_altitude import (
    MeasurementAltitude,
    MeasurementAltitudeErrorModel,
    MeasurementAltitudeReference,
)
from aspn23.measurement_angular_velocity import (
    MeasurementAngularVelocity,
    MeasurementAngularVelocityErrorModel,
    MeasurementAngularVelocityImuType,
    MeasurementAngularVelocityReferenceFrame,
)
from aspn23.measurement_angular_velocity_1d import (
    MeasurementAngularVelocity1D,
    MeasurementAngularVelocity1DErrorModel,
    MeasurementAngularVelocity1DSensorType,
)
from aspn23.measurement_attitude_2d import (
    MeasurementAttitude2D,
    MeasurementAttitude2DErrorModel,
    MeasurementAttitude2DReferenceFrame,
)
from aspn23.measurement_attitude_3d import (
    MeasurementAttitude3D,
    MeasurementAttitude3DErrorModel,
    MeasurementAttitude3DReferenceFrame,
)
from aspn23.measurement_barometer import (
    MeasurementBarometer,
    MeasurementBarometerErrorModel,
)
from aspn23.measurement_delta_position import (
    MeasurementDeltaPosition,
    MeasurementDeltaPositionErrorModel,
    MeasurementDeltaPositionReferenceFrame,
)
from aspn23.measurement_delta_range import (
    MeasurementDeltaRange,
    MeasurementDeltaRangeErrorModel,
)
from aspn23.measurement_delta_range_to_point import (
    MeasurementDeltaRangeToPoint,
    MeasurementDeltaRangeToPointErrorModel,
)
from aspn23.measurement_direction_2d_to_points import MeasurementDirection2DToPoints
from aspn23.measurement_direction_3d_to_points import MeasurementDirection3DToPoints
from aspn23.measurement_direction_of_motion_2d import (
    MeasurementDirectionOfMotion2D,
    MeasurementDirectionOfMotion2DErrorModel,
    MeasurementDirectionOfMotion2DReference,
)
from aspn23.measurement_direction_of_motion_3d import (
    MeasurementDirectionOfMotion3D,
    MeasurementDirectionOfMotion3DErrorModel,
    MeasurementDirectionOfMotion3DReferenceFrame,
)
from aspn23.measurement_frequency_difference import (
    MeasurementFrequencyDifference,
    MeasurementFrequencyDifferenceErrorModel,
)
from aspn23.measurement_heading import (
    MeasurementHeading,
    MeasurementHeadingErrorModel,
    MeasurementHeadingReference,
)
from aspn23.measurement_image import (
    MeasurementImage,
    MeasurementImageCameraModel,
    MeasurementImageImageType,
)
from aspn23.measurement_IMU import MeasurementImu, MeasurementImuImuType
from aspn23.measurement_magnetic_field import (
    MeasurementMagneticField,
    MeasurementMagneticFieldErrorModel,
)
from aspn23.measurement_magnetic_field_magnitude import (
    MeasurementMagneticFieldMagnitude,
    MeasurementMagneticFieldMagnitudeErrorModel,
)
from aspn23.measurement_position import (
    MeasurementPosition,
    MeasurementPositionErrorModel,
    MeasurementPositionReferenceFrame,
)
from aspn23.measurement_position_attitude import (
    MeasurementPositionAttitude,
    MeasurementPositionAttitudeErrorModel,
    MeasurementPositionAttitudeReferenceFrame,
)
from aspn23.measurement_position_velocity_attitude import (
    MeasurementPositionVelocityAttitude,
    MeasurementPositionVelocityAttitudeErrorModel,
    MeasurementPositionVelocityAttitudeReferenceFrame,
)
from aspn23.measurement_range_rate_to_point import (
    MeasurementRangeRateToPoint,
    MeasurementRangeRateToPointErrorModel,
)
from aspn23.measurement_range_to_point import (
    MeasurementRangeToPoint,
    MeasurementRangeToPointErrorModel,
)
from aspn23.measurement_satnav import MeasurementSatnav
from aspn23.measurement_satnav_subframe import MeasurementSatnavSubframe
from aspn23.measurement_satnav_with_sv_data import MeasurementSatnavWithSvData
from aspn23.measurement_specific_force_1d import (
    MeasurementSpecificForce1D,
    MeasurementSpecificForce1DErrorModel,
    MeasurementSpecificForce1DSensorType,
)
from aspn23.measurement_speed import (
    MeasurementSpeed,
    MeasurementSpeedErrorModel,
    MeasurementSpeedReference,
)
from aspn23.measurement_TDOA_1Tx_2Rx import (
    MeasurementTdoa1Tx2Rx,
    MeasurementTdoa1Tx2RxErrorModel,
)
from aspn23.measurement_TDOA_2Tx_1Rx import (
    MeasurementTdoa2Tx1Rx,
    MeasurementTdoa2Tx1RxErrorModel,
)
from aspn23.measurement_temperature import (
    MeasurementTemperature,
    MeasurementTemperatureErrorModel,
)
from aspn23.measurement_time import MeasurementTime, MeasurementTimeErrorModel
from aspn23.measurement_time_difference import (
    MeasurementTimeDifference,
    MeasurementTimeDifferenceErrorModel,
)
from aspn23.measurement_time_frequency_difference import (
    MeasurementTimeFrequencyDifference,
    MeasurementTimeFrequencyDifferenceErrorModel,
)
from aspn23.measurement_velocity import (
    MeasurementVelocity,
    MeasurementVelocityErrorModel,
    MeasurementVelocityReferenceFrame,
)
from aspn23.metadata_BeiDou_ephemeris import MetadataBeidouEphemeris
from aspn23.metadata_Galileo_ephemeris import (
    MetadataGalileoEphemeris,
    MetadataGalileoEphemerisNavMsgType,
)
from aspn23.metadata_generic import MetadataGeneric
from aspn23.metadata_GLONASS_ephemeris import MetadataGlonassEphemeris
from aspn23.metadata_GPS_Cnav_ephemeris import MetadataGpsCnavEphemeris
from aspn23.metadata_GPS_iono_utc_parameters import MetadataGpsIonoUtcParameters
from aspn23.metadata_GPS_Lnav_ephemeris import MetadataGpsLnavEphemeris
from aspn23.metadata_GPS_Mnav_ephemeris import MetadataGpsMnavEphemeris
from aspn23.metadata_image_features import (
    MetadataImageFeatures,
    MetadataImageFeaturesDescriptorExtractor,
    MetadataImageFeaturesDescriptorType,
    MetadataImageFeaturesKeypointDetector,
)
from aspn23.metadata_IMU import MetadataImu, MetadataImuErrorModel
from aspn23.metadata_magnetic_field import MetadataMagneticField
from aspn23.metadata_satnav_obs import MetadataSatnavObs
from aspn23.type_direction_2d_to_point import (
    TypeDirection2DToPoint,
    TypeDirection2DToPointErrorModel,
    TypeDirection2DToPointReference,
)
from aspn23.type_direction_3d_to_point import (
    TypeDirection3DToPoint,
    TypeDirection3DToPointErrorModel,
    TypeDirection3DToPointReferenceFrame,
)
from aspn23.type_header import TypeHeader
from aspn23.type_image_feature import TypeImageFeature
from aspn23.type_integrity import TypeIntegrity
from aspn23.type_kepler_orbit import TypeKeplerOrbit
from aspn23.type_metadataheader import TypeMetadataheader
from aspn23.type_mounting import TypeMounting
from aspn23.type_remote_point import (
    TypeRemotePoint,
    TypeRemotePointPositionReferenceFrame,
)
from aspn23.type_satnav_clock import TypeSatnavClock
from aspn23.type_satnav_obs import (
    TypeSatnavObs,
    TypeSatnavObsIonoCorrectionSource,
    TypeSatnavObsPseudorangeRateType,
)
from aspn23.type_satnav_satellite_system import (
    TypeSatnavSatelliteSystem,
    TypeSatnavSatelliteSystemSatelliteSystem,
)
from aspn23.type_satnav_signal_descriptor import (
    TypeSatnavSignalDescriptor,
    TypeSatnavSignalDescriptorSignalDescriptor,
)
from aspn23.type_satnav_sv_data import (
    TypeSatnavSvData,
    TypeSatnavSvDataCoordinateFrame,
    TypeSatnavSvDataEphemerisType,
    TypeSatnavSvDataGroupDelayEnum,
)
from aspn23.type_satnav_time import TypeSatnavTime, TypeSatnavTimeTimeReference
from aspn23.type_timestamp import TypeTimestamp
from aspn23_ros_interfaces.msg import (
    MeasurementAccumulatedDistanceTraveled as RosMeasurementAccumulatedDistanceTraveled,
)
from aspn23_ros_interfaces.msg import MeasurementAltitude as RosMeasurementAltitude
from aspn23_ros_interfaces.msg import (
    MeasurementAngularVelocity as RosMeasurementAngularVelocity,
)
from aspn23_ros_interfaces.msg import (
    MeasurementAngularVelocity1D as RosMeasurementAngularVelocity1D,
)
from aspn23_ros_interfaces.msg import MeasurementAttitude2D as RosMeasurementAttitude2D
from aspn23_ros_interfaces.msg import MeasurementAttitude3D as RosMeasurementAttitude3D
from aspn23_ros_interfaces.msg import MeasurementBarometer as RosMeasurementBarometer
from aspn23_ros_interfaces.msg import (
    MeasurementDeltaPosition as RosMeasurementDeltaPosition,
)
from aspn23_ros_interfaces.msg import MeasurementDeltaRange as RosMeasurementDeltaRange
from aspn23_ros_interfaces.msg import (
    MeasurementDeltaRangeToPoint as RosMeasurementDeltaRangeToPoint,
)
from aspn23_ros_interfaces.msg import (
    MeasurementDirection2DToPoints as RosMeasurementDirection2DToPoints,
)
from aspn23_ros_interfaces.msg import (
    MeasurementDirection3DToPoints as RosMeasurementDirection3DToPoints,
)
from aspn23_ros_interfaces.msg import (
    MeasurementDirectionOfMotion2D as RosMeasurementDirectionOfMotion2D,
)
from aspn23_ros_interfaces.msg import (
    MeasurementDirectionOfMotion3D as RosMeasurementDirectionOfMotion3D,
)
from aspn23_ros_interfaces.msg import (
    MeasurementFrequencyDifference as RosMeasurementFrequencyDifference,
)
from aspn23_ros_interfaces.msg import MeasurementHeading as RosMeasurementHeading
from aspn23_ros_interfaces.msg import MeasurementImage as RosMeasurementImage
from aspn23_ros_interfaces.msg import MeasurementImu as RosMeasurementImu
from aspn23_ros_interfaces.msg import (
    MeasurementMagneticField as RosMeasurementMagneticField,
)
from aspn23_ros_interfaces.msg import (
    MeasurementMagneticFieldMagnitude as RosMeasurementMagneticFieldMagnitude,
)
from aspn23_ros_interfaces.msg import MeasurementPosition as RosMeasurementPosition
from aspn23_ros_interfaces.msg import (
    MeasurementPositionAttitude as RosMeasurementPositionAttitude,
)
from aspn23_ros_interfaces.msg import (
    MeasurementPositionVelocityAttitude as RosMeasurementPositionVelocityAttitude,
)
from aspn23_ros_interfaces.msg import (
    MeasurementRangeRateToPoint as RosMeasurementRangeRateToPoint,
)
from aspn23_ros_interfaces.msg import (
    MeasurementRangeToPoint as RosMeasurementRangeToPoint,
)
from aspn23_ros_interfaces.msg import MeasurementSatnav as RosMeasurementSatnav
from aspn23_ros_interfaces.msg import (
    MeasurementSatnavSubframe as RosMeasurementSatnavSubframe,
)
from aspn23_ros_interfaces.msg import (
    MeasurementSatnavWithSvData as RosMeasurementSatnavWithSvData,
)
from aspn23_ros_interfaces.msg import (
    MeasurementSpecificForce1D as RosMeasurementSpecificForce1D,
)
from aspn23_ros_interfaces.msg import MeasurementSpeed as RosMeasurementSpeed
from aspn23_ros_interfaces.msg import MeasurementTdoa1Tx2Rx as RosMeasurementTdoa1Tx2Rx
from aspn23_ros_interfaces.msg import MeasurementTdoa2Tx1Rx as RosMeasurementTdoa2Tx1Rx
from aspn23_ros_interfaces.msg import (
    MeasurementTemperature as RosMeasurementTemperature,
)
from aspn23_ros_interfaces.msg import MeasurementTime as RosMeasurementTime
from aspn23_ros_interfaces.msg import (
    MeasurementTimeDifference as RosMeasurementTimeDifference,
)
from aspn23_ros_interfaces.msg import (
    MeasurementTimeFrequencyDifference as RosMeasurementTimeFrequencyDifference,
)
from aspn23_ros_interfaces.msg import MeasurementVelocity as RosMeasurementVelocity
from aspn23_ros_interfaces.msg import (
    MetadataBeidouEphemeris as RosMetadataBeidouEphemeris,
)
from aspn23_ros_interfaces.msg import (
    MetadataGalileoEphemeris as RosMetadataGalileoEphemeris,
)
from aspn23_ros_interfaces.msg import MetadataGeneric as RosMetadataGeneric
from aspn23_ros_interfaces.msg import (
    MetadataGlonassEphemeris as RosMetadataGlonassEphemeris,
)
from aspn23_ros_interfaces.msg import (
    MetadataGpsCnavEphemeris as RosMetadataGpsCnavEphemeris,
)
from aspn23_ros_interfaces.msg import (
    MetadataGpsIonoUtcParameters as RosMetadataGpsIonoUtcParameters,
)
from aspn23_ros_interfaces.msg import (
    MetadataGpsLnavEphemeris as RosMetadataGpsLnavEphemeris,
)
from aspn23_ros_interfaces.msg import (
    MetadataGpsMnavEphemeris as RosMetadataGpsMnavEphemeris,
)
from aspn23_ros_interfaces.msg import MetadataImageFeatures as RosMetadataImageFeatures
from aspn23_ros_interfaces.msg import MetadataImu as RosMetadataImu
from aspn23_ros_interfaces.msg import MetadataMagneticField as RosMetadataMagneticField
from aspn23_ros_interfaces.msg import MetadataSatnavObs as RosMetadataSatnavObs
from aspn23_ros_interfaces.msg import (
    TypeDirection2DToPoint as RosTypeDirection2DToPoint,
)
from aspn23_ros_interfaces.msg import (
    TypeDirection3DToPoint as RosTypeDirection3DToPoint,
)
from aspn23_ros_interfaces.msg import TypeHeader as RosTypeHeader
from aspn23_ros_interfaces.msg import TypeImageFeature as RosTypeImageFeature
from aspn23_ros_interfaces.msg import TypeIntegrity as RosTypeIntegrity
from aspn23_ros_interfaces.msg import TypeKeplerOrbit as RosTypeKeplerOrbit
from aspn23_ros_interfaces.msg import TypeMetadataheader as RosTypeMetadataheader
from aspn23_ros_interfaces.msg import TypeMounting as RosTypeMounting
from aspn23_ros_interfaces.msg import TypeRemotePoint as RosTypeRemotePoint
from aspn23_ros_interfaces.msg import TypeSatnavClock as RosTypeSatnavClock
from aspn23_ros_interfaces.msg import TypeSatnavObs as RosTypeSatnavObs
from aspn23_ros_interfaces.msg import (
    TypeSatnavSatelliteSystem as RosTypeSatnavSatelliteSystem,
)
from aspn23_ros_interfaces.msg import (
    TypeSatnavSignalDescriptor as RosTypeSatnavSignalDescriptor,
)
from aspn23_ros_interfaces.msg import TypeSatnavSvData as RosTypeSatnavSvData
from aspn23_ros_interfaces.msg import TypeSatnavTime as RosTypeSatnavTime
from aspn23_ros_interfaces.msg import TypeTimestamp as RosTypeTimestamp


def type_direction_2d_to_point_to_ros(
    old: TypeDirection2DToPoint,
) -> RosTypeDirection2DToPoint:
    msg = RosTypeDirection2DToPoint()
    msg.remote_point = type_remote_point_to_ros(old.remote_point)
    msg.reference = old.reference.value
    msg.obs = old.obs
    msg.variance = old.variance
    msg.has_observation_characteristics = old.has_observation_characteristics
    msg.observation_characteristics = type_image_feature_to_ros(
        old.observation_characteristics
    )
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_type_direction_2d_to_point(
    old: RosTypeDirection2DToPoint,
) -> TypeDirection2DToPoint:
    return TypeDirection2DToPoint(
        remote_point=ros_to_type_remote_point(old.remote_point),
        reference=TypeDirection2DToPointReference(old.reference),
        obs=old.obs,
        variance=old.variance,
        has_observation_characteristics=old.has_observation_characteristics,
        observation_characteristics=ros_to_type_image_feature(
            old.observation_characteristics
        ),
        error_model=TypeDirection2DToPointErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def type_direction_3d_to_point_to_ros(
    old: TypeDirection3DToPoint,
) -> RosTypeDirection3DToPoint:
    msg = RosTypeDirection3DToPoint()
    msg.remote_point = type_remote_point_to_ros(old.remote_point)
    msg.reference_frame = old.reference_frame.value
    msg.obs = old.obs
    msg.covariance = old.covariance.flatten().tolist()
    msg.has_observation_characteristics = old.has_observation_characteristics
    msg.observation_characteristics = type_image_feature_to_ros(
        old.observation_characteristics
    )
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_type_direction_3d_to_point(
    old: RosTypeDirection3DToPoint,
) -> TypeDirection3DToPoint:
    return TypeDirection3DToPoint(
        remote_point=ros_to_type_remote_point(old.remote_point),
        reference_frame=TypeDirection3DToPointReferenceFrame(old.reference_frame),
        obs=np.array(old.obs),
        covariance=np.array(old.covariance).reshape(2, 2),
        has_observation_characteristics=old.has_observation_characteristics,
        observation_characteristics=ros_to_type_image_feature(
            old.observation_characteristics
        ),
        error_model=TypeDirection3DToPointErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def type_header_to_ros(old: TypeHeader) -> RosTypeHeader:
    msg = RosTypeHeader()
    msg.vendor_id = old.vendor_id
    msg.device_id = old.device_id
    msg.context_id = old.context_id
    msg.sequence_id = old.sequence_id

    return msg


def ros_to_type_header(old: RosTypeHeader) -> TypeHeader:
    return TypeHeader(
        vendor_id=old.vendor_id,
        device_id=old.device_id,
        context_id=old.context_id,
        sequence_id=old.sequence_id,
    )


def type_image_feature_to_ros(old: TypeImageFeature) -> RosTypeImageFeature:
    msg = RosTypeImageFeature()
    msg.response = old.response
    msg.orientation = old.orientation
    msg.size = old.size
    msg.class_id = old.class_id
    msg.octave = old.octave
    msg.descriptor = old.descriptor.tolist()
    msg.descriptor_size = len(old.descriptor)

    return msg


def ros_to_type_image_feature(old: RosTypeImageFeature) -> TypeImageFeature:
    return TypeImageFeature(
        response=old.response,
        orientation=old.orientation,
        size=old.size,
        class_id=old.class_id,
        octave=old.octave,
        descriptor=np.array(old.descriptor),
    )


def type_integrity_to_ros(old: TypeIntegrity) -> RosTypeIntegrity:
    msg = RosTypeIntegrity()
    msg.integrity_method = old.integrity_method
    msg.integrity_value = (
        old.integrity_value if old.integrity_value is not None else float()
    )

    return msg


def ros_to_type_integrity(old: RosTypeIntegrity) -> TypeIntegrity:
    return TypeIntegrity(
        integrity_method=old.integrity_method, integrity_value=old.integrity_value
    )


def type_kepler_orbit_to_ros(old: TypeKeplerOrbit) -> RosTypeKeplerOrbit:
    msg = RosTypeKeplerOrbit()
    msg.m_0 = old.m_0
    msg.delta_n = old.delta_n
    msg.e = old.e
    msg.sqrt_a = old.sqrt_a
    msg.omega_0 = old.omega_0
    msg.i_0 = old.i_0
    msg.i_dot = old.i_dot
    msg.omega = old.omega
    msg.omega_dot = old.omega_dot
    msg.c_uc = old.c_uc
    msg.c_us = old.c_us
    msg.c_rc = old.c_rc
    msg.c_rs = old.c_rs
    msg.c_ic = old.c_ic
    msg.c_is = old.c_is
    msg.t_oe = old.t_oe

    return msg


def ros_to_type_kepler_orbit(old: RosTypeKeplerOrbit) -> TypeKeplerOrbit:
    return TypeKeplerOrbit(
        m_0=old.m_0,
        delta_n=old.delta_n,
        e=old.e,
        sqrt_a=old.sqrt_a,
        omega_0=old.omega_0,
        i_0=old.i_0,
        i_dot=old.i_dot,
        omega=old.omega,
        omega_dot=old.omega_dot,
        c_uc=old.c_uc,
        c_us=old.c_us,
        c_rc=old.c_rc,
        c_rs=old.c_rs,
        c_ic=old.c_ic,
        c_is=old.c_is,
        t_oe=old.t_oe,
    )


def type_metadataheader_to_ros(old: TypeMetadataheader) -> RosTypeMetadataheader:
    msg = RosTypeMetadataheader()
    msg.header = type_header_to_ros(old.header)
    msg.sensor_description = old.sensor_description
    msg.delta_t_nom = old.delta_t_nom if old.delta_t_nom is not None else float()
    msg.timestamp_clock_id = old.timestamp_clock_id
    msg.digits_of_precision = old.digits_of_precision

    return msg


def ros_to_type_metadataheader(old: RosTypeMetadataheader) -> TypeMetadataheader:
    return TypeMetadataheader(
        header=ros_to_type_header(old.header),
        sensor_description=old.sensor_description,
        delta_t_nom=old.delta_t_nom,
        timestamp_clock_id=old.timestamp_clock_id,
        digits_of_precision=old.digits_of_precision,
    )


def type_mounting_to_ros(old: TypeMounting) -> RosTypeMounting:
    msg = RosTypeMounting()
    msg.lever_arm = old.lever_arm
    msg.lever_arm_sigma = old.lever_arm_sigma
    msg.orientation_quaternion = (
        old.orientation_quaternion if old.orientation_quaternion is not None else []
    )
    msg.orientation_tilt_error_covariance = (
        old.orientation_tilt_error_covariance.flatten().tolist()
        if old.orientation_tilt_error_covariance is not None
        else []
    )

    return msg


def ros_to_type_mounting(old: RosTypeMounting) -> TypeMounting:
    return TypeMounting(
        lever_arm=np.array(old.lever_arm),
        lever_arm_sigma=np.array(old.lever_arm_sigma),
        orientation_quaternion=np.array(old.orientation_quaternion),
        orientation_tilt_error_covariance=np.array(
            old.orientation_tilt_error_covariance
        ).reshape(3, 3),
    )


def type_remote_point_to_ros(old: TypeRemotePoint) -> RosTypeRemotePoint:
    msg = RosTypeRemotePoint()
    msg.included_terms = old.included_terms
    msg.id = old.id
    msg.position_reference_frame = old.position_reference_frame.value
    msg.position1 = old.position1 if old.position1 is not None else float()
    msg.position2 = old.position2 if old.position2 is not None else float()
    msg.position3 = old.position3 if old.position3 is not None else float()
    msg.num_position_components = len(old.position_covariance)
    msg.position_covariance = old.position_covariance.flatten().tolist()

    return msg


def ros_to_type_remote_point(old: RosTypeRemotePoint) -> TypeRemotePoint:
    return TypeRemotePoint(
        included_terms=old.included_terms,
        id=old.id,
        position_reference_frame=TypeRemotePointPositionReferenceFrame(
            old.position_reference_frame
        ),
        position1=old.position1,
        position2=old.position2,
        position3=old.position3,
        position_covariance=np.array(old.position_covariance).reshape(
            old.num_position_components, old.num_position_components
        ),
    )


def type_satnav_clock_to_ros(old: TypeSatnavClock) -> RosTypeSatnavClock:
    msg = RosTypeSatnavClock()
    msg.t_oc = old.t_oc
    msg.af_0 = old.af_0
    msg.af_1 = old.af_1
    msg.af_2 = old.af_2

    return msg


def ros_to_type_satnav_clock(old: RosTypeSatnavClock) -> TypeSatnavClock:
    return TypeSatnavClock(t_oc=old.t_oc, af_0=old.af_0, af_1=old.af_1, af_2=old.af_2)


def type_satnav_obs_to_ros(old: TypeSatnavObs) -> RosTypeSatnavObs:
    msg = RosTypeSatnavObs()
    msg.satellite_system = type_satnav_satellite_system_to_ros(old.satellite_system)
    msg.signal_descriptor = type_satnav_signal_descriptor_to_ros(old.signal_descriptor)
    msg.prn = old.prn
    msg.frequency = old.frequency
    msg.pseudorange = old.pseudorange if old.pseudorange is not None else float()
    msg.pseudorange_variance = (
        old.pseudorange_variance if old.pseudorange_variance is not None else float()
    )
    msg.pseudorange_rate_type = old.pseudorange_rate_type.value
    msg.pseudorange_rate = (
        old.pseudorange_rate if old.pseudorange_rate is not None else float()
    )
    msg.pseudorange_rate_variance = (
        old.pseudorange_rate_variance
        if old.pseudorange_rate_variance is not None
        else float()
    )
    msg.carrier_phase = old.carrier_phase if old.carrier_phase is not None else float()
    msg.carrier_phase_variance = (
        old.carrier_phase_variance
        if old.carrier_phase_variance is not None
        else float()
    )
    msg.c_n0 = old.c_n0 if old.c_n0 is not None else float()
    msg.lock_count = old.lock_count
    msg.iono_correction_source = old.iono_correction_source.value
    msg.iono_correction_applied = old.iono_correction_applied
    msg.tropo_correction_applied = old.tropo_correction_applied
    msg.signal_bias_correction_applied = old.signal_bias_correction_applied
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_type_satnav_obs(old: RosTypeSatnavObs) -> TypeSatnavObs:
    return TypeSatnavObs(
        satellite_system=ros_to_type_satnav_satellite_system(old.satellite_system),
        signal_descriptor=ros_to_type_satnav_signal_descriptor(old.signal_descriptor),
        prn=old.prn,
        frequency=old.frequency,
        pseudorange=old.pseudorange,
        pseudorange_variance=old.pseudorange_variance,
        pseudorange_rate_type=TypeSatnavObsPseudorangeRateType(
            old.pseudorange_rate_type
        ),
        pseudorange_rate=old.pseudorange_rate,
        pseudorange_rate_variance=old.pseudorange_rate_variance,
        carrier_phase=old.carrier_phase,
        carrier_phase_variance=old.carrier_phase_variance,
        c_n0=old.c_n0,
        lock_count=old.lock_count,
        iono_correction_source=TypeSatnavObsIonoCorrectionSource(
            old.iono_correction_source
        ),
        iono_correction_applied=old.iono_correction_applied,
        tropo_correction_applied=old.tropo_correction_applied,
        signal_bias_correction_applied=old.signal_bias_correction_applied,
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def type_satnav_satellite_system_to_ros(
    old: TypeSatnavSatelliteSystem,
) -> RosTypeSatnavSatelliteSystem:
    msg = RosTypeSatnavSatelliteSystem()
    msg.satellite_system = old.satellite_system.value

    return msg


def ros_to_type_satnav_satellite_system(
    old: RosTypeSatnavSatelliteSystem,
) -> TypeSatnavSatelliteSystem:
    return TypeSatnavSatelliteSystem(
        satellite_system=TypeSatnavSatelliteSystemSatelliteSystem(old.satellite_system)
    )


def type_satnav_signal_descriptor_to_ros(
    old: TypeSatnavSignalDescriptor,
) -> RosTypeSatnavSignalDescriptor:
    msg = RosTypeSatnavSignalDescriptor()
    msg.signal_descriptor = old.signal_descriptor.value

    return msg


def ros_to_type_satnav_signal_descriptor(
    old: RosTypeSatnavSignalDescriptor,
) -> TypeSatnavSignalDescriptor:
    return TypeSatnavSignalDescriptor(
        signal_descriptor=TypeSatnavSignalDescriptorSignalDescriptor(
            old.signal_descriptor
        )
    )


def type_satnav_sv_data_to_ros(old: TypeSatnavSvData) -> RosTypeSatnavSvData:
    msg = RosTypeSatnavSvData()
    msg.prn = old.prn
    msg.satellite_system = type_satnav_satellite_system_to_ros(old.satellite_system)
    msg.ephemeris_type = old.ephemeris_type.value
    msg.sv_data_time = type_satnav_time_to_ros(old.sv_data_time)
    msg.coordinate_frame = old.coordinate_frame.value
    msg.sv_pos = old.sv_pos
    msg.sv_vel = old.sv_vel
    msg.sv_clock_bias = old.sv_clock_bias
    msg.sv_clock_drift = old.sv_clock_drift
    msg.group_delay_enum = old.group_delay_enum.value
    msg.group_delay_vector = old.group_delay_vector

    return msg


def ros_to_type_satnav_sv_data(old: RosTypeSatnavSvData) -> TypeSatnavSvData:
    return TypeSatnavSvData(
        prn=old.prn,
        satellite_system=ros_to_type_satnav_satellite_system(old.satellite_system),
        ephemeris_type=TypeSatnavSvDataEphemerisType(old.ephemeris_type),
        sv_data_time=ros_to_type_satnav_time(old.sv_data_time),
        coordinate_frame=TypeSatnavSvDataCoordinateFrame(old.coordinate_frame),
        sv_pos=np.array(old.sv_pos),
        sv_vel=np.array(old.sv_vel),
        sv_clock_bias=old.sv_clock_bias,
        sv_clock_drift=old.sv_clock_drift,
        group_delay_enum=TypeSatnavSvDataGroupDelayEnum(old.group_delay_enum),
        group_delay_vector=np.array(old.group_delay_vector),
    )


def type_satnav_time_to_ros(old: TypeSatnavTime) -> RosTypeSatnavTime:
    msg = RosTypeSatnavTime()
    msg.week_number = old.week_number
    msg.seconds_of_week = old.seconds_of_week
    msg.time_reference = old.time_reference.value

    return msg


def ros_to_type_satnav_time(old: RosTypeSatnavTime) -> TypeSatnavTime:
    return TypeSatnavTime(
        week_number=old.week_number,
        seconds_of_week=old.seconds_of_week,
        time_reference=TypeSatnavTimeTimeReference(old.time_reference),
    )


def type_timestamp_to_ros(old: TypeTimestamp) -> RosTypeTimestamp:
    msg = RosTypeTimestamp()
    msg.elapsed_nsec = old.elapsed_nsec

    return msg


def ros_to_type_timestamp(old: RosTypeTimestamp) -> TypeTimestamp:
    return TypeTimestamp(elapsed_nsec=old.elapsed_nsec)


def metadata_BeiDou_ephemeris_to_ros(
    old: MetadataBeidouEphemeris,
) -> RosMetadataBeidouEphemeris:
    msg = RosMetadataBeidouEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.prn = old.prn
    msg.clock = type_satnav_clock_to_ros(old.clock)
    msg.orbit = type_kepler_orbit_to_ros(old.orbit)
    msg.t_gd1 = old.t_gd1
    msg.t_gd2 = old.t_gd2
    msg.aodc = old.aodc
    msg.aode = old.aode

    return msg


def ros_to_metadata_BeiDou_ephemeris(
    old: RosMetadataBeidouEphemeris,
) -> MetadataBeidouEphemeris:
    return MetadataBeidouEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        prn=old.prn,
        clock=ros_to_type_satnav_clock(old.clock),
        orbit=ros_to_type_kepler_orbit(old.orbit),
        t_gd1=old.t_gd1,
        t_gd2=old.t_gd2,
        aodc=old.aodc,
        aode=old.aode,
    )


def metadata_GLONASS_ephemeris_to_ros(
    old: MetadataGlonassEphemeris,
) -> RosMetadataGlonassEphemeris:
    msg = RosMetadataGlonassEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.slot_number = old.slot_number
    msg.freq_o = old.freq_o
    msg.n_t = old.n_t
    msg.t_k = old.t_k
    msg.t_b = old.t_b
    msg.gamma_n = old.gamma_n
    msg.tau_n = old.tau_n
    msg.sv_pos_x = old.sv_pos_x
    msg.sv_vel_x = old.sv_vel_x
    msg.sv_accel_x = old.sv_accel_x
    msg.sv_pos_y = old.sv_pos_y
    msg.sv_vel_y = old.sv_vel_y
    msg.sv_accel_y = old.sv_accel_y
    msg.sv_pos_z = old.sv_pos_z
    msg.sv_vel_z = old.sv_vel_z
    msg.sv_accel_z = old.sv_accel_z

    return msg


def ros_to_metadata_GLONASS_ephemeris(
    old: RosMetadataGlonassEphemeris,
) -> MetadataGlonassEphemeris:
    return MetadataGlonassEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        slot_number=old.slot_number,
        freq_o=old.freq_o,
        n_t=old.n_t,
        t_k=old.t_k,
        t_b=old.t_b,
        gamma_n=old.gamma_n,
        tau_n=old.tau_n,
        sv_pos_x=old.sv_pos_x,
        sv_vel_x=old.sv_vel_x,
        sv_accel_x=old.sv_accel_x,
        sv_pos_y=old.sv_pos_y,
        sv_vel_y=old.sv_vel_y,
        sv_accel_y=old.sv_accel_y,
        sv_pos_z=old.sv_pos_z,
        sv_vel_z=old.sv_vel_z,
        sv_accel_z=old.sv_accel_z,
    )


def metadata_GPS_Cnav_ephemeris_to_ros(
    old: MetadataGpsCnavEphemeris,
) -> RosMetadataGpsCnavEphemeris:
    msg = RosMetadataGpsCnavEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.week_number = old.week_number
    msg.prn = old.prn
    msg.clock = type_satnav_clock_to_ros(old.clock)
    msg.orbit = type_kepler_orbit_to_ros(old.orbit)
    msg.t_gd = old.t_gd
    msg.iodc = old.iodc
    msg.iode = old.iode
    msg.isc_l1_ca = old.isc_l1_ca
    msg.isc_l2_c = old.isc_l2_c
    msg.isc_l5_i5 = old.isc_l5_i5
    msg.isc_l5_q5 = old.isc_l5_q5
    msg.delta_a_0 = old.delta_a_0
    msg.a_dot = old.a_dot

    return msg


def ros_to_metadata_GPS_Cnav_ephemeris(
    old: RosMetadataGpsCnavEphemeris,
) -> MetadataGpsCnavEphemeris:
    return MetadataGpsCnavEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        week_number=old.week_number,
        prn=old.prn,
        clock=ros_to_type_satnav_clock(old.clock),
        orbit=ros_to_type_kepler_orbit(old.orbit),
        t_gd=old.t_gd,
        iodc=old.iodc,
        iode=old.iode,
        isc_l1_ca=old.isc_l1_ca,
        isc_l2_c=old.isc_l2_c,
        isc_l5_i5=old.isc_l5_i5,
        isc_l5_q5=old.isc_l5_q5,
        delta_a_0=old.delta_a_0,
        a_dot=old.a_dot,
    )


def metadata_GPS_Lnav_ephemeris_to_ros(
    old: MetadataGpsLnavEphemeris,
) -> RosMetadataGpsLnavEphemeris:
    msg = RosMetadataGpsLnavEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.week_number = old.week_number
    msg.prn = old.prn
    msg.clock = type_satnav_clock_to_ros(old.clock)
    msg.orbit = type_kepler_orbit_to_ros(old.orbit)
    msg.t_gd = old.t_gd
    msg.iodc = old.iodc
    msg.iode = old.iode

    return msg


def ros_to_metadata_GPS_Lnav_ephemeris(
    old: RosMetadataGpsLnavEphemeris,
) -> MetadataGpsLnavEphemeris:
    return MetadataGpsLnavEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        week_number=old.week_number,
        prn=old.prn,
        clock=ros_to_type_satnav_clock(old.clock),
        orbit=ros_to_type_kepler_orbit(old.orbit),
        t_gd=old.t_gd,
        iodc=old.iodc,
        iode=old.iode,
    )


def metadata_GPS_Mnav_ephemeris_to_ros(
    old: MetadataGpsMnavEphemeris,
) -> RosMetadataGpsMnavEphemeris:
    msg = RosMetadataGpsMnavEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.week_number = old.week_number
    msg.prn = old.prn
    msg.clock = type_satnav_clock_to_ros(old.clock)
    msg.orbit = type_kepler_orbit_to_ros(old.orbit)
    msg.a_dot = old.a_dot
    msg.delta_af_0 = old.delta_af_0
    msg.delta_af_1 = old.delta_af_1
    msg.delta_gamma = old.delta_gamma
    msg.delta_i = old.delta_i
    msg.delta_omega = old.delta_omega
    msg.delta_a = old.delta_a
    msg.isc_l1_m_e = old.isc_l1_m_e
    msg.isc_l2_m_e = old.isc_l2_m_e
    msg.isc_l1_m_s = old.isc_l1_m_s
    msg.isc_l2_m_s = old.isc_l2_m_s
    msg.isa_l2_py = old.isa_l2_py
    msg.isa_l1_m_e = old.isa_l1_m_e
    msg.isa_l2_m_e = old.isa_l2_m_e
    msg.isa_l1_m_s = old.isa_l1_m_s
    msg.isa_l2_m_s = old.isa_l2_m_s

    return msg


def ros_to_metadata_GPS_Mnav_ephemeris(
    old: RosMetadataGpsMnavEphemeris,
) -> MetadataGpsMnavEphemeris:
    return MetadataGpsMnavEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        week_number=old.week_number,
        prn=old.prn,
        clock=ros_to_type_satnav_clock(old.clock),
        orbit=ros_to_type_kepler_orbit(old.orbit),
        a_dot=old.a_dot,
        delta_af_0=old.delta_af_0,
        delta_af_1=old.delta_af_1,
        delta_gamma=old.delta_gamma,
        delta_i=old.delta_i,
        delta_omega=old.delta_omega,
        delta_a=old.delta_a,
        isc_l1_m_e=old.isc_l1_m_e,
        isc_l2_m_e=old.isc_l2_m_e,
        isc_l1_m_s=old.isc_l1_m_s,
        isc_l2_m_s=old.isc_l2_m_s,
        isa_l2_py=old.isa_l2_py,
        isa_l1_m_e=old.isa_l1_m_e,
        isa_l2_m_e=old.isa_l2_m_e,
        isa_l1_m_s=old.isa_l1_m_s,
        isa_l2_m_s=old.isa_l2_m_s,
    )


def metadata_GPS_iono_utc_parameters_to_ros(
    old: MetadataGpsIonoUtcParameters,
) -> RosMetadataGpsIonoUtcParameters:
    msg = RosMetadataGpsIonoUtcParameters()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.a_0 = old.a_0
    msg.a_1 = old.a_1
    msg.delta_t_ls = old.delta_t_ls
    msg.tot = old.tot
    msg.wn_t = old.wn_t
    msg.wn_lsf = old.wn_lsf
    msg.dn = old.dn
    msg.delta_t_lsf = old.delta_t_lsf
    msg.alpha_0 = old.alpha_0
    msg.alpha_1 = old.alpha_1
    msg.alpha_2 = old.alpha_2
    msg.alpha_3 = old.alpha_3
    msg.beta_0 = old.beta_0
    msg.beta_1 = old.beta_1
    msg.beta_2 = old.beta_2
    msg.beta_3 = old.beta_3

    return msg


def ros_to_metadata_GPS_iono_utc_parameters(
    old: RosMetadataGpsIonoUtcParameters,
) -> MetadataGpsIonoUtcParameters:
    return MetadataGpsIonoUtcParameters(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        a_0=old.a_0,
        a_1=old.a_1,
        delta_t_ls=old.delta_t_ls,
        tot=old.tot,
        wn_t=old.wn_t,
        wn_lsf=old.wn_lsf,
        dn=old.dn,
        delta_t_lsf=old.delta_t_lsf,
        alpha_0=old.alpha_0,
        alpha_1=old.alpha_1,
        alpha_2=old.alpha_2,
        alpha_3=old.alpha_3,
        beta_0=old.beta_0,
        beta_1=old.beta_1,
        beta_2=old.beta_2,
        beta_3=old.beta_3,
    )


def metadata_Galileo_ephemeris_to_ros(
    old: MetadataGalileoEphemeris,
) -> RosMetadataGalileoEphemeris:
    msg = RosMetadataGalileoEphemeris()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.nav_msg_type = old.nav_msg_type.value
    msg.prn = old.prn
    msg.clock = type_satnav_clock_to_ros(old.clock)
    msg.orbit = type_kepler_orbit_to_ros(old.orbit)
    msg.bgd = old.bgd

    return msg


def ros_to_metadata_Galileo_ephemeris(
    old: RosMetadataGalileoEphemeris,
) -> MetadataGalileoEphemeris:
    return MetadataGalileoEphemeris(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        nav_msg_type=MetadataGalileoEphemerisNavMsgType(old.nav_msg_type),
        prn=old.prn,
        clock=ros_to_type_satnav_clock(old.clock),
        orbit=ros_to_type_kepler_orbit(old.orbit),
        bgd=old.bgd,
    )


def metadata_IMU_to_ros(old: MetadataImu) -> RosMetadataImu:
    msg = RosMetadataImu()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.mounting = type_mounting_to_ros(old.mounting)
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)

    return msg


def ros_to_metadata_IMU(old: RosMetadataImu) -> MetadataImu:
    return MetadataImu(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        mounting=ros_to_type_mounting(old.mounting),
        error_model=MetadataImuErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
    )


def metadata_generic_to_ros(old: MetadataGeneric) -> RosMetadataGeneric:
    msg = RosMetadataGeneric()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.mounting = type_mounting_to_ros(old.mounting)

    return msg


def ros_to_metadata_generic(old: RosMetadataGeneric) -> MetadataGeneric:
    return MetadataGeneric(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        mounting=ros_to_type_mounting(old.mounting),
    )


def metadata_image_features_to_ros(
    old: MetadataImageFeatures,
) -> RosMetadataImageFeatures:
    msg = RosMetadataImageFeatures()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.keypoint_detector = old.keypoint_detector.value
    msg.orientation_calculated = old.orientation_calculated
    msg.descriptor_extractor = old.descriptor_extractor.value
    msg.is_bigendian = old.is_bigendian
    msg.descriptor_type = old.descriptor_type.value
    msg.descriptor_number_of_elements = old.descriptor_number_of_elements

    return msg


def ros_to_metadata_image_features(
    old: RosMetadataImageFeatures,
) -> MetadataImageFeatures:
    return MetadataImageFeatures(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        keypoint_detector=MetadataImageFeaturesKeypointDetector(old.keypoint_detector),
        orientation_calculated=old.orientation_calculated,
        descriptor_extractor=MetadataImageFeaturesDescriptorExtractor(
            old.descriptor_extractor
        ),
        is_bigendian=old.is_bigendian,
        descriptor_type=MetadataImageFeaturesDescriptorType(old.descriptor_type),
        descriptor_number_of_elements=old.descriptor_number_of_elements,
    )


def metadata_magnetic_field_to_ros(
    old: MetadataMagneticField,
) -> RosMetadataMagneticField:
    msg = RosMetadataMagneticField()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.mounting = type_mounting_to_ros(old.mounting)
    msg.num_meas = len(old.k) if old.k is not None else 0
    msg.k = old.k.flatten().tolist() if old.k is not None else []
    msg.b = old.b.tolist() if old.b is not None else []

    return msg


def ros_to_metadata_magnetic_field(
    old: RosMetadataMagneticField,
) -> MetadataMagneticField:
    return MetadataMagneticField(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        mounting=ros_to_type_mounting(old.mounting),
        k=np.array(old.k).reshape(old.num_meas, old.num_meas),
        b=np.array(old.b),
    )


def metadata_satnav_obs_to_ros(old: MetadataSatnavObs) -> RosMetadataSatnavObs:
    msg = RosMetadataSatnavObs()
    msg.info = type_metadataheader_to_ros(old.info)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.deltarange_interval_start = (
        old.deltarange_interval_start
        if old.deltarange_interval_start is not None
        else float()
    )
    msg.deltarange_interval_stop = (
        old.deltarange_interval_stop
        if old.deltarange_interval_stop is not None
        else float()
    )

    return msg


def ros_to_metadata_satnav_obs(old: RosMetadataSatnavObs) -> MetadataSatnavObs:
    return MetadataSatnavObs(
        info=ros_to_type_metadataheader(old.info),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        deltarange_interval_start=old.deltarange_interval_start,
        deltarange_interval_stop=old.deltarange_interval_stop,
    )


def measurement_IMU_to_ros(old: MeasurementImu) -> RosMeasurementImu:
    msg = RosMeasurementImu()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.imu_type = old.imu_type.value
    msg.meas_accel = old.meas_accel
    msg.meas_gyro = old.meas_gyro
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_IMU(old: RosMeasurementImu) -> MeasurementImu:
    return MeasurementImu(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        imu_type=MeasurementImuImuType(old.imu_type),
        meas_accel=np.array(old.meas_accel),
        meas_gyro=np.array(old.meas_gyro),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_TDOA_1Tx_2Rx_to_ros(
    old: MeasurementTdoa1Tx2Rx,
) -> RosMeasurementTdoa1Tx2Rx:
    msg = RosMeasurementTdoa1Tx2Rx()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.tx_position_and_covariance = type_remote_point_to_ros(
        old.tx_position_and_covariance
    )
    msg.rx1_position_and_covariance = type_remote_point_to_ros(
        old.rx1_position_and_covariance
    )
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_TDOA_1Tx_2Rx(
    old: RosMeasurementTdoa1Tx2Rx,
) -> MeasurementTdoa1Tx2Rx:
    return MeasurementTdoa1Tx2Rx(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        tx_position_and_covariance=ros_to_type_remote_point(
            old.tx_position_and_covariance
        ),
        rx1_position_and_covariance=ros_to_type_remote_point(
            old.rx1_position_and_covariance
        ),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementTdoa1Tx2RxErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_TDOA_2Tx_1Rx_to_ros(
    old: MeasurementTdoa2Tx1Rx,
) -> RosMeasurementTdoa2Tx1Rx:
    msg = RosMeasurementTdoa2Tx1Rx()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.tx1_position_and_covariance = type_remote_point_to_ros(
        old.tx1_position_and_covariance
    )
    msg.tx2_position_and_covariance = type_remote_point_to_ros(
        old.tx2_position_and_covariance
    )
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_TDOA_2Tx_1Rx(
    old: RosMeasurementTdoa2Tx1Rx,
) -> MeasurementTdoa2Tx1Rx:
    return MeasurementTdoa2Tx1Rx(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        tx1_position_and_covariance=ros_to_type_remote_point(
            old.tx1_position_and_covariance
        ),
        tx2_position_and_covariance=ros_to_type_remote_point(
            old.tx2_position_and_covariance
        ),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementTdoa2Tx1RxErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_accumulated_distance_traveled_to_ros(
    old: MeasurementAccumulatedDistanceTraveled,
) -> RosMeasurementAccumulatedDistanceTraveled:
    msg = RosMeasurementAccumulatedDistanceTraveled()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.delta_t = old.delta_t
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_accumulated_distance_traveled(
    old: RosMeasurementAccumulatedDistanceTraveled,
) -> MeasurementAccumulatedDistanceTraveled:
    return MeasurementAccumulatedDistanceTraveled(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        delta_t=old.delta_t,
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementAccumulatedDistanceTraveledErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_altitude_to_ros(old: MeasurementAltitude) -> RosMeasurementAltitude:
    msg = RosMeasurementAltitude()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference = old.reference.value
    msg.altitude = old.altitude
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_altitude(old: RosMeasurementAltitude) -> MeasurementAltitude:
    return MeasurementAltitude(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference=MeasurementAltitudeReference(old.reference),
        altitude=old.altitude,
        variance=old.variance,
        error_model=MeasurementAltitudeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_angular_velocity_to_ros(
    old: MeasurementAngularVelocity,
) -> RosMeasurementAngularVelocity:
    msg = RosMeasurementAngularVelocity()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.imu_type = old.imu_type.value
    msg.meas = old.meas
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_angular_velocity(
    old: RosMeasurementAngularVelocity,
) -> MeasurementAngularVelocity:
    return MeasurementAngularVelocity(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementAngularVelocityReferenceFrame(old.reference_frame),
        imu_type=MeasurementAngularVelocityImuType(old.imu_type),
        meas=np.array(old.meas),
        covariance=np.array(old.covariance).reshape(3, 3),
        error_model=MeasurementAngularVelocityErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_angular_velocity_1d_to_ros(
    old: MeasurementAngularVelocity1D,
) -> RosMeasurementAngularVelocity1D:
    msg = RosMeasurementAngularVelocity1D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.sensor_type = old.sensor_type.value
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_angular_velocity_1d(
    old: RosMeasurementAngularVelocity1D,
) -> MeasurementAngularVelocity1D:
    return MeasurementAngularVelocity1D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        sensor_type=MeasurementAngularVelocity1DSensorType(old.sensor_type),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementAngularVelocity1DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_attitude_2d_to_ros(
    old: MeasurementAttitude2D,
) -> RosMeasurementAttitude2D:
    msg = RosMeasurementAttitude2D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.attitude2d = old.attitude2d
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_attitude_2d(
    old: RosMeasurementAttitude2D,
) -> MeasurementAttitude2D:
    return MeasurementAttitude2D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementAttitude2DReferenceFrame(old.reference_frame),
        attitude2d=np.array(old.attitude2d),
        covariance=np.array(old.covariance).reshape(2, 2),
        error_model=MeasurementAttitude2DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_attitude_3d_to_ros(
    old: MeasurementAttitude3D,
) -> RosMeasurementAttitude3D:
    msg = RosMeasurementAttitude3D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.quaternion = old.quaternion
    msg.tilt_error_covariance = old.tilt_error_covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_attitude_3d(
    old: RosMeasurementAttitude3D,
) -> MeasurementAttitude3D:
    return MeasurementAttitude3D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementAttitude3DReferenceFrame(old.reference_frame),
        quaternion=np.array(old.quaternion),
        tilt_error_covariance=np.array(old.tilt_error_covariance).reshape(3, 3),
        error_model=MeasurementAttitude3DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_barometer_to_ros(old: MeasurementBarometer) -> RosMeasurementBarometer:
    msg = RosMeasurementBarometer()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.pressure = old.pressure
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_barometer(old: RosMeasurementBarometer) -> MeasurementBarometer:
    return MeasurementBarometer(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        pressure=old.pressure,
        variance=old.variance,
        error_model=MeasurementBarometerErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_delta_position_to_ros(
    old: MeasurementDeltaPosition,
) -> RosMeasurementDeltaPosition:
    msg = RosMeasurementDeltaPosition()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.delta_t = old.delta_t
    msg.term1 = old.term1 if old.term1 is not None else float()
    msg.term2 = old.term2 if old.term2 is not None else float()
    msg.term3 = old.term3 if old.term3 is not None else float()
    msg.num_meas = len(old.covariance)
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_delta_position(
    old: RosMeasurementDeltaPosition,
) -> MeasurementDeltaPosition:
    return MeasurementDeltaPosition(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementDeltaPositionReferenceFrame(old.reference_frame),
        delta_t=old.delta_t,
        term1=old.term1,
        term2=old.term2,
        term3=old.term3,
        covariance=np.array(old.covariance).reshape(old.num_meas, old.num_meas),
        error_model=MeasurementDeltaPositionErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_delta_range_to_ros(
    old: MeasurementDeltaRange,
) -> RosMeasurementDeltaRange:
    msg = RosMeasurementDeltaRange()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.delta_t = old.delta_t
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_delta_range(
    old: RosMeasurementDeltaRange,
) -> MeasurementDeltaRange:
    return MeasurementDeltaRange(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        delta_t=old.delta_t,
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementDeltaRangeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_delta_range_to_point_to_ros(
    old: MeasurementDeltaRangeToPoint,
) -> RosMeasurementDeltaRangeToPoint:
    msg = RosMeasurementDeltaRangeToPoint()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.remote_point = type_remote_point_to_ros(old.remote_point)
    msg.obs = old.obs
    msg.delta_t = old.delta_t
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_delta_range_to_point(
    old: RosMeasurementDeltaRangeToPoint,
) -> MeasurementDeltaRangeToPoint:
    return MeasurementDeltaRangeToPoint(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        remote_point=ros_to_type_remote_point(old.remote_point),
        obs=old.obs,
        delta_t=old.delta_t,
        variance=old.variance,
        error_model=MeasurementDeltaRangeToPointErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_direction_2d_to_points_to_ros(
    old: MeasurementDirection2DToPoints,
) -> RosMeasurementDirection2DToPoints:
    msg = RosMeasurementDirection2DToPoints()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.obs = [type_direction_2d_to_point_to_ros(x) for x in old.obs]
    msg.num_obs = len(old.obs)

    return msg


def ros_to_measurement_direction_2d_to_points(
    old: RosMeasurementDirection2DToPoints,
) -> MeasurementDirection2DToPoints:
    return MeasurementDirection2DToPoints(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        obs=[ros_to_type_direction_2d_to_point(x) for x in old.obs],
    )


def measurement_direction_3d_to_points_to_ros(
    old: MeasurementDirection3DToPoints,
) -> RosMeasurementDirection3DToPoints:
    msg = RosMeasurementDirection3DToPoints()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.obs = [type_direction_3d_to_point_to_ros(x) for x in old.obs]
    msg.num_obs = len(old.obs)

    return msg


def ros_to_measurement_direction_3d_to_points(
    old: RosMeasurementDirection3DToPoints,
) -> MeasurementDirection3DToPoints:
    return MeasurementDirection3DToPoints(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        obs=[ros_to_type_direction_3d_to_point(x) for x in old.obs],
    )


def measurement_direction_of_motion_2d_to_ros(
    old: MeasurementDirectionOfMotion2D,
) -> RosMeasurementDirectionOfMotion2D:
    msg = RosMeasurementDirectionOfMotion2D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference = old.reference.value
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_direction_of_motion_2d(
    old: RosMeasurementDirectionOfMotion2D,
) -> MeasurementDirectionOfMotion2D:
    return MeasurementDirectionOfMotion2D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference=MeasurementDirectionOfMotion2DReference(old.reference),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementDirectionOfMotion2DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_direction_of_motion_3d_to_ros(
    old: MeasurementDirectionOfMotion3D,
) -> RosMeasurementDirectionOfMotion3D:
    msg = RosMeasurementDirectionOfMotion3D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.obs = old.obs
    msg.error_vector = old.error_vector
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_direction_of_motion_3d(
    old: RosMeasurementDirectionOfMotion3D,
) -> MeasurementDirectionOfMotion3D:
    return MeasurementDirectionOfMotion3D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementDirectionOfMotion3DReferenceFrame(
            old.reference_frame
        ),
        obs=np.array(old.obs),
        error_vector=np.array(old.error_vector),
        covariance=np.array(old.covariance).reshape(2, 2),
        error_model=MeasurementDirectionOfMotion3DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_frequency_difference_to_ros(
    old: MeasurementFrequencyDifference,
) -> RosMeasurementFrequencyDifference:
    msg = RosMeasurementFrequencyDifference()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.time_of_validity_attosec = old.time_of_validity_attosec
    msg.clock_id1 = old.clock_id1
    msg.clock_id2 = old.clock_id2
    msg.freq_diff = old.freq_diff
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_frequency_difference(
    old: RosMeasurementFrequencyDifference,
) -> MeasurementFrequencyDifference:
    return MeasurementFrequencyDifference(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        time_of_validity_attosec=old.time_of_validity_attosec,
        clock_id1=old.clock_id1,
        clock_id2=old.clock_id2,
        freq_diff=old.freq_diff,
        variance=old.variance,
        error_model=MeasurementFrequencyDifferenceErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_heading_to_ros(old: MeasurementHeading) -> RosMeasurementHeading:
    msg = RosMeasurementHeading()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference = old.reference.value
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_heading(old: RosMeasurementHeading) -> MeasurementHeading:
    return MeasurementHeading(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference=MeasurementHeadingReference(old.reference),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementHeadingErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_image_to_ros(old: MeasurementImage) -> RosMeasurementImage:
    msg = RosMeasurementImage()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.height = old.height
    msg.width = old.width
    msg.is_bigendian = old.is_bigendian
    msg.image_type = old.image_type.value
    msg.image_data = old.image_data.tolist()
    msg.image_data_length = len(old.image_data)
    msg.camera_model = old.camera_model.value
    msg.model_coefficients = old.model_coefficients.tolist()
    msg.num_model_coefficients = len(old.model_coefficients)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_image(old: RosMeasurementImage) -> MeasurementImage:
    return MeasurementImage(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        height=old.height,
        width=old.width,
        is_bigendian=old.is_bigendian,
        image_type=MeasurementImageImageType(old.image_type),
        image_data=np.array(old.image_data),
        camera_model=MeasurementImageCameraModel(old.camera_model),
        model_coefficients=np.array(old.model_coefficients),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_magnetic_field_to_ros(
    old: MeasurementMagneticField,
) -> RosMeasurementMagneticField:
    msg = RosMeasurementMagneticField()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.x_field_strength = (
        old.x_field_strength if old.x_field_strength is not None else float()
    )
    msg.y_field_strength = (
        old.y_field_strength if old.y_field_strength is not None else float()
    )
    msg.z_field_strength = (
        old.z_field_strength if old.z_field_strength is not None else float()
    )
    msg.num_meas = len(old.covariance)
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_magnetic_field(
    old: RosMeasurementMagneticField,
) -> MeasurementMagneticField:
    return MeasurementMagneticField(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        x_field_strength=old.x_field_strength,
        y_field_strength=old.y_field_strength,
        z_field_strength=old.z_field_strength,
        covariance=np.array(old.covariance).reshape(old.num_meas, old.num_meas),
        error_model=MeasurementMagneticFieldErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_magnetic_field_magnitude_to_ros(
    old: MeasurementMagneticFieldMagnitude,
) -> RosMeasurementMagneticFieldMagnitude:
    msg = RosMeasurementMagneticFieldMagnitude()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.field_strength = old.field_strength
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_magnetic_field_magnitude(
    old: RosMeasurementMagneticFieldMagnitude,
) -> MeasurementMagneticFieldMagnitude:
    return MeasurementMagneticFieldMagnitude(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        field_strength=old.field_strength,
        variance=old.variance,
        error_model=MeasurementMagneticFieldMagnitudeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_position_to_ros(old: MeasurementPosition) -> RosMeasurementPosition:
    msg = RosMeasurementPosition()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.term1 = old.term1 if old.term1 is not None else float()
    msg.term2 = old.term2 if old.term2 is not None else float()
    msg.term3 = old.term3 if old.term3 is not None else float()
    msg.num_meas = len(old.covariance)
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_position(old: RosMeasurementPosition) -> MeasurementPosition:
    return MeasurementPosition(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementPositionReferenceFrame(old.reference_frame),
        term1=old.term1,
        term2=old.term2,
        term3=old.term3,
        covariance=np.array(old.covariance).reshape(old.num_meas, old.num_meas),
        error_model=MeasurementPositionErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_position_attitude_to_ros(
    old: MeasurementPositionAttitude,
) -> RosMeasurementPositionAttitude:
    msg = RosMeasurementPositionAttitude()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.p1 = old.p1
    msg.p2 = old.p2
    msg.p3 = old.p3
    msg.quaternion = old.quaternion
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_position_attitude(
    old: RosMeasurementPositionAttitude,
) -> MeasurementPositionAttitude:
    return MeasurementPositionAttitude(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementPositionAttitudeReferenceFrame(old.reference_frame),
        p1=old.p1,
        p2=old.p2,
        p3=old.p3,
        quaternion=np.array(old.quaternion),
        covariance=np.array(old.covariance).reshape(6, 6),
        error_model=MeasurementPositionAttitudeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_position_velocity_attitude_to_ros(
    old: MeasurementPositionVelocityAttitude,
) -> RosMeasurementPositionVelocityAttitude:
    msg = RosMeasurementPositionVelocityAttitude()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.p1 = old.p1 if old.p1 is not None else float()
    msg.p2 = old.p2 if old.p2 is not None else float()
    msg.p3 = old.p3 if old.p3 is not None else float()
    msg.v1 = old.v1 if old.v1 is not None else float()
    msg.v2 = old.v2 if old.v2 is not None else float()
    msg.v3 = old.v3 if old.v3 is not None else float()
    msg.quaternion = old.quaternion if old.quaternion is not None else []
    msg.num_meas = len(old.covariance)
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_position_velocity_attitude(
    old: RosMeasurementPositionVelocityAttitude,
) -> MeasurementPositionVelocityAttitude:
    return MeasurementPositionVelocityAttitude(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementPositionVelocityAttitudeReferenceFrame(
            old.reference_frame
        ),
        p1=old.p1,
        p2=old.p2,
        p3=old.p3,
        v1=old.v1,
        v2=old.v2,
        v3=old.v3,
        quaternion=np.array(old.quaternion),
        covariance=np.array(old.covariance).reshape(old.num_meas, old.num_meas),
        error_model=MeasurementPositionVelocityAttitudeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_range_rate_to_point_to_ros(
    old: MeasurementRangeRateToPoint,
) -> RosMeasurementRangeRateToPoint:
    msg = RosMeasurementRangeRateToPoint()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.remote_point = type_remote_point_to_ros(old.remote_point)
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_range_rate_to_point(
    old: RosMeasurementRangeRateToPoint,
) -> MeasurementRangeRateToPoint:
    return MeasurementRangeRateToPoint(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        remote_point=ros_to_type_remote_point(old.remote_point),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementRangeRateToPointErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_range_to_point_to_ros(
    old: MeasurementRangeToPoint,
) -> RosMeasurementRangeToPoint:
    msg = RosMeasurementRangeToPoint()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.remote_point = type_remote_point_to_ros(old.remote_point)
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_range_to_point(
    old: RosMeasurementRangeToPoint,
) -> MeasurementRangeToPoint:
    return MeasurementRangeToPoint(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        remote_point=ros_to_type_remote_point(old.remote_point),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementRangeToPointErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_satnav_to_ros(old: MeasurementSatnav) -> RosMeasurementSatnav:
    msg = RosMeasurementSatnav()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.receiver_clock_time = type_satnav_time_to_ros(old.receiver_clock_time)
    msg.num_signal_types = old.num_signal_types
    msg.obs = [type_satnav_obs_to_ros(x) for x in old.obs]
    msg.num_signals_tracked = len(old.obs)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_satnav(old: RosMeasurementSatnav) -> MeasurementSatnav:
    return MeasurementSatnav(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        receiver_clock_time=ros_to_type_satnav_time(old.receiver_clock_time),
        num_signal_types=old.num_signal_types,
        obs=[ros_to_type_satnav_obs(x) for x in old.obs],
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_satnav_subframe_to_ros(
    old: MeasurementSatnavSubframe,
) -> RosMeasurementSatnavSubframe:
    msg = RosMeasurementSatnavSubframe()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.gnss_message_id = old.gnss_message_id
    msg.prn = old.prn
    msg.satellite_system = type_satnav_satellite_system_to_ros(old.satellite_system)
    msg.freq_slot_id = old.freq_slot_id
    msg.data_vector = old.data_vector.tolist()
    msg.num_bytes = len(old.data_vector)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_satnav_subframe(
    old: RosMeasurementSatnavSubframe,
) -> MeasurementSatnavSubframe:
    return MeasurementSatnavSubframe(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        gnss_message_id=old.gnss_message_id,
        prn=old.prn,
        satellite_system=ros_to_type_satnav_satellite_system(old.satellite_system),
        freq_slot_id=old.freq_slot_id,
        data_vector=np.array(old.data_vector),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_satnav_with_sv_data_to_ros(
    old: MeasurementSatnavWithSvData,
) -> RosMeasurementSatnavWithSvData:
    msg = RosMeasurementSatnavWithSvData()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.receiver_clock_time = type_satnav_time_to_ros(old.receiver_clock_time)
    msg.num_signal_types = old.num_signal_types
    msg.obs = [type_satnav_obs_to_ros(x) for x in old.obs]
    msg.num_signals_tracked = len(old.obs)
    msg.sv_data = [type_satnav_sv_data_to_ros(x) for x in old.sv_data]
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_satnav_with_sv_data(
    old: RosMeasurementSatnavWithSvData,
) -> MeasurementSatnavWithSvData:
    return MeasurementSatnavWithSvData(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        receiver_clock_time=ros_to_type_satnav_time(old.receiver_clock_time),
        num_signal_types=old.num_signal_types,
        obs=[ros_to_type_satnav_obs(x) for x in old.obs],
        sv_data=[ros_to_type_satnav_sv_data(x) for x in old.sv_data],
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_specific_force_1d_to_ros(
    old: MeasurementSpecificForce1D,
) -> RosMeasurementSpecificForce1D:
    msg = RosMeasurementSpecificForce1D()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.sensor_type = old.sensor_type.value
    msg.obs = old.obs
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_specific_force_1d(
    old: RosMeasurementSpecificForce1D,
) -> MeasurementSpecificForce1D:
    return MeasurementSpecificForce1D(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        sensor_type=MeasurementSpecificForce1DSensorType(old.sensor_type),
        obs=old.obs,
        variance=old.variance,
        error_model=MeasurementSpecificForce1DErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_speed_to_ros(old: MeasurementSpeed) -> RosMeasurementSpeed:
    msg = RosMeasurementSpeed()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference = old.reference.value
    msg.speed = old.speed
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_speed(old: RosMeasurementSpeed) -> MeasurementSpeed:
    return MeasurementSpeed(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference=MeasurementSpeedReference(old.reference),
        speed=old.speed,
        variance=old.variance,
        error_model=MeasurementSpeedErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_temperature_to_ros(
    old: MeasurementTemperature,
) -> RosMeasurementTemperature:
    msg = RosMeasurementTemperature()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.temperature = old.temperature
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_temperature(
    old: RosMeasurementTemperature,
) -> MeasurementTemperature:
    return MeasurementTemperature(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        temperature=old.temperature,
        variance=old.variance,
        error_model=MeasurementTemperatureErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_time_to_ros(old: MeasurementTime) -> RosMeasurementTime:
    msg = RosMeasurementTime()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.time_of_validity_attosec = old.time_of_validity_attosec
    msg.clock_id = old.clock_id.tolist()
    msg.num_obs = len(old.clock_id)
    msg.elapsed_nsec = old.elapsed_nsec.tolist()
    msg.elapsed_attosec = old.elapsed_attosec.tolist()
    msg.digits_of_precision = old.digits_of_precision
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_time(old: RosMeasurementTime) -> MeasurementTime:
    return MeasurementTime(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        time_of_validity_attosec=old.time_of_validity_attosec,
        clock_id=np.array(old.clock_id),
        elapsed_nsec=np.array(old.elapsed_nsec),
        elapsed_attosec=np.array(old.elapsed_attosec),
        digits_of_precision=old.digits_of_precision,
        covariance=np.array(old.covariance).reshape(old.num_obs, old.num_obs),
        error_model=MeasurementTimeErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_time_difference_to_ros(
    old: MeasurementTimeDifference,
) -> RosMeasurementTimeDifference:
    msg = RosMeasurementTimeDifference()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.time_of_validity_attosec = old.time_of_validity_attosec
    msg.clock_id1 = old.clock_id1
    msg.clock_id2 = old.clock_id2
    msg.time_diff_nsec = old.time_diff_nsec
    msg.time_diff_attosec = old.time_diff_attosec
    msg.digits_of_precision = old.digits_of_precision
    msg.variance = old.variance
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_time_difference(
    old: RosMeasurementTimeDifference,
) -> MeasurementTimeDifference:
    return MeasurementTimeDifference(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        time_of_validity_attosec=old.time_of_validity_attosec,
        clock_id1=old.clock_id1,
        clock_id2=old.clock_id2,
        time_diff_nsec=old.time_diff_nsec,
        time_diff_attosec=old.time_diff_attosec,
        digits_of_precision=old.digits_of_precision,
        variance=old.variance,
        error_model=MeasurementTimeDifferenceErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_time_frequency_difference_to_ros(
    old: MeasurementTimeFrequencyDifference,
) -> RosMeasurementTimeFrequencyDifference:
    msg = RosMeasurementTimeFrequencyDifference()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.time_of_validity_attosec = old.time_of_validity_attosec
    msg.clock_id1 = old.clock_id1
    msg.clock_id2 = old.clock_id2
    msg.time_diff_nsec = old.time_diff_nsec
    msg.time_diff_attosec = old.time_diff_attosec
    msg.digits_of_precision = old.digits_of_precision
    msg.freq_diff = old.freq_diff
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_time_frequency_difference(
    old: RosMeasurementTimeFrequencyDifference,
) -> MeasurementTimeFrequencyDifference:
    return MeasurementTimeFrequencyDifference(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        time_of_validity_attosec=old.time_of_validity_attosec,
        clock_id1=old.clock_id1,
        clock_id2=old.clock_id2,
        time_diff_nsec=old.time_diff_nsec,
        time_diff_attosec=old.time_diff_attosec,
        digits_of_precision=old.digits_of_precision,
        freq_diff=old.freq_diff,
        covariance=np.array(old.covariance).reshape(2, 2),
        error_model=MeasurementTimeFrequencyDifferenceErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


def measurement_velocity_to_ros(old: MeasurementVelocity) -> RosMeasurementVelocity:
    msg = RosMeasurementVelocity()
    msg.header = type_header_to_ros(old.header)
    msg.time_of_validity = type_timestamp_to_ros(old.time_of_validity)
    msg.reference_frame = old.reference_frame.value
    msg.x = old.x if old.x is not None else float()
    msg.y = old.y if old.y is not None else float()
    msg.z = old.z if old.z is not None else float()
    msg.num_meas = len(old.covariance)
    msg.covariance = old.covariance.flatten().tolist()
    msg.error_model = old.error_model.value
    msg.error_model_params = old.error_model_params.tolist()
    msg.num_error_model_params = len(old.error_model_params)
    msg.integrity = [type_integrity_to_ros(x) for x in old.integrity]
    msg.num_integrity = len(old.integrity)

    return msg


def ros_to_measurement_velocity(old: RosMeasurementVelocity) -> MeasurementVelocity:
    return MeasurementVelocity(
        header=ros_to_type_header(old.header),
        time_of_validity=ros_to_type_timestamp(old.time_of_validity),
        reference_frame=MeasurementVelocityReferenceFrame(old.reference_frame),
        x=old.x,
        y=old.y,
        z=old.z,
        covariance=np.array(old.covariance).reshape(old.num_meas, old.num_meas),
        error_model=MeasurementVelocityErrorModel(old.error_model),
        error_model_params=np.array(old.error_model_params),
        integrity=[ros_to_type_integrity(x) for x in old.integrity],
    )


AspnMsg: TypeAlias = Union[
    MetadataBeidouEphemeris,
    MetadataGlonassEphemeris,
    MetadataGpsCnavEphemeris,
    MetadataGpsLnavEphemeris,
    MetadataGpsMnavEphemeris,
    MetadataGpsIonoUtcParameters,
    MetadataGalileoEphemeris,
    MetadataImu,
    MetadataGeneric,
    MetadataImageFeatures,
    MetadataMagneticField,
    MetadataSatnavObs,
    MeasurementImu,
    MeasurementTdoa1Tx2Rx,
    MeasurementTdoa2Tx1Rx,
    MeasurementAccumulatedDistanceTraveled,
    MeasurementAltitude,
    MeasurementAngularVelocity,
    MeasurementAngularVelocity1D,
    MeasurementAttitude2D,
    MeasurementAttitude3D,
    MeasurementBarometer,
    MeasurementDeltaPosition,
    MeasurementDeltaRange,
    MeasurementDeltaRangeToPoint,
    MeasurementDirection2DToPoints,
    MeasurementDirection3DToPoints,
    MeasurementDirectionOfMotion2D,
    MeasurementDirectionOfMotion3D,
    MeasurementFrequencyDifference,
    MeasurementHeading,
    MeasurementImage,
    MeasurementMagneticField,
    MeasurementMagneticFieldMagnitude,
    MeasurementPosition,
    MeasurementPositionAttitude,
    MeasurementPositionVelocityAttitude,
    MeasurementRangeRateToPoint,
    MeasurementRangeToPoint,
    MeasurementSatnav,
    MeasurementSatnavSubframe,
    MeasurementSatnavWithSvData,
    MeasurementSpecificForce1D,
    MeasurementSpeed,
    MeasurementTemperature,
    MeasurementTime,
    MeasurementTimeDifference,
    MeasurementTimeFrequencyDifference,
    MeasurementVelocity,
]

RosMsg: TypeAlias = Union[
    RosMetadataBeidouEphemeris,
    RosMetadataGlonassEphemeris,
    RosMetadataGpsCnavEphemeris,
    RosMetadataGpsLnavEphemeris,
    RosMetadataGpsMnavEphemeris,
    RosMetadataGpsIonoUtcParameters,
    RosMetadataGalileoEphemeris,
    RosMetadataImu,
    RosMetadataGeneric,
    RosMetadataImageFeatures,
    RosMetadataMagneticField,
    RosMetadataSatnavObs,
    RosMeasurementImu,
    RosMeasurementTdoa1Tx2Rx,
    RosMeasurementTdoa2Tx1Rx,
    RosMeasurementAccumulatedDistanceTraveled,
    RosMeasurementAltitude,
    RosMeasurementAngularVelocity,
    RosMeasurementAngularVelocity1D,
    RosMeasurementAttitude2D,
    RosMeasurementAttitude3D,
    RosMeasurementBarometer,
    RosMeasurementDeltaPosition,
    RosMeasurementDeltaRange,
    RosMeasurementDeltaRangeToPoint,
    RosMeasurementDirection2DToPoints,
    RosMeasurementDirection3DToPoints,
    RosMeasurementDirectionOfMotion2D,
    RosMeasurementDirectionOfMotion3D,
    RosMeasurementFrequencyDifference,
    RosMeasurementHeading,
    RosMeasurementImage,
    RosMeasurementMagneticField,
    RosMeasurementMagneticFieldMagnitude,
    RosMeasurementPosition,
    RosMeasurementPositionAttitude,
    RosMeasurementPositionVelocityAttitude,
    RosMeasurementRangeRateToPoint,
    RosMeasurementRangeToPoint,
    RosMeasurementSatnav,
    RosMeasurementSatnavSubframe,
    RosMeasurementSatnavWithSvData,
    RosMeasurementSpecificForce1D,
    RosMeasurementSpeed,
    RosMeasurementTemperature,
    RosMeasurementTime,
    RosMeasurementTimeDifference,
    RosMeasurementTimeFrequencyDifference,
    RosMeasurementVelocity,
]

to_ros_map: dict[type[AspnMsg], Callable] = {
    MetadataBeidouEphemeris: metadata_BeiDou_ephemeris_to_ros,
    MetadataGlonassEphemeris: metadata_GLONASS_ephemeris_to_ros,
    MetadataGpsCnavEphemeris: metadata_GPS_Cnav_ephemeris_to_ros,
    MetadataGpsLnavEphemeris: metadata_GPS_Lnav_ephemeris_to_ros,
    MetadataGpsMnavEphemeris: metadata_GPS_Mnav_ephemeris_to_ros,
    MetadataGpsIonoUtcParameters: metadata_GPS_iono_utc_parameters_to_ros,
    MetadataGalileoEphemeris: metadata_Galileo_ephemeris_to_ros,
    MetadataImu: metadata_IMU_to_ros,
    MetadataGeneric: metadata_generic_to_ros,
    MetadataImageFeatures: metadata_image_features_to_ros,
    MetadataMagneticField: metadata_magnetic_field_to_ros,
    MetadataSatnavObs: metadata_satnav_obs_to_ros,
    MeasurementImu: measurement_IMU_to_ros,
    MeasurementTdoa1Tx2Rx: measurement_TDOA_1Tx_2Rx_to_ros,
    MeasurementTdoa2Tx1Rx: measurement_TDOA_2Tx_1Rx_to_ros,
    MeasurementAccumulatedDistanceTraveled: measurement_accumulated_distance_traveled_to_ros,
    MeasurementAltitude: measurement_altitude_to_ros,
    MeasurementAngularVelocity: measurement_angular_velocity_to_ros,
    MeasurementAngularVelocity1D: measurement_angular_velocity_1d_to_ros,
    MeasurementAttitude2D: measurement_attitude_2d_to_ros,
    MeasurementAttitude3D: measurement_attitude_3d_to_ros,
    MeasurementBarometer: measurement_barometer_to_ros,
    MeasurementDeltaPosition: measurement_delta_position_to_ros,
    MeasurementDeltaRange: measurement_delta_range_to_ros,
    MeasurementDeltaRangeToPoint: measurement_delta_range_to_point_to_ros,
    MeasurementDirection2DToPoints: measurement_direction_2d_to_points_to_ros,
    MeasurementDirection3DToPoints: measurement_direction_3d_to_points_to_ros,
    MeasurementDirectionOfMotion2D: measurement_direction_of_motion_2d_to_ros,
    MeasurementDirectionOfMotion3D: measurement_direction_of_motion_3d_to_ros,
    MeasurementFrequencyDifference: measurement_frequency_difference_to_ros,
    MeasurementHeading: measurement_heading_to_ros,
    MeasurementImage: measurement_image_to_ros,
    MeasurementMagneticField: measurement_magnetic_field_to_ros,
    MeasurementMagneticFieldMagnitude: measurement_magnetic_field_magnitude_to_ros,
    MeasurementPosition: measurement_position_to_ros,
    MeasurementPositionAttitude: measurement_position_attitude_to_ros,
    MeasurementPositionVelocityAttitude: measurement_position_velocity_attitude_to_ros,
    MeasurementRangeRateToPoint: measurement_range_rate_to_point_to_ros,
    MeasurementRangeToPoint: measurement_range_to_point_to_ros,
    MeasurementSatnav: measurement_satnav_to_ros,
    MeasurementSatnavSubframe: measurement_satnav_subframe_to_ros,
    MeasurementSatnavWithSvData: measurement_satnav_with_sv_data_to_ros,
    MeasurementSpecificForce1D: measurement_specific_force_1d_to_ros,
    MeasurementSpeed: measurement_speed_to_ros,
    MeasurementTemperature: measurement_temperature_to_ros,
    MeasurementTime: measurement_time_to_ros,
    MeasurementTimeDifference: measurement_time_difference_to_ros,
    MeasurementTimeFrequencyDifference: measurement_time_frequency_difference_to_ros,
    MeasurementVelocity: measurement_velocity_to_ros,
}

from_ros_map: dict[type[RosMsg], Callable] = {
    RosMetadataBeidouEphemeris: ros_to_metadata_BeiDou_ephemeris,
    RosMetadataGlonassEphemeris: ros_to_metadata_GLONASS_ephemeris,
    RosMetadataGpsCnavEphemeris: ros_to_metadata_GPS_Cnav_ephemeris,
    RosMetadataGpsLnavEphemeris: ros_to_metadata_GPS_Lnav_ephemeris,
    RosMetadataGpsMnavEphemeris: ros_to_metadata_GPS_Mnav_ephemeris,
    RosMetadataGpsIonoUtcParameters: ros_to_metadata_GPS_iono_utc_parameters,
    RosMetadataGalileoEphemeris: ros_to_metadata_Galileo_ephemeris,
    RosMetadataImu: ros_to_metadata_IMU,
    RosMetadataGeneric: ros_to_metadata_generic,
    RosMetadataImageFeatures: ros_to_metadata_image_features,
    RosMetadataMagneticField: ros_to_metadata_magnetic_field,
    RosMetadataSatnavObs: ros_to_metadata_satnav_obs,
    RosMeasurementImu: ros_to_measurement_IMU,
    RosMeasurementTdoa1Tx2Rx: ros_to_measurement_TDOA_1Tx_2Rx,
    RosMeasurementTdoa2Tx1Rx: ros_to_measurement_TDOA_2Tx_1Rx,
    RosMeasurementAccumulatedDistanceTraveled: ros_to_measurement_accumulated_distance_traveled,
    RosMeasurementAltitude: ros_to_measurement_altitude,
    RosMeasurementAngularVelocity: ros_to_measurement_angular_velocity,
    RosMeasurementAngularVelocity1D: ros_to_measurement_angular_velocity_1d,
    RosMeasurementAttitude2D: ros_to_measurement_attitude_2d,
    RosMeasurementAttitude3D: ros_to_measurement_attitude_3d,
    RosMeasurementBarometer: ros_to_measurement_barometer,
    RosMeasurementDeltaPosition: ros_to_measurement_delta_position,
    RosMeasurementDeltaRange: ros_to_measurement_delta_range,
    RosMeasurementDeltaRangeToPoint: ros_to_measurement_delta_range_to_point,
    RosMeasurementDirection2DToPoints: ros_to_measurement_direction_2d_to_points,
    RosMeasurementDirection3DToPoints: ros_to_measurement_direction_3d_to_points,
    RosMeasurementDirectionOfMotion2D: ros_to_measurement_direction_of_motion_2d,
    RosMeasurementDirectionOfMotion3D: ros_to_measurement_direction_of_motion_3d,
    RosMeasurementFrequencyDifference: ros_to_measurement_frequency_difference,
    RosMeasurementHeading: ros_to_measurement_heading,
    RosMeasurementImage: ros_to_measurement_image,
    RosMeasurementMagneticField: ros_to_measurement_magnetic_field,
    RosMeasurementMagneticFieldMagnitude: ros_to_measurement_magnetic_field_magnitude,
    RosMeasurementPosition: ros_to_measurement_position,
    RosMeasurementPositionAttitude: ros_to_measurement_position_attitude,
    RosMeasurementPositionVelocityAttitude: ros_to_measurement_position_velocity_attitude,
    RosMeasurementRangeRateToPoint: ros_to_measurement_range_rate_to_point,
    RosMeasurementRangeToPoint: ros_to_measurement_range_to_point,
    RosMeasurementSatnav: ros_to_measurement_satnav,
    RosMeasurementSatnavSubframe: ros_to_measurement_satnav_subframe,
    RosMeasurementSatnavWithSvData: ros_to_measurement_satnav_with_sv_data,
    RosMeasurementSpecificForce1D: ros_to_measurement_specific_force_1d,
    RosMeasurementSpeed: ros_to_measurement_speed,
    RosMeasurementTemperature: ros_to_measurement_temperature,
    RosMeasurementTime: ros_to_measurement_time,
    RosMeasurementTimeDifference: ros_to_measurement_time_difference,
    RosMeasurementTimeFrequencyDifference: ros_to_measurement_time_frequency_difference,
    RosMeasurementVelocity: ros_to_measurement_velocity,
}
