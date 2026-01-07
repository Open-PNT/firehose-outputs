
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeSatnavClock.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeSatnavClock::TypeSatnavClock(double t_oc, double af_0, double af_1, double af_2) {

	this->c_struct = aspn23_type_satnav_clock_new(t_oc, af_0, af_1, af_2);

	this->take_ownership = true;
}

TypeSatnavClock::TypeSatnavClock(Aspn23TypeSatnavClock* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeSatnavClock::TypeSatnavClock(const TypeSatnavClock& other) {

	this->c_struct = aspn23_type_satnav_clock_new(
	    other.get_t_oc(), other.get_af_0(), other.get_af_1(), other.get_af_2());

	this->take_ownership = true;
}

TypeSatnavClock& TypeSatnavClock::operator=(const TypeSatnavClock& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_clock_free(this->c_struct);

		this->c_struct = aspn23_type_satnav_clock_new(
		    other.get_t_oc(), other.get_af_0(), other.get_af_1(), other.get_af_2());

		this->take_ownership = true;
	}
	return *this;
}

TypeSatnavClock::TypeSatnavClock(TypeSatnavClock&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeSatnavClock& TypeSatnavClock::operator=(TypeSatnavClock&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_satnav_clock_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeSatnavClock::~TypeSatnavClock() {
	if (c_struct != nullptr && take_ownership) aspn23_type_satnav_clock_free(this->c_struct);
}

Aspn23TypeSatnavClock* TypeSatnavClock::get_aspn_c() const { return c_struct; }

void TypeSatnavClock::reset_aspn_c(Aspn23TypeSatnavClock* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_satnav_clock_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

double TypeSatnavClock::get_t_oc() const {
	nullptr_check();
	return c_struct->t_oc;
}

void TypeSatnavClock::set_t_oc(double t_oc) {
	nullptr_check();
	c_struct->t_oc = t_oc;
}

double TypeSatnavClock::get_af_0() const {
	nullptr_check();
	return c_struct->af_0;
}

void TypeSatnavClock::set_af_0(double af_0) {
	nullptr_check();
	c_struct->af_0 = af_0;
}

double TypeSatnavClock::get_af_1() const {
	nullptr_check();
	return c_struct->af_1;
}

void TypeSatnavClock::set_af_1(double af_1) {
	nullptr_check();
	c_struct->af_1 = af_1;
}

double TypeSatnavClock::get_af_2() const {
	nullptr_check();
	return c_struct->af_2;
}

void TypeSatnavClock::set_af_2(double af_2) {
	nullptr_check();
	c_struct->af_2 = af_2;
}

void TypeSatnavClock::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeSatnavClock is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
