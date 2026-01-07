
#include <pybind11/eval.h>
#include <pybind11/native_enum.h>
#include <pybind11/operators.h>
#include <pybind11/pybind11.h>  // Pybind11 import to define Python bindings
#include <pybind11/stl.h>

#include <xtensor-python/pyarray.hpp>  // Numpy bindings
#include <xtensor-python/pytensor.hpp>

#include "aspn_xtensor.hpp"

// Used to pass parameter types by grouping a comma-separated collection of arguments to be passed
// in as a single macro argument. Can be passed to constructor macros or overloaded function macros
#define PARAMS(...) __VA_ARGS__

using namespace aspn_xtensor;
namespace py = pybind11;

void add_bindings(pybind11::module& m) {
	m.doc() = "ASPN C++ Xtensor";

	py::native_enum<Aspn23TypeDirection2DToPointReference>(
	    m, "AspnTypeDirection2DToPointReference", "enum.Enum")
	    .value(
	        "ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO",
	        Aspn23TypeDirection2DToPointReference::ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_TO)
	    .value("ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM",
	           Aspn23TypeDirection2DToPointReference::
	               ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_NE_FROM)
	    .value("ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION",
	           Aspn23TypeDirection2DToPointReference::
	               ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_ELEVATION)
	    .value(
	        "ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR",
	        Aspn23TypeDirection2DToPointReference::ASPN_TYPE_DIRECTION_2D_TO_POINT_REFERENCE_SENSOR)
	    .finalize();
	py::native_enum<Aspn23TypeDirection2DToPointErrorModel>(
	    m, "AspnTypeDirection2DToPointErrorModel", "enum.Enum")
	    .value("ASPN_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE",
	           Aspn23TypeDirection2DToPointErrorModel::
	               ASPN_TYPE_DIRECTION_2D_TO_POINT_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<TypeDirection2DToPoint, py::smart_holder>(m, "TypeDirection2DToPoint")
	    .def(py::init<PARAMS(TypeRemotePoint,
	                         Aspn23TypeDirection2DToPointReference,
	                         double,
	                         double,
	                         bool,
	                         TypeImageFeature,
	                         Aspn23TypeDirection2DToPointErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_remote_point", &TypeDirection2DToPoint::get_remote_point)
	    .def("set_remote_point", &TypeDirection2DToPoint::set_remote_point)
	    .def("get_reference", &TypeDirection2DToPoint::get_reference)
	    .def("set_reference", &TypeDirection2DToPoint::set_reference)
	    .def("get_obs", &TypeDirection2DToPoint::get_obs)
	    .def("set_obs", &TypeDirection2DToPoint::set_obs)
	    .def("get_variance", &TypeDirection2DToPoint::get_variance)
	    .def("set_variance", &TypeDirection2DToPoint::set_variance)
	    .def("get_has_observation_characteristics",
	         &TypeDirection2DToPoint::get_has_observation_characteristics)
	    .def("set_has_observation_characteristics",
	         &TypeDirection2DToPoint::set_has_observation_characteristics)
	    .def("get_observation_characteristics",
	         &TypeDirection2DToPoint::get_observation_characteristics)
	    .def("set_observation_characteristics",
	         &TypeDirection2DToPoint::set_observation_characteristics)
	    .def("get_error_model", &TypeDirection2DToPoint::get_error_model)
	    .def("set_error_model", &TypeDirection2DToPoint::set_error_model)
	    .def("get_error_model_params", &TypeDirection2DToPoint::get_error_model_params)
	    .def("set_error_model_params", &TypeDirection2DToPoint::set_error_model_params)
	    .def("get_integrity", &TypeDirection2DToPoint::get_integrity)
	    .def("set_integrity", &TypeDirection2DToPoint::set_integrity);

	py::native_enum<Aspn23TypeDirection3DToPointReferenceFrame>(
	    m, "AspnTypeDirection3DToPointReferenceFrame", "enum.Enum")
	    .value("ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL",
	           Aspn23TypeDirection3DToPointReferenceFrame::
	               ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_AZ_EL)
	    .value("ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL",
	           Aspn23TypeDirection3DToPointReferenceFrame::
	               ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_PIXEL)
	    .value("ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE",
	           Aspn23TypeDirection3DToPointReferenceFrame::
	               ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_NORMALIZED_IMAGE)
	    .value("ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE",
	           Aspn23TypeDirection3DToPointReferenceFrame::
	               ASPN_TYPE_DIRECTION_3D_TO_POINT_REFERENCE_FRAME_SINE_SPACE)
	    .finalize();
	py::native_enum<Aspn23TypeDirection3DToPointErrorModel>(
	    m, "AspnTypeDirection3DToPointErrorModel", "enum.Enum")
	    .value("ASPN_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE",
	           Aspn23TypeDirection3DToPointErrorModel::
	               ASPN_TYPE_DIRECTION_3D_TO_POINT_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<TypeDirection3DToPoint, py::smart_holder>(m, "TypeDirection3DToPoint")
	    .def(py::init<PARAMS(TypeRemotePoint,
	                         Aspn23TypeDirection3DToPointReferenceFrame,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         bool,
	                         TypeImageFeature,
	                         Aspn23TypeDirection3DToPointErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_remote_point", &TypeDirection3DToPoint::get_remote_point)
	    .def("set_remote_point", &TypeDirection3DToPoint::set_remote_point)
	    .def("get_reference_frame", &TypeDirection3DToPoint::get_reference_frame)
	    .def("set_reference_frame", &TypeDirection3DToPoint::set_reference_frame)
	    .def("get_obs", &TypeDirection3DToPoint::get_obs)
	    .def("set_obs", &TypeDirection3DToPoint::set_obs)
	    .def("get_covariance", &TypeDirection3DToPoint::get_covariance)
	    .def("set_covariance", &TypeDirection3DToPoint::set_covariance)
	    .def("get_has_observation_characteristics",
	         &TypeDirection3DToPoint::get_has_observation_characteristics)
	    .def("set_has_observation_characteristics",
	         &TypeDirection3DToPoint::set_has_observation_characteristics)
	    .def("get_observation_characteristics",
	         &TypeDirection3DToPoint::get_observation_characteristics)
	    .def("set_observation_characteristics",
	         &TypeDirection3DToPoint::set_observation_characteristics)
	    .def("get_error_model", &TypeDirection3DToPoint::get_error_model)
	    .def("set_error_model", &TypeDirection3DToPoint::set_error_model)
	    .def("get_error_model_params", &TypeDirection3DToPoint::get_error_model_params)
	    .def("set_error_model_params", &TypeDirection3DToPoint::set_error_model_params)
	    .def("get_integrity", &TypeDirection3DToPoint::get_integrity)
	    .def("set_integrity", &TypeDirection3DToPoint::set_integrity);

	py::class_<TypeHeader, py::smart_holder>(m, "TypeHeader")
	    .def(py::init<PARAMS(Aspn23MessageType, uint32_t, uint64_t, uint32_t, uint16_t)>())
	    .def("get_message_type", &TypeHeader::get_message_type)
	    .def("set_message_type", &TypeHeader::set_message_type)
	    .def("get_vendor_id", &TypeHeader::get_vendor_id)
	    .def("set_vendor_id", &TypeHeader::set_vendor_id)
	    .def("get_device_id", &TypeHeader::get_device_id)
	    .def("set_device_id", &TypeHeader::set_device_id)
	    .def("get_context_id", &TypeHeader::get_context_id)
	    .def("set_context_id", &TypeHeader::set_context_id)
	    .def("get_sequence_id", &TypeHeader::get_sequence_id)
	    .def("set_sequence_id", &TypeHeader::set_sequence_id);

	py::class_<TypeImageFeature, py::smart_holder>(m, "TypeImageFeature")
	    .def(py::init<PARAMS(double, double, double, uint16_t, uint16_t, xt::pyarray<uint8_t>)>())
	    .def("get_response", &TypeImageFeature::get_response)
	    .def("set_response", &TypeImageFeature::set_response)
	    .def("get_orientation", &TypeImageFeature::get_orientation)
	    .def("set_orientation", &TypeImageFeature::set_orientation)
	    .def("get_size", &TypeImageFeature::get_size)
	    .def("set_size", &TypeImageFeature::set_size)
	    .def("get_class_id", &TypeImageFeature::get_class_id)
	    .def("set_class_id", &TypeImageFeature::set_class_id)
	    .def("get_octave", &TypeImageFeature::get_octave)
	    .def("set_octave", &TypeImageFeature::set_octave)
	    .def("get_descriptor", &TypeImageFeature::get_descriptor)
	    .def("set_descriptor", &TypeImageFeature::set_descriptor);

	py::class_<TypeIntegrity, py::smart_holder>(m, "TypeIntegrity")
	    .def(py::init<PARAMS(uint8_t, double)>())
	    .def("get_integrity_method", &TypeIntegrity::get_integrity_method)
	    .def("set_integrity_method", &TypeIntegrity::set_integrity_method)
	    .def("get_integrity_value", &TypeIntegrity::get_integrity_value)
	    .def("set_integrity_value", &TypeIntegrity::set_integrity_value);

	py::class_<TypeKeplerOrbit, py::smart_holder>(m, "TypeKeplerOrbit")
	    .def(py::init<PARAMS(double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double)>())
	    .def("get_m_0", &TypeKeplerOrbit::get_m_0)
	    .def("set_m_0", &TypeKeplerOrbit::set_m_0)
	    .def("get_delta_n", &TypeKeplerOrbit::get_delta_n)
	    .def("set_delta_n", &TypeKeplerOrbit::set_delta_n)
	    .def("get_e", &TypeKeplerOrbit::get_e)
	    .def("set_e", &TypeKeplerOrbit::set_e)
	    .def("get_sqrt_a", &TypeKeplerOrbit::get_sqrt_a)
	    .def("set_sqrt_a", &TypeKeplerOrbit::set_sqrt_a)
	    .def("get_omega_0", &TypeKeplerOrbit::get_omega_0)
	    .def("set_omega_0", &TypeKeplerOrbit::set_omega_0)
	    .def("get_i_0", &TypeKeplerOrbit::get_i_0)
	    .def("set_i_0", &TypeKeplerOrbit::set_i_0)
	    .def("get_i_dot", &TypeKeplerOrbit::get_i_dot)
	    .def("set_i_dot", &TypeKeplerOrbit::set_i_dot)
	    .def("get_omega", &TypeKeplerOrbit::get_omega)
	    .def("set_omega", &TypeKeplerOrbit::set_omega)
	    .def("get_omega_dot", &TypeKeplerOrbit::get_omega_dot)
	    .def("set_omega_dot", &TypeKeplerOrbit::set_omega_dot)
	    .def("get_c_uc", &TypeKeplerOrbit::get_c_uc)
	    .def("set_c_uc", &TypeKeplerOrbit::set_c_uc)
	    .def("get_c_us", &TypeKeplerOrbit::get_c_us)
	    .def("set_c_us", &TypeKeplerOrbit::set_c_us)
	    .def("get_c_rc", &TypeKeplerOrbit::get_c_rc)
	    .def("set_c_rc", &TypeKeplerOrbit::set_c_rc)
	    .def("get_c_rs", &TypeKeplerOrbit::get_c_rs)
	    .def("set_c_rs", &TypeKeplerOrbit::set_c_rs)
	    .def("get_c_ic", &TypeKeplerOrbit::get_c_ic)
	    .def("set_c_ic", &TypeKeplerOrbit::set_c_ic)
	    .def("get_c_is", &TypeKeplerOrbit::get_c_is)
	    .def("set_c_is", &TypeKeplerOrbit::set_c_is)
	    .def("get_t_oe", &TypeKeplerOrbit::get_t_oe)
	    .def("set_t_oe", &TypeKeplerOrbit::set_t_oe);

	py::class_<TypeMetadataheader, py::smart_holder>(m, "TypeMetadataheader")
	    .def(py::init<PARAMS(TypeHeader, char*, double, uint8_t, uint8_t)>())
	    .def("get_header", &TypeMetadataheader::get_header)
	    .def("set_header", &TypeMetadataheader::set_header)
	    .def("get_sensor_description", &TypeMetadataheader::get_sensor_description)
	    .def("set_sensor_description", &TypeMetadataheader::set_sensor_description)
	    .def("get_delta_t_nom", &TypeMetadataheader::get_delta_t_nom)
	    .def("set_delta_t_nom", &TypeMetadataheader::set_delta_t_nom)
	    .def("get_timestamp_clock_id", &TypeMetadataheader::get_timestamp_clock_id)
	    .def("set_timestamp_clock_id", &TypeMetadataheader::set_timestamp_clock_id)
	    .def("get_digits_of_precision", &TypeMetadataheader::get_digits_of_precision)
	    .def("set_digits_of_precision", &TypeMetadataheader::set_digits_of_precision);

	py::class_<TypeMounting, py::smart_holder>(m, "TypeMounting")
	    .def(py::init<PARAMS(xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>)>())
	    .def("get_lever_arm", &TypeMounting::get_lever_arm)
	    .def("set_lever_arm", &TypeMounting::set_lever_arm)
	    .def("get_lever_arm_sigma", &TypeMounting::get_lever_arm_sigma)
	    .def("set_lever_arm_sigma", &TypeMounting::set_lever_arm_sigma)
	    .def("get_orientation_quaternion", &TypeMounting::get_orientation_quaternion)
	    .def("set_orientation_quaternion", &TypeMounting::set_orientation_quaternion)
	    .def("get_orientation_tilt_error_covariance",
	         &TypeMounting::get_orientation_tilt_error_covariance)
	    .def("set_orientation_tilt_error_covariance",
	         &TypeMounting::set_orientation_tilt_error_covariance);

	py::native_enum<Aspn23TypeRemotePointPositionReferenceFrame>(
	    m, "AspnTypeRemotePointPositionReferenceFrame", "enum.Enum")
	    .value("ASPN_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE",
	           Aspn23TypeRemotePointPositionReferenceFrame::
	               ASPN_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_NONE)
	    .value("ASPN_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC",
	           Aspn23TypeRemotePointPositionReferenceFrame::
	               ASPN_TYPE_REMOTE_POINT_POSITION_REFERENCE_FRAME_GEODETIC)
	    .finalize();

	py::class_<TypeRemotePoint, py::smart_holder>(m, "TypeRemotePoint")
	    .def(py::init<PARAMS(uint8_t,
	                         uint32_t,
	                         Aspn23TypeRemotePointPositionReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>)>())
	    .def("get_included_terms", &TypeRemotePoint::get_included_terms)
	    .def("set_included_terms", &TypeRemotePoint::set_included_terms)
	    .def("get_id", &TypeRemotePoint::get_id)
	    .def("set_id", &TypeRemotePoint::set_id)
	    .def("get_position_reference_frame", &TypeRemotePoint::get_position_reference_frame)
	    .def("set_position_reference_frame", &TypeRemotePoint::set_position_reference_frame)
	    .def("get_position1", &TypeRemotePoint::get_position1)
	    .def("set_position1", &TypeRemotePoint::set_position1)
	    .def("get_position2", &TypeRemotePoint::get_position2)
	    .def("set_position2", &TypeRemotePoint::set_position2)
	    .def("get_position3", &TypeRemotePoint::get_position3)
	    .def("set_position3", &TypeRemotePoint::set_position3)
	    .def("get_position_covariance", &TypeRemotePoint::get_position_covariance)
	    .def("set_position_covariance", &TypeRemotePoint::set_position_covariance);

	py::class_<TypeSatnavClock, py::smart_holder>(m, "TypeSatnavClock")
	    .def(py::init<PARAMS(double, double, double, double)>())
	    .def("get_t_oc", &TypeSatnavClock::get_t_oc)
	    .def("set_t_oc", &TypeSatnavClock::set_t_oc)
	    .def("get_af_0", &TypeSatnavClock::get_af_0)
	    .def("set_af_0", &TypeSatnavClock::set_af_0)
	    .def("get_af_1", &TypeSatnavClock::get_af_1)
	    .def("set_af_1", &TypeSatnavClock::set_af_1)
	    .def("get_af_2", &TypeSatnavClock::get_af_2)
	    .def("set_af_2", &TypeSatnavClock::set_af_2);

	py::native_enum<Aspn23TypeSatnavObsPseudorangeRateType>(
	    m, "AspnTypeSatnavObsPseudorangeRateType", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER",
	           Aspn23TypeSatnavObsPseudorangeRateType::
	               ASPN_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DOPPLER)
	    .value("ASPN_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE",
	           Aspn23TypeSatnavObsPseudorangeRateType::
	               ASPN_TYPE_SATNAV_OBS_PSEUDORANGE_RATE_TYPE_PSR_RATE_DELTA_RANGE)
	    .finalize();
	py::native_enum<Aspn23TypeSatnavObsIonoCorrectionSource>(
	    m, "AspnTypeSatnavObsIonoCorrectionSource", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN",
	           Aspn23TypeSatnavObsIonoCorrectionSource::
	               ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_UNKNOWN)
	    .value("ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED",
	           Aspn23TypeSatnavObsIonoCorrectionSource::
	               ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MODELED)
	    .value("ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED",
	           Aspn23TypeSatnavObsIonoCorrectionSource::
	               ASPN_TYPE_SATNAV_OBS_IONO_CORRECTION_SOURCE_MEASURED)
	    .finalize();

	py::class_<TypeSatnavObs, py::smart_holder>(m, "TypeSatnavObs")
	    .def(py::init<PARAMS(TypeSatnavSatelliteSystem,
	                         TypeSatnavSignalDescriptor,
	                         int16_t,
	                         double,
	                         double,
	                         float,
	                         Aspn23TypeSatnavObsPseudorangeRateType,
	                         double,
	                         float,
	                         double,
	                         float,
	                         float,
	                         int32_t,
	                         Aspn23TypeSatnavObsIonoCorrectionSource,
	                         bool,
	                         bool,
	                         bool,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_satellite_system", &TypeSatnavObs::get_satellite_system)
	    .def("set_satellite_system", &TypeSatnavObs::set_satellite_system)
	    .def("get_signal_descriptor", &TypeSatnavObs::get_signal_descriptor)
	    .def("set_signal_descriptor", &TypeSatnavObs::set_signal_descriptor)
	    .def("get_prn", &TypeSatnavObs::get_prn)
	    .def("set_prn", &TypeSatnavObs::set_prn)
	    .def("get_frequency", &TypeSatnavObs::get_frequency)
	    .def("set_frequency", &TypeSatnavObs::set_frequency)
	    .def("get_pseudorange", &TypeSatnavObs::get_pseudorange)
	    .def("set_pseudorange", &TypeSatnavObs::set_pseudorange)
	    .def("get_pseudorange_variance", &TypeSatnavObs::get_pseudorange_variance)
	    .def("set_pseudorange_variance", &TypeSatnavObs::set_pseudorange_variance)
	    .def("get_pseudorange_rate_type", &TypeSatnavObs::get_pseudorange_rate_type)
	    .def("set_pseudorange_rate_type", &TypeSatnavObs::set_pseudorange_rate_type)
	    .def("get_pseudorange_rate", &TypeSatnavObs::get_pseudorange_rate)
	    .def("set_pseudorange_rate", &TypeSatnavObs::set_pseudorange_rate)
	    .def("get_pseudorange_rate_variance", &TypeSatnavObs::get_pseudorange_rate_variance)
	    .def("set_pseudorange_rate_variance", &TypeSatnavObs::set_pseudorange_rate_variance)
	    .def("get_carrier_phase", &TypeSatnavObs::get_carrier_phase)
	    .def("set_carrier_phase", &TypeSatnavObs::set_carrier_phase)
	    .def("get_carrier_phase_variance", &TypeSatnavObs::get_carrier_phase_variance)
	    .def("set_carrier_phase_variance", &TypeSatnavObs::set_carrier_phase_variance)
	    .def("get_c_n0", &TypeSatnavObs::get_c_n0)
	    .def("set_c_n0", &TypeSatnavObs::set_c_n0)
	    .def("get_lock_count", &TypeSatnavObs::get_lock_count)
	    .def("set_lock_count", &TypeSatnavObs::set_lock_count)
	    .def("get_iono_correction_source", &TypeSatnavObs::get_iono_correction_source)
	    .def("set_iono_correction_source", &TypeSatnavObs::set_iono_correction_source)
	    .def("get_iono_correction_applied", &TypeSatnavObs::get_iono_correction_applied)
	    .def("set_iono_correction_applied", &TypeSatnavObs::set_iono_correction_applied)
	    .def("get_tropo_correction_applied", &TypeSatnavObs::get_tropo_correction_applied)
	    .def("set_tropo_correction_applied", &TypeSatnavObs::set_tropo_correction_applied)
	    .def("get_signal_bias_correction_applied",
	         &TypeSatnavObs::get_signal_bias_correction_applied)
	    .def("set_signal_bias_correction_applied",
	         &TypeSatnavObs::set_signal_bias_correction_applied)
	    .def("get_integrity", &TypeSatnavObs::get_integrity)
	    .def("set_integrity", &TypeSatnavObs::set_integrity);

	py::native_enum<Aspn23TypeSatnavSatelliteSystemSatelliteSystem>(
	    m, "AspnTypeSatnavSatelliteSystemSatelliteSystem", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GPS)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GALILEO)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_GLONASS)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_BEIDOU)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_SBAS)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_QZSS)
	    .value("ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS",
	           Aspn23TypeSatnavSatelliteSystemSatelliteSystem::
	               ASPN_TYPE_SATNAV_SATELLITE_SYSTEM_SATELLITE_SYSTEM_SYS_IRNSS)
	    .finalize();

	py::class_<TypeSatnavSatelliteSystem, py::smart_holder>(m, "TypeSatnavSatelliteSystem")
	    .def(py::init<PARAMS(Aspn23TypeSatnavSatelliteSystemSatelliteSystem)>())
	    .def("get_satellite_system", &TypeSatnavSatelliteSystem::get_satellite_system)
	    .def("set_satellite_system", &TypeSatnavSatelliteSystem::set_satellite_system);

	py::native_enum<Aspn23TypeSatnavSignalDescriptorSignalDescriptor>(
	    m, "AspnTypeSatnavSignalDescriptorSignalDescriptor", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1C)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1S)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1L)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1W)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1N)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2C)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2S)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2L)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2W)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2N)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4A)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4B)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L4X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6A)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6B)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L3X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1B)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6C)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Z)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5Z)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6S)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6L)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6E)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Z)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L7Z)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L8P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6I)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6Q)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6D)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L6P)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5A)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5B)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L5C)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9A)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9B)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9C)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L9X)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1Y)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L1M)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2Y)
	    .value("ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M",
	           Aspn23TypeSatnavSignalDescriptorSignalDescriptor::
	               ASPN_TYPE_SATNAV_SIGNAL_DESCRIPTOR_SIGNAL_DESCRIPTOR_L2M)
	    .finalize();

	py::class_<TypeSatnavSignalDescriptor, py::smart_holder>(m, "TypeSatnavSignalDescriptor")
	    .def(py::init<PARAMS(Aspn23TypeSatnavSignalDescriptorSignalDescriptor)>())
	    .def("get_signal_descriptor", &TypeSatnavSignalDescriptor::get_signal_descriptor)
	    .def("set_signal_descriptor", &TypeSatnavSignalDescriptor::set_signal_descriptor);

	py::native_enum<Aspn23TypeSatnavSvDataEphemerisType>(
	    m, "AspnTypeSatnavSvDataEphemerisType", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM",
	           Aspn23TypeSatnavSvDataEphemerisType::
	               ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_SET_BY_SYSTEM)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV",
	        Aspn23TypeSatnavSvDataEphemerisType::ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_LNAV)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV",
	        Aspn23TypeSatnavSvDataEphemerisType::ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_CNAV)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV",
	        Aspn23TypeSatnavSvDataEphemerisType::ASPN_TYPE_SATNAV_SV_DATA_EPHEMERIS_TYPE_GPS_MNAV)
	    .finalize();
	py::native_enum<Aspn23TypeSatnavSvDataCoordinateFrame>(
	    m, "AspnTypeSatnavSvDataCoordinateFrame", "enum.Enum")
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF",
	        Aspn23TypeSatnavSvDataCoordinateFrame::ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ITRF)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF",
	        Aspn23TypeSatnavSvDataCoordinateFrame::ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_ECEF)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF",
	        Aspn23TypeSatnavSvDataCoordinateFrame::ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_GTRF)
	    .value(
	        "ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90",
	        Aspn23TypeSatnavSvDataCoordinateFrame::ASPN_TYPE_SATNAV_SV_DATA_COORDINATE_FRAME_PZ90)
	    .finalize();
	py::native_enum<Aspn23TypeSatnavSvDataGroupDelayEnum>(
	    m, "AspnTypeSatnavSvDataGroupDelayEnum", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV",
	           Aspn23TypeSatnavSvDataGroupDelayEnum::
	               ASPN_TYPE_SATNAV_SV_DATA_GROUP_DELAY_ENUM_TGD_LNAV)
	    .finalize();

	py::class_<TypeSatnavSvData, py::smart_holder>(m, "TypeSatnavSvData")
	    .def(py::init<PARAMS(int16_t,
	                         TypeSatnavSatelliteSystem,
	                         Aspn23TypeSatnavSvDataEphemerisType,
	                         TypeSatnavTime,
	                         Aspn23TypeSatnavSvDataCoordinateFrame,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         double,
	                         double,
	                         Aspn23TypeSatnavSvDataGroupDelayEnum,
	                         xt::pyarray<float>)>())
	    .def("get_prn", &TypeSatnavSvData::get_prn)
	    .def("set_prn", &TypeSatnavSvData::set_prn)
	    .def("get_satellite_system", &TypeSatnavSvData::get_satellite_system)
	    .def("set_satellite_system", &TypeSatnavSvData::set_satellite_system)
	    .def("get_ephemeris_type", &TypeSatnavSvData::get_ephemeris_type)
	    .def("set_ephemeris_type", &TypeSatnavSvData::set_ephemeris_type)
	    .def("get_sv_data_time", &TypeSatnavSvData::get_sv_data_time)
	    .def("set_sv_data_time", &TypeSatnavSvData::set_sv_data_time)
	    .def("get_coordinate_frame", &TypeSatnavSvData::get_coordinate_frame)
	    .def("set_coordinate_frame", &TypeSatnavSvData::set_coordinate_frame)
	    .def("get_sv_pos", &TypeSatnavSvData::get_sv_pos)
	    .def("set_sv_pos", &TypeSatnavSvData::set_sv_pos)
	    .def("get_sv_vel", &TypeSatnavSvData::get_sv_vel)
	    .def("set_sv_vel", &TypeSatnavSvData::set_sv_vel)
	    .def("get_sv_clock_bias", &TypeSatnavSvData::get_sv_clock_bias)
	    .def("set_sv_clock_bias", &TypeSatnavSvData::set_sv_clock_bias)
	    .def("get_sv_clock_drift", &TypeSatnavSvData::get_sv_clock_drift)
	    .def("set_sv_clock_drift", &TypeSatnavSvData::set_sv_clock_drift)
	    .def("get_group_delay_enum", &TypeSatnavSvData::get_group_delay_enum)
	    .def("set_group_delay_enum", &TypeSatnavSvData::set_group_delay_enum)
	    .def("get_group_delay_vector", &TypeSatnavSvData::get_group_delay_vector)
	    .def("set_group_delay_vector", &TypeSatnavSvData::set_group_delay_vector);

	py::native_enum<Aspn23TypeSatnavTimeTimeReference>(
	    m, "AspnTypeSatnavTimeTimeReference", "enum.Enum")
	    .value("ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS",
	           Aspn23TypeSatnavTimeTimeReference::ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GPS)
	    .value("ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO",
	           Aspn23TypeSatnavTimeTimeReference::ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GALILEO)
	    .value("ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU",
	           Aspn23TypeSatnavTimeTimeReference::ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_BEIDOU)
	    .value("ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS",
	           Aspn23TypeSatnavTimeTimeReference::ASPN_TYPE_SATNAV_TIME_TIME_REFERENCE_TIME_GLONASS)
	    .finalize();

	py::class_<TypeSatnavTime, py::smart_holder>(m, "TypeSatnavTime")
	    .def(py::init<PARAMS(uint16_t, double, Aspn23TypeSatnavTimeTimeReference)>())
	    .def("get_week_number", &TypeSatnavTime::get_week_number)
	    .def("set_week_number", &TypeSatnavTime::set_week_number)
	    .def("get_seconds_of_week", &TypeSatnavTime::get_seconds_of_week)
	    .def("set_seconds_of_week", &TypeSatnavTime::set_seconds_of_week)
	    .def("get_time_reference", &TypeSatnavTime::get_time_reference)
	    .def("set_time_reference", &TypeSatnavTime::set_time_reference)
	    .def(py::self + double())
	    .def(py::self - double())
	    .def(py::self - py::self)
	    .def(py::self == py::self)
	    .def(py::self != py::self)
	    .def(py::self > py::self)
	    .def(py::self >= py::self)
	    .def(py::self < py::self)
	    .def(py::self <= py::self)
	    .def("__repr__", [](const TypeSatnavTime& t) {
		    std::ostringstream ss;
		    ss << t;
		    return ss.str();
	    });

	py::class_<TypeTimestamp, py::smart_holder>(m, "TypeTimestamp")
	    .def(py::init<PARAMS(int64_t)>())
	    .def("get_elapsed_nsec", &TypeTimestamp::get_elapsed_nsec)
	    .def("set_elapsed_nsec", &TypeTimestamp::set_elapsed_nsec)
	    .def(py::self + py::self)
	    .def(py::self + double())
	    .def(double() + py::self)
	    .def(py::self - py::self)
	    .def(py::self - double())
	    .def(double() - py::self)
	    .def(py::self == py::self)
	    .def(py::self != py::self)
	    .def(py::self < py::self)
	    .def(py::self > py::self)
	    .def(py::self <= py::self)
	    .def(py::self >= py::self)
	    .def(py::self == double())
	    .def(py::self != double())
	    .def(py::self < double())
	    .def(py::self > double())
	    .def(py::self <= double())
	    .def(py::self >= double())
	    .def(py::self == int())
	    .def(py::self != int())
	    .def(py::self < int())
	    .def(py::self > int())
	    .def(py::self <= int())
	    .def(py::self >= int())
	    .def(double() == py::self)
	    .def(double() != py::self)
	    .def(double() < py::self)
	    .def(double() > py::self)
	    .def(double() <= py::self)
	    .def(double() >= py::self)
	    .def(int() == py::self)
	    .def(int() != py::self)
	    .def(int() < py::self)
	    .def(int() > py::self)
	    .def(int() <= py::self)
	    .def(int() >= py::self)
	    .def("__repr__", [](const TypeTimestamp& t) {
		    std::ostringstream ss;
		    ss << t;
		    return ss.str();
	    });

	py::class_<MetadataBeidouEphemeris, TypeHeader, py::smart_holder>(m, "MetadataBeidouEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         int32_t,
	                         TypeSatnavClock,
	                         TypeKeplerOrbit,
	                         double,
	                         double,
	                         int16_t,
	                         int16_t)>())
	    .def("get_info", &MetadataBeidouEphemeris::get_info)
	    .def("set_info", &MetadataBeidouEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataBeidouEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataBeidouEphemeris::set_time_of_validity)
	    .def("get_prn", &MetadataBeidouEphemeris::get_prn)
	    .def("set_prn", &MetadataBeidouEphemeris::set_prn)
	    .def("get_clock", &MetadataBeidouEphemeris::get_clock)
	    .def("set_clock", &MetadataBeidouEphemeris::set_clock)
	    .def("get_orbit", &MetadataBeidouEphemeris::get_orbit)
	    .def("set_orbit", &MetadataBeidouEphemeris::set_orbit)
	    .def("get_t_gd1", &MetadataBeidouEphemeris::get_t_gd1)
	    .def("set_t_gd1", &MetadataBeidouEphemeris::set_t_gd1)
	    .def("get_t_gd2", &MetadataBeidouEphemeris::get_t_gd2)
	    .def("set_t_gd2", &MetadataBeidouEphemeris::set_t_gd2)
	    .def("get_aodc", &MetadataBeidouEphemeris::get_aodc)
	    .def("set_aodc", &MetadataBeidouEphemeris::set_aodc)
	    .def("get_aode", &MetadataBeidouEphemeris::get_aode)
	    .def("set_aode", &MetadataBeidouEphemeris::set_aode);

	py::class_<MetadataGlonassEphemeris, TypeHeader, py::smart_holder>(m,
	                                                                   "MetadataGlonassEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         int32_t,
	                         int32_t,
	                         int32_t,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double)>())
	    .def("get_info", &MetadataGlonassEphemeris::get_info)
	    .def("set_info", &MetadataGlonassEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataGlonassEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGlonassEphemeris::set_time_of_validity)
	    .def("get_slot_number", &MetadataGlonassEphemeris::get_slot_number)
	    .def("set_slot_number", &MetadataGlonassEphemeris::set_slot_number)
	    .def("get_freq_o", &MetadataGlonassEphemeris::get_freq_o)
	    .def("set_freq_o", &MetadataGlonassEphemeris::set_freq_o)
	    .def("get_n_t", &MetadataGlonassEphemeris::get_n_t)
	    .def("set_n_t", &MetadataGlonassEphemeris::set_n_t)
	    .def("get_t_k", &MetadataGlonassEphemeris::get_t_k)
	    .def("set_t_k", &MetadataGlonassEphemeris::set_t_k)
	    .def("get_t_b", &MetadataGlonassEphemeris::get_t_b)
	    .def("set_t_b", &MetadataGlonassEphemeris::set_t_b)
	    .def("get_gamma_n", &MetadataGlonassEphemeris::get_gamma_n)
	    .def("set_gamma_n", &MetadataGlonassEphemeris::set_gamma_n)
	    .def("get_tau_n", &MetadataGlonassEphemeris::get_tau_n)
	    .def("set_tau_n", &MetadataGlonassEphemeris::set_tau_n)
	    .def("get_sv_pos_x", &MetadataGlonassEphemeris::get_sv_pos_x)
	    .def("set_sv_pos_x", &MetadataGlonassEphemeris::set_sv_pos_x)
	    .def("get_sv_vel_x", &MetadataGlonassEphemeris::get_sv_vel_x)
	    .def("set_sv_vel_x", &MetadataGlonassEphemeris::set_sv_vel_x)
	    .def("get_sv_accel_x", &MetadataGlonassEphemeris::get_sv_accel_x)
	    .def("set_sv_accel_x", &MetadataGlonassEphemeris::set_sv_accel_x)
	    .def("get_sv_pos_y", &MetadataGlonassEphemeris::get_sv_pos_y)
	    .def("set_sv_pos_y", &MetadataGlonassEphemeris::set_sv_pos_y)
	    .def("get_sv_vel_y", &MetadataGlonassEphemeris::get_sv_vel_y)
	    .def("set_sv_vel_y", &MetadataGlonassEphemeris::set_sv_vel_y)
	    .def("get_sv_accel_y", &MetadataGlonassEphemeris::get_sv_accel_y)
	    .def("set_sv_accel_y", &MetadataGlonassEphemeris::set_sv_accel_y)
	    .def("get_sv_pos_z", &MetadataGlonassEphemeris::get_sv_pos_z)
	    .def("set_sv_pos_z", &MetadataGlonassEphemeris::set_sv_pos_z)
	    .def("get_sv_vel_z", &MetadataGlonassEphemeris::get_sv_vel_z)
	    .def("set_sv_vel_z", &MetadataGlonassEphemeris::set_sv_vel_z)
	    .def("get_sv_accel_z", &MetadataGlonassEphemeris::get_sv_accel_z)
	    .def("set_sv_accel_z", &MetadataGlonassEphemeris::set_sv_accel_z);

	py::class_<MetadataGpsCnavEphemeris, TypeHeader, py::smart_holder>(m,
	                                                                   "MetadataGpsCnavEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         uint16_t,
	                         int32_t,
	                         TypeSatnavClock,
	                         TypeKeplerOrbit,
	                         double,
	                         uint16_t,
	                         uint8_t,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double)>())
	    .def("get_info", &MetadataGpsCnavEphemeris::get_info)
	    .def("set_info", &MetadataGpsCnavEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataGpsCnavEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGpsCnavEphemeris::set_time_of_validity)
	    .def("get_week_number", &MetadataGpsCnavEphemeris::get_week_number)
	    .def("set_week_number", &MetadataGpsCnavEphemeris::set_week_number)
	    .def("get_prn", &MetadataGpsCnavEphemeris::get_prn)
	    .def("set_prn", &MetadataGpsCnavEphemeris::set_prn)
	    .def("get_clock", &MetadataGpsCnavEphemeris::get_clock)
	    .def("set_clock", &MetadataGpsCnavEphemeris::set_clock)
	    .def("get_orbit", &MetadataGpsCnavEphemeris::get_orbit)
	    .def("set_orbit", &MetadataGpsCnavEphemeris::set_orbit)
	    .def("get_t_gd", &MetadataGpsCnavEphemeris::get_t_gd)
	    .def("set_t_gd", &MetadataGpsCnavEphemeris::set_t_gd)
	    .def("get_iodc", &MetadataGpsCnavEphemeris::get_iodc)
	    .def("set_iodc", &MetadataGpsCnavEphemeris::set_iodc)
	    .def("get_iode", &MetadataGpsCnavEphemeris::get_iode)
	    .def("set_iode", &MetadataGpsCnavEphemeris::set_iode)
	    .def("get_isc_l1_ca", &MetadataGpsCnavEphemeris::get_isc_l1_ca)
	    .def("set_isc_l1_ca", &MetadataGpsCnavEphemeris::set_isc_l1_ca)
	    .def("get_isc_l2_c", &MetadataGpsCnavEphemeris::get_isc_l2_c)
	    .def("set_isc_l2_c", &MetadataGpsCnavEphemeris::set_isc_l2_c)
	    .def("get_isc_l5_i5", &MetadataGpsCnavEphemeris::get_isc_l5_i5)
	    .def("set_isc_l5_i5", &MetadataGpsCnavEphemeris::set_isc_l5_i5)
	    .def("get_isc_l5_q5", &MetadataGpsCnavEphemeris::get_isc_l5_q5)
	    .def("set_isc_l5_q5", &MetadataGpsCnavEphemeris::set_isc_l5_q5)
	    .def("get_delta_a_0", &MetadataGpsCnavEphemeris::get_delta_a_0)
	    .def("set_delta_a_0", &MetadataGpsCnavEphemeris::set_delta_a_0)
	    .def("get_a_dot", &MetadataGpsCnavEphemeris::get_a_dot)
	    .def("set_a_dot", &MetadataGpsCnavEphemeris::set_a_dot);

	py::class_<MetadataGpsLnavEphemeris, TypeHeader, py::smart_holder>(m,
	                                                                   "MetadataGpsLnavEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         uint16_t,
	                         int32_t,
	                         TypeSatnavClock,
	                         TypeKeplerOrbit,
	                         double,
	                         uint16_t,
	                         uint8_t)>())
	    .def("get_info", &MetadataGpsLnavEphemeris::get_info)
	    .def("set_info", &MetadataGpsLnavEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataGpsLnavEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGpsLnavEphemeris::set_time_of_validity)
	    .def("get_week_number", &MetadataGpsLnavEphemeris::get_week_number)
	    .def("set_week_number", &MetadataGpsLnavEphemeris::set_week_number)
	    .def("get_prn", &MetadataGpsLnavEphemeris::get_prn)
	    .def("set_prn", &MetadataGpsLnavEphemeris::set_prn)
	    .def("get_clock", &MetadataGpsLnavEphemeris::get_clock)
	    .def("set_clock", &MetadataGpsLnavEphemeris::set_clock)
	    .def("get_orbit", &MetadataGpsLnavEphemeris::get_orbit)
	    .def("set_orbit", &MetadataGpsLnavEphemeris::set_orbit)
	    .def("get_t_gd", &MetadataGpsLnavEphemeris::get_t_gd)
	    .def("set_t_gd", &MetadataGpsLnavEphemeris::set_t_gd)
	    .def("get_iodc", &MetadataGpsLnavEphemeris::get_iodc)
	    .def("set_iodc", &MetadataGpsLnavEphemeris::set_iodc)
	    .def("get_iode", &MetadataGpsLnavEphemeris::get_iode)
	    .def("set_iode", &MetadataGpsLnavEphemeris::set_iode);

	py::class_<MetadataGpsMnavEphemeris, TypeHeader, py::smart_holder>(m,
	                                                                   "MetadataGpsMnavEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         uint16_t,
	                         int32_t,
	                         TypeSatnavClock,
	                         TypeKeplerOrbit,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double)>())
	    .def("get_info", &MetadataGpsMnavEphemeris::get_info)
	    .def("set_info", &MetadataGpsMnavEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataGpsMnavEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGpsMnavEphemeris::set_time_of_validity)
	    .def("get_week_number", &MetadataGpsMnavEphemeris::get_week_number)
	    .def("set_week_number", &MetadataGpsMnavEphemeris::set_week_number)
	    .def("get_prn", &MetadataGpsMnavEphemeris::get_prn)
	    .def("set_prn", &MetadataGpsMnavEphemeris::set_prn)
	    .def("get_clock", &MetadataGpsMnavEphemeris::get_clock)
	    .def("set_clock", &MetadataGpsMnavEphemeris::set_clock)
	    .def("get_orbit", &MetadataGpsMnavEphemeris::get_orbit)
	    .def("set_orbit", &MetadataGpsMnavEphemeris::set_orbit)
	    .def("get_a_dot", &MetadataGpsMnavEphemeris::get_a_dot)
	    .def("set_a_dot", &MetadataGpsMnavEphemeris::set_a_dot)
	    .def("get_delta_af_0", &MetadataGpsMnavEphemeris::get_delta_af_0)
	    .def("set_delta_af_0", &MetadataGpsMnavEphemeris::set_delta_af_0)
	    .def("get_delta_af_1", &MetadataGpsMnavEphemeris::get_delta_af_1)
	    .def("set_delta_af_1", &MetadataGpsMnavEphemeris::set_delta_af_1)
	    .def("get_delta_gamma", &MetadataGpsMnavEphemeris::get_delta_gamma)
	    .def("set_delta_gamma", &MetadataGpsMnavEphemeris::set_delta_gamma)
	    .def("get_delta_i", &MetadataGpsMnavEphemeris::get_delta_i)
	    .def("set_delta_i", &MetadataGpsMnavEphemeris::set_delta_i)
	    .def("get_delta_omega", &MetadataGpsMnavEphemeris::get_delta_omega)
	    .def("set_delta_omega", &MetadataGpsMnavEphemeris::set_delta_omega)
	    .def("get_delta_a", &MetadataGpsMnavEphemeris::get_delta_a)
	    .def("set_delta_a", &MetadataGpsMnavEphemeris::set_delta_a)
	    .def("get_isc_l1_m_e", &MetadataGpsMnavEphemeris::get_isc_l1_m_e)
	    .def("set_isc_l1_m_e", &MetadataGpsMnavEphemeris::set_isc_l1_m_e)
	    .def("get_isc_l2_m_e", &MetadataGpsMnavEphemeris::get_isc_l2_m_e)
	    .def("set_isc_l2_m_e", &MetadataGpsMnavEphemeris::set_isc_l2_m_e)
	    .def("get_isc_l1_m_s", &MetadataGpsMnavEphemeris::get_isc_l1_m_s)
	    .def("set_isc_l1_m_s", &MetadataGpsMnavEphemeris::set_isc_l1_m_s)
	    .def("get_isc_l2_m_s", &MetadataGpsMnavEphemeris::get_isc_l2_m_s)
	    .def("set_isc_l2_m_s", &MetadataGpsMnavEphemeris::set_isc_l2_m_s)
	    .def("get_isa_l2_py", &MetadataGpsMnavEphemeris::get_isa_l2_py)
	    .def("set_isa_l2_py", &MetadataGpsMnavEphemeris::set_isa_l2_py)
	    .def("get_isa_l1_m_e", &MetadataGpsMnavEphemeris::get_isa_l1_m_e)
	    .def("set_isa_l1_m_e", &MetadataGpsMnavEphemeris::set_isa_l1_m_e)
	    .def("get_isa_l2_m_e", &MetadataGpsMnavEphemeris::get_isa_l2_m_e)
	    .def("set_isa_l2_m_e", &MetadataGpsMnavEphemeris::set_isa_l2_m_e)
	    .def("get_isa_l1_m_s", &MetadataGpsMnavEphemeris::get_isa_l1_m_s)
	    .def("set_isa_l1_m_s", &MetadataGpsMnavEphemeris::set_isa_l1_m_s)
	    .def("get_isa_l2_m_s", &MetadataGpsMnavEphemeris::get_isa_l2_m_s)
	    .def("set_isa_l2_m_s", &MetadataGpsMnavEphemeris::set_isa_l2_m_s);

	py::class_<MetadataGpsIonoUtcParameters, TypeHeader, py::smart_holder>(
	    m, "MetadataGpsIonoUtcParameters")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         int8_t,
	                         uint32_t,
	                         uint8_t,
	                         uint8_t,
	                         uint8_t,
	                         int8_t,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double)>())
	    .def("get_info", &MetadataGpsIonoUtcParameters::get_info)
	    .def("set_info", &MetadataGpsIonoUtcParameters::set_info)
	    .def("get_time_of_validity", &MetadataGpsIonoUtcParameters::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGpsIonoUtcParameters::set_time_of_validity)
	    .def("get_a_0", &MetadataGpsIonoUtcParameters::get_a_0)
	    .def("set_a_0", &MetadataGpsIonoUtcParameters::set_a_0)
	    .def("get_a_1", &MetadataGpsIonoUtcParameters::get_a_1)
	    .def("set_a_1", &MetadataGpsIonoUtcParameters::set_a_1)
	    .def("get_delta_t_ls", &MetadataGpsIonoUtcParameters::get_delta_t_ls)
	    .def("set_delta_t_ls", &MetadataGpsIonoUtcParameters::set_delta_t_ls)
	    .def("get_tot", &MetadataGpsIonoUtcParameters::get_tot)
	    .def("set_tot", &MetadataGpsIonoUtcParameters::set_tot)
	    .def("get_wn_t", &MetadataGpsIonoUtcParameters::get_wn_t)
	    .def("set_wn_t", &MetadataGpsIonoUtcParameters::set_wn_t)
	    .def("get_wn_lsf", &MetadataGpsIonoUtcParameters::get_wn_lsf)
	    .def("set_wn_lsf", &MetadataGpsIonoUtcParameters::set_wn_lsf)
	    .def("get_dn", &MetadataGpsIonoUtcParameters::get_dn)
	    .def("set_dn", &MetadataGpsIonoUtcParameters::set_dn)
	    .def("get_delta_t_lsf", &MetadataGpsIonoUtcParameters::get_delta_t_lsf)
	    .def("set_delta_t_lsf", &MetadataGpsIonoUtcParameters::set_delta_t_lsf)
	    .def("get_alpha_0", &MetadataGpsIonoUtcParameters::get_alpha_0)
	    .def("set_alpha_0", &MetadataGpsIonoUtcParameters::set_alpha_0)
	    .def("get_alpha_1", &MetadataGpsIonoUtcParameters::get_alpha_1)
	    .def("set_alpha_1", &MetadataGpsIonoUtcParameters::set_alpha_1)
	    .def("get_alpha_2", &MetadataGpsIonoUtcParameters::get_alpha_2)
	    .def("set_alpha_2", &MetadataGpsIonoUtcParameters::set_alpha_2)
	    .def("get_alpha_3", &MetadataGpsIonoUtcParameters::get_alpha_3)
	    .def("set_alpha_3", &MetadataGpsIonoUtcParameters::set_alpha_3)
	    .def("get_beta_0", &MetadataGpsIonoUtcParameters::get_beta_0)
	    .def("set_beta_0", &MetadataGpsIonoUtcParameters::set_beta_0)
	    .def("get_beta_1", &MetadataGpsIonoUtcParameters::get_beta_1)
	    .def("set_beta_1", &MetadataGpsIonoUtcParameters::set_beta_1)
	    .def("get_beta_2", &MetadataGpsIonoUtcParameters::get_beta_2)
	    .def("set_beta_2", &MetadataGpsIonoUtcParameters::set_beta_2)
	    .def("get_beta_3", &MetadataGpsIonoUtcParameters::get_beta_3)
	    .def("set_beta_3", &MetadataGpsIonoUtcParameters::set_beta_3);

	py::native_enum<Aspn23MetadataGalileoEphemerisNavMsgType>(
	    m, "AspnMetadataGalileoEphemerisNavMsgType", "enum.Enum")
	    .value("ASPN_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV",
	           Aspn23MetadataGalileoEphemerisNavMsgType::
	               ASPN_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_INAV)
	    .value("ASPN_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV",
	           Aspn23MetadataGalileoEphemerisNavMsgType::
	               ASPN_METADATA_GALILEO_EPHEMERIS_NAV_MSG_TYPE_FNAV)
	    .finalize();

	py::class_<MetadataGalileoEphemeris, TypeHeader, py::smart_holder>(m,
	                                                                   "MetadataGalileoEphemeris")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         Aspn23MetadataGalileoEphemerisNavMsgType,
	                         int32_t,
	                         TypeSatnavClock,
	                         TypeKeplerOrbit,
	                         double)>())
	    .def("get_info", &MetadataGalileoEphemeris::get_info)
	    .def("set_info", &MetadataGalileoEphemeris::set_info)
	    .def("get_time_of_validity", &MetadataGalileoEphemeris::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGalileoEphemeris::set_time_of_validity)
	    .def("get_nav_msg_type", &MetadataGalileoEphemeris::get_nav_msg_type)
	    .def("set_nav_msg_type", &MetadataGalileoEphemeris::set_nav_msg_type)
	    .def("get_prn", &MetadataGalileoEphemeris::get_prn)
	    .def("set_prn", &MetadataGalileoEphemeris::set_prn)
	    .def("get_clock", &MetadataGalileoEphemeris::get_clock)
	    .def("set_clock", &MetadataGalileoEphemeris::set_clock)
	    .def("get_orbit", &MetadataGalileoEphemeris::get_orbit)
	    .def("set_orbit", &MetadataGalileoEphemeris::set_orbit)
	    .def("get_bgd", &MetadataGalileoEphemeris::get_bgd)
	    .def("set_bgd", &MetadataGalileoEphemeris::set_bgd);

	py::native_enum<Aspn23MetadataImuErrorModel>(m, "AspnMetadataImuErrorModel", "enum.Enum")
	    .value("ASPN_METADATA_IMU_ERROR_MODEL_BASIC",
	           Aspn23MetadataImuErrorModel::ASPN_METADATA_IMU_ERROR_MODEL_BASIC)
	    .finalize();

	py::class_<MetadataImu, TypeHeader, py::smart_holder>(m, "MetadataImu")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         TypeMounting,
	                         Aspn23MetadataImuErrorModel,
	                         xt::pyarray<double>)>())
	    .def("get_info", &MetadataImu::get_info)
	    .def("set_info", &MetadataImu::set_info)
	    .def("get_time_of_validity", &MetadataImu::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataImu::set_time_of_validity)
	    .def("get_mounting", &MetadataImu::get_mounting)
	    .def("set_mounting", &MetadataImu::set_mounting)
	    .def("get_error_model", &MetadataImu::get_error_model)
	    .def("set_error_model", &MetadataImu::set_error_model)
	    .def("get_error_model_params", &MetadataImu::get_error_model_params)
	    .def("set_error_model_params", &MetadataImu::set_error_model_params);

	py::class_<MetadataGeneric, TypeHeader, py::smart_holder>(m, "MetadataGeneric")
	    .def(py::init<PARAMS(TypeMetadataheader, TypeTimestamp, TypeMounting)>())
	    .def("get_info", &MetadataGeneric::get_info)
	    .def("set_info", &MetadataGeneric::set_info)
	    .def("get_time_of_validity", &MetadataGeneric::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataGeneric::set_time_of_validity)
	    .def("get_mounting", &MetadataGeneric::get_mounting)
	    .def("set_mounting", &MetadataGeneric::set_mounting);

	py::native_enum<Aspn23MetadataImageFeaturesKeypointDetector>(
	    m, "AspnMetadataImageFeaturesKeypointDetector", "enum.Enum")
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AGAST)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_AKAZE)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_BRISK)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_FAST)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_GFTT)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_KAZE)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_MSER)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_ORB)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SIFT)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SURF)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_HARRIS)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_SHI)
	    .value("ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER",
	           Aspn23MetadataImageFeaturesKeypointDetector::
	               ASPN_METADATA_IMAGE_FEATURES_KEYPOINT_DETECTOR_DET_OTHER)
	    .finalize();
	py::native_enum<Aspn23MetadataImageFeaturesDescriptorExtractor>(
	    m, "AspnMetadataImageFeaturesDescriptorExtractor", "enum.Enum")
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_AKAZE)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_BRISK)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_KAZE)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_ORB)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SIFT)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_SURF)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER",
	           Aspn23MetadataImageFeaturesDescriptorExtractor::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_EXTRACTOR_DESC_OTHER)
	    .finalize();
	py::native_enum<Aspn23MetadataImageFeaturesDescriptorType>(
	    m, "AspnMetadataImageFeaturesDescriptorType", "enum.Enum")
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8",
	           Aspn23MetadataImageFeaturesDescriptorType::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_UINT8)
	    .value("ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32",
	           Aspn23MetadataImageFeaturesDescriptorType::
	               ASPN_METADATA_IMAGE_FEATURES_DESCRIPTOR_TYPE_FLOAT32)
	    .finalize();

	py::class_<MetadataImageFeatures, TypeHeader, py::smart_holder>(m, "MetadataImageFeatures")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         Aspn23MetadataImageFeaturesKeypointDetector,
	                         bool,
	                         Aspn23MetadataImageFeaturesDescriptorExtractor,
	                         bool,
	                         Aspn23MetadataImageFeaturesDescriptorType,
	                         uint16_t)>())
	    .def("get_info", &MetadataImageFeatures::get_info)
	    .def("set_info", &MetadataImageFeatures::set_info)
	    .def("get_time_of_validity", &MetadataImageFeatures::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataImageFeatures::set_time_of_validity)
	    .def("get_keypoint_detector", &MetadataImageFeatures::get_keypoint_detector)
	    .def("set_keypoint_detector", &MetadataImageFeatures::set_keypoint_detector)
	    .def("get_orientation_calculated", &MetadataImageFeatures::get_orientation_calculated)
	    .def("set_orientation_calculated", &MetadataImageFeatures::set_orientation_calculated)
	    .def("get_descriptor_extractor", &MetadataImageFeatures::get_descriptor_extractor)
	    .def("set_descriptor_extractor", &MetadataImageFeatures::set_descriptor_extractor)
	    .def("get_is_bigendian", &MetadataImageFeatures::get_is_bigendian)
	    .def("set_is_bigendian", &MetadataImageFeatures::set_is_bigendian)
	    .def("get_descriptor_type", &MetadataImageFeatures::get_descriptor_type)
	    .def("set_descriptor_type", &MetadataImageFeatures::set_descriptor_type)
	    .def("get_descriptor_number_of_elements",
	         &MetadataImageFeatures::get_descriptor_number_of_elements)
	    .def("set_descriptor_number_of_elements",
	         &MetadataImageFeatures::set_descriptor_number_of_elements);

	py::class_<MetadataMagneticField, TypeHeader, py::smart_holder>(m, "MetadataMagneticField")
	    .def(py::init<PARAMS(TypeMetadataheader,
	                         TypeTimestamp,
	                         TypeMounting,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>)>())
	    .def("get_info", &MetadataMagneticField::get_info)
	    .def("set_info", &MetadataMagneticField::set_info)
	    .def("get_time_of_validity", &MetadataMagneticField::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataMagneticField::set_time_of_validity)
	    .def("get_mounting", &MetadataMagneticField::get_mounting)
	    .def("set_mounting", &MetadataMagneticField::set_mounting)
	    .def("get_k", &MetadataMagneticField::get_k)
	    .def("set_k", &MetadataMagneticField::set_k)
	    .def("get_b", &MetadataMagneticField::get_b)
	    .def("set_b", &MetadataMagneticField::set_b);

	py::class_<MetadataSatnavObs, TypeHeader, py::smart_holder>(m, "MetadataSatnavObs")
	    .def(py::init<PARAMS(TypeMetadataheader, TypeTimestamp, float, float)>())
	    .def("get_info", &MetadataSatnavObs::get_info)
	    .def("set_info", &MetadataSatnavObs::set_info)
	    .def("get_time_of_validity", &MetadataSatnavObs::get_time_of_validity)
	    .def("set_time_of_validity", &MetadataSatnavObs::set_time_of_validity)
	    .def("get_deltarange_interval_start", &MetadataSatnavObs::get_deltarange_interval_start)
	    .def("set_deltarange_interval_start", &MetadataSatnavObs::set_deltarange_interval_start)
	    .def("get_deltarange_interval_stop", &MetadataSatnavObs::get_deltarange_interval_stop)
	    .def("set_deltarange_interval_stop", &MetadataSatnavObs::set_deltarange_interval_stop);

	py::native_enum<Aspn23MeasurementImuImuType>(m, "AspnMeasurementImuImuType", "enum.Enum")
	    .value("ASPN_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED",
	           Aspn23MeasurementImuImuType::ASPN_MEASUREMENT_IMU_IMU_TYPE_INTEGRATED)
	    .value("ASPN_MEASUREMENT_IMU_IMU_TYPE_SAMPLED",
	           Aspn23MeasurementImuImuType::ASPN_MEASUREMENT_IMU_IMU_TYPE_SAMPLED)
	    .finalize();

	py::class_<MeasurementImu, TypeHeader, py::smart_holder>(m, "MeasurementImu")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementImuImuType,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementImu::get_header)
	    .def("set_header", &MeasurementImu::set_header)
	    .def("get_time_of_validity", &MeasurementImu::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementImu::set_time_of_validity)
	    .def("get_imu_type", &MeasurementImu::get_imu_type)
	    .def("set_imu_type", &MeasurementImu::set_imu_type)
	    .def("get_meas_accel", &MeasurementImu::get_meas_accel)
	    .def("set_meas_accel", &MeasurementImu::set_meas_accel)
	    .def("get_meas_gyro", &MeasurementImu::get_meas_gyro)
	    .def("set_meas_gyro", &MeasurementImu::set_meas_gyro)
	    .def("get_integrity", &MeasurementImu::get_integrity)
	    .def("set_integrity", &MeasurementImu::set_integrity);

	py::native_enum<Aspn23MeasurementTdoa1Tx2RxErrorModel>(
	    m, "AspnMeasurementTdoa1Tx2RxErrorModel", "enum.Enum")
	    .value(
	        "ASPN_MEASUREMENT_TDOA_1TX_2RX_ERROR_MODEL_NONE",
	        Aspn23MeasurementTdoa1Tx2RxErrorModel::ASPN_MEASUREMENT_TDOA_1TX_2RX_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTdoa1Tx2Rx, TypeHeader, py::smart_holder>(m, "MeasurementTdoa1Tx2Rx")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeRemotePoint,
	                         TypeRemotePoint,
	                         double,
	                         double,
	                         Aspn23MeasurementTdoa1Tx2RxErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTdoa1Tx2Rx::get_header)
	    .def("set_header", &MeasurementTdoa1Tx2Rx::set_header)
	    .def("get_time_of_validity", &MeasurementTdoa1Tx2Rx::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTdoa1Tx2Rx::set_time_of_validity)
	    .def("get_tx_position_and_covariance",
	         &MeasurementTdoa1Tx2Rx::get_tx_position_and_covariance)
	    .def("set_tx_position_and_covariance",
	         &MeasurementTdoa1Tx2Rx::set_tx_position_and_covariance)
	    .def("get_rx1_position_and_covariance",
	         &MeasurementTdoa1Tx2Rx::get_rx1_position_and_covariance)
	    .def("set_rx1_position_and_covariance",
	         &MeasurementTdoa1Tx2Rx::set_rx1_position_and_covariance)
	    .def("get_obs", &MeasurementTdoa1Tx2Rx::get_obs)
	    .def("set_obs", &MeasurementTdoa1Tx2Rx::set_obs)
	    .def("get_variance", &MeasurementTdoa1Tx2Rx::get_variance)
	    .def("set_variance", &MeasurementTdoa1Tx2Rx::set_variance)
	    .def("get_error_model", &MeasurementTdoa1Tx2Rx::get_error_model)
	    .def("set_error_model", &MeasurementTdoa1Tx2Rx::set_error_model)
	    .def("get_error_model_params", &MeasurementTdoa1Tx2Rx::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTdoa1Tx2Rx::set_error_model_params)
	    .def("get_integrity", &MeasurementTdoa1Tx2Rx::get_integrity)
	    .def("set_integrity", &MeasurementTdoa1Tx2Rx::set_integrity);

	py::native_enum<Aspn23MeasurementTdoa2Tx1RxErrorModel>(
	    m, "AspnMeasurementTdoa2Tx1RxErrorModel", "enum.Enum")
	    .value(
	        "ASPN_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE",
	        Aspn23MeasurementTdoa2Tx1RxErrorModel::ASPN_MEASUREMENT_TDOA_2TX_1RX_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTdoa2Tx1Rx, TypeHeader, py::smart_holder>(m, "MeasurementTdoa2Tx1Rx")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeRemotePoint,
	                         TypeRemotePoint,
	                         double,
	                         double,
	                         Aspn23MeasurementTdoa2Tx1RxErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTdoa2Tx1Rx::get_header)
	    .def("set_header", &MeasurementTdoa2Tx1Rx::set_header)
	    .def("get_time_of_validity", &MeasurementTdoa2Tx1Rx::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTdoa2Tx1Rx::set_time_of_validity)
	    .def("get_tx1_position_and_covariance",
	         &MeasurementTdoa2Tx1Rx::get_tx1_position_and_covariance)
	    .def("set_tx1_position_and_covariance",
	         &MeasurementTdoa2Tx1Rx::set_tx1_position_and_covariance)
	    .def("get_tx2_position_and_covariance",
	         &MeasurementTdoa2Tx1Rx::get_tx2_position_and_covariance)
	    .def("set_tx2_position_and_covariance",
	         &MeasurementTdoa2Tx1Rx::set_tx2_position_and_covariance)
	    .def("get_obs", &MeasurementTdoa2Tx1Rx::get_obs)
	    .def("set_obs", &MeasurementTdoa2Tx1Rx::set_obs)
	    .def("get_variance", &MeasurementTdoa2Tx1Rx::get_variance)
	    .def("set_variance", &MeasurementTdoa2Tx1Rx::set_variance)
	    .def("get_error_model", &MeasurementTdoa2Tx1Rx::get_error_model)
	    .def("set_error_model", &MeasurementTdoa2Tx1Rx::set_error_model)
	    .def("get_error_model_params", &MeasurementTdoa2Tx1Rx::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTdoa2Tx1Rx::set_error_model_params)
	    .def("get_integrity", &MeasurementTdoa2Tx1Rx::get_integrity)
	    .def("set_integrity", &MeasurementTdoa2Tx1Rx::set_integrity);

	py::native_enum<Aspn23MeasurementAccumulatedDistanceTraveledErrorModel>(
	    m, "AspnMeasurementAccumulatedDistanceTraveledErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED_ERROR_MODEL_NONE",
	           Aspn23MeasurementAccumulatedDistanceTraveledErrorModel::
	               ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementAccumulatedDistanceTraveled, TypeHeader, py::smart_holder>(
	    m, "MeasurementAccumulatedDistanceTraveled")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         double,
	                         Aspn23MeasurementAccumulatedDistanceTraveledErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAccumulatedDistanceTraveled::get_header)
	    .def("set_header", &MeasurementAccumulatedDistanceTraveled::set_header)
	    .def("get_time_of_validity", &MeasurementAccumulatedDistanceTraveled::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAccumulatedDistanceTraveled::set_time_of_validity)
	    .def("get_delta_t", &MeasurementAccumulatedDistanceTraveled::get_delta_t)
	    .def("set_delta_t", &MeasurementAccumulatedDistanceTraveled::set_delta_t)
	    .def("get_obs", &MeasurementAccumulatedDistanceTraveled::get_obs)
	    .def("set_obs", &MeasurementAccumulatedDistanceTraveled::set_obs)
	    .def("get_variance", &MeasurementAccumulatedDistanceTraveled::get_variance)
	    .def("set_variance", &MeasurementAccumulatedDistanceTraveled::set_variance)
	    .def("get_error_model", &MeasurementAccumulatedDistanceTraveled::get_error_model)
	    .def("set_error_model", &MeasurementAccumulatedDistanceTraveled::set_error_model)
	    .def("get_error_model_params",
	         &MeasurementAccumulatedDistanceTraveled::get_error_model_params)
	    .def("set_error_model_params",
	         &MeasurementAccumulatedDistanceTraveled::set_error_model_params)
	    .def("get_integrity", &MeasurementAccumulatedDistanceTraveled::get_integrity)
	    .def("set_integrity", &MeasurementAccumulatedDistanceTraveled::set_integrity);

	py::native_enum<Aspn23MeasurementAltitudeReference>(
	    m, "AspnMeasurementAltitudeReference", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ALTITUDE_REFERENCE_AGL",
	           Aspn23MeasurementAltitudeReference::ASPN_MEASUREMENT_ALTITUDE_REFERENCE_AGL)
	    .value("ASPN_MEASUREMENT_ALTITUDE_REFERENCE_MSL",
	           Aspn23MeasurementAltitudeReference::ASPN_MEASUREMENT_ALTITUDE_REFERENCE_MSL)
	    .value("ASPN_MEASUREMENT_ALTITUDE_REFERENCE_HAE",
	           Aspn23MeasurementAltitudeReference::ASPN_MEASUREMENT_ALTITUDE_REFERENCE_HAE)
	    .finalize();
	py::native_enum<Aspn23MeasurementAltitudeErrorModel>(
	    m, "AspnMeasurementAltitudeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE",
	           Aspn23MeasurementAltitudeErrorModel::ASPN_MEASUREMENT_ALTITUDE_ERROR_MODEL_NONE)
	    .value("ASPN_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM",
	           Aspn23MeasurementAltitudeErrorModel::ASPN_MEASUREMENT_ALTITUDE_ERROR_MODEL_FOGM)
	    .finalize();

	py::class_<MeasurementAltitude, TypeHeader, py::smart_holder>(m, "MeasurementAltitude")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementAltitudeReference,
	                         double,
	                         double,
	                         Aspn23MeasurementAltitudeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAltitude::get_header)
	    .def("set_header", &MeasurementAltitude::set_header)
	    .def("get_time_of_validity", &MeasurementAltitude::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAltitude::set_time_of_validity)
	    .def("get_reference", &MeasurementAltitude::get_reference)
	    .def("set_reference", &MeasurementAltitude::set_reference)
	    .def("get_altitude", &MeasurementAltitude::get_altitude)
	    .def("set_altitude", &MeasurementAltitude::set_altitude)
	    .def("get_variance", &MeasurementAltitude::get_variance)
	    .def("set_variance", &MeasurementAltitude::set_variance)
	    .def("get_error_model", &MeasurementAltitude::get_error_model)
	    .def("set_error_model", &MeasurementAltitude::set_error_model)
	    .def("get_error_model_params", &MeasurementAltitude::get_error_model_params)
	    .def("set_error_model_params", &MeasurementAltitude::set_error_model_params)
	    .def("get_integrity", &MeasurementAltitude::get_integrity)
	    .def("set_integrity", &MeasurementAltitude::set_integrity);

	py::native_enum<Aspn23MeasurementAngularVelocityReferenceFrame>(
	    m, "AspnMeasurementAngularVelocityReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECI",
	           Aspn23MeasurementAngularVelocityReferenceFrame::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECEF",
	           Aspn23MeasurementAngularVelocityReferenceFrame::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_ECEF)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_NED",
	           Aspn23MeasurementAngularVelocityReferenceFrame::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_NED)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_SENSOR",
	           Aspn23MeasurementAngularVelocityReferenceFrame::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_REFERENCE_FRAME_SENSOR)
	    .finalize();
	py::native_enum<Aspn23MeasurementAngularVelocityImuType>(
	    m, "AspnMeasurementAngularVelocityImuType", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_INTEGRATED",
	           Aspn23MeasurementAngularVelocityImuType::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_INTEGRATED)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_SAMPLED",
	           Aspn23MeasurementAngularVelocityImuType::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_IMU_TYPE_SAMPLED)
	    .finalize();
	py::native_enum<Aspn23MeasurementAngularVelocityErrorModel>(
	    m, "AspnMeasurementAngularVelocityErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_ERROR_MODEL_NONE",
	           Aspn23MeasurementAngularVelocityErrorModel::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementAngularVelocity, TypeHeader, py::smart_holder>(
	    m, "MeasurementAngularVelocity")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementAngularVelocityReferenceFrame,
	                         Aspn23MeasurementAngularVelocityImuType,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementAngularVelocityErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAngularVelocity::get_header)
	    .def("set_header", &MeasurementAngularVelocity::set_header)
	    .def("get_time_of_validity", &MeasurementAngularVelocity::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAngularVelocity::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementAngularVelocity::get_reference_frame)
	    .def("set_reference_frame", &MeasurementAngularVelocity::set_reference_frame)
	    .def("get_imu_type", &MeasurementAngularVelocity::get_imu_type)
	    .def("set_imu_type", &MeasurementAngularVelocity::set_imu_type)
	    .def("get_meas", &MeasurementAngularVelocity::get_meas)
	    .def("set_meas", &MeasurementAngularVelocity::set_meas)
	    .def("get_covariance", &MeasurementAngularVelocity::get_covariance)
	    .def("set_covariance", &MeasurementAngularVelocity::set_covariance)
	    .def("get_error_model", &MeasurementAngularVelocity::get_error_model)
	    .def("set_error_model", &MeasurementAngularVelocity::set_error_model)
	    .def("get_error_model_params", &MeasurementAngularVelocity::get_error_model_params)
	    .def("set_error_model_params", &MeasurementAngularVelocity::set_error_model_params)
	    .def("get_integrity", &MeasurementAngularVelocity::get_integrity)
	    .def("set_integrity", &MeasurementAngularVelocity::set_integrity);

	py::native_enum<Aspn23MeasurementAngularVelocity1DSensorType>(
	    m, "AspnMeasurementAngularVelocity1DSensorType", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED",
	           Aspn23MeasurementAngularVelocity1DSensorType::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_INTEGRATED)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED",
	           Aspn23MeasurementAngularVelocity1DSensorType::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_SENSOR_TYPE_SAMPLED)
	    .finalize();
	py::native_enum<Aspn23MeasurementAngularVelocity1DErrorModel>(
	    m, "AspnMeasurementAngularVelocity1DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE",
	           Aspn23MeasurementAngularVelocity1DErrorModel::
	               ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementAngularVelocity1D, TypeHeader, py::smart_holder>(
	    m, "MeasurementAngularVelocity1D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementAngularVelocity1DSensorType,
	                         double,
	                         double,
	                         Aspn23MeasurementAngularVelocity1DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAngularVelocity1D::get_header)
	    .def("set_header", &MeasurementAngularVelocity1D::set_header)
	    .def("get_time_of_validity", &MeasurementAngularVelocity1D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAngularVelocity1D::set_time_of_validity)
	    .def("get_sensor_type", &MeasurementAngularVelocity1D::get_sensor_type)
	    .def("set_sensor_type", &MeasurementAngularVelocity1D::set_sensor_type)
	    .def("get_obs", &MeasurementAngularVelocity1D::get_obs)
	    .def("set_obs", &MeasurementAngularVelocity1D::set_obs)
	    .def("get_variance", &MeasurementAngularVelocity1D::get_variance)
	    .def("set_variance", &MeasurementAngularVelocity1D::set_variance)
	    .def("get_error_model", &MeasurementAngularVelocity1D::get_error_model)
	    .def("set_error_model", &MeasurementAngularVelocity1D::set_error_model)
	    .def("get_error_model_params", &MeasurementAngularVelocity1D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementAngularVelocity1D::set_error_model_params)
	    .def("get_integrity", &MeasurementAngularVelocity1D::get_integrity)
	    .def("set_integrity", &MeasurementAngularVelocity1D::set_integrity);

	py::native_enum<Aspn23MeasurementAttitude2DReferenceFrame>(
	    m, "AspnMeasurementAttitude2DReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE",
	           Aspn23MeasurementAttitude2DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_NE)
	    .value("ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND",
	           Aspn23MeasurementAttitude2DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ND)
	    .value("ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED",
	           Aspn23MeasurementAttitude2DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_2D_REFERENCE_FRAME_ED)
	    .finalize();
	py::native_enum<Aspn23MeasurementAttitude2DErrorModel>(
	    m, "AspnMeasurementAttitude2DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE",
	           Aspn23MeasurementAttitude2DErrorModel::ASPN_MEASUREMENT_ATTITUDE_2D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementAttitude2D, TypeHeader, py::smart_holder>(m, "MeasurementAttitude2D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementAttitude2DReferenceFrame,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementAttitude2DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAttitude2D::get_header)
	    .def("set_header", &MeasurementAttitude2D::set_header)
	    .def("get_time_of_validity", &MeasurementAttitude2D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAttitude2D::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementAttitude2D::get_reference_frame)
	    .def("set_reference_frame", &MeasurementAttitude2D::set_reference_frame)
	    .def("get_attitude2d", &MeasurementAttitude2D::get_attitude2d)
	    .def("set_attitude2d", &MeasurementAttitude2D::set_attitude2d)
	    .def("get_covariance", &MeasurementAttitude2D::get_covariance)
	    .def("set_covariance", &MeasurementAttitude2D::set_covariance)
	    .def("get_error_model", &MeasurementAttitude2D::get_error_model)
	    .def("set_error_model", &MeasurementAttitude2D::set_error_model)
	    .def("get_error_model_params", &MeasurementAttitude2D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementAttitude2D::set_error_model_params)
	    .def("get_integrity", &MeasurementAttitude2D::get_integrity)
	    .def("set_integrity", &MeasurementAttitude2D::set_integrity);

	py::native_enum<Aspn23MeasurementAttitude3DReferenceFrame>(
	    m, "AspnMeasurementAttitude3DReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI",
	           Aspn23MeasurementAttitude3DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF",
	           Aspn23MeasurementAttitude3DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_ECEF)
	    .value("ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED",
	           Aspn23MeasurementAttitude3DReferenceFrame::
	               ASPN_MEASUREMENT_ATTITUDE_3D_REFERENCE_FRAME_NED)
	    .finalize();
	py::native_enum<Aspn23MeasurementAttitude3DErrorModel>(
	    m, "AspnMeasurementAttitude3DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE",
	           Aspn23MeasurementAttitude3DErrorModel::ASPN_MEASUREMENT_ATTITUDE_3D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementAttitude3D, TypeHeader, py::smart_holder>(m, "MeasurementAttitude3D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementAttitude3DReferenceFrame,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementAttitude3DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementAttitude3D::get_header)
	    .def("set_header", &MeasurementAttitude3D::set_header)
	    .def("get_time_of_validity", &MeasurementAttitude3D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementAttitude3D::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementAttitude3D::get_reference_frame)
	    .def("set_reference_frame", &MeasurementAttitude3D::set_reference_frame)
	    .def("get_quaternion", &MeasurementAttitude3D::get_quaternion)
	    .def("set_quaternion", &MeasurementAttitude3D::set_quaternion)
	    .def("get_tilt_error_covariance", &MeasurementAttitude3D::get_tilt_error_covariance)
	    .def("set_tilt_error_covariance", &MeasurementAttitude3D::set_tilt_error_covariance)
	    .def("get_error_model", &MeasurementAttitude3D::get_error_model)
	    .def("set_error_model", &MeasurementAttitude3D::set_error_model)
	    .def("get_error_model_params", &MeasurementAttitude3D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementAttitude3D::set_error_model_params)
	    .def("get_integrity", &MeasurementAttitude3D::get_integrity)
	    .def("set_integrity", &MeasurementAttitude3D::set_integrity);

	py::native_enum<Aspn23MeasurementBarometerErrorModel>(
	    m, "AspnMeasurementBarometerErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_BAROMETER_ERROR_MODEL_NONE",
	           Aspn23MeasurementBarometerErrorModel::ASPN_MEASUREMENT_BAROMETER_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementBarometer, TypeHeader, py::smart_holder>(m, "MeasurementBarometer")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         Aspn23MeasurementBarometerErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementBarometer::get_header)
	    .def("set_header", &MeasurementBarometer::set_header)
	    .def("get_time_of_validity", &MeasurementBarometer::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementBarometer::set_time_of_validity)
	    .def("get_pressure", &MeasurementBarometer::get_pressure)
	    .def("set_pressure", &MeasurementBarometer::set_pressure)
	    .def("get_variance", &MeasurementBarometer::get_variance)
	    .def("set_variance", &MeasurementBarometer::set_variance)
	    .def("get_error_model", &MeasurementBarometer::get_error_model)
	    .def("set_error_model", &MeasurementBarometer::set_error_model)
	    .def("get_error_model_params", &MeasurementBarometer::get_error_model_params)
	    .def("set_error_model_params", &MeasurementBarometer::set_error_model_params)
	    .def("get_integrity", &MeasurementBarometer::get_integrity)
	    .def("set_integrity", &MeasurementBarometer::set_integrity);

	py::native_enum<Aspn23MeasurementDeltaPositionReferenceFrame>(
	    m, "AspnMeasurementDeltaPositionReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED",
	           Aspn23MeasurementDeltaPositionReferenceFrame::
	               ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_NED)
	    .value("ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START",
	           Aspn23MeasurementDeltaPositionReferenceFrame::
	               ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_START)
	    .value("ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END",
	           Aspn23MeasurementDeltaPositionReferenceFrame::
	               ASPN_MEASUREMENT_DELTA_POSITION_REFERENCE_FRAME_SENSOR_END)
	    .finalize();
	py::native_enum<Aspn23MeasurementDeltaPositionErrorModel>(
	    m, "AspnMeasurementDeltaPositionErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE",
	           Aspn23MeasurementDeltaPositionErrorModel::
	               ASPN_MEASUREMENT_DELTA_POSITION_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementDeltaPosition, TypeHeader, py::smart_holder>(m,
	                                                                   "MeasurementDeltaPosition")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementDeltaPositionReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementDeltaPositionErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementDeltaPosition::get_header)
	    .def("set_header", &MeasurementDeltaPosition::set_header)
	    .def("get_time_of_validity", &MeasurementDeltaPosition::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDeltaPosition::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementDeltaPosition::get_reference_frame)
	    .def("set_reference_frame", &MeasurementDeltaPosition::set_reference_frame)
	    .def("get_delta_t", &MeasurementDeltaPosition::get_delta_t)
	    .def("set_delta_t", &MeasurementDeltaPosition::set_delta_t)
	    .def("get_term1", &MeasurementDeltaPosition::get_term1)
	    .def("set_term1", &MeasurementDeltaPosition::set_term1)
	    .def("get_term2", &MeasurementDeltaPosition::get_term2)
	    .def("set_term2", &MeasurementDeltaPosition::set_term2)
	    .def("get_term3", &MeasurementDeltaPosition::get_term3)
	    .def("set_term3", &MeasurementDeltaPosition::set_term3)
	    .def("get_covariance", &MeasurementDeltaPosition::get_covariance)
	    .def("set_covariance", &MeasurementDeltaPosition::set_covariance)
	    .def("get_error_model", &MeasurementDeltaPosition::get_error_model)
	    .def("set_error_model", &MeasurementDeltaPosition::set_error_model)
	    .def("get_error_model_params", &MeasurementDeltaPosition::get_error_model_params)
	    .def("set_error_model_params", &MeasurementDeltaPosition::set_error_model_params)
	    .def("get_integrity", &MeasurementDeltaPosition::get_integrity)
	    .def("set_integrity", &MeasurementDeltaPosition::set_integrity);

	py::native_enum<Aspn23MeasurementDeltaRangeErrorModel>(
	    m, "AspnMeasurementDeltaRangeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DELTA_RANGE_ERROR_MODEL_NONE",
	           Aspn23MeasurementDeltaRangeErrorModel::ASPN_MEASUREMENT_DELTA_RANGE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementDeltaRange, TypeHeader, py::smart_holder>(m, "MeasurementDeltaRange")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         double,
	                         Aspn23MeasurementDeltaRangeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementDeltaRange::get_header)
	    .def("set_header", &MeasurementDeltaRange::set_header)
	    .def("get_time_of_validity", &MeasurementDeltaRange::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDeltaRange::set_time_of_validity)
	    .def("get_delta_t", &MeasurementDeltaRange::get_delta_t)
	    .def("set_delta_t", &MeasurementDeltaRange::set_delta_t)
	    .def("get_obs", &MeasurementDeltaRange::get_obs)
	    .def("set_obs", &MeasurementDeltaRange::set_obs)
	    .def("get_variance", &MeasurementDeltaRange::get_variance)
	    .def("set_variance", &MeasurementDeltaRange::set_variance)
	    .def("get_error_model", &MeasurementDeltaRange::get_error_model)
	    .def("set_error_model", &MeasurementDeltaRange::set_error_model)
	    .def("get_error_model_params", &MeasurementDeltaRange::get_error_model_params)
	    .def("set_error_model_params", &MeasurementDeltaRange::set_error_model_params)
	    .def("get_integrity", &MeasurementDeltaRange::get_integrity)
	    .def("set_integrity", &MeasurementDeltaRange::set_integrity);

	py::native_enum<Aspn23MeasurementDeltaRangeToPointErrorModel>(
	    m, "AspnMeasurementDeltaRangeToPointErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE",
	           Aspn23MeasurementDeltaRangeToPointErrorModel::
	               ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementDeltaRangeToPoint, TypeHeader, py::smart_holder>(
	    m, "MeasurementDeltaRangeToPoint")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeRemotePoint,
	                         double,
	                         double,
	                         double,
	                         Aspn23MeasurementDeltaRangeToPointErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementDeltaRangeToPoint::get_header)
	    .def("set_header", &MeasurementDeltaRangeToPoint::set_header)
	    .def("get_time_of_validity", &MeasurementDeltaRangeToPoint::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDeltaRangeToPoint::set_time_of_validity)
	    .def("get_remote_point", &MeasurementDeltaRangeToPoint::get_remote_point)
	    .def("set_remote_point", &MeasurementDeltaRangeToPoint::set_remote_point)
	    .def("get_obs", &MeasurementDeltaRangeToPoint::get_obs)
	    .def("set_obs", &MeasurementDeltaRangeToPoint::set_obs)
	    .def("get_delta_t", &MeasurementDeltaRangeToPoint::get_delta_t)
	    .def("set_delta_t", &MeasurementDeltaRangeToPoint::set_delta_t)
	    .def("get_variance", &MeasurementDeltaRangeToPoint::get_variance)
	    .def("set_variance", &MeasurementDeltaRangeToPoint::set_variance)
	    .def("get_error_model", &MeasurementDeltaRangeToPoint::get_error_model)
	    .def("set_error_model", &MeasurementDeltaRangeToPoint::set_error_model)
	    .def("get_error_model_params", &MeasurementDeltaRangeToPoint::get_error_model_params)
	    .def("set_error_model_params", &MeasurementDeltaRangeToPoint::set_error_model_params)
	    .def("get_integrity", &MeasurementDeltaRangeToPoint::get_integrity)
	    .def("set_integrity", &MeasurementDeltaRangeToPoint::set_integrity);

	py::class_<MeasurementDirection2DToPoints, TypeHeader, py::smart_holder>(
	    m, "MeasurementDirection2DToPoints")
	    .def(py::init<PARAMS(TypeHeader, TypeTimestamp, std::vector<TypeDirection2DToPoint>)>())
	    .def("get_header", &MeasurementDirection2DToPoints::get_header)
	    .def("set_header", &MeasurementDirection2DToPoints::set_header)
	    .def("get_time_of_validity", &MeasurementDirection2DToPoints::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDirection2DToPoints::set_time_of_validity)
	    .def("get_obs", &MeasurementDirection2DToPoints::get_obs)
	    .def("set_obs", &MeasurementDirection2DToPoints::set_obs);

	py::class_<MeasurementDirection3DToPoints, TypeHeader, py::smart_holder>(
	    m, "MeasurementDirection3DToPoints")
	    .def(py::init<PARAMS(TypeHeader, TypeTimestamp, std::vector<TypeDirection3DToPoint>)>())
	    .def("get_header", &MeasurementDirection3DToPoints::get_header)
	    .def("set_header", &MeasurementDirection3DToPoints::set_header)
	    .def("get_time_of_validity", &MeasurementDirection3DToPoints::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDirection3DToPoints::set_time_of_validity)
	    .def("get_obs", &MeasurementDirection3DToPoints::get_obs)
	    .def("set_obs", &MeasurementDirection3DToPoints::set_obs);

	py::native_enum<Aspn23MeasurementDirectionOfMotion2DReference>(
	    m, "AspnMeasurementDirectionOfMotion2DReference", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE",
	           Aspn23MeasurementDirectionOfMotion2DReference::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_NE)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND",
	           Aspn23MeasurementDirectionOfMotion2DReference::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ND)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED",
	           Aspn23MeasurementDirectionOfMotion2DReference::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_ED)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR",
	           Aspn23MeasurementDirectionOfMotion2DReference::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_REFERENCE_SENSOR)
	    .finalize();
	py::native_enum<Aspn23MeasurementDirectionOfMotion2DErrorModel>(
	    m, "AspnMeasurementDirectionOfMotion2DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE",
	           Aspn23MeasurementDirectionOfMotion2DErrorModel::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementDirectionOfMotion2D, TypeHeader, py::smart_holder>(
	    m, "MeasurementDirectionOfMotion2D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementDirectionOfMotion2DReference,
	                         double,
	                         double,
	                         Aspn23MeasurementDirectionOfMotion2DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementDirectionOfMotion2D::get_header)
	    .def("set_header", &MeasurementDirectionOfMotion2D::set_header)
	    .def("get_time_of_validity", &MeasurementDirectionOfMotion2D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDirectionOfMotion2D::set_time_of_validity)
	    .def("get_reference", &MeasurementDirectionOfMotion2D::get_reference)
	    .def("set_reference", &MeasurementDirectionOfMotion2D::set_reference)
	    .def("get_obs", &MeasurementDirectionOfMotion2D::get_obs)
	    .def("set_obs", &MeasurementDirectionOfMotion2D::set_obs)
	    .def("get_variance", &MeasurementDirectionOfMotion2D::get_variance)
	    .def("set_variance", &MeasurementDirectionOfMotion2D::set_variance)
	    .def("get_error_model", &MeasurementDirectionOfMotion2D::get_error_model)
	    .def("set_error_model", &MeasurementDirectionOfMotion2D::set_error_model)
	    .def("get_error_model_params", &MeasurementDirectionOfMotion2D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementDirectionOfMotion2D::set_error_model_params)
	    .def("get_integrity", &MeasurementDirectionOfMotion2D::get_integrity)
	    .def("set_integrity", &MeasurementDirectionOfMotion2D::set_integrity);

	py::native_enum<Aspn23MeasurementDirectionOfMotion3DReferenceFrame>(
	    m, "AspnMeasurementDirectionOfMotion3DReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI",
	           Aspn23MeasurementDirectionOfMotion3DReferenceFrame::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF",
	           Aspn23MeasurementDirectionOfMotion3DReferenceFrame::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_ECEF)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED",
	           Aspn23MeasurementDirectionOfMotion3DReferenceFrame::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_NED)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR",
	           Aspn23MeasurementDirectionOfMotion3DReferenceFrame::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_REFERENCE_FRAME_SENSOR)
	    .finalize();
	py::native_enum<Aspn23MeasurementDirectionOfMotion3DErrorModel>(
	    m, "AspnMeasurementDirectionOfMotion3DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE",
	           Aspn23MeasurementDirectionOfMotion3DErrorModel::
	               ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementDirectionOfMotion3D, TypeHeader, py::smart_holder>(
	    m, "MeasurementDirectionOfMotion3D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementDirectionOfMotion3DReferenceFrame,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementDirectionOfMotion3DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementDirectionOfMotion3D::get_header)
	    .def("set_header", &MeasurementDirectionOfMotion3D::set_header)
	    .def("get_time_of_validity", &MeasurementDirectionOfMotion3D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementDirectionOfMotion3D::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementDirectionOfMotion3D::get_reference_frame)
	    .def("set_reference_frame", &MeasurementDirectionOfMotion3D::set_reference_frame)
	    .def("get_obs", &MeasurementDirectionOfMotion3D::get_obs)
	    .def("set_obs", &MeasurementDirectionOfMotion3D::set_obs)
	    .def("get_error_vector", &MeasurementDirectionOfMotion3D::get_error_vector)
	    .def("set_error_vector", &MeasurementDirectionOfMotion3D::set_error_vector)
	    .def("get_covariance", &MeasurementDirectionOfMotion3D::get_covariance)
	    .def("set_covariance", &MeasurementDirectionOfMotion3D::set_covariance)
	    .def("get_error_model", &MeasurementDirectionOfMotion3D::get_error_model)
	    .def("set_error_model", &MeasurementDirectionOfMotion3D::set_error_model)
	    .def("get_error_model_params", &MeasurementDirectionOfMotion3D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementDirectionOfMotion3D::set_error_model_params)
	    .def("get_integrity", &MeasurementDirectionOfMotion3D::get_integrity)
	    .def("set_integrity", &MeasurementDirectionOfMotion3D::set_integrity);

	py::native_enum<Aspn23MeasurementFrequencyDifferenceErrorModel>(
	    m, "AspnMeasurementFrequencyDifferenceErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE",
	           Aspn23MeasurementFrequencyDifferenceErrorModel::
	               ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementFrequencyDifference, TypeHeader, py::smart_holder>(
	    m, "MeasurementFrequencyDifference")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         int32_t,
	                         uint8_t,
	                         uint8_t,
	                         double,
	                         double,
	                         Aspn23MeasurementFrequencyDifferenceErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementFrequencyDifference::get_header)
	    .def("set_header", &MeasurementFrequencyDifference::set_header)
	    .def("get_time_of_validity", &MeasurementFrequencyDifference::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementFrequencyDifference::set_time_of_validity)
	    .def("get_time_of_validity_attosec",
	         &MeasurementFrequencyDifference::get_time_of_validity_attosec)
	    .def("set_time_of_validity_attosec",
	         &MeasurementFrequencyDifference::set_time_of_validity_attosec)
	    .def("get_clock_id1", &MeasurementFrequencyDifference::get_clock_id1)
	    .def("set_clock_id1", &MeasurementFrequencyDifference::set_clock_id1)
	    .def("get_clock_id2", &MeasurementFrequencyDifference::get_clock_id2)
	    .def("set_clock_id2", &MeasurementFrequencyDifference::set_clock_id2)
	    .def("get_freq_diff", &MeasurementFrequencyDifference::get_freq_diff)
	    .def("set_freq_diff", &MeasurementFrequencyDifference::set_freq_diff)
	    .def("get_variance", &MeasurementFrequencyDifference::get_variance)
	    .def("set_variance", &MeasurementFrequencyDifference::set_variance)
	    .def("get_error_model", &MeasurementFrequencyDifference::get_error_model)
	    .def("set_error_model", &MeasurementFrequencyDifference::set_error_model)
	    .def("get_error_model_params", &MeasurementFrequencyDifference::get_error_model_params)
	    .def("set_error_model_params", &MeasurementFrequencyDifference::set_error_model_params)
	    .def("get_integrity", &MeasurementFrequencyDifference::get_integrity)
	    .def("set_integrity", &MeasurementFrequencyDifference::set_integrity);

	py::native_enum<Aspn23MeasurementHeadingReference>(
	    m, "AspnMeasurementHeadingReference", "enum.Enum")
	    .value("ASPN_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING",
	           Aspn23MeasurementHeadingReference::ASPN_MEASUREMENT_HEADING_REFERENCE_TRUE_HEADING)
	    .value(
	        "ASPN_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING",
	        Aspn23MeasurementHeadingReference::ASPN_MEASUREMENT_HEADING_REFERENCE_MAGNETIC_HEADING)
	    .finalize();
	py::native_enum<Aspn23MeasurementHeadingErrorModel>(
	    m, "AspnMeasurementHeadingErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_HEADING_ERROR_MODEL_NONE",
	           Aspn23MeasurementHeadingErrorModel::ASPN_MEASUREMENT_HEADING_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementHeading, TypeHeader, py::smart_holder>(m, "MeasurementHeading")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementHeadingReference,
	                         double,
	                         double,
	                         Aspn23MeasurementHeadingErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementHeading::get_header)
	    .def("set_header", &MeasurementHeading::set_header)
	    .def("get_time_of_validity", &MeasurementHeading::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementHeading::set_time_of_validity)
	    .def("get_reference", &MeasurementHeading::get_reference)
	    .def("set_reference", &MeasurementHeading::set_reference)
	    .def("get_obs", &MeasurementHeading::get_obs)
	    .def("set_obs", &MeasurementHeading::set_obs)
	    .def("get_variance", &MeasurementHeading::get_variance)
	    .def("set_variance", &MeasurementHeading::set_variance)
	    .def("get_error_model", &MeasurementHeading::get_error_model)
	    .def("set_error_model", &MeasurementHeading::set_error_model)
	    .def("get_error_model_params", &MeasurementHeading::get_error_model_params)
	    .def("set_error_model_params", &MeasurementHeading::set_error_model_params)
	    .def("get_integrity", &MeasurementHeading::get_integrity)
	    .def("set_integrity", &MeasurementHeading::set_integrity);

	py::native_enum<Aspn23MeasurementImageImageType>(
	    m, "AspnMeasurementImageImageType", "enum.Enum")
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_BMP)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_PNG)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_JPG)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_TIFF)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY8)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGB8)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGR8)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_RGBA8)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_BGRA8)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAY16)
	    .value("ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64",
	           Aspn23MeasurementImageImageType::ASPN_MEASUREMENT_IMAGE_IMAGE_TYPE_RAW_GRAYFLOAT64)
	    .finalize();
	py::native_enum<Aspn23MeasurementImageCameraModel>(
	    m, "AspnMeasurementImageCameraModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB",
	           Aspn23MeasurementImageCameraModel::
	               ASPN_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_PINHOLE_PLUMB_BOB)
	    .value("ASPN_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL",
	           Aspn23MeasurementImageCameraModel::
	               ASPN_MEASUREMENT_IMAGE_CAMERA_MODEL_ASPN_LINEAR_MODEL)
	    .finalize();

	py::class_<MeasurementImage, TypeHeader, py::smart_holder>(m, "MeasurementImage")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         uint32_t,
	                         uint32_t,
	                         bool,
	                         Aspn23MeasurementImageImageType,
	                         xt::pyarray<uint8_t>,
	                         Aspn23MeasurementImageCameraModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementImage::get_header)
	    .def("set_header", &MeasurementImage::set_header)
	    .def("get_time_of_validity", &MeasurementImage::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementImage::set_time_of_validity)
	    .def("get_height", &MeasurementImage::get_height)
	    .def("set_height", &MeasurementImage::set_height)
	    .def("get_width", &MeasurementImage::get_width)
	    .def("set_width", &MeasurementImage::set_width)
	    .def("get_is_bigendian", &MeasurementImage::get_is_bigendian)
	    .def("set_is_bigendian", &MeasurementImage::set_is_bigendian)
	    .def("get_image_type", &MeasurementImage::get_image_type)
	    .def("set_image_type", &MeasurementImage::set_image_type)
	    .def("get_image_data", &MeasurementImage::get_image_data)
	    .def("set_image_data", &MeasurementImage::set_image_data)
	    .def("get_camera_model", &MeasurementImage::get_camera_model)
	    .def("set_camera_model", &MeasurementImage::set_camera_model)
	    .def("get_model_coefficients", &MeasurementImage::get_model_coefficients)
	    .def("set_model_coefficients", &MeasurementImage::set_model_coefficients)
	    .def("get_integrity", &MeasurementImage::get_integrity)
	    .def("set_integrity", &MeasurementImage::set_integrity);

	py::native_enum<Aspn23MeasurementMagneticFieldErrorModel>(
	    m, "AspnMeasurementMagneticFieldErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE",
	           Aspn23MeasurementMagneticFieldErrorModel::
	               ASPN_MEASUREMENT_MAGNETIC_FIELD_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementMagneticField, TypeHeader, py::smart_holder>(m,
	                                                                   "MeasurementMagneticField")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementMagneticFieldErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementMagneticField::get_header)
	    .def("set_header", &MeasurementMagneticField::set_header)
	    .def("get_time_of_validity", &MeasurementMagneticField::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementMagneticField::set_time_of_validity)
	    .def("get_x_field_strength", &MeasurementMagneticField::get_x_field_strength)
	    .def("set_x_field_strength", &MeasurementMagneticField::set_x_field_strength)
	    .def("get_y_field_strength", &MeasurementMagneticField::get_y_field_strength)
	    .def("set_y_field_strength", &MeasurementMagneticField::set_y_field_strength)
	    .def("get_z_field_strength", &MeasurementMagneticField::get_z_field_strength)
	    .def("set_z_field_strength", &MeasurementMagneticField::set_z_field_strength)
	    .def("get_covariance", &MeasurementMagneticField::get_covariance)
	    .def("set_covariance", &MeasurementMagneticField::set_covariance)
	    .def("get_error_model", &MeasurementMagneticField::get_error_model)
	    .def("set_error_model", &MeasurementMagneticField::set_error_model)
	    .def("get_error_model_params", &MeasurementMagneticField::get_error_model_params)
	    .def("set_error_model_params", &MeasurementMagneticField::set_error_model_params)
	    .def("get_integrity", &MeasurementMagneticField::get_integrity)
	    .def("set_integrity", &MeasurementMagneticField::set_integrity);

	py::native_enum<Aspn23MeasurementMagneticFieldMagnitudeErrorModel>(
	    m, "AspnMeasurementMagneticFieldMagnitudeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE_ERROR_MODEL_NONE",
	           Aspn23MeasurementMagneticFieldMagnitudeErrorModel::
	               ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementMagneticFieldMagnitude, TypeHeader, py::smart_holder>(
	    m, "MeasurementMagneticFieldMagnitude")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         Aspn23MeasurementMagneticFieldMagnitudeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementMagneticFieldMagnitude::get_header)
	    .def("set_header", &MeasurementMagneticFieldMagnitude::set_header)
	    .def("get_time_of_validity", &MeasurementMagneticFieldMagnitude::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementMagneticFieldMagnitude::set_time_of_validity)
	    .def("get_field_strength", &MeasurementMagneticFieldMagnitude::get_field_strength)
	    .def("set_field_strength", &MeasurementMagneticFieldMagnitude::set_field_strength)
	    .def("get_variance", &MeasurementMagneticFieldMagnitude::get_variance)
	    .def("set_variance", &MeasurementMagneticFieldMagnitude::set_variance)
	    .def("get_error_model", &MeasurementMagneticFieldMagnitude::get_error_model)
	    .def("set_error_model", &MeasurementMagneticFieldMagnitude::set_error_model)
	    .def("get_error_model_params", &MeasurementMagneticFieldMagnitude::get_error_model_params)
	    .def("set_error_model_params", &MeasurementMagneticFieldMagnitude::set_error_model_params)
	    .def("get_integrity", &MeasurementMagneticFieldMagnitude::get_integrity)
	    .def("set_integrity", &MeasurementMagneticFieldMagnitude::set_integrity);

	py::native_enum<Aspn23MeasurementPositionReferenceFrame>(
	    m, "AspnMeasurementPositionReferenceFrame", "enum.Enum")
	    .value(
	        "ASPN_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI",
	        Aspn23MeasurementPositionReferenceFrame::ASPN_MEASUREMENT_POSITION_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC",
	           Aspn23MeasurementPositionReferenceFrame::
	               ASPN_MEASUREMENT_POSITION_REFERENCE_FRAME_GEODETIC)
	    .finalize();
	py::native_enum<Aspn23MeasurementPositionErrorModel>(
	    m, "AspnMeasurementPositionErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_POSITION_ERROR_MODEL_NONE",
	           Aspn23MeasurementPositionErrorModel::ASPN_MEASUREMENT_POSITION_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementPosition, TypeHeader, py::smart_holder>(m, "MeasurementPosition")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementPositionReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementPositionErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementPosition::get_header)
	    .def("set_header", &MeasurementPosition::set_header)
	    .def("get_time_of_validity", &MeasurementPosition::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementPosition::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementPosition::get_reference_frame)
	    .def("set_reference_frame", &MeasurementPosition::set_reference_frame)
	    .def("get_term1", &MeasurementPosition::get_term1)
	    .def("set_term1", &MeasurementPosition::set_term1)
	    .def("get_term2", &MeasurementPosition::get_term2)
	    .def("set_term2", &MeasurementPosition::set_term2)
	    .def("get_term3", &MeasurementPosition::get_term3)
	    .def("set_term3", &MeasurementPosition::set_term3)
	    .def("get_covariance", &MeasurementPosition::get_covariance)
	    .def("set_covariance", &MeasurementPosition::set_covariance)
	    .def("get_error_model", &MeasurementPosition::get_error_model)
	    .def("set_error_model", &MeasurementPosition::set_error_model)
	    .def("get_error_model_params", &MeasurementPosition::get_error_model_params)
	    .def("set_error_model_params", &MeasurementPosition::set_error_model_params)
	    .def("get_integrity", &MeasurementPosition::get_integrity)
	    .def("set_integrity", &MeasurementPosition::set_integrity);

	py::native_enum<Aspn23MeasurementPositionAttitudeReferenceFrame>(
	    m, "AspnMeasurementPositionAttitudeReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI",
	           Aspn23MeasurementPositionAttitudeReferenceFrame::
	               ASPN_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC",
	           Aspn23MeasurementPositionAttitudeReferenceFrame::
	               ASPN_MEASUREMENT_POSITION_ATTITUDE_REFERENCE_FRAME_GEODETIC)
	    .finalize();
	py::native_enum<Aspn23MeasurementPositionAttitudeErrorModel>(
	    m, "AspnMeasurementPositionAttitudeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE",
	           Aspn23MeasurementPositionAttitudeErrorModel::
	               ASPN_MEASUREMENT_POSITION_ATTITUDE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementPositionAttitude, TypeHeader, py::smart_holder>(
	    m, "MeasurementPositionAttitude")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementPositionAttitudeReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementPositionAttitudeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementPositionAttitude::get_header)
	    .def("set_header", &MeasurementPositionAttitude::set_header)
	    .def("get_time_of_validity", &MeasurementPositionAttitude::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementPositionAttitude::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementPositionAttitude::get_reference_frame)
	    .def("set_reference_frame", &MeasurementPositionAttitude::set_reference_frame)
	    .def("get_p1", &MeasurementPositionAttitude::get_p1)
	    .def("set_p1", &MeasurementPositionAttitude::set_p1)
	    .def("get_p2", &MeasurementPositionAttitude::get_p2)
	    .def("set_p2", &MeasurementPositionAttitude::set_p2)
	    .def("get_p3", &MeasurementPositionAttitude::get_p3)
	    .def("set_p3", &MeasurementPositionAttitude::set_p3)
	    .def("get_quaternion", &MeasurementPositionAttitude::get_quaternion)
	    .def("set_quaternion", &MeasurementPositionAttitude::set_quaternion)
	    .def("get_covariance", &MeasurementPositionAttitude::get_covariance)
	    .def("set_covariance", &MeasurementPositionAttitude::set_covariance)
	    .def("get_error_model", &MeasurementPositionAttitude::get_error_model)
	    .def("set_error_model", &MeasurementPositionAttitude::set_error_model)
	    .def("get_error_model_params", &MeasurementPositionAttitude::get_error_model_params)
	    .def("set_error_model_params", &MeasurementPositionAttitude::set_error_model_params)
	    .def("get_integrity", &MeasurementPositionAttitude::get_integrity)
	    .def("set_integrity", &MeasurementPositionAttitude::set_integrity);

	py::native_enum<Aspn23MeasurementPositionVelocityAttitudeReferenceFrame>(
	    m, "AspnMeasurementPositionVelocityAttitudeReferenceFrame", "enum.Enum")
	    .value("ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI",
	           Aspn23MeasurementPositionVelocityAttitudeReferenceFrame::
	               ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_ECI)
	    .value("ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC",
	           Aspn23MeasurementPositionVelocityAttitudeReferenceFrame::
	               ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_REFERENCE_FRAME_GEODETIC)
	    .finalize();
	py::native_enum<Aspn23MeasurementPositionVelocityAttitudeErrorModel>(
	    m, "AspnMeasurementPositionVelocityAttitudeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE",
	           Aspn23MeasurementPositionVelocityAttitudeErrorModel::
	               ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementPositionVelocityAttitude, TypeHeader, py::smart_holder>(
	    m, "MeasurementPositionVelocityAttitude")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementPositionVelocityAttitudeReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementPositionVelocityAttitudeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementPositionVelocityAttitude::get_header)
	    .def("set_header", &MeasurementPositionVelocityAttitude::set_header)
	    .def("get_time_of_validity", &MeasurementPositionVelocityAttitude::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementPositionVelocityAttitude::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementPositionVelocityAttitude::get_reference_frame)
	    .def("set_reference_frame", &MeasurementPositionVelocityAttitude::set_reference_frame)
	    .def("get_p1", &MeasurementPositionVelocityAttitude::get_p1)
	    .def("set_p1", &MeasurementPositionVelocityAttitude::set_p1)
	    .def("get_p2", &MeasurementPositionVelocityAttitude::get_p2)
	    .def("set_p2", &MeasurementPositionVelocityAttitude::set_p2)
	    .def("get_p3", &MeasurementPositionVelocityAttitude::get_p3)
	    .def("set_p3", &MeasurementPositionVelocityAttitude::set_p3)
	    .def("get_v1", &MeasurementPositionVelocityAttitude::get_v1)
	    .def("set_v1", &MeasurementPositionVelocityAttitude::set_v1)
	    .def("get_v2", &MeasurementPositionVelocityAttitude::get_v2)
	    .def("set_v2", &MeasurementPositionVelocityAttitude::set_v2)
	    .def("get_v3", &MeasurementPositionVelocityAttitude::get_v3)
	    .def("set_v3", &MeasurementPositionVelocityAttitude::set_v3)
	    .def("get_quaternion", &MeasurementPositionVelocityAttitude::get_quaternion)
	    .def("set_quaternion", &MeasurementPositionVelocityAttitude::set_quaternion)
	    .def("get_covariance", &MeasurementPositionVelocityAttitude::get_covariance)
	    .def("set_covariance", &MeasurementPositionVelocityAttitude::set_covariance)
	    .def("get_error_model", &MeasurementPositionVelocityAttitude::get_error_model)
	    .def("set_error_model", &MeasurementPositionVelocityAttitude::set_error_model)
	    .def("get_error_model_params", &MeasurementPositionVelocityAttitude::get_error_model_params)
	    .def("set_error_model_params", &MeasurementPositionVelocityAttitude::set_error_model_params)
	    .def("get_integrity", &MeasurementPositionVelocityAttitude::get_integrity)
	    .def("set_integrity", &MeasurementPositionVelocityAttitude::set_integrity);

	py::native_enum<Aspn23MeasurementRangeRateToPointErrorModel>(
	    m, "AspnMeasurementRangeRateToPointErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_RANGE_RATE_TO_POINT_ERROR_MODEL_NONE",
	           Aspn23MeasurementRangeRateToPointErrorModel::
	               ASPN_MEASUREMENT_RANGE_RATE_TO_POINT_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementRangeRateToPoint, TypeHeader, py::smart_holder>(
	    m, "MeasurementRangeRateToPoint")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeRemotePoint,
	                         double,
	                         double,
	                         Aspn23MeasurementRangeRateToPointErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementRangeRateToPoint::get_header)
	    .def("set_header", &MeasurementRangeRateToPoint::set_header)
	    .def("get_time_of_validity", &MeasurementRangeRateToPoint::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementRangeRateToPoint::set_time_of_validity)
	    .def("get_remote_point", &MeasurementRangeRateToPoint::get_remote_point)
	    .def("set_remote_point", &MeasurementRangeRateToPoint::set_remote_point)
	    .def("get_obs", &MeasurementRangeRateToPoint::get_obs)
	    .def("set_obs", &MeasurementRangeRateToPoint::set_obs)
	    .def("get_variance", &MeasurementRangeRateToPoint::get_variance)
	    .def("set_variance", &MeasurementRangeRateToPoint::set_variance)
	    .def("get_error_model", &MeasurementRangeRateToPoint::get_error_model)
	    .def("set_error_model", &MeasurementRangeRateToPoint::set_error_model)
	    .def("get_error_model_params", &MeasurementRangeRateToPoint::get_error_model_params)
	    .def("set_error_model_params", &MeasurementRangeRateToPoint::set_error_model_params)
	    .def("get_integrity", &MeasurementRangeRateToPoint::get_integrity)
	    .def("set_integrity", &MeasurementRangeRateToPoint::set_integrity);

	py::native_enum<Aspn23MeasurementRangeToPointErrorModel>(
	    m, "AspnMeasurementRangeToPointErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_RANGE_TO_POINT_ERROR_MODEL_NONE",
	           Aspn23MeasurementRangeToPointErrorModel::
	               ASPN_MEASUREMENT_RANGE_TO_POINT_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementRangeToPoint, TypeHeader, py::smart_holder>(m, "MeasurementRangeToPoint")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeRemotePoint,
	                         double,
	                         double,
	                         Aspn23MeasurementRangeToPointErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementRangeToPoint::get_header)
	    .def("set_header", &MeasurementRangeToPoint::set_header)
	    .def("get_time_of_validity", &MeasurementRangeToPoint::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementRangeToPoint::set_time_of_validity)
	    .def("get_remote_point", &MeasurementRangeToPoint::get_remote_point)
	    .def("set_remote_point", &MeasurementRangeToPoint::set_remote_point)
	    .def("get_obs", &MeasurementRangeToPoint::get_obs)
	    .def("set_obs", &MeasurementRangeToPoint::set_obs)
	    .def("get_variance", &MeasurementRangeToPoint::get_variance)
	    .def("set_variance", &MeasurementRangeToPoint::set_variance)
	    .def("get_error_model", &MeasurementRangeToPoint::get_error_model)
	    .def("set_error_model", &MeasurementRangeToPoint::set_error_model)
	    .def("get_error_model_params", &MeasurementRangeToPoint::get_error_model_params)
	    .def("set_error_model_params", &MeasurementRangeToPoint::set_error_model_params)
	    .def("get_integrity", &MeasurementRangeToPoint::get_integrity)
	    .def("set_integrity", &MeasurementRangeToPoint::set_integrity);

	py::class_<MeasurementSatnav, TypeHeader, py::smart_holder>(m, "MeasurementSatnav")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeSatnavTime,
	                         uint16_t,
	                         std::vector<TypeSatnavObs>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementSatnav::get_header)
	    .def("set_header", &MeasurementSatnav::set_header)
	    .def("get_time_of_validity", &MeasurementSatnav::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementSatnav::set_time_of_validity)
	    .def("get_receiver_clock_time", &MeasurementSatnav::get_receiver_clock_time)
	    .def("set_receiver_clock_time", &MeasurementSatnav::set_receiver_clock_time)
	    .def("get_num_signal_types", &MeasurementSatnav::get_num_signal_types)
	    .def("set_num_signal_types", &MeasurementSatnav::set_num_signal_types)
	    .def("get_obs", &MeasurementSatnav::get_obs)
	    .def("set_obs", &MeasurementSatnav::set_obs)
	    .def("get_integrity", &MeasurementSatnav::get_integrity)
	    .def("set_integrity", &MeasurementSatnav::set_integrity);

	py::class_<MeasurementSatnavSubframe, TypeHeader, py::smart_holder>(m,
	                                                                    "MeasurementSatnavSubframe")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         int64_t,
	                         int32_t,
	                         TypeSatnavSatelliteSystem,
	                         int32_t,
	                         xt::pyarray<int8_t>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementSatnavSubframe::get_header)
	    .def("set_header", &MeasurementSatnavSubframe::set_header)
	    .def("get_time_of_validity", &MeasurementSatnavSubframe::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementSatnavSubframe::set_time_of_validity)
	    .def("get_gnss_message_id", &MeasurementSatnavSubframe::get_gnss_message_id)
	    .def("set_gnss_message_id", &MeasurementSatnavSubframe::set_gnss_message_id)
	    .def("get_prn", &MeasurementSatnavSubframe::get_prn)
	    .def("set_prn", &MeasurementSatnavSubframe::set_prn)
	    .def("get_satellite_system", &MeasurementSatnavSubframe::get_satellite_system)
	    .def("set_satellite_system", &MeasurementSatnavSubframe::set_satellite_system)
	    .def("get_freq_slot_id", &MeasurementSatnavSubframe::get_freq_slot_id)
	    .def("set_freq_slot_id", &MeasurementSatnavSubframe::set_freq_slot_id)
	    .def("get_data_vector", &MeasurementSatnavSubframe::get_data_vector)
	    .def("set_data_vector", &MeasurementSatnavSubframe::set_data_vector)
	    .def("get_integrity", &MeasurementSatnavSubframe::get_integrity)
	    .def("set_integrity", &MeasurementSatnavSubframe::set_integrity);

	py::class_<MeasurementSatnavWithSvData, TypeHeader, py::smart_holder>(
	    m, "MeasurementSatnavWithSvData")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         TypeSatnavTime,
	                         uint16_t,
	                         std::vector<TypeSatnavObs>,
	                         std::vector<TypeSatnavSvData>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementSatnavWithSvData::get_header)
	    .def("set_header", &MeasurementSatnavWithSvData::set_header)
	    .def("get_time_of_validity", &MeasurementSatnavWithSvData::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementSatnavWithSvData::set_time_of_validity)
	    .def("get_receiver_clock_time", &MeasurementSatnavWithSvData::get_receiver_clock_time)
	    .def("set_receiver_clock_time", &MeasurementSatnavWithSvData::set_receiver_clock_time)
	    .def("get_num_signal_types", &MeasurementSatnavWithSvData::get_num_signal_types)
	    .def("set_num_signal_types", &MeasurementSatnavWithSvData::set_num_signal_types)
	    .def("get_obs", &MeasurementSatnavWithSvData::get_obs)
	    .def("set_obs", &MeasurementSatnavWithSvData::set_obs)
	    .def("get_sv_data", &MeasurementSatnavWithSvData::get_sv_data)
	    .def("set_sv_data", &MeasurementSatnavWithSvData::set_sv_data)
	    .def("get_integrity", &MeasurementSatnavWithSvData::get_integrity)
	    .def("set_integrity", &MeasurementSatnavWithSvData::set_integrity);

	py::native_enum<Aspn23MeasurementSpecificForce1DSensorType>(
	    m, "AspnMeasurementSpecificForce1DSensorType", "enum.Enum")
	    .value("ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_INTEGRATED",
	           Aspn23MeasurementSpecificForce1DSensorType::
	               ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_INTEGRATED)
	    .value("ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_SAMPLED",
	           Aspn23MeasurementSpecificForce1DSensorType::
	               ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_SENSOR_TYPE_SAMPLED)
	    .finalize();
	py::native_enum<Aspn23MeasurementSpecificForce1DErrorModel>(
	    m, "AspnMeasurementSpecificForce1DErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_ERROR_MODEL_NONE",
	           Aspn23MeasurementSpecificForce1DErrorModel::
	               ASPN_MEASUREMENT_SPECIFIC_FORCE_1D_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementSpecificForce1D, TypeHeader, py::smart_holder>(
	    m, "MeasurementSpecificForce1D")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementSpecificForce1DSensorType,
	                         double,
	                         double,
	                         Aspn23MeasurementSpecificForce1DErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementSpecificForce1D::get_header)
	    .def("set_header", &MeasurementSpecificForce1D::set_header)
	    .def("get_time_of_validity", &MeasurementSpecificForce1D::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementSpecificForce1D::set_time_of_validity)
	    .def("get_sensor_type", &MeasurementSpecificForce1D::get_sensor_type)
	    .def("set_sensor_type", &MeasurementSpecificForce1D::set_sensor_type)
	    .def("get_obs", &MeasurementSpecificForce1D::get_obs)
	    .def("set_obs", &MeasurementSpecificForce1D::set_obs)
	    .def("get_variance", &MeasurementSpecificForce1D::get_variance)
	    .def("set_variance", &MeasurementSpecificForce1D::set_variance)
	    .def("get_error_model", &MeasurementSpecificForce1D::get_error_model)
	    .def("set_error_model", &MeasurementSpecificForce1D::set_error_model)
	    .def("get_error_model_params", &MeasurementSpecificForce1D::get_error_model_params)
	    .def("set_error_model_params", &MeasurementSpecificForce1D::set_error_model_params)
	    .def("get_integrity", &MeasurementSpecificForce1D::get_integrity)
	    .def("set_integrity", &MeasurementSpecificForce1D::set_integrity);

	py::native_enum<Aspn23MeasurementSpeedReference>(
	    m, "AspnMeasurementSpeedReference", "enum.Enum")
	    .value("ASPN_MEASUREMENT_SPEED_REFERENCE_TAS",
	           Aspn23MeasurementSpeedReference::ASPN_MEASUREMENT_SPEED_REFERENCE_TAS)
	    .value("ASPN_MEASUREMENT_SPEED_REFERENCE_IAS",
	           Aspn23MeasurementSpeedReference::ASPN_MEASUREMENT_SPEED_REFERENCE_IAS)
	    .value("ASPN_MEASUREMENT_SPEED_REFERENCE_WATER",
	           Aspn23MeasurementSpeedReference::ASPN_MEASUREMENT_SPEED_REFERENCE_WATER)
	    .value("ASPN_MEASUREMENT_SPEED_REFERENCE_GROUND",
	           Aspn23MeasurementSpeedReference::ASPN_MEASUREMENT_SPEED_REFERENCE_GROUND)
	    .finalize();
	py::native_enum<Aspn23MeasurementSpeedErrorModel>(
	    m, "AspnMeasurementSpeedErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_SPEED_ERROR_MODEL_NONE",
	           Aspn23MeasurementSpeedErrorModel::ASPN_MEASUREMENT_SPEED_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementSpeed, TypeHeader, py::smart_holder>(m, "MeasurementSpeed")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementSpeedReference,
	                         double,
	                         double,
	                         Aspn23MeasurementSpeedErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementSpeed::get_header)
	    .def("set_header", &MeasurementSpeed::set_header)
	    .def("get_time_of_validity", &MeasurementSpeed::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementSpeed::set_time_of_validity)
	    .def("get_reference", &MeasurementSpeed::get_reference)
	    .def("set_reference", &MeasurementSpeed::set_reference)
	    .def("get_speed", &MeasurementSpeed::get_speed)
	    .def("set_speed", &MeasurementSpeed::set_speed)
	    .def("get_variance", &MeasurementSpeed::get_variance)
	    .def("set_variance", &MeasurementSpeed::set_variance)
	    .def("get_error_model", &MeasurementSpeed::get_error_model)
	    .def("set_error_model", &MeasurementSpeed::set_error_model)
	    .def("get_error_model_params", &MeasurementSpeed::get_error_model_params)
	    .def("set_error_model_params", &MeasurementSpeed::set_error_model_params)
	    .def("get_integrity", &MeasurementSpeed::get_integrity)
	    .def("set_integrity", &MeasurementSpeed::set_integrity);

	py::native_enum<Aspn23MeasurementTemperatureErrorModel>(
	    m, "AspnMeasurementTemperatureErrorModel", "enum.Enum")
	    .value(
	        "ASPN_MEASUREMENT_TEMPERATURE_ERROR_MODEL_NONE",
	        Aspn23MeasurementTemperatureErrorModel::ASPN_MEASUREMENT_TEMPERATURE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTemperature, TypeHeader, py::smart_holder>(m, "MeasurementTemperature")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         double,
	                         double,
	                         Aspn23MeasurementTemperatureErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTemperature::get_header)
	    .def("set_header", &MeasurementTemperature::set_header)
	    .def("get_time_of_validity", &MeasurementTemperature::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTemperature::set_time_of_validity)
	    .def("get_temperature", &MeasurementTemperature::get_temperature)
	    .def("set_temperature", &MeasurementTemperature::set_temperature)
	    .def("get_variance", &MeasurementTemperature::get_variance)
	    .def("set_variance", &MeasurementTemperature::set_variance)
	    .def("get_error_model", &MeasurementTemperature::get_error_model)
	    .def("set_error_model", &MeasurementTemperature::set_error_model)
	    .def("get_error_model_params", &MeasurementTemperature::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTemperature::set_error_model_params)
	    .def("get_integrity", &MeasurementTemperature::get_integrity)
	    .def("set_integrity", &MeasurementTemperature::set_integrity);

	py::native_enum<Aspn23MeasurementTimeErrorModel>(
	    m, "AspnMeasurementTimeErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_TIME_ERROR_MODEL_NONE",
	           Aspn23MeasurementTimeErrorModel::ASPN_MEASUREMENT_TIME_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTime, TypeHeader, py::smart_holder>(m, "MeasurementTime")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         int32_t,
	                         xt::pyarray<uint8_t>,
	                         xt::pyarray<int64_t>,
	                         xt::pyarray<int32_t>,
	                         uint8_t,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementTimeErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTime::get_header)
	    .def("set_header", &MeasurementTime::set_header)
	    .def("get_time_of_validity", &MeasurementTime::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTime::set_time_of_validity)
	    .def("get_time_of_validity_attosec", &MeasurementTime::get_time_of_validity_attosec)
	    .def("set_time_of_validity_attosec", &MeasurementTime::set_time_of_validity_attosec)
	    .def("get_clock_id", &MeasurementTime::get_clock_id)
	    .def("set_clock_id", &MeasurementTime::set_clock_id)
	    .def("get_elapsed_nsec", &MeasurementTime::get_elapsed_nsec)
	    .def("set_elapsed_nsec", &MeasurementTime::set_elapsed_nsec)
	    .def("get_elapsed_attosec", &MeasurementTime::get_elapsed_attosec)
	    .def("set_elapsed_attosec", &MeasurementTime::set_elapsed_attosec)
	    .def("get_digits_of_precision", &MeasurementTime::get_digits_of_precision)
	    .def("set_digits_of_precision", &MeasurementTime::set_digits_of_precision)
	    .def("get_covariance", &MeasurementTime::get_covariance)
	    .def("set_covariance", &MeasurementTime::set_covariance)
	    .def("get_error_model", &MeasurementTime::get_error_model)
	    .def("set_error_model", &MeasurementTime::set_error_model)
	    .def("get_error_model_params", &MeasurementTime::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTime::set_error_model_params)
	    .def("get_integrity", &MeasurementTime::get_integrity)
	    .def("set_integrity", &MeasurementTime::set_integrity);

	py::native_enum<Aspn23MeasurementTimeDifferenceErrorModel>(
	    m, "AspnMeasurementTimeDifferenceErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_TIME_DIFFERENCE_ERROR_MODEL_NONE",
	           Aspn23MeasurementTimeDifferenceErrorModel::
	               ASPN_MEASUREMENT_TIME_DIFFERENCE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTimeDifference, TypeHeader, py::smart_holder>(m,
	                                                                    "MeasurementTimeDifference")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         int32_t,
	                         uint8_t,
	                         uint8_t,
	                         int64_t,
	                         int32_t,
	                         uint8_t,
	                         double,
	                         Aspn23MeasurementTimeDifferenceErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTimeDifference::get_header)
	    .def("set_header", &MeasurementTimeDifference::set_header)
	    .def("get_time_of_validity", &MeasurementTimeDifference::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTimeDifference::set_time_of_validity)
	    .def("get_time_of_validity_attosec",
	         &MeasurementTimeDifference::get_time_of_validity_attosec)
	    .def("set_time_of_validity_attosec",
	         &MeasurementTimeDifference::set_time_of_validity_attosec)
	    .def("get_clock_id1", &MeasurementTimeDifference::get_clock_id1)
	    .def("set_clock_id1", &MeasurementTimeDifference::set_clock_id1)
	    .def("get_clock_id2", &MeasurementTimeDifference::get_clock_id2)
	    .def("set_clock_id2", &MeasurementTimeDifference::set_clock_id2)
	    .def("get_time_diff_nsec", &MeasurementTimeDifference::get_time_diff_nsec)
	    .def("set_time_diff_nsec", &MeasurementTimeDifference::set_time_diff_nsec)
	    .def("get_time_diff_attosec", &MeasurementTimeDifference::get_time_diff_attosec)
	    .def("set_time_diff_attosec", &MeasurementTimeDifference::set_time_diff_attosec)
	    .def("get_digits_of_precision", &MeasurementTimeDifference::get_digits_of_precision)
	    .def("set_digits_of_precision", &MeasurementTimeDifference::set_digits_of_precision)
	    .def("get_variance", &MeasurementTimeDifference::get_variance)
	    .def("set_variance", &MeasurementTimeDifference::set_variance)
	    .def("get_error_model", &MeasurementTimeDifference::get_error_model)
	    .def("set_error_model", &MeasurementTimeDifference::set_error_model)
	    .def("get_error_model_params", &MeasurementTimeDifference::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTimeDifference::set_error_model_params)
	    .def("get_integrity", &MeasurementTimeDifference::get_integrity)
	    .def("set_integrity", &MeasurementTimeDifference::set_integrity);

	py::native_enum<Aspn23MeasurementTimeFrequencyDifferenceErrorModel>(
	    m, "AspnMeasurementTimeFrequencyDifferenceErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE",
	           Aspn23MeasurementTimeFrequencyDifferenceErrorModel::
	               ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE_ERROR_MODEL_NONE)
	    .finalize();

	py::class_<MeasurementTimeFrequencyDifference, TypeHeader, py::smart_holder>(
	    m, "MeasurementTimeFrequencyDifference")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         int32_t,
	                         uint8_t,
	                         uint8_t,
	                         int64_t,
	                         int32_t,
	                         uint8_t,
	                         double,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementTimeFrequencyDifferenceErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementTimeFrequencyDifference::get_header)
	    .def("set_header", &MeasurementTimeFrequencyDifference::set_header)
	    .def("get_time_of_validity", &MeasurementTimeFrequencyDifference::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementTimeFrequencyDifference::set_time_of_validity)
	    .def("get_time_of_validity_attosec",
	         &MeasurementTimeFrequencyDifference::get_time_of_validity_attosec)
	    .def("set_time_of_validity_attosec",
	         &MeasurementTimeFrequencyDifference::set_time_of_validity_attosec)
	    .def("get_clock_id1", &MeasurementTimeFrequencyDifference::get_clock_id1)
	    .def("set_clock_id1", &MeasurementTimeFrequencyDifference::set_clock_id1)
	    .def("get_clock_id2", &MeasurementTimeFrequencyDifference::get_clock_id2)
	    .def("set_clock_id2", &MeasurementTimeFrequencyDifference::set_clock_id2)
	    .def("get_time_diff_nsec", &MeasurementTimeFrequencyDifference::get_time_diff_nsec)
	    .def("set_time_diff_nsec", &MeasurementTimeFrequencyDifference::set_time_diff_nsec)
	    .def("get_time_diff_attosec", &MeasurementTimeFrequencyDifference::get_time_diff_attosec)
	    .def("set_time_diff_attosec", &MeasurementTimeFrequencyDifference::set_time_diff_attosec)
	    .def("get_digits_of_precision",
	         &MeasurementTimeFrequencyDifference::get_digits_of_precision)
	    .def("set_digits_of_precision",
	         &MeasurementTimeFrequencyDifference::set_digits_of_precision)
	    .def("get_freq_diff", &MeasurementTimeFrequencyDifference::get_freq_diff)
	    .def("set_freq_diff", &MeasurementTimeFrequencyDifference::set_freq_diff)
	    .def("get_covariance", &MeasurementTimeFrequencyDifference::get_covariance)
	    .def("set_covariance", &MeasurementTimeFrequencyDifference::set_covariance)
	    .def("get_error_model", &MeasurementTimeFrequencyDifference::get_error_model)
	    .def("set_error_model", &MeasurementTimeFrequencyDifference::set_error_model)
	    .def("get_error_model_params", &MeasurementTimeFrequencyDifference::get_error_model_params)
	    .def("set_error_model_params", &MeasurementTimeFrequencyDifference::set_error_model_params)
	    .def("get_integrity", &MeasurementTimeFrequencyDifference::get_integrity)
	    .def("set_integrity", &MeasurementTimeFrequencyDifference::set_integrity);

	py::native_enum<Aspn23MeasurementVelocityReferenceFrame>(
	    m, "AspnMeasurementVelocityReferenceFrame", "enum.Enum")
	    .value(
	        "ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI",
	        Aspn23MeasurementVelocityReferenceFrame::ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECI)
	    .value(
	        "ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF",
	        Aspn23MeasurementVelocityReferenceFrame::ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_ECEF)
	    .value(
	        "ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED",
	        Aspn23MeasurementVelocityReferenceFrame::ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_NED)
	    .value("ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR",
	           Aspn23MeasurementVelocityReferenceFrame::
	               ASPN_MEASUREMENT_VELOCITY_REFERENCE_FRAME_SENSOR)
	    .finalize();
	py::native_enum<Aspn23MeasurementVelocityErrorModel>(
	    m, "AspnMeasurementVelocityErrorModel", "enum.Enum")
	    .value("ASPN_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE",
	           Aspn23MeasurementVelocityErrorModel::ASPN_MEASUREMENT_VELOCITY_ERROR_MODEL_NONE)
	    .finalize();

	py::native_enum<Aspn23MessageType>(m, "AspnMessageType", "enum.Enum")
	    .value("ASPN_UNDEFINED", AspnMessageType::ASPN_UNDEFINED)
	    .value("ASPN_METADATA_BEIDOU_EPHEMERIS", Aspn23MessageType::ASPN_METADATA_BEIDOU_EPHEMERIS)
	    .value("ASPN_METADATA_GLONASS_EPHEMERIS",
	           Aspn23MessageType::ASPN_METADATA_GLONASS_EPHEMERIS)
	    .value("ASPN_METADATA_GPS_CNAV_EPHEMERIS",
	           Aspn23MessageType::ASPN_METADATA_GPS_CNAV_EPHEMERIS)
	    .value("ASPN_METADATA_GPS_LNAV_EPHEMERIS",
	           Aspn23MessageType::ASPN_METADATA_GPS_LNAV_EPHEMERIS)
	    .value("ASPN_METADATA_GPS_MNAV_EPHEMERIS",
	           Aspn23MessageType::ASPN_METADATA_GPS_MNAV_EPHEMERIS)
	    .value("ASPN_METADATA_GPS_IONO_UTC_PARAMETERS",
	           Aspn23MessageType::ASPN_METADATA_GPS_IONO_UTC_PARAMETERS)
	    .value("ASPN_METADATA_GALILEO_EPHEMERIS",
	           Aspn23MessageType::ASPN_METADATA_GALILEO_EPHEMERIS)
	    .value("ASPN_METADATA_IMU", Aspn23MessageType::ASPN_METADATA_IMU)
	    .value("ASPN_METADATA_GENERIC", Aspn23MessageType::ASPN_METADATA_GENERIC)
	    .value("ASPN_METADATA_IMAGE_FEATURES", Aspn23MessageType::ASPN_METADATA_IMAGE_FEATURES)
	    .value("ASPN_METADATA_MAGNETIC_FIELD", Aspn23MessageType::ASPN_METADATA_MAGNETIC_FIELD)
	    .value("ASPN_METADATA_SATNAV_OBS", Aspn23MessageType::ASPN_METADATA_SATNAV_OBS)
	    .value("ASPN_MEASUREMENT_IMU", Aspn23MessageType::ASPN_MEASUREMENT_IMU)
	    .value("ASPN_MEASUREMENT_TDOA_1TX_2RX", Aspn23MessageType::ASPN_MEASUREMENT_TDOA_1TX_2RX)
	    .value("ASPN_MEASUREMENT_TDOA_2TX_1RX", Aspn23MessageType::ASPN_MEASUREMENT_TDOA_2TX_1RX)
	    .value("ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED",
	           Aspn23MessageType::ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED)
	    .value("ASPN_MEASUREMENT_ALTITUDE", Aspn23MessageType::ASPN_MEASUREMENT_ALTITUDE)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY",
	           Aspn23MessageType::ASPN_MEASUREMENT_ANGULAR_VELOCITY)
	    .value("ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D",
	           Aspn23MessageType::ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D)
	    .value("ASPN_MEASUREMENT_ATTITUDE_2D", Aspn23MessageType::ASPN_MEASUREMENT_ATTITUDE_2D)
	    .value("ASPN_MEASUREMENT_ATTITUDE_3D", Aspn23MessageType::ASPN_MEASUREMENT_ATTITUDE_3D)
	    .value("ASPN_MEASUREMENT_BAROMETER", Aspn23MessageType::ASPN_MEASUREMENT_BAROMETER)
	    .value("ASPN_MEASUREMENT_DELTA_POSITION",
	           Aspn23MessageType::ASPN_MEASUREMENT_DELTA_POSITION)
	    .value("ASPN_MEASUREMENT_DELTA_RANGE", Aspn23MessageType::ASPN_MEASUREMENT_DELTA_RANGE)
	    .value("ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT",
	           Aspn23MessageType::ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT)
	    .value("ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS",
	           Aspn23MessageType::ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS)
	    .value("ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS",
	           Aspn23MessageType::ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D",
	           Aspn23MessageType::ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D)
	    .value("ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D",
	           Aspn23MessageType::ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D)
	    .value("ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE",
	           Aspn23MessageType::ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE)
	    .value("ASPN_MEASUREMENT_HEADING", Aspn23MessageType::ASPN_MEASUREMENT_HEADING)
	    .value("ASPN_MEASUREMENT_IMAGE", Aspn23MessageType::ASPN_MEASUREMENT_IMAGE)
	    .value("ASPN_MEASUREMENT_MAGNETIC_FIELD",
	           Aspn23MessageType::ASPN_MEASUREMENT_MAGNETIC_FIELD)
	    .value("ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE",
	           Aspn23MessageType::ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE)
	    .value("ASPN_MEASUREMENT_POSITION", Aspn23MessageType::ASPN_MEASUREMENT_POSITION)
	    .value("ASPN_MEASUREMENT_POSITION_ATTITUDE",
	           Aspn23MessageType::ASPN_MEASUREMENT_POSITION_ATTITUDE)
	    .value("ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE",
	           Aspn23MessageType::ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE)
	    .value("ASPN_MEASUREMENT_RANGE_RATE_TO_POINT",
	           Aspn23MessageType::ASPN_MEASUREMENT_RANGE_RATE_TO_POINT)
	    .value("ASPN_MEASUREMENT_RANGE_TO_POINT",
	           Aspn23MessageType::ASPN_MEASUREMENT_RANGE_TO_POINT)
	    .value("ASPN_MEASUREMENT_SATNAV", Aspn23MessageType::ASPN_MEASUREMENT_SATNAV)
	    .value("ASPN_MEASUREMENT_SATNAV_SUBFRAME",
	           Aspn23MessageType::ASPN_MEASUREMENT_SATNAV_SUBFRAME)
	    .value("ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA",
	           Aspn23MessageType::ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA)
	    .value("ASPN_MEASUREMENT_SPECIFIC_FORCE_1D",
	           Aspn23MessageType::ASPN_MEASUREMENT_SPECIFIC_FORCE_1D)
	    .value("ASPN_MEASUREMENT_SPEED", Aspn23MessageType::ASPN_MEASUREMENT_SPEED)
	    .value("ASPN_MEASUREMENT_TEMPERATURE", Aspn23MessageType::ASPN_MEASUREMENT_TEMPERATURE)
	    .value("ASPN_MEASUREMENT_TIME", Aspn23MessageType::ASPN_MEASUREMENT_TIME)
	    .value("ASPN_MEASUREMENT_TIME_DIFFERENCE",
	           Aspn23MessageType::ASPN_MEASUREMENT_TIME_DIFFERENCE)
	    .value("ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE",
	           Aspn23MessageType::ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE)
	    .value("ASPN_MEASUREMENT_VELOCITY", Aspn23MessageType::ASPN_MEASUREMENT_VELOCITY)
	    .value("ASPN_EXTENDED_BEGIN", Aspn23MessageType::ASPN_EXTENDED_BEGIN)
	    .value("ASPN_EXTENDED_END", Aspn23MessageType::ASPN_EXTENDED_END)
	    .finalize();

	py::class_<MeasurementVelocity, TypeHeader, py::smart_holder>(m, "MeasurementVelocity")
	    .def(py::init<PARAMS(TypeHeader,
	                         TypeTimestamp,
	                         Aspn23MeasurementVelocityReferenceFrame,
	                         double,
	                         double,
	                         double,
	                         xt::pyarray<double>,
	                         Aspn23MeasurementVelocityErrorModel,
	                         xt::pyarray<double>,
	                         std::vector<TypeIntegrity>)>())
	    .def("get_header", &MeasurementVelocity::get_header)
	    .def("set_header", &MeasurementVelocity::set_header)
	    .def("get_time_of_validity", &MeasurementVelocity::get_time_of_validity)
	    .def("set_time_of_validity", &MeasurementVelocity::set_time_of_validity)
	    .def("get_reference_frame", &MeasurementVelocity::get_reference_frame)
	    .def("set_reference_frame", &MeasurementVelocity::set_reference_frame)
	    .def("get_x", &MeasurementVelocity::get_x)
	    .def("set_x", &MeasurementVelocity::set_x)
	    .def("get_y", &MeasurementVelocity::get_y)
	    .def("set_y", &MeasurementVelocity::set_y)
	    .def("get_z", &MeasurementVelocity::get_z)
	    .def("set_z", &MeasurementVelocity::set_z)
	    .def("get_covariance", &MeasurementVelocity::get_covariance)
	    .def("set_covariance", &MeasurementVelocity::set_covariance)
	    .def("get_error_model", &MeasurementVelocity::get_error_model)
	    .def("set_error_model", &MeasurementVelocity::set_error_model)
	    .def("get_error_model_params", &MeasurementVelocity::get_error_model_params)
	    .def("set_error_model_params", &MeasurementVelocity::set_error_model_params)
	    .def("get_integrity", &MeasurementVelocity::get_integrity)
	    .def("set_integrity", &MeasurementVelocity::set_integrity);

	m.def("to_type_timestamp",
	      py::overload_cast<double>(&aspn_xtensor::to_type_timestamp),
	      py::arg("t") = 0.0);
	m.def("to_type_timestamp",
	      py::overload_cast<int64_t, int64_t>(&aspn_xtensor::to_type_timestamp),
	      py::arg("sec"),
	      py::arg("nsec"));
	m.def("to_seconds",
	      py::overload_cast<const TypeTimestamp&>(&aspn_xtensor::to_seconds),
	      py::arg("time"));
}
