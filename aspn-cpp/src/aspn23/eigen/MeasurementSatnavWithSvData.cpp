
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MeasurementSatnavWithSvData.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MeasurementSatnavWithSvData::MeasurementSatnavWithSvData(TypeHeader header,
                                                         TypeTimestamp time_of_validity,
                                                         TypeSatnavTime receiver_clock_time,
                                                         uint16_t num_signal_types,
                                                         std::vector<TypeSatnavObs> obs,
                                                         std::vector<TypeSatnavSvData> sv_data,
                                                         std::vector<TypeIntegrity> integrity)
    : TypeHeader(header) {
	auto header_prep              = header.get_aspn_c();
	auto time_of_validity_prep    = time_of_validity.get_aspn_c();
	auto receiver_clock_time_prep = receiver_clock_time.get_aspn_c();
	Aspn23TypeSatnavObs* obs_prep = new Aspn23TypeSatnavObs[obs.size()];
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object = obs[ii].get_aspn_c();
		obs_prep[ii]  = *c_object;
	}

	Aspn23TypeSatnavSvData* sv_data_prep = new Aspn23TypeSatnavSvData[sv_data.size()];
	for (size_t ii = 0; ii < sv_data.size(); ii++) {
		auto c_object    = sv_data[ii].get_aspn_c();
		sv_data_prep[ii] = *c_object;
	}

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_satnav_with_sv_data_new(header_prep,
	                                                            time_of_validity_prep,
	                                                            receiver_clock_time_prep,
	                                                            num_signal_types,
	                                                            obs.size(),
	                                                            obs_prep,
	                                                            sv_data_prep,
	                                                            integrity.size(),
	                                                            integrity_prep);

	delete[] obs_prep;

	delete[] sv_data_prep;

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementSatnavWithSvData::MeasurementSatnavWithSvData(
    Aspn23MeasurementSatnavWithSvData* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MeasurementSatnavWithSvData::MeasurementSatnavWithSvData(const MeasurementSatnavWithSvData& other)
    : TypeHeader(&other.c_struct->header, false) {
	auto header                   = other.get_header();
	auto time_of_validity         = other.get_time_of_validity();
	auto receiver_clock_time      = other.get_receiver_clock_time();
	auto obs                      = other.get_obs();
	auto sv_data                  = other.get_sv_data();
	auto integrity                = other.get_integrity();
	auto header_prep              = header.get_aspn_c();
	auto time_of_validity_prep    = time_of_validity.get_aspn_c();
	auto receiver_clock_time_prep = receiver_clock_time.get_aspn_c();
	Aspn23TypeSatnavObs* obs_prep = new Aspn23TypeSatnavObs[obs.size()];
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object = obs[ii].get_aspn_c();
		obs_prep[ii]  = *c_object;
	}

	Aspn23TypeSatnavSvData* sv_data_prep = new Aspn23TypeSatnavSvData[sv_data.size()];
	for (size_t ii = 0; ii < sv_data.size(); ii++) {
		auto c_object    = sv_data[ii].get_aspn_c();
		sv_data_prep[ii] = *c_object;
	}

	Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object      = integrity[ii].get_aspn_c();
		integrity_prep[ii] = *c_object;
	}

	this->c_struct = aspn23_measurement_satnav_with_sv_data_new(header_prep,
	                                                            time_of_validity_prep,
	                                                            receiver_clock_time_prep,
	                                                            other.get_num_signal_types(),
	                                                            other.get_obs().size(),
	                                                            obs_prep,
	                                                            sv_data_prep,
	                                                            other.get_integrity().size(),
	                                                            integrity_prep);

	delete[] obs_prep;

	delete[] sv_data_prep;

	delete[] integrity_prep;

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->header, false);
}

MeasurementSatnavWithSvData& MeasurementSatnavWithSvData::operator=(
    const MeasurementSatnavWithSvData& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_satnav_with_sv_data_free(this->c_struct);
		auto header                   = other.get_header();
		auto time_of_validity         = other.get_time_of_validity();
		auto receiver_clock_time      = other.get_receiver_clock_time();
		auto obs                      = other.get_obs();
		auto sv_data                  = other.get_sv_data();
		auto integrity                = other.get_integrity();
		auto header_prep              = header.get_aspn_c();
		auto time_of_validity_prep    = time_of_validity.get_aspn_c();
		auto receiver_clock_time_prep = receiver_clock_time.get_aspn_c();
		Aspn23TypeSatnavObs* obs_prep = new Aspn23TypeSatnavObs[obs.size()];
		for (size_t ii = 0; ii < obs.size(); ii++) {
			auto c_object = obs[ii].get_aspn_c();
			obs_prep[ii]  = *c_object;
		}

		Aspn23TypeSatnavSvData* sv_data_prep = new Aspn23TypeSatnavSvData[sv_data.size()];
		for (size_t ii = 0; ii < sv_data.size(); ii++) {
			auto c_object    = sv_data[ii].get_aspn_c();
			sv_data_prep[ii] = *c_object;
		}

		Aspn23TypeIntegrity* integrity_prep = new Aspn23TypeIntegrity[integrity.size()];
		for (size_t ii = 0; ii < integrity.size(); ii++) {
			auto c_object      = integrity[ii].get_aspn_c();
			integrity_prep[ii] = *c_object;
		}

		this->c_struct = aspn23_measurement_satnav_with_sv_data_new(header_prep,
		                                                            time_of_validity_prep,
		                                                            receiver_clock_time_prep,
		                                                            other.get_num_signal_types(),
		                                                            other.get_obs().size(),
		                                                            obs_prep,
		                                                            sv_data_prep,
		                                                            other.get_integrity().size(),
		                                                            integrity_prep);

		delete[] obs_prep;

		delete[] sv_data_prep;

		delete[] integrity_prep;

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->header, false);
	}
	return *this;
}

MeasurementSatnavWithSvData::MeasurementSatnavWithSvData(MeasurementSatnavWithSvData&& other)
    : TypeHeader(&other.c_struct->header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MeasurementSatnavWithSvData& MeasurementSatnavWithSvData::operator=(
    MeasurementSatnavWithSvData&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_measurement_satnav_with_sv_data_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MeasurementSatnavWithSvData::~MeasurementSatnavWithSvData() {
	if (c_struct != nullptr && take_ownership)
		aspn23_measurement_satnav_with_sv_data_free(this->c_struct);
}

Aspn23MessageType MeasurementSatnavWithSvData::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MeasurementSatnavWithSvData::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MeasurementSatnavWithSvData::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MeasurementSatnavWithSvData::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MeasurementSatnavWithSvData::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MeasurementSatnavWithSvData::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MeasurementSatnavWithSvData::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MeasurementSatnavWithSvData::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MeasurementSatnavWithSvData::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MeasurementSatnavWithSvData::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MeasurementSatnavWithSvData* MeasurementSatnavWithSvData::get_aspn_c() const {
	return c_struct;
}

void MeasurementSatnavWithSvData::reset_aspn_c(
    Aspn23MeasurementSatnavWithSvData* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_measurement_satnav_with_sv_data_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader MeasurementSatnavWithSvData::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void MeasurementSatnavWithSvData::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

TypeTimestamp MeasurementSatnavWithSvData::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MeasurementSatnavWithSvData::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

TypeSatnavTime MeasurementSatnavWithSvData::get_receiver_clock_time() const {
	nullptr_check();
	return aspn23_type_satnav_time_copy(&c_struct->receiver_clock_time);
}

void MeasurementSatnavWithSvData::set_receiver_clock_time(TypeSatnavTime receiver_clock_time) {
	nullptr_check();
	auto c_object                 = std::move(receiver_clock_time).get_aspn_c();
	c_struct->receiver_clock_time = *c_object;
}

uint16_t MeasurementSatnavWithSvData::get_num_signal_types() const {
	nullptr_check();
	return c_struct->num_signal_types;
}

void MeasurementSatnavWithSvData::set_num_signal_types(uint16_t num_signal_types) {
	nullptr_check();
	c_struct->num_signal_types = num_signal_types;
}

uint16_t MeasurementSatnavWithSvData::get_num_signals_tracked() const {
	nullptr_check();
	return c_struct->num_signals_tracked;
}

std::vector<TypeSatnavObs> MeasurementSatnavWithSvData::get_obs() const {
	nullptr_check();
	if (c_struct->obs == nullptr) return {};
	std::vector<TypeSatnavObs> out;
	for (size_t ii = 0; ii < c_struct->num_signals_tracked; ii++) {
		out.push_back(aspn23_type_satnav_obs_copy(&c_struct->obs[ii]));
	}
	return out;
}

void MeasurementSatnavWithSvData::set_obs(std::vector<TypeSatnavObs> obs) {
	nullptr_check();
	for (size_t ii = 0; ii < obs.size(); ii++) {
		auto c_object     = obs[ii].get_aspn_c();
		c_struct->obs[ii] = *c_object;
	}
	c_struct->num_signals_tracked = obs.size();
}

std::vector<TypeSatnavSvData> MeasurementSatnavWithSvData::get_sv_data() const {
	nullptr_check();
	if (c_struct->sv_data == nullptr) return {};
	std::vector<TypeSatnavSvData> out;
	for (size_t ii = 0; ii < c_struct->num_signals_tracked; ii++) {
		out.push_back(aspn23_type_satnav_sv_data_copy(&c_struct->sv_data[ii]));
	}
	return out;
}

void MeasurementSatnavWithSvData::set_sv_data(std::vector<TypeSatnavSvData> sv_data) {
	nullptr_check();
	for (size_t ii = 0; ii < sv_data.size(); ii++) {
		auto c_object         = sv_data[ii].get_aspn_c();
		c_struct->sv_data[ii] = *c_object;
	}
}

uint8_t MeasurementSatnavWithSvData::get_num_integrity() const {
	nullptr_check();
	return c_struct->num_integrity;
}

std::vector<TypeIntegrity> MeasurementSatnavWithSvData::get_integrity() const {
	nullptr_check();
	if (c_struct->integrity == nullptr) return {};
	std::vector<TypeIntegrity> out;
	for (size_t ii = 0; ii < c_struct->num_integrity; ii++) {
		out.push_back(aspn23_type_integrity_copy(&c_struct->integrity[ii]));
	}
	return out;
}

void MeasurementSatnavWithSvData::set_integrity(std::vector<TypeIntegrity> integrity) {
	nullptr_check();
	for (size_t ii = 0; ii < integrity.size(); ii++) {
		auto c_object           = integrity[ii].get_aspn_c();
		c_struct->integrity[ii] = *c_object;
	}
	c_struct->num_integrity = integrity.size();
}

void MeasurementSatnavWithSvData::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MeasurementSatnavWithSvData is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
