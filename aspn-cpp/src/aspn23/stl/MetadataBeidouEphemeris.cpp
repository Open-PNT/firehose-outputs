
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataBeidouEphemeris.hpp"

#include <stdexcept>

namespace aspn23_stl {

MetadataBeidouEphemeris::MetadataBeidouEphemeris(TypeMetadataheader info,
                                                 TypeTimestamp time_of_validity,
                                                 int32_t prn,
                                                 TypeSatnavClock clock,
                                                 TypeKeplerOrbit orbit,
                                                 double t_gd1,
                                                 double t_gd2,
                                                 int16_t aodc,
                                                 int16_t aode)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_beidou_ephemeris_new(
        info_prep, time_of_validity_prep, prn, clock_prep, orbit_prep, t_gd1, t_gd2, aodc, aode);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataBeidouEphemeris::MetadataBeidouEphemeris(Aspn23MetadataBeidouEphemeris* c_struct,
                                                 bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataBeidouEphemeris::MetadataBeidouEphemeris(const MetadataBeidouEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto clock                 = other.get_clock();
	auto orbit                 = other.get_orbit();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_beidou_ephemeris_new(info_prep,
                                                          time_of_validity_prep,
                                                          other.get_prn(),
                                                          clock_prep,
                                                          orbit_prep,
                                                          other.get_t_gd1(),
                                                          other.get_t_gd2(),
                                                          other.get_aodc(),
                                                          other.get_aode());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataBeidouEphemeris& MetadataBeidouEphemeris::operator=(const MetadataBeidouEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_beidou_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto clock                 = other.get_clock();
		auto orbit                 = other.get_orbit();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto clock_prep            = clock.get_aspn_c();
		auto orbit_prep            = orbit.get_aspn_c();
		this->c_struct             = aspn23_metadata_beidou_ephemeris_new(info_prep,
                                                              time_of_validity_prep,
                                                              other.get_prn(),
                                                              clock_prep,
                                                              orbit_prep,
                                                              other.get_t_gd1(),
                                                              other.get_t_gd2(),
                                                              other.get_aodc(),
                                                              other.get_aode());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataBeidouEphemeris::MetadataBeidouEphemeris(MetadataBeidouEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataBeidouEphemeris& MetadataBeidouEphemeris::operator=(MetadataBeidouEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_beidou_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataBeidouEphemeris::~MetadataBeidouEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_beidou_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataBeidouEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataBeidouEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataBeidouEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataBeidouEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataBeidouEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataBeidouEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataBeidouEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataBeidouEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataBeidouEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataBeidouEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataBeidouEphemeris* MetadataBeidouEphemeris::get_aspn_c() const { return c_struct; }

void MetadataBeidouEphemeris::reset_aspn_c(Aspn23MetadataBeidouEphemeris* replacement_struct,
                                           bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_beidou_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataBeidouEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataBeidouEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataBeidouEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataBeidouEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

int32_t MetadataBeidouEphemeris::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MetadataBeidouEphemeris::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavClock MetadataBeidouEphemeris::get_clock() const {
	nullptr_check();
	return aspn23_type_satnav_clock_copy(&c_struct->clock);
}

void MetadataBeidouEphemeris::set_clock(TypeSatnavClock clock) {
	nullptr_check();
	auto c_object   = std::move(clock).get_aspn_c();
	c_struct->clock = *c_object;
}

TypeKeplerOrbit MetadataBeidouEphemeris::get_orbit() const {
	nullptr_check();
	return aspn23_type_kepler_orbit_copy(&c_struct->orbit);
}

void MetadataBeidouEphemeris::set_orbit(TypeKeplerOrbit orbit) {
	nullptr_check();
	auto c_object   = std::move(orbit).get_aspn_c();
	c_struct->orbit = *c_object;
}

double MetadataBeidouEphemeris::get_t_gd1() const {
	nullptr_check();
	return c_struct->t_gd1;
}

void MetadataBeidouEphemeris::set_t_gd1(double t_gd1) {
	nullptr_check();
	c_struct->t_gd1 = t_gd1;
}

double MetadataBeidouEphemeris::get_t_gd2() const {
	nullptr_check();
	return c_struct->t_gd2;
}

void MetadataBeidouEphemeris::set_t_gd2(double t_gd2) {
	nullptr_check();
	c_struct->t_gd2 = t_gd2;
}

int16_t MetadataBeidouEphemeris::get_aodc() const {
	nullptr_check();
	return c_struct->aodc;
}

void MetadataBeidouEphemeris::set_aodc(int16_t aodc) {
	nullptr_check();
	c_struct->aodc = aodc;
}

int16_t MetadataBeidouEphemeris::get_aode() const {
	nullptr_check();
	return c_struct->aode;
}

void MetadataBeidouEphemeris::set_aode(int16_t aode) {
	nullptr_check();
	c_struct->aode = aode;
}

void MetadataBeidouEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataBeidouEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_stl
