
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "TypeMetadataheader.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

TypeMetadataheader::TypeMetadataheader(TypeHeader header,
                                       const std::string& sensor_description,
                                       double delta_t_nom,
                                       uint8_t timestamp_clock_id,
                                       uint8_t digits_of_precision) {
	auto header_prep = header.get_aspn_c();
	this->c_struct   = aspn23_type_metadataheader_new(header_prep,
                                                    const_cast<char*>(sensor_description.c_str()),
                                                    delta_t_nom,
                                                    timestamp_clock_id,
                                                    digits_of_precision);

	this->take_ownership = true;
}

TypeMetadataheader::TypeMetadataheader(Aspn23TypeMetadataheader* c_struct, bool take_ownership)
    : take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

TypeMetadataheader::TypeMetadataheader(const TypeMetadataheader& other) {
	auto header      = other.get_header();
	auto header_prep = header.get_aspn_c();
	this->c_struct =
	    aspn23_type_metadataheader_new(header_prep,
	                                   const_cast<char*>(other.get_sensor_description().c_str()),
	                                   other.get_delta_t_nom(),
	                                   other.get_timestamp_clock_id(),
	                                   other.get_digits_of_precision());

	this->take_ownership = true;
}

TypeMetadataheader& TypeMetadataheader::operator=(const TypeMetadataheader& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_metadataheader_free(this->c_struct);
		auto header      = other.get_header();
		auto header_prep = header.get_aspn_c();
		this->c_struct   = aspn23_type_metadataheader_new(
            header_prep,
            const_cast<char*>(other.get_sensor_description().c_str()),
            other.get_delta_t_nom(),
            other.get_timestamp_clock_id(),
            other.get_digits_of_precision());

		this->take_ownership = true;
	}
	return *this;
}

TypeMetadataheader::TypeMetadataheader(TypeMetadataheader&& other) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

TypeMetadataheader& TypeMetadataheader::operator=(TypeMetadataheader&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_type_metadataheader_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

TypeMetadataheader::~TypeMetadataheader() {
	if (c_struct != nullptr && take_ownership) aspn23_type_metadataheader_free(this->c_struct);
}

Aspn23TypeMetadataheader* TypeMetadataheader::get_aspn_c() const { return c_struct; }

void TypeMetadataheader::reset_aspn_c(Aspn23TypeMetadataheader* replacement_struct,
                                      bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_type_metadataheader_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeHeader TypeMetadataheader::get_header() const {
	nullptr_check();
	return aspn23_type_header_copy(&c_struct->header);
}

void TypeMetadataheader::set_header(TypeHeader header) {
	nullptr_check();
	auto c_object    = std::move(header).get_aspn_c();
	c_struct->header = *c_object;
}

std::string TypeMetadataheader::get_sensor_description() const {
	nullptr_check();
	return c_struct->sensor_description;
}

void TypeMetadataheader::set_sensor_description(const std::string& sensor_description) {
	nullptr_check();
	free(c_struct->sensor_description);
	c_struct->sensor_description = strdup(sensor_description.c_str());
}

double TypeMetadataheader::get_delta_t_nom() const {
	nullptr_check();
	return c_struct->delta_t_nom;
}

void TypeMetadataheader::set_delta_t_nom(double delta_t_nom) {
	nullptr_check();
	c_struct->delta_t_nom = delta_t_nom;
}

uint8_t TypeMetadataheader::get_timestamp_clock_id() const {
	nullptr_check();
	return c_struct->timestamp_clock_id;
}

void TypeMetadataheader::set_timestamp_clock_id(uint8_t timestamp_clock_id) {
	nullptr_check();
	c_struct->timestamp_clock_id = timestamp_clock_id;
}

uint8_t TypeMetadataheader::get_digits_of_precision() const {
	nullptr_check();
	return c_struct->digits_of_precision;
}

void TypeMetadataheader::set_digits_of_precision(uint8_t digits_of_precision) {
	nullptr_check();
	c_struct->digits_of_precision = digits_of_precision;
}

void TypeMetadataheader::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("TypeMetadataheader is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
