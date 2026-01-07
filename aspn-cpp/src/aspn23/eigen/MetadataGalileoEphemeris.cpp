
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGalileoEphemeris.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGalileoEphemeris::MetadataGalileoEphemeris(
    TypeMetadataheader info,
    TypeTimestamp time_of_validity,
    Aspn23MetadataGalileoEphemerisNavMsgType nav_msg_type,
    int32_t prn,
    TypeSatnavClock clock,
    TypeKeplerOrbit orbit,
    double bgd)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_galileo_ephemeris_new(
        info_prep, time_of_validity_prep, nav_msg_type, prn, clock_prep, orbit_prep, bgd);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGalileoEphemeris::MetadataGalileoEphemeris(Aspn23MetadataGalileoEphemeris* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGalileoEphemeris::MetadataGalileoEphemeris(const MetadataGalileoEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto clock                 = other.get_clock();
	auto orbit                 = other.get_orbit();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	auto clock_prep            = clock.get_aspn_c();
	auto orbit_prep            = orbit.get_aspn_c();
	this->c_struct             = aspn23_metadata_galileo_ephemeris_new(info_prep,
                                                           time_of_validity_prep,
                                                           other.get_nav_msg_type(),
                                                           other.get_prn(),
                                                           clock_prep,
                                                           orbit_prep,
                                                           other.get_bgd());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGalileoEphemeris& MetadataGalileoEphemeris::operator=(
    const MetadataGalileoEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_galileo_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto clock                 = other.get_clock();
		auto orbit                 = other.get_orbit();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		auto clock_prep            = clock.get_aspn_c();
		auto orbit_prep            = orbit.get_aspn_c();
		this->c_struct             = aspn23_metadata_galileo_ephemeris_new(info_prep,
                                                               time_of_validity_prep,
                                                               other.get_nav_msg_type(),
                                                               other.get_prn(),
                                                               clock_prep,
                                                               orbit_prep,
                                                               other.get_bgd());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGalileoEphemeris::MetadataGalileoEphemeris(MetadataGalileoEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGalileoEphemeris& MetadataGalileoEphemeris::operator=(MetadataGalileoEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_galileo_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGalileoEphemeris::~MetadataGalileoEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_galileo_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataGalileoEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGalileoEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGalileoEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGalileoEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGalileoEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGalileoEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGalileoEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGalileoEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGalileoEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGalileoEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGalileoEphemeris* MetadataGalileoEphemeris::get_aspn_c() const { return c_struct; }

void MetadataGalileoEphemeris::reset_aspn_c(Aspn23MetadataGalileoEphemeris* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_galileo_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGalileoEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGalileoEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGalileoEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGalileoEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MetadataGalileoEphemerisNavMsgType MetadataGalileoEphemeris::get_nav_msg_type() const {
	nullptr_check();
	return c_struct->nav_msg_type;
}

void MetadataGalileoEphemeris::set_nav_msg_type(
    Aspn23MetadataGalileoEphemerisNavMsgType nav_msg_type) {
	nullptr_check();
	c_struct->nav_msg_type = nav_msg_type;
}

int32_t MetadataGalileoEphemeris::get_prn() const {
	nullptr_check();
	return c_struct->prn;
}

void MetadataGalileoEphemeris::set_prn(int32_t prn) {
	nullptr_check();
	c_struct->prn = prn;
}

TypeSatnavClock MetadataGalileoEphemeris::get_clock() const {
	nullptr_check();
	return aspn23_type_satnav_clock_copy(&c_struct->clock);
}

void MetadataGalileoEphemeris::set_clock(TypeSatnavClock clock) {
	nullptr_check();
	auto c_object   = std::move(clock).get_aspn_c();
	c_struct->clock = *c_object;
}

TypeKeplerOrbit MetadataGalileoEphemeris::get_orbit() const {
	nullptr_check();
	return aspn23_type_kepler_orbit_copy(&c_struct->orbit);
}

void MetadataGalileoEphemeris::set_orbit(TypeKeplerOrbit orbit) {
	nullptr_check();
	auto c_object   = std::move(orbit).get_aspn_c();
	c_struct->orbit = *c_object;
}

double MetadataGalileoEphemeris::get_bgd() const {
	nullptr_check();
	return c_struct->bgd;
}

void MetadataGalileoEphemeris::set_bgd(double bgd) {
	nullptr_check();
	c_struct->bgd = bgd;
}

void MetadataGalileoEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGalileoEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
