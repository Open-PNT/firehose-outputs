
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataMagneticField.h"

Aspn23MetadataMagneticField* ASPN_NULLABLE
aspn23_metadata_magnetic_field_new(Aspn23TypeMetadataheader* info,
                                   Aspn23TypeTimestamp* time_of_validity,
                                   Aspn23TypeMounting* mounting,
                                   uint8_t num_meas,
                                   double* k,
                                   double* b) {
	size_t k_elements;
	Aspn23MetadataMagneticField* self =
	    (struct Aspn23MetadataMagneticField*)malloc(sizeof(Aspn23MetadataMagneticField));
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

	self->num_meas = num_meas;

	self->k = NULL;
	if (k != NULL && num_meas != 0 && num_meas != 0) {
		k_elements = num_meas * num_meas;
		if (k_elements > 0) {
			self->k = (double*)calloc(k_elements, sizeof(double));
			memcpy(self->k, k, k_elements * sizeof(double));
		} else {
			fprintf(stderr,
			        "An error occurred: (%s * %s) defines the row and column lengths of '%s' and "
			        "both must be a positive integer",
			        "num_meas",
			        "num_meas",
			        "k");
			aspn23_metadata_magnetic_field_free(self);
			return NULL;
		}
	}

	self->b = NULL;
	if (b != NULL && num_meas != 0) {
		if (num_meas == 0)
			self->b = NULL;
		else if (num_meas > 0) {

			self->b = (double*)calloc(num_meas, sizeof(double));
			memcpy(self->b, b, sizeof(double) * num_meas);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_meas",
			    "b");
			aspn23_metadata_magnetic_field_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MetadataMagneticField* ASPN_NULLABLE
aspn23_metadata_magnetic_field_copy(Aspn23MetadataMagneticField* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeMounting* mounting_prep = aspn23_type_mounting_copy(&input->mounting);
	Aspn23MetadataMagneticField* out  = aspn23_metadata_magnetic_field_new(
        info_prep, time_of_validity_prep, mounting_prep, input->num_meas, input->k, input->b);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_mounting_free(mounting_prep);
	return out;
}

void aspn23_metadata_magnetic_field_free(void* pointer) {
	Aspn23MetadataMagneticField* self = (Aspn23MetadataMagneticField*)pointer;
	if (NULL == self) return;
	aspn23_metadata_magnetic_field_free_members(self);
	free(self);
}

void aspn23_metadata_magnetic_field_free_members(Aspn23MetadataMagneticField* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_mounting_free_members(&self->mounting);
	free(self->k);

	if (self->b != NULL && self->num_meas != 0) {
		free(self->b);
	}
}
