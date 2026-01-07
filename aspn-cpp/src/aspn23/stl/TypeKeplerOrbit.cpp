
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeKeplerOrbit.hpp"

#include <stdexcept>

namespace aspn23_stl {

TypeKeplerOrbit::TypeKeplerOrbit(double m_0,
                                 double delta_n,
                                 double e,
                                 double sqrt_a,
                                 double omega_0,
                                 double i_0,
                                 double i_dot,
                                 double omega,
                                 double omega_dot,
                                 double c_uc,
                                 double c_us,
                                 double c_rc,
                                 double c_rs,
                                 double c_ic,
                                 double c_is,
                                 double t_oe) {

	this->c_struct = aspn23_type_kepler_orbit_new(m_0,
	                                              delta_n,
	                                              e,
	                                              sqrt_a,
	                                              omega_0,
	                                              i_0,
	                                              i_dot,
	                                              omega,
	                                              omega_dot,
	                                              c_uc,
	                                              c_us,
	                                              c_rc,
	                                              c_rs,
	                                              c_ic,
	                                              c_is,
	                                              t_oe);

	this->take_ownership = true;
}

TypeKeplerOrbit::TypeKeplerOrbit(Aspn23TypeKeplerOrbit* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeKeplerOrbit::TypeKeplerOrbit(const TypeKeplerOrbit& other) {

	this->c_struct = aspn23_type_kepler_orbit_new(other.get_m_0(),
	                                              other.get_delta_n(),
	                                              other.get_e(),
	                                              other.get_sqrt_a(),
	                                              other.get_omega_0(),
	                                              other.get_i_0(),
	                                              other.get_i_dot(),
	                                              other.get_omega(),
	                                              other.get_omega_dot(),
	                                              other.get_c_uc(),
	                                              other.get_c_us(),
	                                              other.get_c_rc(),
	                                              other.get_c_rs(),
	                                              other.get_c_ic(),
	                                              other.get_c_is(),
	                                              other.get_t_oe());

	this->take_ownership = true;
}

TypeKeplerOrbit& TypeKeplerOrbit::operator=(const TypeKeplerOrbit& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_kepler_orbit_free(this->c_struct);

		this->c_struct = aspn23_type_kepler_orbit_new(other.get_m_0(),
		                                              other.get_delta_n(),
		                                              other.get_e(),
		                                              other.get_sqrt_a(),
		                                              other.get_omega_0(),
		                                              other.get_i_0(),
		                                              other.get_i_dot(),
		                                              other.get_omega(),
		                                              other.get_omega_dot(),
		                                              other.get_c_uc(),
		                                              other.get_c_us(),
		                                              other.get_c_rc(),
		                                              other.get_c_rs(),
		                                              other.get_c_ic(),
		                                              other.get_c_is(),
		                                              other.get_t_oe());

		this->take_ownership = true;
	}
	return *this;
}

TypeKeplerOrbit::TypeKeplerOrbit(TypeKeplerOrbit&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeKeplerOrbit& TypeKeplerOrbit::operator=(TypeKeplerOrbit&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_kepler_orbit_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeKeplerOrbit::~TypeKeplerOrbit() {
	if (c_struct != nullptr && take_ownership) aspn23_type_kepler_orbit_free(this->c_struct);
}

Aspn23TypeKeplerOrbit* TypeKeplerOrbit::get_aspn_c() const { return c_struct; }

void TypeKeplerOrbit::reset_aspn_c(Aspn23TypeKeplerOrbit* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_kepler_orbit_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

double TypeKeplerOrbit::get_m_0() const {
	nullptr_check();
	return c_struct->m_0;
}

void TypeKeplerOrbit::set_m_0(double m_0) {
	nullptr_check();
	c_struct->m_0 = m_0;
}

double TypeKeplerOrbit::get_delta_n() const {
	nullptr_check();
	return c_struct->delta_n;
}

void TypeKeplerOrbit::set_delta_n(double delta_n) {
	nullptr_check();
	c_struct->delta_n = delta_n;
}

double TypeKeplerOrbit::get_e() const {
	nullptr_check();
	return c_struct->e;
}

void TypeKeplerOrbit::set_e(double e) {
	nullptr_check();
	c_struct->e = e;
}

double TypeKeplerOrbit::get_sqrt_a() const {
	nullptr_check();
	return c_struct->sqrt_a;
}

void TypeKeplerOrbit::set_sqrt_a(double sqrt_a) {
	nullptr_check();
	c_struct->sqrt_a = sqrt_a;
}

double TypeKeplerOrbit::get_omega_0() const {
	nullptr_check();
	return c_struct->omega_0;
}

void TypeKeplerOrbit::set_omega_0(double omega_0) {
	nullptr_check();
	c_struct->omega_0 = omega_0;
}

double TypeKeplerOrbit::get_i_0() const {
	nullptr_check();
	return c_struct->i_0;
}

void TypeKeplerOrbit::set_i_0(double i_0) {
	nullptr_check();
	c_struct->i_0 = i_0;
}

double TypeKeplerOrbit::get_i_dot() const {
	nullptr_check();
	return c_struct->i_dot;
}

void TypeKeplerOrbit::set_i_dot(double i_dot) {
	nullptr_check();
	c_struct->i_dot = i_dot;
}

double TypeKeplerOrbit::get_omega() const {
	nullptr_check();
	return c_struct->omega;
}

void TypeKeplerOrbit::set_omega(double omega) {
	nullptr_check();
	c_struct->omega = omega;
}

double TypeKeplerOrbit::get_omega_dot() const {
	nullptr_check();
	return c_struct->omega_dot;
}

void TypeKeplerOrbit::set_omega_dot(double omega_dot) {
	nullptr_check();
	c_struct->omega_dot = omega_dot;
}

double TypeKeplerOrbit::get_c_uc() const {
	nullptr_check();
	return c_struct->c_uc;
}

void TypeKeplerOrbit::set_c_uc(double c_uc) {
	nullptr_check();
	c_struct->c_uc = c_uc;
}

double TypeKeplerOrbit::get_c_us() const {
	nullptr_check();
	return c_struct->c_us;
}

void TypeKeplerOrbit::set_c_us(double c_us) {
	nullptr_check();
	c_struct->c_us = c_us;
}

double TypeKeplerOrbit::get_c_rc() const {
	nullptr_check();
	return c_struct->c_rc;
}

void TypeKeplerOrbit::set_c_rc(double c_rc) {
	nullptr_check();
	c_struct->c_rc = c_rc;
}

double TypeKeplerOrbit::get_c_rs() const {
	nullptr_check();
	return c_struct->c_rs;
}

void TypeKeplerOrbit::set_c_rs(double c_rs) {
	nullptr_check();
	c_struct->c_rs = c_rs;
}

double TypeKeplerOrbit::get_c_ic() const {
	nullptr_check();
	return c_struct->c_ic;
}

void TypeKeplerOrbit::set_c_ic(double c_ic) {
	nullptr_check();
	c_struct->c_ic = c_ic;
}

double TypeKeplerOrbit::get_c_is() const {
	nullptr_check();
	return c_struct->c_is;
}

void TypeKeplerOrbit::set_c_is(double c_is) {
	nullptr_check();
	c_struct->c_is = c_is;
}

double TypeKeplerOrbit::get_t_oe() const {
	nullptr_check();
	return c_struct->t_oe;
}

void TypeKeplerOrbit::set_t_oe(double t_oe) {
	nullptr_check();
	c_struct->t_oe = t_oe;
}

void TypeKeplerOrbit::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeKeplerOrbit is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_stl
