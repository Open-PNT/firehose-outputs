
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include <aspn23/xtensor/aspn_xtensor.hpp>

#include <memory>
#include <stdexcept>

namespace aspn23_xtensor {

bool is_core_message(std::shared_ptr<aspn23_xtensor::AspnBase> base) {
	if (base == nullptr) throw std::invalid_argument("is_core_message received a nullptr");
	return base->get_message_type() <= ASPN_LAST_MESSAGE;
}

TypeTimestamp get_time(std::shared_ptr<aspn23_xtensor::AspnBase> parent) {
	if (parent == nullptr) {
		throw std::invalid_argument("get_time received a nullptr");
	}
	switch (parent->get_message_type()) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataBeidouEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGlonassEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsCnavEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsLnavEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsMnavEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsIonoUtcParameters>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGalileoEphemeris>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_IMU: {
		auto child = std::dynamic_pointer_cast<MetadataImu>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_GENERIC: {
		auto child = std::dynamic_pointer_cast<MetadataGeneric>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		auto child = std::dynamic_pointer_cast<MetadataImageFeatures>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		auto child = std::dynamic_pointer_cast<MetadataMagneticField>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_METADATA_SATNAV_OBS: {
		auto child = std::dynamic_pointer_cast<MetadataSatnavObs>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_IMU: {
		auto child = std::dynamic_pointer_cast<MeasurementImu>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		auto child = std::dynamic_pointer_cast<MeasurementTdoa1Tx2Rx>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		auto child = std::dynamic_pointer_cast<MeasurementTdoa2Tx1Rx>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		auto child = std::dynamic_pointer_cast<MeasurementAccumulatedDistanceTraveled>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementAltitude>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		auto child = std::dynamic_pointer_cast<MeasurementAngularVelocity>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		auto child = std::dynamic_pointer_cast<MeasurementAngularVelocity1D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		auto child = std::dynamic_pointer_cast<MeasurementAttitude2D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		auto child = std::dynamic_pointer_cast<MeasurementAttitude3D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		auto child = std::dynamic_pointer_cast<MeasurementBarometer>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaPosition>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaRange>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaRangeToPoint>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		auto child = std::dynamic_pointer_cast<MeasurementDirection2DToPoints>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		auto child = std::dynamic_pointer_cast<MeasurementDirection3DToPoints>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		auto child = std::dynamic_pointer_cast<MeasurementDirectionOfMotion2D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		auto child = std::dynamic_pointer_cast<MeasurementDirectionOfMotion3D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementFrequencyDifference>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_HEADING: {
		auto child = std::dynamic_pointer_cast<MeasurementHeading>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_IMAGE: {
		auto child = std::dynamic_pointer_cast<MeasurementImage>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		auto child = std::dynamic_pointer_cast<MeasurementMagneticField>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementMagneticFieldMagnitude>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_POSITION: {
		auto child = std::dynamic_pointer_cast<MeasurementPosition>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementPositionAttitude>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementPositionVelocityAttitude>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementRangeRateToPoint>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementRangeToPoint>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_SATNAV: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnav>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnavSubframe>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnavWithSvData>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		auto child = std::dynamic_pointer_cast<MeasurementSpecificForce1D>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_SPEED: {
		auto child = std::dynamic_pointer_cast<MeasurementSpeed>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		auto child = std::dynamic_pointer_cast<MeasurementTemperature>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TIME: {
		auto child = std::dynamic_pointer_cast<MeasurementTime>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementTimeDifference>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementTimeFrequencyDifference>(parent);
		return child->get_time_of_validity();
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		auto child = std::dynamic_pointer_cast<MeasurementVelocity>(parent);
		return child->get_time_of_validity();
	}

	default: {
		throw std::invalid_argument("get_time called on a non-ASPN-core message");
	}
	}
}

void set_time(std::shared_ptr<aspn23_xtensor::AspnBase> parent, TypeTimestamp time) {
	if (parent == nullptr) throw std::invalid_argument("set_time received a nullptr");
	switch (parent->get_message_type()) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataBeidouEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGlonassEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsCnavEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsLnavEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsMnavEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		auto child = std::dynamic_pointer_cast<MetadataGpsIonoUtcParameters>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		auto child = std::dynamic_pointer_cast<MetadataGalileoEphemeris>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_IMU: {
		auto child = std::dynamic_pointer_cast<MetadataImu>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_GENERIC: {
		auto child = std::dynamic_pointer_cast<MetadataGeneric>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		auto child = std::dynamic_pointer_cast<MetadataImageFeatures>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		auto child = std::dynamic_pointer_cast<MetadataMagneticField>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_METADATA_SATNAV_OBS: {
		auto child = std::dynamic_pointer_cast<MetadataSatnavObs>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_IMU: {
		auto child = std::dynamic_pointer_cast<MeasurementImu>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		auto child = std::dynamic_pointer_cast<MeasurementTdoa1Tx2Rx>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		auto child = std::dynamic_pointer_cast<MeasurementTdoa2Tx1Rx>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		auto child = std::dynamic_pointer_cast<MeasurementAccumulatedDistanceTraveled>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementAltitude>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		auto child = std::dynamic_pointer_cast<MeasurementAngularVelocity>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		auto child = std::dynamic_pointer_cast<MeasurementAngularVelocity1D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		auto child = std::dynamic_pointer_cast<MeasurementAttitude2D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		auto child = std::dynamic_pointer_cast<MeasurementAttitude3D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		auto child = std::dynamic_pointer_cast<MeasurementBarometer>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaPosition>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaRange>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementDeltaRangeToPoint>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		auto child = std::dynamic_pointer_cast<MeasurementDirection2DToPoints>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		auto child = std::dynamic_pointer_cast<MeasurementDirection3DToPoints>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		auto child = std::dynamic_pointer_cast<MeasurementDirectionOfMotion2D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		auto child = std::dynamic_pointer_cast<MeasurementDirectionOfMotion3D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementFrequencyDifference>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_HEADING: {
		auto child = std::dynamic_pointer_cast<MeasurementHeading>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_IMAGE: {
		auto child = std::dynamic_pointer_cast<MeasurementImage>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		auto child = std::dynamic_pointer_cast<MeasurementMagneticField>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementMagneticFieldMagnitude>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_POSITION: {
		auto child = std::dynamic_pointer_cast<MeasurementPosition>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementPositionAttitude>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		auto child = std::dynamic_pointer_cast<MeasurementPositionVelocityAttitude>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementRangeRateToPoint>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		auto child = std::dynamic_pointer_cast<MeasurementRangeToPoint>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_SATNAV: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnav>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnavSubframe>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		auto child = std::dynamic_pointer_cast<MeasurementSatnavWithSvData>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		auto child = std::dynamic_pointer_cast<MeasurementSpecificForce1D>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_SPEED: {
		auto child = std::dynamic_pointer_cast<MeasurementSpeed>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		auto child = std::dynamic_pointer_cast<MeasurementTemperature>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TIME: {
		auto child = std::dynamic_pointer_cast<MeasurementTime>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementTimeDifference>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		auto child = std::dynamic_pointer_cast<MeasurementTimeFrequencyDifference>(parent);
		child->set_time_of_validity(time);
		return;
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		auto child = std::dynamic_pointer_cast<MeasurementVelocity>(parent);
		child->set_time_of_validity(time);
		return;
	}

	default: {
		throw std::invalid_argument("set_time called on a non-ASPN-core message");
	}
	}
}

TypeTimestamp convert_time(const AspnTypeTimestamp& time) { return time.elapsed_nsec; }

AspnTypeTimestamp convert_time(const TypeTimestamp& time) {
	AspnTypeTimestamp out = {time.get_elapsed_nsec()};
	return out;
}

std::shared_ptr<aspn23_xtensor::AspnBase> convert_message(
    Aspn23TypeHeader* parent,
    bool take_ownership,
    std::function<void(aspn23_xtensor::AspnBase*)> custom_deleter) {
	if (parent == nullptr) throw std::invalid_argument("convert_message received a nullptr");
	switch (parent->message_type) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		auto child = (Aspn23MetadataBeidouEphemeris*)parent;
		return std::shared_ptr<MetadataBeidouEphemeris>(
		    new MetadataBeidouEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		auto child = (Aspn23MetadataGlonassEphemeris*)parent;
		return std::shared_ptr<MetadataGlonassEphemeris>(
		    new MetadataGlonassEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		auto child = (Aspn23MetadataGpsCnavEphemeris*)parent;
		return std::shared_ptr<MetadataGpsCnavEphemeris>(
		    new MetadataGpsCnavEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		auto child = (Aspn23MetadataGpsLnavEphemeris*)parent;
		return std::shared_ptr<MetadataGpsLnavEphemeris>(
		    new MetadataGpsLnavEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		auto child = (Aspn23MetadataGpsMnavEphemeris*)parent;
		return std::shared_ptr<MetadataGpsMnavEphemeris>(
		    new MetadataGpsMnavEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		auto child = (Aspn23MetadataGpsIonoUtcParameters*)parent;
		return std::shared_ptr<MetadataGpsIonoUtcParameters>(
		    new MetadataGpsIonoUtcParameters(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		auto child = (Aspn23MetadataGalileoEphemeris*)parent;
		return std::shared_ptr<MetadataGalileoEphemeris>(
		    new MetadataGalileoEphemeris(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_IMU: {
		auto child = (Aspn23MetadataImu*)parent;
		return std::shared_ptr<MetadataImu>(new MetadataImu(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_GENERIC: {
		auto child = (Aspn23MetadataGeneric*)parent;
		return std::shared_ptr<MetadataGeneric>(new MetadataGeneric(child, take_ownership),
		                                        custom_deleter);
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		auto child = (Aspn23MetadataImageFeatures*)parent;
		return std::shared_ptr<MetadataImageFeatures>(
		    new MetadataImageFeatures(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		auto child = (Aspn23MetadataMagneticField*)parent;
		return std::shared_ptr<MetadataMagneticField>(
		    new MetadataMagneticField(child, take_ownership), custom_deleter);
	}

	case ASPN_METADATA_SATNAV_OBS: {
		auto child = (Aspn23MetadataSatnavObs*)parent;
		return std::shared_ptr<MetadataSatnavObs>(new MetadataSatnavObs(child, take_ownership),
		                                          custom_deleter);
	}

	case ASPN_MEASUREMENT_IMU: {
		auto child = (Aspn23MeasurementImu*)parent;
		return std::shared_ptr<MeasurementImu>(new MeasurementImu(child, take_ownership),
		                                       custom_deleter);
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		auto child = (Aspn23MeasurementTdoa1Tx2Rx*)parent;
		return std::shared_ptr<MeasurementTdoa1Tx2Rx>(
		    new MeasurementTdoa1Tx2Rx(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		auto child = (Aspn23MeasurementTdoa2Tx1Rx*)parent;
		return std::shared_ptr<MeasurementTdoa2Tx1Rx>(
		    new MeasurementTdoa2Tx1Rx(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		auto child = (Aspn23MeasurementAccumulatedDistanceTraveled*)parent;
		return std::shared_ptr<MeasurementAccumulatedDistanceTraveled>(
		    new MeasurementAccumulatedDistanceTraveled(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		auto child = (Aspn23MeasurementAltitude*)parent;
		return std::shared_ptr<MeasurementAltitude>(new MeasurementAltitude(child, take_ownership),
		                                            custom_deleter);
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		auto child = (Aspn23MeasurementAngularVelocity*)parent;
		return std::shared_ptr<MeasurementAngularVelocity>(
		    new MeasurementAngularVelocity(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		auto child = (Aspn23MeasurementAngularVelocity1D*)parent;
		return std::shared_ptr<MeasurementAngularVelocity1D>(
		    new MeasurementAngularVelocity1D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		auto child = (Aspn23MeasurementAttitude2D*)parent;
		return std::shared_ptr<MeasurementAttitude2D>(
		    new MeasurementAttitude2D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		auto child = (Aspn23MeasurementAttitude3D*)parent;
		return std::shared_ptr<MeasurementAttitude3D>(
		    new MeasurementAttitude3D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		auto child = (Aspn23MeasurementBarometer*)parent;
		return std::shared_ptr<MeasurementBarometer>(
		    new MeasurementBarometer(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		auto child = (Aspn23MeasurementDeltaPosition*)parent;
		return std::shared_ptr<MeasurementDeltaPosition>(
		    new MeasurementDeltaPosition(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		auto child = (Aspn23MeasurementDeltaRange*)parent;
		return std::shared_ptr<MeasurementDeltaRange>(
		    new MeasurementDeltaRange(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		auto child = (Aspn23MeasurementDeltaRangeToPoint*)parent;
		return std::shared_ptr<MeasurementDeltaRangeToPoint>(
		    new MeasurementDeltaRangeToPoint(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		auto child = (Aspn23MeasurementDirection2DToPoints*)parent;
		return std::shared_ptr<MeasurementDirection2DToPoints>(
		    new MeasurementDirection2DToPoints(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		auto child = (Aspn23MeasurementDirection3DToPoints*)parent;
		return std::shared_ptr<MeasurementDirection3DToPoints>(
		    new MeasurementDirection3DToPoints(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		auto child = (Aspn23MeasurementDirectionOfMotion2D*)parent;
		return std::shared_ptr<MeasurementDirectionOfMotion2D>(
		    new MeasurementDirectionOfMotion2D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		auto child = (Aspn23MeasurementDirectionOfMotion3D*)parent;
		return std::shared_ptr<MeasurementDirectionOfMotion3D>(
		    new MeasurementDirectionOfMotion3D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		auto child = (Aspn23MeasurementFrequencyDifference*)parent;
		return std::shared_ptr<MeasurementFrequencyDifference>(
		    new MeasurementFrequencyDifference(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_HEADING: {
		auto child = (Aspn23MeasurementHeading*)parent;
		return std::shared_ptr<MeasurementHeading>(new MeasurementHeading(child, take_ownership),
		                                           custom_deleter);
	}

	case ASPN_MEASUREMENT_IMAGE: {
		auto child = (Aspn23MeasurementImage*)parent;
		return std::shared_ptr<MeasurementImage>(new MeasurementImage(child, take_ownership),
		                                         custom_deleter);
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		auto child = (Aspn23MeasurementMagneticField*)parent;
		return std::shared_ptr<MeasurementMagneticField>(
		    new MeasurementMagneticField(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		auto child = (Aspn23MeasurementMagneticFieldMagnitude*)parent;
		return std::shared_ptr<MeasurementMagneticFieldMagnitude>(
		    new MeasurementMagneticFieldMagnitude(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_POSITION: {
		auto child = (Aspn23MeasurementPosition*)parent;
		return std::shared_ptr<MeasurementPosition>(new MeasurementPosition(child, take_ownership),
		                                            custom_deleter);
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		auto child = (Aspn23MeasurementPositionAttitude*)parent;
		return std::shared_ptr<MeasurementPositionAttitude>(
		    new MeasurementPositionAttitude(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		auto child = (Aspn23MeasurementPositionVelocityAttitude*)parent;
		return std::shared_ptr<MeasurementPositionVelocityAttitude>(
		    new MeasurementPositionVelocityAttitude(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		auto child = (Aspn23MeasurementRangeRateToPoint*)parent;
		return std::shared_ptr<MeasurementRangeRateToPoint>(
		    new MeasurementRangeRateToPoint(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		auto child = (Aspn23MeasurementRangeToPoint*)parent;
		return std::shared_ptr<MeasurementRangeToPoint>(
		    new MeasurementRangeToPoint(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_SATNAV: {
		auto child = (Aspn23MeasurementSatnav*)parent;
		return std::shared_ptr<MeasurementSatnav>(new MeasurementSatnav(child, take_ownership),
		                                          custom_deleter);
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		auto child = (Aspn23MeasurementSatnavSubframe*)parent;
		return std::shared_ptr<MeasurementSatnavSubframe>(
		    new MeasurementSatnavSubframe(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		auto child = (Aspn23MeasurementSatnavWithSvData*)parent;
		return std::shared_ptr<MeasurementSatnavWithSvData>(
		    new MeasurementSatnavWithSvData(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		auto child = (Aspn23MeasurementSpecificForce1D*)parent;
		return std::shared_ptr<MeasurementSpecificForce1D>(
		    new MeasurementSpecificForce1D(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_SPEED: {
		auto child = (Aspn23MeasurementSpeed*)parent;
		return std::shared_ptr<MeasurementSpeed>(new MeasurementSpeed(child, take_ownership),
		                                         custom_deleter);
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		auto child = (Aspn23MeasurementTemperature*)parent;
		return std::shared_ptr<MeasurementTemperature>(
		    new MeasurementTemperature(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_TIME: {
		auto child = (Aspn23MeasurementTime*)parent;
		return std::shared_ptr<MeasurementTime>(new MeasurementTime(child, take_ownership),
		                                        custom_deleter);
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		auto child = (Aspn23MeasurementTimeDifference*)parent;
		return std::shared_ptr<MeasurementTimeDifference>(
		    new MeasurementTimeDifference(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		auto child = (Aspn23MeasurementTimeFrequencyDifference*)parent;
		return std::shared_ptr<MeasurementTimeFrequencyDifference>(
		    new MeasurementTimeFrequencyDifference(child, take_ownership), custom_deleter);
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		auto child = (Aspn23MeasurementVelocity*)parent;
		return std::shared_ptr<MeasurementVelocity>(new MeasurementVelocity(child, take_ownership),
		                                            custom_deleter);
	}

	default: {
		throw std::invalid_argument("convert_message called on a non-ASPN-core message");
	}
	}
}

std::shared_ptr<aspn23_xtensor::AspnBase> copy_message(
    std::shared_ptr<aspn23_xtensor::AspnBase> parent) {
	if (parent == nullptr) return nullptr;
	switch (parent->get_message_type()) {

	case ASPN_METADATA_BEIDOU_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataBeidouEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataBeidouEphemeris>(MetadataBeidouEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_GLONASS_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataGlonassEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGlonassEphemeris>(MetadataGlonassEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_GPS_CNAV_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataGpsCnavEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGpsCnavEphemeris>(MetadataGpsCnavEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_GPS_LNAV_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataGpsLnavEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGpsLnavEphemeris>(MetadataGpsLnavEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_GPS_MNAV_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataGpsMnavEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGpsMnavEphemeris>(MetadataGpsMnavEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_GPS_IONO_UTC_PARAMETERS: {
		auto child = *std::dynamic_pointer_cast<MetadataGpsIonoUtcParameters>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGpsIonoUtcParameters>(MetadataGpsIonoUtcParameters(child));
		return copy;
	}

	case ASPN_METADATA_GALILEO_EPHEMERIS: {
		auto child = *std::dynamic_pointer_cast<MetadataGalileoEphemeris>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGalileoEphemeris>(MetadataGalileoEphemeris(child));
		return copy;
	}

	case ASPN_METADATA_IMU: {
		auto child                       = *std::dynamic_pointer_cast<MetadataImu>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MetadataImu>(MetadataImu(child));
		return copy;
	}

	case ASPN_METADATA_GENERIC: {
		auto child = *std::dynamic_pointer_cast<MetadataGeneric>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataGeneric>(MetadataGeneric(child));
		return copy;
	}

	case ASPN_METADATA_IMAGE_FEATURES: {
		auto child = *std::dynamic_pointer_cast<MetadataImageFeatures>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataImageFeatures>(MetadataImageFeatures(child));
		return copy;
	}

	case ASPN_METADATA_MAGNETIC_FIELD: {
		auto child = *std::dynamic_pointer_cast<MetadataMagneticField>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataMagneticField>(MetadataMagneticField(child));
		return copy;
	}

	case ASPN_METADATA_SATNAV_OBS: {
		auto child = *std::dynamic_pointer_cast<MetadataSatnavObs>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MetadataSatnavObs>(MetadataSatnavObs(child));
		return copy;
	}

	case ASPN_MEASUREMENT_IMU: {
		auto child                       = *std::dynamic_pointer_cast<MeasurementImu>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MeasurementImu>(MeasurementImu(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TDOA_1TX_2RX: {
		auto child = *std::dynamic_pointer_cast<MeasurementTdoa1Tx2Rx>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementTdoa1Tx2Rx>(MeasurementTdoa1Tx2Rx(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TDOA_2TX_1RX: {
		auto child = *std::dynamic_pointer_cast<MeasurementTdoa2Tx1Rx>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementTdoa2Tx1Rx>(MeasurementTdoa2Tx1Rx(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ACCUMULATED_DISTANCE_TRAVELED: {
		auto child = *std::dynamic_pointer_cast<MeasurementAccumulatedDistanceTraveled>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MeasurementAccumulatedDistanceTraveled>(
		    MeasurementAccumulatedDistanceTraveled(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ALTITUDE: {
		auto child = *std::dynamic_pointer_cast<MeasurementAltitude>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementAltitude>(MeasurementAltitude(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY: {
		auto child = *std::dynamic_pointer_cast<MeasurementAngularVelocity>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementAngularVelocity>(MeasurementAngularVelocity(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ANGULAR_VELOCITY_1D: {
		auto child = *std::dynamic_pointer_cast<MeasurementAngularVelocity1D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementAngularVelocity1D>(MeasurementAngularVelocity1D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ATTITUDE_2D: {
		auto child = *std::dynamic_pointer_cast<MeasurementAttitude2D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementAttitude2D>(MeasurementAttitude2D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_ATTITUDE_3D: {
		auto child = *std::dynamic_pointer_cast<MeasurementAttitude3D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementAttitude3D>(MeasurementAttitude3D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_BAROMETER: {
		auto child = *std::dynamic_pointer_cast<MeasurementBarometer>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementBarometer>(MeasurementBarometer(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DELTA_POSITION: {
		auto child = *std::dynamic_pointer_cast<MeasurementDeltaPosition>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDeltaPosition>(MeasurementDeltaPosition(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE: {
		auto child = *std::dynamic_pointer_cast<MeasurementDeltaRange>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDeltaRange>(MeasurementDeltaRange(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DELTA_RANGE_TO_POINT: {
		auto child = *std::dynamic_pointer_cast<MeasurementDeltaRangeToPoint>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDeltaRangeToPoint>(MeasurementDeltaRangeToPoint(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DIRECTION_2D_TO_POINTS: {
		auto child = *std::dynamic_pointer_cast<MeasurementDirection2DToPoints>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDirection2DToPoints>(MeasurementDirection2DToPoints(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DIRECTION_3D_TO_POINTS: {
		auto child = *std::dynamic_pointer_cast<MeasurementDirection3DToPoints>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDirection3DToPoints>(MeasurementDirection3DToPoints(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_2D: {
		auto child = *std::dynamic_pointer_cast<MeasurementDirectionOfMotion2D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDirectionOfMotion2D>(MeasurementDirectionOfMotion2D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_DIRECTION_OF_MOTION_3D: {
		auto child = *std::dynamic_pointer_cast<MeasurementDirectionOfMotion3D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementDirectionOfMotion3D>(MeasurementDirectionOfMotion3D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_FREQUENCY_DIFFERENCE: {
		auto child = *std::dynamic_pointer_cast<MeasurementFrequencyDifference>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementFrequencyDifference>(MeasurementFrequencyDifference(child));
		return copy;
	}

	case ASPN_MEASUREMENT_HEADING: {
		auto child = *std::dynamic_pointer_cast<MeasurementHeading>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementHeading>(MeasurementHeading(child));
		return copy;
	}

	case ASPN_MEASUREMENT_IMAGE: {
		auto child = *std::dynamic_pointer_cast<MeasurementImage>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementImage>(MeasurementImage(child));
		return copy;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD: {
		auto child = *std::dynamic_pointer_cast<MeasurementMagneticField>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementMagneticField>(MeasurementMagneticField(child));
		return copy;
	}

	case ASPN_MEASUREMENT_MAGNETIC_FIELD_MAGNITUDE: {
		auto child = *std::dynamic_pointer_cast<MeasurementMagneticFieldMagnitude>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MeasurementMagneticFieldMagnitude>(
		    MeasurementMagneticFieldMagnitude(child));
		return copy;
	}

	case ASPN_MEASUREMENT_POSITION: {
		auto child = *std::dynamic_pointer_cast<MeasurementPosition>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementPosition>(MeasurementPosition(child));
		return copy;
	}

	case ASPN_MEASUREMENT_POSITION_ATTITUDE: {
		auto child = *std::dynamic_pointer_cast<MeasurementPositionAttitude>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementPositionAttitude>(MeasurementPositionAttitude(child));
		return copy;
	}

	case ASPN_MEASUREMENT_POSITION_VELOCITY_ATTITUDE: {
		auto child = *std::dynamic_pointer_cast<MeasurementPositionVelocityAttitude>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MeasurementPositionVelocityAttitude>(
		    MeasurementPositionVelocityAttitude(child));
		return copy;
	}

	case ASPN_MEASUREMENT_RANGE_RATE_TO_POINT: {
		auto child = *std::dynamic_pointer_cast<MeasurementRangeRateToPoint>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementRangeRateToPoint>(MeasurementRangeRateToPoint(child));
		return copy;
	}

	case ASPN_MEASUREMENT_RANGE_TO_POINT: {
		auto child = *std::dynamic_pointer_cast<MeasurementRangeToPoint>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementRangeToPoint>(MeasurementRangeToPoint(child));
		return copy;
	}

	case ASPN_MEASUREMENT_SATNAV: {
		auto child = *std::dynamic_pointer_cast<MeasurementSatnav>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementSatnav>(MeasurementSatnav(child));
		return copy;
	}

	case ASPN_MEASUREMENT_SATNAV_SUBFRAME: {
		auto child = *std::dynamic_pointer_cast<MeasurementSatnavSubframe>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementSatnavSubframe>(MeasurementSatnavSubframe(child));
		return copy;
	}

	case ASPN_MEASUREMENT_SATNAV_WITH_SV_DATA: {
		auto child = *std::dynamic_pointer_cast<MeasurementSatnavWithSvData>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementSatnavWithSvData>(MeasurementSatnavWithSvData(child));
		return copy;
	}

	case ASPN_MEASUREMENT_SPECIFIC_FORCE_1D: {
		auto child = *std::dynamic_pointer_cast<MeasurementSpecificForce1D>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementSpecificForce1D>(MeasurementSpecificForce1D(child));
		return copy;
	}

	case ASPN_MEASUREMENT_SPEED: {
		auto child = *std::dynamic_pointer_cast<MeasurementSpeed>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementSpeed>(MeasurementSpeed(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TEMPERATURE: {
		auto child = *std::dynamic_pointer_cast<MeasurementTemperature>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementTemperature>(MeasurementTemperature(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TIME: {
		auto child = *std::dynamic_pointer_cast<MeasurementTime>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementTime>(MeasurementTime(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TIME_DIFFERENCE: {
		auto child = *std::dynamic_pointer_cast<MeasurementTimeDifference>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementTimeDifference>(MeasurementTimeDifference(child));
		return copy;
	}

	case ASPN_MEASUREMENT_TIME_FREQUENCY_DIFFERENCE: {
		auto child = *std::dynamic_pointer_cast<MeasurementTimeFrequencyDifference>(parent);
		std::shared_ptr<TypeHeader> copy = std::make_shared<MeasurementTimeFrequencyDifference>(
		    MeasurementTimeFrequencyDifference(child));
		return copy;
	}

	case ASPN_MEASUREMENT_VELOCITY: {
		auto child = *std::dynamic_pointer_cast<MeasurementVelocity>(parent);
		std::shared_ptr<TypeHeader> copy =
		    std::make_shared<MeasurementVelocity>(MeasurementVelocity(child));
		return copy;
	}

	default: {
		return nullptr;
	}
	}
}

}  // namespace aspn23_xtensor
