
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGpsCnavEphemeris.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGpsCnavEphemeris::MetadataGpsCnavEphemeris(TypeMetadataheader info,
                                                   TypeTimestamp time_of_validity,
                                                   uint16_t week_number,
                                                   int32_t prn,
                                                   TypeSatnavClock clock,
                                                   TypeKeplerOrbit orbit,
                                                   double t_gd,
                                                   uint16_t iodc,
                                                   uint8_t iode,
                                                   double isc_l1_ca,
                                                   double isc_l2_c,
                                                   double isc_l5_i5,
                                                   double isc_l5_q5,
                                                   double delta_a_0,
                                                   double a_dot)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_cnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            week_number,
                                                            prn,
                                                            clock_prep,
                                                            orbit_prep,
                                                            t_gd,
                                                            iodc,
                                                            iode,
                                                            isc_l1_ca,
                                                            isc_l2_c,
                                                            isc_l5_i5,
                                                            isc_l5_q5,
                                                            delta_a_0,
                                                            a_dot);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsCnavEphemeris::MetadataGpsCnavEphemeris(Aspn23MetadataGpsCnavEphemeris* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGpsCnavEphemeris::MetadataGpsCnavEphemeris(const MetadataGpsCnavEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto clock                 = other.get_clock();
	auto orbit                 = other.get_orbit();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_cnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            other.get_week_number(),
                                                            other.get_prn(),
                                                            clock_prep,
                                                            orbit_prep,
                                                            other.get_t_gd(),
                                                            other.get_iodc(),
                                                            other.get_iode(),
                                                            other.get_isc_l1_ca(),
                                                            other.get_isc_l2_c(),
                                                            other.get_isc_l5_i5(),
                                                            other.get_isc_l5_q5(),
                                                            other.get_delta_a_0(),
                                                            other.get_a_dot());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsCnavEphemeris& MetadataGpsCnavEphemeris::operator=(
    const MetadataGpsCnavEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_cnav_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto clock                 = other.get_clock();
		auto orbit                 = other.get_orbit();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto clock_prep            = clock.get_aspn_c();
		auto orbit_prep            = orbit.get_aspn_c();
		this->c_struct             = aspn23_metadata_gps_cnav_ephemeris_new(info_prep,
                                                                time_of_validity_prep,
                                                                other.get_week_number(),
                                                                other.get_prn(),
                                                                clock_prep,
                                                                orbit_prep,
                                                                other.get_t_gd(),
                                                                other.get_iodc(),
                                                                other.get_iode(),
                                                                other.get_isc_l1_ca(),
                                                                other.get_isc_l2_c(),
                                                                other.get_isc_l5_i5(),
                                                                other.get_isc_l5_q5(),
                                                                other.get_delta_a_0(),
                                                                other.get_a_dot());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGpsCnavEphemeris::MetadataGpsCnavEphemeris(MetadataGpsCnavEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGpsCnavEphemeris& MetadataGpsCnavEphemeris::operator=(MetadataGpsCnavEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_cnav_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGpsCnavEphemeris::~MetadataGpsCnavEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_gps_cnav_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataGpsCnavEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGpsCnavEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGpsCnavEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGpsCnavEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGpsCnavEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGpsCnavEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGpsCnavEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGpsCnavEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGpsCnavEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGpsCnavEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGpsCnavEphemeris* MetadataGpsCnavEphemeris::get_aspn_c() const { return c_struct; }

void MetadataGpsCnavEphemeris::reset_aspn_c(Aspn23MetadataGpsCnavEphemeris* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_gps_cnav_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGpsCnavEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGpsCnavEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGpsCnavEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGpsCnavEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint16_t MetadataGpsCnavEphemeris::get_week_number() const {
	nullptr_check();
	return c_struct->week_number;
}

void MetadataGpsCnavEphemeris::set_week_number(uint16_t week_number) {
	nullptr_check();
	c_struct->week_number = week_number;
}

int32_t MetadataGpsCnavEphemeris::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MetadataGpsCnavEphemeris::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavClock MetadataGpsCnavEphemeris::get_clock() const {
	nullptr_check();
	return aspn23_type_satnav_clock_copy(&c_struct->clock);
}

void MetadataGpsCnavEphemeris::set_clock(TypeSatnavClock clock) {
	nullptr_check();
	auto c_object   = std::move(clock).get_aspn_c();
	c_struct->clock = *c_object;
}

TypeKeplerOrbit MetadataGpsCnavEphemeris::get_orbit() const {
	nullptr_check();
	return aspn23_type_kepler_orbit_copy(&c_struct->orbit);
}

void MetadataGpsCnavEphemeris::set_orbit(TypeKeplerOrbit orbit) {
	nullptr_check();
	auto c_object   = std::move(orbit).get_aspn_c();
	c_struct->orbit = *c_object;
}

double MetadataGpsCnavEphemeris::get_t_gd() const {
	nullptr_check();
	return c_struct->t_gd;
}

void MetadataGpsCnavEphemeris::set_t_gd(double t_gd) {
	nullptr_check();
	c_struct->t_gd = t_gd;
}

uint16_t MetadataGpsCnavEphemeris::get_iodc() const {
	nullptr_check();
	return c_struct->iodc;
}

void MetadataGpsCnavEphemeris::set_iodc(uint16_t iodc) {
	nullptr_check();
	c_struct->iodc = iodc;
}

uint8_t MetadataGpsCnavEphemeris::get_iode() const {
	nullptr_check();
	return c_struct->iode;
}

void MetadataGpsCnavEphemeris::set_iode(uint8_t iode) {
	nullptr_check();
	c_struct->iode = iode;
}

double MetadataGpsCnavEphemeris::get_isc_l1_ca() const {
	nullptr_check();
	return c_struct->isc_l1_ca;
}

void MetadataGpsCnavEphemeris::set_isc_l1_ca(double isc_l1_ca) {
	nullptr_check();
	c_struct->isc_l1_ca = isc_l1_ca;
}

double MetadataGpsCnavEphemeris::get_isc_l2_c() const {
	nullptr_check();
	return c_struct->isc_l2_c;
}

void MetadataGpsCnavEphemeris::set_isc_l2_c(double isc_l2_c) {
	nullptr_check();
	c_struct->isc_l2_c = isc_l2_c;
}

double MetadataGpsCnavEphemeris::get_isc_l5_i5() const {
	nullptr_check();
	return c_struct->isc_l5_i5;
}

void MetadataGpsCnavEphemeris::set_isc_l5_i5(double isc_l5_i5) {
	nullptr_check();
	c_struct->isc_l5_i5 = isc_l5_i5;
}

double MetadataGpsCnavEphemeris::get_isc_l5_q5() const {
	nullptr_check();
	return c_struct->isc_l5_q5;
}

void MetadataGpsCnavEphemeris::set_isc_l5_q5(double isc_l5_q5) {
	nullptr_check();
	c_struct->isc_l5_q5 = isc_l5_q5;
}

double MetadataGpsCnavEphemeris::get_delta_a_0() const {
	nullptr_check();
	return c_struct->delta_a_0;
}

void MetadataGpsCnavEphemeris::set_delta_a_0(double delta_a_0) {
	nullptr_check();
	c_struct->delta_a_0 = delta_a_0;
}

double MetadataGpsCnavEphemeris::get_a_dot() const {
	nullptr_check();
	return c_struct->a_dot;
}

void MetadataGpsCnavEphemeris::set_a_dot(double a_dot) {
	nullptr_check();
	c_struct->a_dot = a_dot;
}

void MetadataGpsCnavEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGpsCnavEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
