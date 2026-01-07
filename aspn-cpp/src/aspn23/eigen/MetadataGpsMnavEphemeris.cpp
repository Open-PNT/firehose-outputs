
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGpsMnavEphemeris.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGpsMnavEphemeris::MetadataGpsMnavEphemeris(TypeMetadataheader info,
                                                   TypeTimestamp time_of_validity,
                                                   uint16_t week_number,
                                                   int32_t prn,
                                                   TypeSatnavClock clock,
                                                   TypeKeplerOrbit orbit,
                                                   double a_dot,
                                                   double delta_af_0,
                                                   double delta_af_1,
                                                   double delta_gamma,
                                                   double delta_i,
                                                   double delta_omega,
                                                   double delta_a,
                                                   double isc_l1_m_e,
                                                   double isc_l2_m_e,
                                                   double isc_l1_m_s,
                                                   double isc_l2_m_s,
                                                   double isa_l2_py,
                                                   double isa_l1_m_e,
                                                   double isa_l2_m_e,
                                                   double isa_l1_m_s,
                                                   double isa_l2_m_s)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_mnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            week_number,
                                                            prn,
                                                            clock_prep,
                                                            orbit_prep,
                                                            a_dot,
                                                            delta_af_0,
                                                            delta_af_1,
                                                            delta_gamma,
                                                            delta_i,
                                                            delta_omega,
                                                            delta_a,
                                                            isc_l1_m_e,
                                                            isc_l2_m_e,
                                                            isc_l1_m_s,
                                                            isc_l2_m_s,
                                                            isa_l2_py,
                                                            isa_l1_m_e,
                                                            isa_l2_m_e,
                                                            isa_l1_m_s,
                                                            isa_l2_m_s);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsMnavEphemeris::MetadataGpsMnavEphemeris(Aspn23MetadataGpsMnavEphemeris* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGpsMnavEphemeris::MetadataGpsMnavEphemeris(const MetadataGpsMnavEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto clock                 = other.get_clock();
	auto orbit                 = other.get_orbit();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_mnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            other.get_week_number(),
                                                            other.get_prn(),
                                                            clock_prep,
                                                            orbit_prep,
                                                            other.get_a_dot(),
                                                            other.get_delta_af_0(),
                                                            other.get_delta_af_1(),
                                                            other.get_delta_gamma(),
                                                            other.get_delta_i(),
                                                            other.get_delta_omega(),
                                                            other.get_delta_a(),
                                                            other.get_isc_l1_m_e(),
                                                            other.get_isc_l2_m_e(),
                                                            other.get_isc_l1_m_s(),
                                                            other.get_isc_l2_m_s(),
                                                            other.get_isa_l2_py(),
                                                            other.get_isa_l1_m_e(),
                                                            other.get_isa_l2_m_e(),
                                                            other.get_isa_l1_m_s(),
                                                            other.get_isa_l2_m_s());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsMnavEphemeris& MetadataGpsMnavEphemeris::operator=(
    const MetadataGpsMnavEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_mnav_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto clock                 = other.get_clock();
		auto orbit                 = other.get_orbit();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto clock_prep            = clock.get_aspn_c();
		auto orbit_prep            = orbit.get_aspn_c();
		this->c_struct             = aspn23_metadata_gps_mnav_ephemeris_new(info_prep,
                                                                time_of_validity_prep,
                                                                other.get_week_number(),
                                                                other.get_prn(),
                                                                clock_prep,
                                                                orbit_prep,
                                                                other.get_a_dot(),
                                                                other.get_delta_af_0(),
                                                                other.get_delta_af_1(),
                                                                other.get_delta_gamma(),
                                                                other.get_delta_i(),
                                                                other.get_delta_omega(),
                                                                other.get_delta_a(),
                                                                other.get_isc_l1_m_e(),
                                                                other.get_isc_l2_m_e(),
                                                                other.get_isc_l1_m_s(),
                                                                other.get_isc_l2_m_s(),
                                                                other.get_isa_l2_py(),
                                                                other.get_isa_l1_m_e(),
                                                                other.get_isa_l2_m_e(),
                                                                other.get_isa_l1_m_s(),
                                                                other.get_isa_l2_m_s());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGpsMnavEphemeris::MetadataGpsMnavEphemeris(MetadataGpsMnavEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGpsMnavEphemeris& MetadataGpsMnavEphemeris::operator=(MetadataGpsMnavEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_mnav_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGpsMnavEphemeris::~MetadataGpsMnavEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_gps_mnav_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataGpsMnavEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGpsMnavEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGpsMnavEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGpsMnavEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGpsMnavEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGpsMnavEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGpsMnavEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGpsMnavEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGpsMnavEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGpsMnavEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGpsMnavEphemeris* MetadataGpsMnavEphemeris::get_aspn_c() const { return c_struct; }

void MetadataGpsMnavEphemeris::reset_aspn_c(Aspn23MetadataGpsMnavEphemeris* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_gps_mnav_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGpsMnavEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGpsMnavEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGpsMnavEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGpsMnavEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint16_t MetadataGpsMnavEphemeris::get_week_number() const {
	nullptr_check();
	return c_struct->week_number;
}

void MetadataGpsMnavEphemeris::set_week_number(uint16_t week_number) {
	nullptr_check();
	c_struct->week_number = week_number;
}

int32_t MetadataGpsMnavEphemeris::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MetadataGpsMnavEphemeris::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavClock MetadataGpsMnavEphemeris::get_clock() const {
	nullptr_check();
	return aspn23_type_satnav_clock_copy(&c_struct->clock);
}

void MetadataGpsMnavEphemeris::set_clock(TypeSatnavClock clock) {
	nullptr_check();
	auto c_object   = std::move(clock).get_aspn_c();
	c_struct->clock = *c_object;
}

TypeKeplerOrbit MetadataGpsMnavEphemeris::get_orbit() const {
	nullptr_check();
	return aspn23_type_kepler_orbit_copy(&c_struct->orbit);
}

void MetadataGpsMnavEphemeris::set_orbit(TypeKeplerOrbit orbit) {
	nullptr_check();
	auto c_object   = std::move(orbit).get_aspn_c();
	c_struct->orbit = *c_object;
}

double MetadataGpsMnavEphemeris::get_a_dot() const {
	nullptr_check();
	return c_struct->a_dot;
}

void MetadataGpsMnavEphemeris::set_a_dot(double a_dot) {
	nullptr_check();
	c_struct->a_dot = a_dot;
}

double MetadataGpsMnavEphemeris::get_delta_af_0() const {
	nullptr_check();
	return c_struct->delta_af_0;
}

void MetadataGpsMnavEphemeris::set_delta_af_0(double delta_af_0) {
	nullptr_check();
	c_struct->delta_af_0 = delta_af_0;
}

double MetadataGpsMnavEphemeris::get_delta_af_1() const {
	nullptr_check();
	return c_struct->delta_af_1;
}

void MetadataGpsMnavEphemeris::set_delta_af_1(double delta_af_1) {
	nullptr_check();
	c_struct->delta_af_1 = delta_af_1;
}

double MetadataGpsMnavEphemeris::get_delta_gamma() const {
	nullptr_check();
	return c_struct->delta_gamma;
}

void MetadataGpsMnavEphemeris::set_delta_gamma(double delta_gamma) {
	nullptr_check();
	c_struct->delta_gamma = delta_gamma;
}

double MetadataGpsMnavEphemeris::get_delta_i() const {
	nullptr_check();
	return c_struct->delta_i;
}

void MetadataGpsMnavEphemeris::set_delta_i(double delta_i) {
	nullptr_check();
	c_struct->delta_i = delta_i;
}

double MetadataGpsMnavEphemeris::get_delta_omega() const {
	nullptr_check();
	return c_struct->delta_omega;
}

void MetadataGpsMnavEphemeris::set_delta_omega(double delta_omega) {
	nullptr_check();
	c_struct->delta_omega = delta_omega;
}

double MetadataGpsMnavEphemeris::get_delta_a() const {
	nullptr_check();
	return c_struct->delta_a;
}

void MetadataGpsMnavEphemeris::set_delta_a(double delta_a) {
	nullptr_check();
	c_struct->delta_a = delta_a;
}

double MetadataGpsMnavEphemeris::get_isc_l1_m_e() const {
	nullptr_check();
	return c_struct->isc_l1_m_e;
}

void MetadataGpsMnavEphemeris::set_isc_l1_m_e(double isc_l1_m_e) {
	nullptr_check();
	c_struct->isc_l1_m_e = isc_l1_m_e;
}

double MetadataGpsMnavEphemeris::get_isc_l2_m_e() const {
	nullptr_check();
	return c_struct->isc_l2_m_e;
}

void MetadataGpsMnavEphemeris::set_isc_l2_m_e(double isc_l2_m_e) {
	nullptr_check();
	c_struct->isc_l2_m_e = isc_l2_m_e;
}

double MetadataGpsMnavEphemeris::get_isc_l1_m_s() const {
	nullptr_check();
	return c_struct->isc_l1_m_s;
}

void MetadataGpsMnavEphemeris::set_isc_l1_m_s(double isc_l1_m_s) {
	nullptr_check();
	c_struct->isc_l1_m_s = isc_l1_m_s;
}

double MetadataGpsMnavEphemeris::get_isc_l2_m_s() const {
	nullptr_check();
	return c_struct->isc_l2_m_s;
}

void MetadataGpsMnavEphemeris::set_isc_l2_m_s(double isc_l2_m_s) {
	nullptr_check();
	c_struct->isc_l2_m_s = isc_l2_m_s;
}

double MetadataGpsMnavEphemeris::get_isa_l2_py() const {
	nullptr_check();
	return c_struct->isa_l2_py;
}

void MetadataGpsMnavEphemeris::set_isa_l2_py(double isa_l2_py) {
	nullptr_check();
	c_struct->isa_l2_py = isa_l2_py;
}

double MetadataGpsMnavEphemeris::get_isa_l1_m_e() const {
	nullptr_check();
	return c_struct->isa_l1_m_e;
}

void MetadataGpsMnavEphemeris::set_isa_l1_m_e(double isa_l1_m_e) {
	nullptr_check();
	c_struct->isa_l1_m_e = isa_l1_m_e;
}

double MetadataGpsMnavEphemeris::get_isa_l2_m_e() const {
	nullptr_check();
	return c_struct->isa_l2_m_e;
}

void MetadataGpsMnavEphemeris::set_isa_l2_m_e(double isa_l2_m_e) {
	nullptr_check();
	c_struct->isa_l2_m_e = isa_l2_m_e;
}

double MetadataGpsMnavEphemeris::get_isa_l1_m_s() const {
	nullptr_check();
	return c_struct->isa_l1_m_s;
}

void MetadataGpsMnavEphemeris::set_isa_l1_m_s(double isa_l1_m_s) {
	nullptr_check();
	c_struct->isa_l1_m_s = isa_l1_m_s;
}

double MetadataGpsMnavEphemeris::get_isa_l2_m_s() const {
	nullptr_check();
	return c_struct->isa_l2_m_s;
}

void MetadataGpsMnavEphemeris::set_isa_l2_m_s(double isa_l2_m_s) {
	nullptr_check();
	c_struct->isa_l2_m_s = isa_l2_m_s;
}

void MetadataGpsMnavEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGpsMnavEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
