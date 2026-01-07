
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGeneric.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGeneric::MetadataGeneric(TypeMetadataheader info,
                                 TypeTimestamp time_of_validity,
                                 TypeMounting mounting)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct = aspn23_metadata_generic_new(info_prep, time_of_validity_prep, mounting_prep);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGeneric::MetadataGeneric(Aspn23MetadataGeneric* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGeneric::MetadataGeneric(const MetadataGeneric& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto mounting              = other.get_mounting();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto mounting_prep         = mounting.get_aspn_c();
	this->c_struct = aspn23_metadata_generic_new(info_prep, time_of_validity_prep, mounting_prep);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGeneric& MetadataGeneric::operator=(const MetadataGeneric& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_generic_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto mounting              = other.get_mounting();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto mounting_prep         = mounting.get_aspn_c();
		this->c_struct =
		    aspn23_metadata_generic_new(info_prep, time_of_validity_prep, mounting_prep);

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGeneric::MetadataGeneric(MetadataGeneric&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGeneric& MetadataGeneric::operator=(MetadataGeneric&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_generic_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGeneric::~MetadataGeneric() {
	if (c_struct != nullptr && take_ownership) aspn23_metadata_generic_free(this->c_struct);
}

Aspn23MessageType MetadataGeneric::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGeneric::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGeneric::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGeneric::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGeneric::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGeneric::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGeneric::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGeneric::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGeneric::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGeneric::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGeneric* MetadataGeneric::get_aspn_c() const { return c_struct; }

void MetadataGeneric::reset_aspn_c(Aspn23MetadataGeneric* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_generic_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGeneric::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGeneric::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGeneric::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGeneric::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

TypeMounting MetadataGeneric::get_mounting() const {
	nullptr_check();
	return aspn23_type_mounting_copy(&c_struct->mounting);
}

void MetadataGeneric::set_mounting(TypeMounting mounting) {
	nullptr_check();
	auto c_object      = std::move(mounting).get_aspn_c();
	c_struct->mounting = *c_object;
}

void MetadataGeneric::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MetadataGeneric is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
