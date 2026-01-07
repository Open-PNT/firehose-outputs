
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataSatnavObs.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataSatnavObs::MetadataSatnavObs(TypeMetadataheader info,
                                     TypeTimestamp time_of_validity,
                                     float deltarange_interval_start,
                                     float deltarange_interval_stop)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_satnav_obs_new(
        info_prep, time_of_validity_prep, deltarange_interval_start, deltarange_interval_stop);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataSatnavObs::MetadataSatnavObs(Aspn23MetadataSatnavObs* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataSatnavObs::MetadataSatnavObs(const MetadataSatnavObs& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_satnav_obs_new(info_prep,
                                                    time_of_validity_prep,
                                                    other.get_deltarange_interval_start(),
                                                    other.get_deltarange_interval_stop());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataSatnavObs& MetadataSatnavObs::operator=(const MetadataSatnavObs& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_satnav_obs_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		this->c_struct             = aspn23_metadata_satnav_obs_new(info_prep,
                                                        time_of_validity_prep,
                                                        other.get_deltarange_interval_start(),
                                                        other.get_deltarange_interval_stop());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataSatnavObs::MetadataSatnavObs(MetadataSatnavObs&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataSatnavObs& MetadataSatnavObs::operator=(MetadataSatnavObs&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_satnav_obs_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataSatnavObs::~MetadataSatnavObs() {
	if (c_struct != nullptr && take_ownership) aspn23_metadata_satnav_obs_free(this->c_struct);
}

Aspn23MessageType MetadataSatnavObs::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataSatnavObs::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataSatnavObs::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataSatnavObs::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataSatnavObs::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataSatnavObs::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataSatnavObs::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataSatnavObs::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataSatnavObs::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataSatnavObs::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataSatnavObs* MetadataSatnavObs::get_aspn_c() const { return c_struct; }

void MetadataSatnavObs::reset_aspn_c(Aspn23MetadataSatnavObs* replacement_struct,
                                     bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_satnav_obs_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataSatnavObs::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataSatnavObs::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataSatnavObs::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataSatnavObs::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

float MetadataSatnavObs::get_deltarange_interval_start() const {
	nullptr_check();
	return c_struct->deltarange_interval_start;
}

void MetadataSatnavObs::set_deltarange_interval_start(float deltarange_interval_start) {
	nullptr_check();
	c_struct->deltarange_interval_start = deltarange_interval_start;
}

float MetadataSatnavObs::get_deltarange_interval_stop() const {
	nullptr_check();
	return c_struct->deltarange_interval_stop;
}

void MetadataSatnavObs::set_deltarange_interval_stop(float deltarange_interval_stop) {
	nullptr_check();
	c_struct->deltarange_interval_stop = deltarange_interval_stop;
}

void MetadataSatnavObs::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MetadataSatnavObs is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
