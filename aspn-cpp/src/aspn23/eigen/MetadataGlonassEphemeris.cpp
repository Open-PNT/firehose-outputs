
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGlonassEphemeris.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGlonassEphemeris::MetadataGlonassEphemeris(TypeMetadataheader info,
                                                   TypeTimestamp time_of_validity,
                                                   int32_t slot_number,
                                                   int32_t freq_o,
                                                   int32_t n_t,
                                                   double t_k,
                                                   double t_b,
                                                   double gamma_n,
                                                   double tau_n,
                                                   double sv_pos_x,
                                                   double sv_vel_x,
                                                   double sv_accel_x,
                                                   double sv_pos_y,
                                                   double sv_vel_y,
                                                   double sv_accel_y,
                                                   double sv_pos_z,
                                                   double sv_vel_z,
                                                   double sv_accel_z)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_glonass_ephemeris_new(info_prep,
                                                           time_of_validity_prep,
                                                           slot_number,
                                                           freq_o,
                                                           n_t,
                                                           t_k,
                                                           t_b,
                                                           gamma_n,
                                                           tau_n,
                                                           sv_pos_x,
                                                           sv_vel_x,
                                                           sv_accel_x,
                                                           sv_pos_y,
                                                           sv_vel_y,
                                                           sv_accel_y,
                                                           sv_pos_z,
                                                           sv_vel_z,
                                                           sv_accel_z);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGlonassEphemeris::MetadataGlonassEphemeris(Aspn23MetadataGlonassEphemeris* c_struct,
                                                   bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGlonassEphemeris::MetadataGlonassEphemeris(const MetadataGlonassEphemeris& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_glonass_ephemeris_new(info_prep,
                                                           time_of_validity_prep,
                                                           other.get_slot_number(),
                                                           other.get_freq_o(),
                                                           other.get_n_t(),
                                                           other.get_t_k(),
                                                           other.get_t_b(),
                                                           other.get_gamma_n(),
                                                           other.get_tau_n(),
                                                           other.get_sv_pos_x(),
                                                           other.get_sv_vel_x(),
                                                           other.get_sv_accel_x(),
                                                           other.get_sv_pos_y(),
                                                           other.get_sv_vel_y(),
                                                           other.get_sv_accel_y(),
                                                           other.get_sv_pos_z(),
                                                           other.get_sv_vel_z(),
                                                           other.get_sv_accel_z());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGlonassEphemeris& MetadataGlonassEphemeris::operator=(
    const MetadataGlonassEphemeris& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_glonass_ephemeris_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		this->c_struct             = aspn23_metadata_glonass_ephemeris_new(info_prep,
                                                               time_of_validity_prep,
                                                               other.get_slot_number(),
                                                               other.get_freq_o(),
                                                               other.get_n_t(),
                                                               other.get_t_k(),
                                                               other.get_t_b(),
                                                               other.get_gamma_n(),
                                                               other.get_tau_n(),
                                                               other.get_sv_pos_x(),
                                                               other.get_sv_vel_x(),
                                                               other.get_sv_accel_x(),
                                                               other.get_sv_pos_y(),
                                                               other.get_sv_vel_y(),
                                                               other.get_sv_accel_y(),
                                                               other.get_sv_pos_z(),
                                                               other.get_sv_vel_z(),
                                                               other.get_sv_accel_z());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGlonassEphemeris::MetadataGlonassEphemeris(MetadataGlonassEphemeris&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGlonassEphemeris& MetadataGlonassEphemeris::operator=(MetadataGlonassEphemeris&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_glonass_ephemeris_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGlonassEphemeris::~MetadataGlonassEphemeris() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_glonass_ephemeris_free(this->c_struct);
}

Aspn23MessageType MetadataGlonassEphemeris::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGlonassEphemeris::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGlonassEphemeris::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGlonassEphemeris::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGlonassEphemeris::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGlonassEphemeris::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGlonassEphemeris::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGlonassEphemeris::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGlonassEphemeris::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGlonassEphemeris::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGlonassEphemeris* MetadataGlonassEphemeris::get_aspn_c() const { return c_struct; }

void MetadataGlonassEphemeris::reset_aspn_c(Aspn23MetadataGlonassEphemeris* replacement_struct,
                                            bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_glonass_ephemeris_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGlonassEphemeris::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGlonassEphemeris::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGlonassEphemeris::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGlonassEphemeris::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

int32_t MetadataGlonassEphemeris::get_slot_number() const {
	nullptr_check();
	return c_struct->slot_number;
}

void MetadataGlonassEphemeris::set_slot_number(int32_t slot_number) {
	nullptr_check();
	c_struct->slot_number = slot_number;
}

int32_t MetadataGlonassEphemeris::get_freq_o() const {
	nullptr_check();
	return c_struct->freq_o;
}

void MetadataGlonassEphemeris::set_freq_o(int32_t freq_o) {
	nullptr_check();
	c_struct->freq_o = freq_o;
}

int32_t MetadataGlonassEphemeris::get_n_t() const {
	nullptr_check();
	return c_struct->n_t;
}

void MetadataGlonassEphemeris::set_n_t(int32_t n_t) {
	nullptr_check();
	c_struct->n_t = n_t;
}

double MetadataGlonassEphemeris::get_t_k() const {
	nullptr_check();
	return c_struct->t_k;
}

void MetadataGlonassEphemeris::set_t_k(double t_k) {
	nullptr_check();
	c_struct->t_k = t_k;
}

double MetadataGlonassEphemeris::get_t_b() const {
	nullptr_check();
	return c_struct->t_b;
}

void MetadataGlonassEphemeris::set_t_b(double t_b) {
	nullptr_check();
	c_struct->t_b = t_b;
}

double MetadataGlonassEphemeris::get_gamma_n() const {
	nullptr_check();
	return c_struct->gamma_n;
}

void MetadataGlonassEphemeris::set_gamma_n(double gamma_n) {
	nullptr_check();
	c_struct->gamma_n = gamma_n;
}

double MetadataGlonassEphemeris::get_tau_n() const {
	nullptr_check();
	return c_struct->tau_n;
}

void MetadataGlonassEphemeris::set_tau_n(double tau_n) {
	nullptr_check();
	c_struct->tau_n = tau_n;
}

double MetadataGlonassEphemeris::get_sv_pos_x() const {
	nullptr_check();
	return c_struct->sv_pos_x;
}

void MetadataGlonassEphemeris::set_sv_pos_x(double sv_pos_x) {
	nullptr_check();
	c_struct->sv_pos_x = sv_pos_x;
}

double MetadataGlonassEphemeris::get_sv_vel_x() const {
	nullptr_check();
	return c_struct->sv_vel_x;
}

void MetadataGlonassEphemeris::set_sv_vel_x(double sv_vel_x) {
	nullptr_check();
	c_struct->sv_vel_x = sv_vel_x;
}

double MetadataGlonassEphemeris::get_sv_accel_x() const {
	nullptr_check();
	return c_struct->sv_accel_x;
}

void MetadataGlonassEphemeris::set_sv_accel_x(double sv_accel_x) {
	nullptr_check();
	c_struct->sv_accel_x = sv_accel_x;
}

double MetadataGlonassEphemeris::get_sv_pos_y() const {
	nullptr_check();
	return c_struct->sv_pos_y;
}

void MetadataGlonassEphemeris::set_sv_pos_y(double sv_pos_y) {
	nullptr_check();
	c_struct->sv_pos_y = sv_pos_y;
}

double MetadataGlonassEphemeris::get_sv_vel_y() const {
	nullptr_check();
	return c_struct->sv_vel_y;
}

void MetadataGlonassEphemeris::set_sv_vel_y(double sv_vel_y) {
	nullptr_check();
	c_struct->sv_vel_y = sv_vel_y;
}

double MetadataGlonassEphemeris::get_sv_accel_y() const {
	nullptr_check();
	return c_struct->sv_accel_y;
}

void MetadataGlonassEphemeris::set_sv_accel_y(double sv_accel_y) {
	nullptr_check();
	c_struct->sv_accel_y = sv_accel_y;
}

double MetadataGlonassEphemeris::get_sv_pos_z() const {
	nullptr_check();
	return c_struct->sv_pos_z;
}

void MetadataGlonassEphemeris::set_sv_pos_z(double sv_pos_z) {
	nullptr_check();
	c_struct->sv_pos_z = sv_pos_z;
}

double MetadataGlonassEphemeris::get_sv_vel_z() const {
	nullptr_check();
	return c_struct->sv_vel_z;
}

void MetadataGlonassEphemeris::set_sv_vel_z(double sv_vel_z) {
	nullptr_check();
	c_struct->sv_vel_z = sv_vel_z;
}

double MetadataGlonassEphemeris::get_sv_accel_z() const {
	nullptr_check();
	return c_struct->sv_accel_z;
}

void MetadataGlonassEphemeris::set_sv_accel_z(double sv_accel_z) {
	nullptr_check();
	c_struct->sv_accel_z = sv_accel_z;
}

void MetadataGlonassEphemeris::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGlonassEphemeris is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
