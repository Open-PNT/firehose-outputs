
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeHeader.hpp"

#include <stdexcept>

namespace aspn23_eigen {

TypeHeader::TypeHeader(Aspn23MessageType message_type,
                       uint32_t vendor_id,
                       uint64_t device_id,
                       uint32_t context_id,
                       uint16_t sequence_id) {

	this->c_struct =
	    aspn23_type_header_new(message_type, vendor_id, device_id, context_id, sequence_id);

	this->take_ownership = true;
}

TypeHeader::TypeHeader(Aspn23TypeHeader* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeHeader::TypeHeader(const TypeHeader& other) {

	this->c_struct = aspn23_type_header_new(other.get_message_type(),
	                                        other.get_vendor_id(),
	                                        other.get_device_id(),
	                                        other.get_context_id(),
	                                        other.get_sequence_id());

	this->take_ownership = true;
}

TypeHeader& TypeHeader::operator=(const TypeHeader& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_header_free(this->c_struct);

		this->c_struct = aspn23_type_header_new(other.get_message_type(),
		                                        other.get_vendor_id(),
		                                        other.get_device_id(),
		                                        other.get_context_id(),
		                                        other.get_sequence_id());

		this->take_ownership = true;
	}
	return *this;
}

TypeHeader::TypeHeader(TypeHeader&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeHeader& TypeHeader::operator=(TypeHeader&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_header_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeHeader::~TypeHeader() {
	if (c_struct != nullptr && take_ownership) aspn23_type_header_free(this->c_struct);
}

Aspn23TypeHeader* TypeHeader::get_aspn_c() const { return c_struct; }

void TypeHeader::reset_aspn_c(Aspn23TypeHeader* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership) aspn23_type_header_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

Aspn23MessageType TypeHeader::get_message_type() const {
	nullptr_check();
	return c_struct->message_type;
}

void TypeHeader::set_message_type(Aspn23MessageType message_type) {
	nullptr_check();
	c_struct->message_type = message_type;
}

uint32_t TypeHeader::get_vendor_id() const {
	nullptr_check();
	return c_struct->vendor_id;
}

void TypeHeader::set_vendor_id(uint32_t vendor_id) {
	nullptr_check();
	c_struct->vendor_id = vendor_id;
}

uint64_t TypeHeader::get_device_id() const {
	nullptr_check();
	return c_struct->device_id;
}

void TypeHeader::set_device_id(uint64_t device_id) {
	nullptr_check();
	c_struct->device_id = device_id;
}

uint32_t TypeHeader::get_context_id() const {
	nullptr_check();
	return c_struct->context_id;
}

void TypeHeader::set_context_id(uint32_t context_id) {
	nullptr_check();
	c_struct->context_id = context_id;
}

uint16_t TypeHeader::get_sequence_id() const {
	nullptr_check();
	return c_struct->sequence_id;
}

void TypeHeader::set_sequence_id(uint16_t sequence_id) {
	nullptr_check();
	c_struct->sequence_id = sequence_id;
}

void TypeHeader::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeHeader is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
