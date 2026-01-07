
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataGpsIonoUtcParameters.hpp"

#include <stdexcept>

namespace aspn23_eigen {

MetadataGpsIonoUtcParameters::MetadataGpsIonoUtcParameters(TypeMetadataheader info,
                                                           TypeTimestamp time_of_validity,
                                                           double a_0,
                                                           double a_1,
                                                           int8_t delta_t_ls,
                                                           uint32_t tot,
                                                           uint8_t wn_t,
                                                           uint8_t wn_lsf,
                                                           uint8_t dn,
                                                           int8_t delta_t_lsf,
                                                           double alpha_0,
                                                           double alpha_1,
                                                           double alpha_2,
                                                           double alpha_3,
                                                           double beta_0,
                                                           double beta_1,
                                                           double beta_2,
                                                           double beta_3)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_iono_utc_parameters_new(info_prep,
                                                                 time_of_validity_prep,
                                                                 a_0,
                                                                 a_1,
                                                                 delta_t_ls,
                                                                 tot,
                                                                 wn_t,
                                                                 wn_lsf,
                                                                 dn,
                                                                 delta_t_lsf,
                                                                 alpha_0,
                                                                 alpha_1,
                                                                 alpha_2,
                                                                 alpha_3,
                                                                 beta_0,
                                                                 beta_1,
                                                                 beta_2,
                                                                 beta_3);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsIonoUtcParameters::MetadataGpsIonoUtcParameters(
    Aspn23MetadataGpsIonoUtcParameters* c_struct, bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataGpsIonoUtcParameters::MetadataGpsIonoUtcParameters(
    const MetadataGpsIonoUtcParameters& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_gps_iono_utc_parameters_new(info_prep,
                                                                 time_of_validity_prep,
                                                                 other.get_a_0(),
                                                                 other.get_a_1(),
                                                                 other.get_delta_t_ls(),
                                                                 other.get_tot(),
                                                                 other.get_wn_t(),
                                                                 other.get_wn_lsf(),
                                                                 other.get_dn(),
                                                                 other.get_delta_t_lsf(),
                                                                 other.get_alpha_0(),
                                                                 other.get_alpha_1(),
                                                                 other.get_alpha_2(),
                                                                 other.get_alpha_3(),
                                                                 other.get_beta_0(),
                                                                 other.get_beta_1(),
                                                                 other.get_beta_2(),
                                                                 other.get_beta_3());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataGpsIonoUtcParameters& MetadataGpsIonoUtcParameters::operator=(
    const MetadataGpsIonoUtcParameters& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_iono_utc_parameters_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		this->c_struct             = aspn23_metadata_gps_iono_utc_parameters_new(info_prep,
                                                                     time_of_validity_prep,
                                                                     other.get_a_0(),
                                                                     other.get_a_1(),
                                                                     other.get_delta_t_ls(),
                                                                     other.get_tot(),
                                                                     other.get_wn_t(),
                                                                     other.get_wn_lsf(),
                                                                     other.get_dn(),
                                                                     other.get_delta_t_lsf(),
                                                                     other.get_alpha_0(),
                                                                     other.get_alpha_1(),
                                                                     other.get_alpha_2(),
                                                                     other.get_alpha_3(),
                                                                     other.get_beta_0(),
                                                                     other.get_beta_1(),
                                                                     other.get_beta_2(),
                                                                     other.get_beta_3());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataGpsIonoUtcParameters::MetadataGpsIonoUtcParameters(MetadataGpsIonoUtcParameters&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataGpsIonoUtcParameters& MetadataGpsIonoUtcParameters::operator=(
    MetadataGpsIonoUtcParameters&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_gps_iono_utc_parameters_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataGpsIonoUtcParameters::~MetadataGpsIonoUtcParameters() {
	if (c_struct != nullptr && take_ownership)
		aspn23_metadata_gps_iono_utc_parameters_free(this->c_struct);
}

Aspn23MessageType MetadataGpsIonoUtcParameters::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataGpsIonoUtcParameters::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataGpsIonoUtcParameters::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataGpsIonoUtcParameters::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataGpsIonoUtcParameters::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataGpsIonoUtcParameters::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataGpsIonoUtcParameters::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataGpsIonoUtcParameters::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataGpsIonoUtcParameters::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataGpsIonoUtcParameters::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataGpsIonoUtcParameters* MetadataGpsIonoUtcParameters::get_aspn_c() const {
	return c_struct;
}

void MetadataGpsIonoUtcParameters::reset_aspn_c(
    Aspn23MetadataGpsIonoUtcParameters* replacement_struct, bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_gps_iono_utc_parameters_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataGpsIonoUtcParameters::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataGpsIonoUtcParameters::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataGpsIonoUtcParameters::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataGpsIonoUtcParameters::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

double MetadataGpsIonoUtcParameters::get_a_0() const {
	nullptr_check();
	return c_struct->a_0;
}

void MetadataGpsIonoUtcParameters::set_a_0(double a_0) {
	nullptr_check();
	c_struct->a_0 = a_0;
}

double MetadataGpsIonoUtcParameters::get_a_1() const {
	nullptr_check();
	return c_struct->a_1;
}

void MetadataGpsIonoUtcParameters::set_a_1(double a_1) {
	nullptr_check();
	c_struct->a_1 = a_1;
}

int8_t MetadataGpsIonoUtcParameters::get_delta_t_ls() const {
	nullptr_check();
	return c_struct->delta_t_ls;
}

void MetadataGpsIonoUtcParameters::set_delta_t_ls(int8_t delta_t_ls) {
	nullptr_check();
	c_struct->delta_t_ls = delta_t_ls;
}

uint32_t MetadataGpsIonoUtcParameters::get_tot() const {
	nullptr_check();
	return c_struct->tot;
}

void MetadataGpsIonoUtcParameters::set_tot(uint32_t tot) {
	nullptr_check();
	c_struct->tot = tot;
}

uint8_t MetadataGpsIonoUtcParameters::get_wn_t() const {
	nullptr_check();
	return c_struct->wn_t;
}

void MetadataGpsIonoUtcParameters::set_wn_t(uint8_t wn_t) {
	nullptr_check();
	c_struct->wn_t = wn_t;
}

uint8_t MetadataGpsIonoUtcParameters::get_wn_lsf() const {
	nullptr_check();
	return c_struct->wn_lsf;
}

void MetadataGpsIonoUtcParameters::set_wn_lsf(uint8_t wn_lsf) {
	nullptr_check();
	c_struct->wn_lsf = wn_lsf;
}

uint8_t MetadataGpsIonoUtcParameters::get_dn() const {
	nullptr_check();
	return c_struct->dn;
}

void MetadataGpsIonoUtcParameters::set_dn(uint8_t dn) {
	nullptr_check();
	c_struct->dn = dn;
}

int8_t MetadataGpsIonoUtcParameters::get_delta_t_lsf() const {
	nullptr_check();
	return c_struct->delta_t_lsf;
}

void MetadataGpsIonoUtcParameters::set_delta_t_lsf(int8_t delta_t_lsf) {
	nullptr_check();
	c_struct->delta_t_lsf = delta_t_lsf;
}

double MetadataGpsIonoUtcParameters::get_alpha_0() const {
	nullptr_check();
	return c_struct->alpha_0;
}

void MetadataGpsIonoUtcParameters::set_alpha_0(double alpha_0) {
	nullptr_check();
	c_struct->alpha_0 = alpha_0;
}

double MetadataGpsIonoUtcParameters::get_alpha_1() const {
	nullptr_check();
	return c_struct->alpha_1;
}

void MetadataGpsIonoUtcParameters::set_alpha_1(double alpha_1) {
	nullptr_check();
	c_struct->alpha_1 = alpha_1;
}

double MetadataGpsIonoUtcParameters::get_alpha_2() const {
	nullptr_check();
	return c_struct->alpha_2;
}

void MetadataGpsIonoUtcParameters::set_alpha_2(double alpha_2) {
	nullptr_check();
	c_struct->alpha_2 = alpha_2;
}

double MetadataGpsIonoUtcParameters::get_alpha_3() const {
	nullptr_check();
	return c_struct->alpha_3;
}

void MetadataGpsIonoUtcParameters::set_alpha_3(double alpha_3) {
	nullptr_check();
	c_struct->alpha_3 = alpha_3;
}

double MetadataGpsIonoUtcParameters::get_beta_0() const {
	nullptr_check();
	return c_struct->beta_0;
}

void MetadataGpsIonoUtcParameters::set_beta_0(double beta_0) {
	nullptr_check();
	c_struct->beta_0 = beta_0;
}

double MetadataGpsIonoUtcParameters::get_beta_1() const {
	nullptr_check();
	return c_struct->beta_1;
}

void MetadataGpsIonoUtcParameters::set_beta_1(double beta_1) {
	nullptr_check();
	c_struct->beta_1 = beta_1;
}

double MetadataGpsIonoUtcParameters::get_beta_2() const {
	nullptr_check();
	return c_struct->beta_2;
}

void MetadataGpsIonoUtcParameters::set_beta_2(double beta_2) {
	nullptr_check();
	c_struct->beta_2 = beta_2;
}

double MetadataGpsIonoUtcParameters::get_beta_3() const {
	nullptr_check();
	return c_struct->beta_3;
}

void MetadataGpsIonoUtcParameters::set_beta_3(double beta_3) {
	nullptr_check();
	c_struct->beta_3 = beta_3;
}

void MetadataGpsIonoUtcParameters::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error(
		    "MetadataGpsIonoUtcParameters is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_eigen
