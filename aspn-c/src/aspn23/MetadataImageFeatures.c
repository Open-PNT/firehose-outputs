
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataImageFeatures.h"

Aspn23MetadataImageFeatures* ASPN_NULLABLE aspn23_metadata_image_features_new(
    Aspn23TypeMetadataheader* info,
    Aspn23TypeTimestamp* time_of_validity,
    enum Aspn23MetadataImageFeaturesKeypointDetector keypoint_detector,
    bool orientation_calculated,
    enum Aspn23MetadataImageFeaturesDescriptorExtractor descriptor_extractor,
    bool is_bigendian,
    enum Aspn23MetadataImageFeaturesDescriptorType descriptor_type,
    uint16_t descriptor_number_of_elements) {
	Aspn23MetadataImageFeatures* self =
	    (struct Aspn23MetadataImageFeatures*)malloc(sizeof(Aspn23MetadataImageFeatures));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->keypoint_detector             = keypoint_detector;
	self->orientation_calculated        = orientation_calculated;
	self->descriptor_extractor          = descriptor_extractor;
	self->is_bigendian                  = is_bigendian;
	self->descriptor_type               = descriptor_type;
	self->descriptor_number_of_elements = descriptor_number_of_elements;
	return self;
}

Aspn23MetadataImageFeatures* ASPN_NULLABLE
aspn23_metadata_image_features_copy(Aspn23MetadataImageFeatures* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MetadataImageFeatures* out =
	    aspn23_metadata_image_features_new(info_prep,
	                                       time_of_validity_prep,
	                                       input->keypoint_detector,
	                                       input->orientation_calculated,
	                                       input->descriptor_extractor,
	                                       input->is_bigendian,
	                                       input->descriptor_type,
	                                       input->descriptor_number_of_elements);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_metadata_image_features_free(void* pointer) {
	Aspn23MetadataImageFeatures* self = (Aspn23MetadataImageFeatures*)pointer;
	if (NULL == self) return;
	aspn23_metadata_image_features_free_members(self);
	free(self);
}

void aspn23_metadata_image_features_free_members(Aspn23MetadataImageFeatures* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
}
