
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementImage.h"

Aspn23MeasurementImage* ASPN_NULLABLE
aspn23_measurement_image_new(Aspn23TypeHeader* header,
                             Aspn23TypeTimestamp* time_of_validity,
                             uint32_t height,
                             uint32_t width,
                             bool is_bigendian,
                             enum Aspn23MeasurementImageImageType image_type,
                             uint64_t image_data_length,
                             uint8_t* image_data,
                             enum Aspn23MeasurementImageCameraModel camera_model,
                             uint8_t num_model_coefficients,
                             double* model_coefficients,
                             uint8_t num_integrity,
                             Aspn23TypeIntegrity* integrity) {
	Aspn23MeasurementImage* self =
	    (struct Aspn23MeasurementImage*)malloc(sizeof(Aspn23MeasurementImage));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->height            = height;
	self->width             = width;
	self->is_bigendian      = is_bigendian;
	self->image_type        = image_type;
	self->image_data_length = image_data_length;

	self->image_data = NULL;
	if (image_data != NULL && image_data_length != 0) {
		if (image_data_length == 0)
			self->image_data = NULL;
		else if (image_data_length > 0) {

			self->image_data = (uint8_t*)calloc(image_data_length, sizeof(uint8_t));
			memcpy(self->image_data, image_data, sizeof(uint8_t) * image_data_length);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "image_data_length",
			    "image_data");
			aspn23_measurement_image_free(self);
			return NULL;
		}
	}

	self->camera_model           = camera_model;
	self->num_model_coefficients = num_model_coefficients;

	self->model_coefficients = NULL;
	if (model_coefficients != NULL && num_model_coefficients != 0) {
		if (num_model_coefficients == 0)
			self->model_coefficients = NULL;
		else if (num_model_coefficients > 0) {

			self->model_coefficients = (double*)calloc(num_model_coefficients, sizeof(double));
			memcpy(self->model_coefficients,
			       model_coefficients,
			       sizeof(double) * num_model_coefficients);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_model_coefficients",
			    "model_coefficients");
			aspn23_measurement_image_free(self);
			return NULL;
		}
	}

	self->num_integrity = num_integrity;

	self->integrity = NULL;
	if (integrity != NULL && num_integrity != 0) {
		if (num_integrity == 0)
			self->integrity = NULL;
		else if (num_integrity > 0) {

			self->integrity =
			    (Aspn23TypeIntegrity*)calloc(num_integrity, sizeof(Aspn23TypeIntegrity));
			for (size_t ii = 0; ii < num_integrity; ii++) {
				Aspn23TypeIntegrity* pointer = aspn23_type_integrity_copy(&integrity[ii]);
				self->integrity[ii]          = *pointer;
				free(pointer);
			}

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_integrity",
			    "integrity");
			aspn23_measurement_image_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementImage* ASPN_NULLABLE aspn23_measurement_image_copy(Aspn23MeasurementImage* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementImage* out = aspn23_measurement_image_new(header_prep,
	                                                           time_of_validity_prep,
	                                                           input->height,
	                                                           input->width,
	                                                           input->is_bigendian,
	                                                           input->image_type,
	                                                           input->image_data_length,
	                                                           input->image_data,
	                                                           input->camera_model,
	                                                           input->num_model_coefficients,
	                                                           input->model_coefficients,
	                                                           input->num_integrity,
	                                                           input->integrity);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_image_free(void* pointer) {
	Aspn23MeasurementImage* self = (Aspn23MeasurementImage*)pointer;
	if (NULL == self) return;
	aspn23_measurement_image_free_members(self);
	free(self);
}

void aspn23_measurement_image_free_members(Aspn23MeasurementImage* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);

	if (self->image_data != NULL && self->image_data_length != 0) {
		free(self->image_data);
	}

	if (self->model_coefficients != NULL && self->num_model_coefficients != 0) {
		free(self->model_coefficients);
	}

	if (self->integrity != NULL && self->num_integrity != 0) {
		for (size_t ii = 0; ii < self->num_integrity; ii++)
			aspn23_type_integrity_free_members(&self->integrity[ii]);
		free(self->integrity);
	}
}
