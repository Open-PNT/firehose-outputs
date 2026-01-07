
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavSignalDescriptor.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeSatnavSignalDescriptor::TypeSatnavSignalDescriptor(
    Aspn23TypeSatnavSignalDescriptorSignalDescriptor signal_descriptor) {

	this->c_struct = aspn23_type_satnav_signal_descriptor_new(signal_descriptor);

	this->take_ownership = true;
}

TypeSatnavSignalDescriptor::TypeSatnavSignalDescriptor(Aspn23TypeSatnavSignalDescriptor* c_struct,
                                                       bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavSignalDescriptor::TypeSatnavSignalDescriptor(const TypeSatnavSignalDescriptor& other) {

	this->c_struct = aspn23_type_satnav_signal_descriptor_new(other.get_signal_descriptor());

	this->take_ownership = true;
}

TypeSatnavSignalDescriptor& TypeSatnavSignalDescriptor::operator=(
    const TypeSatnavSignalDescriptor& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_signal_descriptor_free(this->c_struct);

		this->c_struct = aspn23_type_satnav_signal_descriptor_new(other.get_signal_descriptor());

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavSignalDescriptor::TypeSatnavSignalDescriptor(TypeSatnavSignalDescriptor&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavSignalDescriptor& TypeSatnavSignalDescriptor::operator=(
    TypeSatnavSignalDescriptor&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_signal_descriptor_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavSignalDescriptor::~TypeSatnavSignalDescriptor() {
	if (c_struct != nullptr && take_ownership)
		aspn23_type_satnav_signal_descriptor_free(this->c_struct);
}

Aspn23TypeSatnavSignalDescriptor* TypeSatnavSignalDescriptor::get_aspn_c() const {
	return c_struct;
}

void TypeSatnavSignalDescriptor::reset_aspn_c(Aspn23TypeSatnavSignalDescriptor* replacement_struct,
                                              bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_signal_descriptor_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

Aspn23TypeSatnavSignalDescriptorSignalDescriptor TypeSatnavSignalDescriptor::get_signal_descriptor()
    const {
	nullptr_check();
	return c_struct->signal_descriptor;
}

void TypeSatnavSignalDescriptor::set_signal_descriptor(
    Aspn23TypeSatnavSignalDescriptorSignalDescriptor signal_descriptor) {
	nullptr_check();
	c_struct->signal_descriptor = signal_descriptor;
}

void TypeSatnavSignalDescriptor::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "TypeSatnavSignalDescriptor is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
