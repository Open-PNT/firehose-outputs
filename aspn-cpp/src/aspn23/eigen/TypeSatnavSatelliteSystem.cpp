
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavSatelliteSystem.hpp"

#include <stdexcept>

namespace aspn23_eigen {

TypeSatnavSatelliteSystem::TypeSatnavSatelliteSystem(
    Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system) {

	this->c_struct = aspn23_type_satnav_satellite_system_new(satellite_system);

	this->take_ownership = true;
}

TypeSatnavSatelliteSystem::TypeSatnavSatelliteSystem(Aspn23TypeSatnavSatelliteSystem* c_struct,
                                                     bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavSatelliteSystem::TypeSatnavSatelliteSystem(const TypeSatnavSatelliteSystem& other) {

	this->c_struct = aspn23_type_satnav_satellite_system_new(other.get_satellite_system());

	this->take_ownership = true;
}

TypeSatnavSatelliteSystem& TypeSatnavSatelliteSystem::operator=(
    const TypeSatnavSatelliteSystem& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_satellite_system_free(this->c_struct);

		this->c_struct = aspn23_type_satnav_satellite_system_new(other.get_satellite_system());

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavSatelliteSystem::TypeSatnavSatelliteSystem(TypeSatnavSatelliteSystem&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavSatelliteSystem& TypeSatnavSatelliteSystem::operator=(TypeSatnavSatelliteSystem&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_satellite_system_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavSatelliteSystem::~TypeSatnavSatelliteSystem() {
	if (c_struct != nullptr && take_ownership)
		aspn23_type_satnav_satellite_system_free(this->c_struct);
}

Aspn23TypeSatnavSatelliteSystem* TypeSatnavSatelliteSystem::get_aspn_c() const { return c_struct; }

void TypeSatnavSatelliteSystem::reset_aspn_c(Aspn23TypeSatnavSatelliteSystem* replacement_struct,
                                             bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_satellite_system_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

Aspn23TypeSatnavSatelliteSystemSatelliteSystem TypeSatnavSatelliteSystem::get_satellite_system()
    const {
	nullptr_check();
	return c_struct->satellite_system;
}

void TypeSatnavSatelliteSystem::set_satellite_system(
    Aspn23TypeSatnavSatelliteSystemSatelliteSystem satellite_system) {
	nullptr_check();
	c_struct->satellite_system = satellite_system;
}

void TypeSatnavSatelliteSystem::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "TypeSatnavSatelliteSystem is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
