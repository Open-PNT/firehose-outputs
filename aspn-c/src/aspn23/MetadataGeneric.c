
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataGeneric.h"

Aspn23MetadataGeneric* ASPN_NULLABLE
aspn23_metadata_generic_new(Aspn23TypeMetadataheader* info,
                            Aspn23TypeTimestamp* time_of_validity,
                            Aspn23TypeMounting* mounting) {
	Aspn23MetadataGeneric* self =
	    (struct Aspn23MetadataGeneric*)malloc(sizeof(Aspn23MetadataGeneric));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	Aspn23TypeMounting* mounting_prep = aspn23_type_mounting_copy(mounting);
	self->mounting                    = *mounting_prep;
	free(mounting_prep);

	return self;
}

Aspn23MetadataGeneric* ASPN_NULLABLE aspn23_metadata_generic_copy(Aspn23MetadataGeneric* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeMounting* mounting_prep = aspn23_type_mounting_copy(&input->mounting);
	Aspn23MetadataGeneric* out =
	    aspn23_metadata_generic_new(info_prep, time_of_validity_prep, mounting_prep);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_mounting_free(mounting_prep);
	return out;
}

void aspn23_metadata_generic_free(void* pointer) {
	Aspn23MetadataGeneric* self = (Aspn23MetadataGeneric*)pointer;
	if (NULL == self) return;
	aspn23_metadata_generic_free_members(self);
	free(self);
}

void aspn23_metadata_generic_free_members(Aspn23MetadataGeneric* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_mounting_free_members(&self->mounting);
}
