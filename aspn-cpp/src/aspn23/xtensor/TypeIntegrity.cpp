
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeIntegrity.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeIntegrity::TypeIntegrity(uint8_t integrity_method, double integrity_value) {

	this->c_struct = aspn23_type_integrity_new(integrity_method, integrity_value);

	this->take_ownership = true;
}

TypeIntegrity::TypeIntegrity(Aspn23TypeIntegrity* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeIntegrity::TypeIntegrity(const TypeIntegrity& other) {

	this->c_struct =
	    aspn23_type_integrity_new(other.get_integrity_method(), other.get_integrity_value());

	this->take_ownership = true;
}

TypeIntegrity& TypeIntegrity::operator=(const TypeIntegrity& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_integrity_free(this->c_struct);

		this->c_struct =
		    aspn23_type_integrity_new(other.get_integrity_method(), other.get_integrity_value());

		this->take_ownership = true;
	}
	return *this;
}

TypeIntegrity::TypeIntegrity(TypeIntegrity&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeIntegrity& TypeIntegrity::operator=(TypeIntegrity&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_integrity_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeIntegrity::~TypeIntegrity() {
	if (c_struct != nullptr && take_ownership) aspn23_type_integrity_free(this->c_struct);
}

Aspn23TypeIntegrity* TypeIntegrity::get_aspn_c() const { return c_struct; }

void TypeIntegrity::reset_aspn_c(Aspn23TypeIntegrity* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_integrity_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

uint8_t TypeIntegrity::get_integrity_method() const {
	nullptr_check();
	return c_struct->integrity_method;
}

void TypeIntegrity::set_integrity_method(uint8_t integrity_method) {
	nullptr_check();
	c_struct->integrity_method = integrity_method;
}

double TypeIntegrity::get_integrity_value() const {
	nullptr_check();
	return c_struct->integrity_value;
}

void TypeIntegrity::set_integrity_value(double integrity_value) {
	nullptr_check();
	c_struct->integrity_value = integrity_value;
}

void TypeIntegrity::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeIntegrity is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
