
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MetadataImu.h"

Aspn23MetadataImu* ASPN_NULLABLE
aspn23_metadata_imu_new(Aspn23TypeMetadataheader* info,
                        Aspn23TypeTimestamp* time_of_validity,
                        Aspn23TypeMounting* mounting,
                        enum Aspn23MetadataImuErrorModel error_model,
                        uint16_t num_error_model_params,
                        double* error_model_params) {
	Aspn23MetadataImu* self = (struct Aspn23MetadataImu*)malloc(sizeof(Aspn23MetadataImu));
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

	self->error_model            = error_model;
	self->num_error_model_params = num_error_model_params;

	self->error_model_params = NULL;
	if (error_model_params != NULL && num_error_model_params != 0) {
		if (num_error_model_params == 0)
			self->error_model_params = NULL;
		else if (num_error_model_params > 0) {

			self->error_model_params = (double*)calloc(num_error_model_params, sizeof(double));
			memcpy(self->error_model_params,
			       error_model_params,
			       sizeof(double) * num_error_model_params);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_error_model_params",
			    "error_model_params");
			aspn23_metadata_imu_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MetadataImu* ASPN_NULLABLE aspn23_metadata_imu_copy(Aspn23MetadataImu* input) {
	Aspn23TypeMetadataheader* info_prep = aspn23_type_metadataheader_copy(&input->info);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23TypeMounting* mounting_prep = aspn23_type_mounting_copy(&input->mounting);
	Aspn23MetadataImu* out            = aspn23_metadata_imu_new(info_prep,
                                                     time_of_validity_prep,
                                                     mounting_prep,
                                                     input->error_model,
                                                     input->num_error_model_params,
                                                     input->error_model_params);
	aspn23_type_metadataheader_free(info_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	aspn23_type_mounting_free(mounting_prep);
	return out;
}

void aspn23_metadata_imu_free(void* pointer) {
	Aspn23MetadataImu* self = (Aspn23MetadataImu*)pointer;
	if (NULL == self) return;
	aspn23_metadata_imu_free_members(self);
	free(self);
}

void aspn23_metadata_imu_free_members(Aspn23MetadataImu* self) {
	if (NULL == self) return;
	aspn23_type_metadataheader_free_members(&self->info);
	aspn23_type_timestamp_free_members(&self->time_of_validity);
	aspn23_type_mounting_free_members(&self->mounting);

	if (self->error_model_params != NULL && self->num_error_model_params != 0) {
		free(self->error_model_params);
	}
}
