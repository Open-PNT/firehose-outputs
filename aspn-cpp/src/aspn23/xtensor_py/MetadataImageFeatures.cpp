
// This code is generated via firehose.
// DO NOT hand edit code. Make any changes required using the firehose repo instead.

#include "MetadataImageFeatures.hpp"

#include <stdexcept>

namespace aspn23_xtensor {

MetadataImageFeatures::MetadataImageFeatures(
    TypeMetadataheader info,
    TypeTimestamp time_of_validity,
    Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector,
    bool orientation_calculated,
    Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor,
    bool is_bigendian,
    Aspn23MetadataImageFeaturesDescriptorType descriptor_type,
    uint16_t descriptor_number_of_elements)
    : TypeHeader(info.get_header()) {
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_image_features_new(info_prep,
                                                        time_of_validity_prep,
                                                        keypoint_detector,
                                                        orientation_calculated,
                                                        descriptor_extractor,
                                                        is_bigendian,
                                                        descriptor_type,
                                                        descriptor_number_of_elements);

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataImageFeatures::MetadataImageFeatures(Aspn23MetadataImageFeatures* c_struct,
                                             bool take_ownership)
    : TypeHeader(&c_struct->info.header, false), take_ownership(take_ownership) {
	this->c_struct = c_struct;
}

MetadataImageFeatures::MetadataImageFeatures(const MetadataImageFeatures& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	auto info                  = other.get_info();
	auto time_of_validity      = other.get_time_of_validity();
	auto info_prep             = info.get_aspn_c();
	auto time_of_validity_prep = time_of_validity.get_aspn_c();
	this->c_struct             = aspn23_metadata_image_features_new(info_prep,
                                                        time_of_validity_prep,
                                                        other.get_keypoint_detector(),
                                                        other.get_orientation_calculated(),
                                                        other.get_descriptor_extractor(),
                                                        other.get_is_bigendian(),
                                                        other.get_descriptor_type(),
                                                        other.get_descriptor_number_of_elements());

	this->take_ownership = true;

	TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
}

MetadataImageFeatures& MetadataImageFeatures::operator=(const MetadataImageFeatures& other) {
	// self-assignment check
	if (this != &other) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_image_features_free(this->c_struct);
		auto info                  = other.get_info();
		auto time_of_validity      = other.get_time_of_validity();
		auto info_prep             = info.get_aspn_c();
		auto time_of_validity_prep = time_of_validity.get_aspn_c();
		this->c_struct =
		    aspn23_metadata_image_features_new(info_prep,
		                                       time_of_validity_prep,
		                                       other.get_keypoint_detector(),
		                                       other.get_orientation_calculated(),
		                                       other.get_descriptor_extractor(),
		                                       other.get_is_bigendian(),
		                                       other.get_descriptor_type(),
		                                       other.get_descriptor_number_of_elements());

		this->take_ownership = true;

		TypeHeader::reset_aspn_c(&this->c_struct->info.header, false);
	}
	return *this;
}

MetadataImageFeatures::MetadataImageFeatures(MetadataImageFeatures&& other)
    : TypeHeader(&other.c_struct->info.header, false) {
	this->c_struct       = other.c_struct;
	other.c_struct       = nullptr;
	this->take_ownership = other.take_ownership;
}

MetadataImageFeatures& MetadataImageFeatures::operator=(MetadataImageFeatures&& rhs) {
	// self-assignment check
	if (this != &rhs) {
		if (this->c_struct != nullptr && this->take_ownership)
			aspn23_metadata_image_features_free(this->c_struct);
		this->c_struct       = rhs.c_struct;
		rhs.c_struct         = nullptr;
		this->take_ownership = rhs.take_ownership;
	}
	return *this;
}

MetadataImageFeatures::~MetadataImageFeatures() {
	if (c_struct != nullptr && take_ownership) aspn23_metadata_image_features_free(this->c_struct);
}

Aspn23MessageType MetadataImageFeatures::get_message_type() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->message_type;
}
void MetadataImageFeatures::set_message_type(Aspn23MessageType type) {
	nullptr_check();
	auto c_header          = (Aspn23TypeHeader*)c_struct;
	c_header->message_type = type;
}

uint32_t MetadataImageFeatures::get_vendor_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->vendor_id;
}
void MetadataImageFeatures::set_vendor_id(uint32_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->vendor_id = id;
}

uint64_t MetadataImageFeatures::get_device_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->device_id;
}
void MetadataImageFeatures::set_device_id(uint64_t id) {
	nullptr_check();
	auto c_header       = (Aspn23TypeHeader*)c_struct;
	c_header->device_id = id;
}

uint32_t MetadataImageFeatures::get_context_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->context_id;
}
void MetadataImageFeatures::set_context_id(uint32_t id) {
	nullptr_check();
	auto c_header        = (Aspn23TypeHeader*)c_struct;
	c_header->context_id = id;
}

uint16_t MetadataImageFeatures::get_sequence_id() const {
	nullptr_check();
	auto c_header = (Aspn23TypeHeader*)c_struct;
	return c_header->sequence_id;
}
void MetadataImageFeatures::set_sequence_id(uint16_t id) {
	nullptr_check();
	auto c_header         = (Aspn23TypeHeader*)c_struct;
	c_header->sequence_id = id;
}

Aspn23MetadataImageFeatures* MetadataImageFeatures::get_aspn_c() const { return c_struct; }

void MetadataImageFeatures::reset_aspn_c(Aspn23MetadataImageFeatures* replacement_struct,
                                         bool take_ownership) {
	if (this->c_struct != nullptr && this->take_ownership)
		aspn23_metadata_image_features_free(this->c_struct);
	this->take_ownership = take_ownership;
	this->c_struct       = replacement_struct;
}

TypeMetadataheader MetadataImageFeatures::get_info() const {
	nullptr_check();
	return aspn23_type_metadataheader_copy(&c_struct->info);
}

void MetadataImageFeatures::set_info(TypeMetadataheader info) {
	nullptr_check();
	auto c_object  = std::move(info).get_aspn_c();
	c_struct->info = *c_object;
}

TypeTimestamp MetadataImageFeatures::get_time_of_validity() const {
	nullptr_check();
	return aspn23_type_timestamp_copy(&c_struct->time_of_validity);
}

void MetadataImageFeatures::set_time_of_validity(TypeTimestamp time_of_validity) {
	nullptr_check();
	auto c_object              = std::move(time_of_validity).get_aspn_c();
	c_struct->time_of_validity = *c_object;
}

Aspn23MetadataImageFeaturesKeypointDetector MetadataImageFeatures::get_keypoint_detector() const {
	nullptr_check();
	return c_struct->keypoint_detector;
}

void MetadataImageFeatures::set_keypoint_detector(
    Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector) {
	nullptr_check();
	c_struct->keypoint_detector = keypoint_detector;
}

bool MetadataImageFeatures::get_orientation_calculated() const {
	nullptr_check();
	return c_struct->orientation_calculated;
}

void MetadataImageFeatures::set_orientation_calculated(bool orientation_calculated) {
	nullptr_check();
	c_struct->orientation_calculated = orientation_calculated;
}

Aspn23MetadataImageFeaturesDescriptorExtractor MetadataImageFeatures::get_descriptor_extractor()
    const {
	nullptr_check();
	return c_struct->descriptor_extractor;
}

void MetadataImageFeatures::set_descriptor_extractor(
    Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor) {
	nullptr_check();
	c_struct->descriptor_extractor = descriptor_extractor;
}

bool MetadataImageFeatures::get_is_bigendian() const {
	nullptr_check();
	return c_struct->is_bigendian;
}

void MetadataImageFeatures::set_is_bigendian(bool is_bigendian) {
	nullptr_check();
	c_struct->is_bigendian = is_bigendian;
}

Aspn23MetadataImageFeaturesDescriptorType MetadataImageFeatures::get_descriptor_type() const {
	nullptr_check();
	return c_struct->descriptor_type;
}

void MetadataImageFeatures::set_descriptor_type(
    Aspn23MetadataImageFeaturesDescriptorType descriptor_type) {
	nullptr_check();
	c_struct->descriptor_type = descriptor_type;
}

uint16_t MetadataImageFeatures::get_descriptor_number_of_elements() const {
	nullptr_check();
	return c_struct->descriptor_number_of_elements;
}

void MetadataImageFeatures::set_descriptor_number_of_elements(
    uint16_t descriptor_number_of_elements) {
	nullptr_check();
	c_struct->descriptor_number_of_elements = descriptor_number_of_elements;
}

void MetadataImageFeatures::nullptr_check() const {
	if (c_struct == nullptr)
		throw std::runtime_error("MetadataImageFeatures is holding a null pointer to ASPN-C data!");
}

}  // namespace aspn23_xtensor
