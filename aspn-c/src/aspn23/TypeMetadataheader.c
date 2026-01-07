
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeMetadataheader.h"

Aspn23TypeMetadataheader* ASPN_NULLABLE
aspn23_type_metadataheader_new(Aspn23TypeHeader* header,
                               char* sensor_description,
                               double delta_t_nom,
                               uint8_t timestamp_clock_id,
                               uint8_t digits_of_precision) {
	Aspn23TypeMetadataheader* self =
	    (struct Aspn23TypeMetadataheader*)malloc(sizeof(Aspn23TypeMetadataheader));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	if (sensor_description == NULL) return NULL;
	size_t len               = strlen(sensor_description) + 1;
	self->sensor_description = malloc(len);
	memcpy(self->sensor_description, sensor_description, len);
	self->delta_t_nom         = delta_t_nom;
	self->timestamp_clock_id  = timestamp_clock_id;
	self->digits_of_precision = digits_of_precision;
	return self;
}

Aspn23TypeMetadataheader* ASPN_NULLABLE
aspn23_type_metadataheader_copy(Aspn23TypeMetadataheader* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeMetadataheader* out = aspn23_type_metadataheader_new(header_prep,
	                                                               input->sensor_description,
	                                                               input->delta_t_nom,
	                                                               input->timestamp_clock_id,
	                                                               input->digits_of_precision);
	aspn23_type_header_free(header_prep);
	return out;
}

void aspn23_type_metadataheader_free(void* pointer) {
	Aspn23TypeMetadataheader* self = (Aspn23TypeMetadataheader*)pointer;
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(self);
	free(self);
}

void aspn23_type_metadataheader_free_members(Aspn23TypeMetadataheader* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	free(self->sensor_description);
}
