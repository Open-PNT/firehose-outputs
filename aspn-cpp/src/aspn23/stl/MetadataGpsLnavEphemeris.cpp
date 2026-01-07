
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGpsLnavEphemeris.hpp"

#include <stdexcept>

namespace aspn23_stl {

MetadataGpsLnavEphemeris::MetadataGpsLnavEphemeris(TypeMetadataheader info,
                                                   TypeTimestamp time_of_validity,
                                                   uint16_t week_number,
                                                   int32_t prn,
                                                   TypeSatnavClock clock,
                                                   TypeKeplerOrbit orbit,
                                                   double t_gd,
                                                   uint16_t iodc,
                                                   uint8_t iode)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_lnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            week_number,
                                                            prn,
                                                            clock_prep,
                                                            orbit_prep,
                                                            t_gd,
                                                            iodc,
                                                            iode);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsLnavEphemeris::MetadataGpsLnavEphemeris(Aspn23MetadataGpsLnavEphemeris* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGpsLnavEphemeris::MetadataGpsLnavEphemeris(const MetadataGpsLnavEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto clock                 = other.get_clock();
	auto orbit                 = other.get_orbit();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_lnav_ephemeris_new(info_prep,
                                                            time_of_validity_prep,
                                                            other.get_week_number(),
                                                            other.get_prn(),
                                                            clock_prep,
                                                            orbit_prep,
                                                            other.get_t_gd(),
                                                            other.get_iodc(),
                                                            other.get_iode());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsLnavEphemeris& MetadataGpsLnavEphemeris::operator=(
    const MetadataGpsLnavEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_lnav_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto clock                 = other.get_clock();
		auto orbit                 = other.get_orbit();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto clock_prep            = clock.get_aspn_c();
		auto orbit_prep            = orbit.get_aspn_c();
		this->c_struct             = aspn23_metadata_gps_lnav_ephemeris_new(info_prep,
                                                                time_of_validity_prep,
                                                                other.get_week_number(),
                                                                other.get_prn(),
                                                                clock_prep,
                                                                orbit_prep,
                                                                other.get_t_gd(),
                                                                other.get_iodc(),
                                                                other.get_iode());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGpsLnavEphemeris::MetadataGpsLnavEphemeris(MetadataGpsLnavEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGpsLnavEphemeris& MetadataGpsLnavEphemeris::operator=(MetadataGpsLnavEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_lnav_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGpsLnavEphemeris::~MetadataGpsLnavEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_gps_lnav_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataGpsLnavEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGpsLnavEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGpsLnavEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGpsLnavEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGpsLnavEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGpsLnavEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGpsLnavEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGpsLnavEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGpsLnavEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGpsLnavEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGpsLnavEphemeris* MetadataGpsLnavEphemeris::get_aspn_c() const { return c_struct; }

void MetadataGpsLnavEphemeris::reset_aspn_c(Aspn23MetadataGpsLnavEphemeris* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_gps_lnav_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGpsLnavEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGpsLnavEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGpsLnavEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGpsLnavEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

uint16_t MetadataGpsLnavEphemeris::get_week_number() const {
	nullptr_check();
	return c_struct->week_number;
}

void MetadataGpsLnavEphemeris::set_week_number(uint16_t week_number) {
	nullptr_check();
	c_struct->week_number = week_number;
}

int32_t MetadataGpsLnavEphemeris::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MetadataGpsLnavEphemeris::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavClock MetadataGpsLnavEphemeris::get_clock() const {
	nullptr_check();
	return aspn23_type_satnav_clock_copy(&c_struct->clock);
}

void MetadataGpsLnavEphemeris::set_clock(TypeSatnavClock clock) {
	nullptr_check();
	auto c_object   = std::move(clock).get_aspn_c();
	c_struct->clock = *c_object;
}

TypeKeplerOrbit MetadataGpsLnavEphemeris::get_orbit() const {
	nullptr_check();
	return aspn23_type_kepler_orbit_copy(&c_struct->orbit);
}

void MetadataGpsLnavEphemeris::set_orbit(TypeKeplerOrbit orbit) {
	nullptr_check();
	auto c_object   = std::move(orbit).get_aspn_c();
	c_struct->orbit = *c_object;
}

double MetadataGpsLnavEphemeris::get_t_gd() const {
	nullptr_check();
	return c_struct->t_gd;
}

void MetadataGpsLnavEphemeris::set_t_gd(double t_gd) {
	nullptr_check();
	c_struct->t_gd = t_gd;
}

uint16_t MetadataGpsLnavEphemeris::get_iodc() const {
	nullptr_check();
	return c_struct->iodc;
}

void MetadataGpsLnavEphemeris::set_iodc(uint16_t iodc) {
	nullptr_check();
	c_struct->iodc = iodc;
}

uint8_t MetadataGpsLnavEphemeris::get_iode() const {
	nullptr_check();
	return c_struct->iode;
}

void MetadataGpsLnavEphemeris::set_iode(uint8_t iode) {
	nullptr_check();
	c_struct->iode = iode;
}

void MetadataGpsLnavEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGpsLnavEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_stl
