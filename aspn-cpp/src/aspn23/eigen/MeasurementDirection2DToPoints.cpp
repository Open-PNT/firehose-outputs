
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementDirection2DToPoints.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MeasurementDirection2DToPoints::MeasurementDirection2DToPoints(
    TypeHeader header, TypeTimestamp time_of_validity, std::vector<TypeDirection2DToPoint> obs)
    : TypeHeader(header) {
	auto header_prep                       = header.get_aspn_c();
	auto time_of_validity_prep             = time_of_validity.get_aspn_c();
	Aspn23TypeDirection2DToPoint* obs_prep = new Aspn23TypeDirection2DToPoint[obs.size()];
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object = obs[ii].get_aspn_c();
		obs_prep[ii]  = *c_object;
	}

	this->c_struct = aspn23_measurement_direction_2d_to_points_new(
	    header_prep, time_of_validity_prep, obs.size(), obs_prep);

	delete[] obs_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementDirection2DToPoints::MeasurementDirection2DToPoints(
    Aspn23MeasurementDirection2DToPoints* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementDirection2DToPoints::MeasurementDirection2DToPoints(
    const MeasurementDirection2DToPoints& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                            = other.get_header();
	auto time_of_validity                  = other.get_time_of_validity();
	auto obs                               = other.get_obs();
	auto header_prep                       = header.get_aspn_c();
	auto time_of_validity_prep             = time_of_validity.get_aspn_c();
	Aspn23TypeDirection2DToPoint* obs_prep = new Aspn23TypeDirection2DToPoint[obs.size()];
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object = obs[ii].get_aspn_c();
		obs_prep[ii]  = *c_object;
	}

	this->c_struct = aspn23_measurement_direction_2d_to_points_new(
	    header_prep, time_of_validity_prep, other.get_obs().size(), obs_prep);

	delete[] obs_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementDirection2DToPoints& MeasurementDirection2DToPoints::operator=(
    const MeasurementDirection2DToPoints& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_2d_to_points_free(this->c_struct);
		auto header                            = other.get_header();
		auto time_of_validity                  = other.get_time_of_validity();
		auto obs                               = other.get_obs();
		auto header_prep                       = header.get_aspn_c();
		auto time_of_validity_prep             = time_of_validity.get_aspn_c();
		Aspn23TypeDirection2DToPoint* obs_prep = new Aspn23TypeDirection2DToPoint[obs.size()];
		for (size_t ii = 0; ii < obs.size(); ii++) {
			auto c_object = obs[ii].get_aspn_c();
			obs_prep[ii]  = *c_object;
		}

		this->c_struct = aspn23_measurement_direction_2d_to_points_new(
		    header_prep, time_of_validity_prep, other.get_obs().size(), obs_prep);

		delete[] obs_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementDirection2DToPoints::MeasurementDirection2DToPoints(
    MeasurementDirection2DToPoints&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementDirection2DToPoints& MeasurementDirection2DToPoints::operator=(
    MeasurementDirection2DToPoints&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_direction_2d_to_points_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementDirection2DToPoints::~MeasurementDirection2DToPoints() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_direction_2d_to_points_free(this->c_struct);
}

Aspn23MessageType MeasurementDirection2DToPoints::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementDirection2DToPoints::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementDirection2DToPoints::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementDirection2DToPoints::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementDirection2DToPoints::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementDirection2DToPoints::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementDirection2DToPoints::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementDirection2DToPoints::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementDirection2DToPoints::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementDirection2DToPoints::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementDirection2DToPoints* MeasurementDirection2DToPoints::get_aspn_c() const {
	return c_struct;
}

void MeasurementDirection2DToPoints::reset_aspn_c(
    Aspn23MeasurementDirection2DToPoints* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_direction_2d_to_points_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementDirection2DToPoints::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementDirection2DToPoints::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementDirection2DToPoints::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementDirection2DToPoints::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint16_t MeasurementDirection2DToPoints::get_num_obs() const {
	nullptr_check();
	return c_struct->num_obs;
}

std::vector<TypeDirection2DToPoint> MeasurementDirection2DToPoints::get_obs() const {
	nullptr_check();
	if (c_struct->obs == nullptr) return {};
	std::vector<TypeDirection2DToPoint> out;
	for (size_t ii = 0; ii < c_struct->num_obs; ii++) {
		out.push_back(aspn23_type_direction_2d_to_point_copy(&c_struct->obs[ii]));
	}
	return out;
}

void MeasurementDirection2DToPoints::set_obs(std::vector<TypeDirection2DToPoint> obs) {
	nullptr_check();
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object     = obs[ii].get_aspn_c();
		c_struct->obs[ii] = *c_object;
	}
	c_struct->num_obs = obs.size();
}

void MeasurementDirection2DToPoints::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementDirection2DToPoints is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
