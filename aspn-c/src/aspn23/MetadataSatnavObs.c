
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataSatnavObs.h"

Aspn23MetadataSatnavObs* ASPN_NULLABLE
aspn23_metadata_satnav_obs_new(Aspn23TypeMetadataheader* info,
                               Aspn23TypeTimestamp* time_of_validity,
                               float deltarange_interval_start,
                               float deltarange_interval_stop) {
	Aspn23MetadataSatnavObs* self =
	    (struct Aspn23MetadataSatnavObs*)malloc(sizeof(Aspn23MetadataSatnavObs));
	if (NULL == self) return NULL;

	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(info);
	self->info                          = *info_prep;
	free(info_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->deltarange_interval_start = deltarange_interval_start;
	self->deltarange_interval_stop  = deltarange_interval_stop;
	return self;
}

Aspn23MetadataSatnavObs* ASPN_NULLABLE
aspn23_metadata_satnav_obs_copy(Aspn23MetadataSatnavObs* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MetadataSatnavObs* out = aspn23_metadata_satnav_obs_new(info_prep,
	                                                              time_of_validity_prep,
	                                                              input->deltarange_interval_start,
	                                                              input->deltarange_interval_stop);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_metadata_satnav_obs_free(void* pointer) {
	Aspn23MetadataSatnavObs* self = (Aspn23MetadataSatnavObs*)pointer;
	if (NULL == self) return;
	aspn23_metadata_satnav_obs_free_members(self);
	free(self);
}

void aspn23_metadata_satnav_obs_free_members(Aspn23MetadataSatnavObs* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
}
