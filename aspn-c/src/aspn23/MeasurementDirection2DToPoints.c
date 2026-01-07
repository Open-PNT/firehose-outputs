
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "MeasurementDirection2DToPoints.h"

Aspn23MeasurementDirection2DToPoints* ASPN_NULLABLE
aspn23_measurement_direction_2d_to_points_new(Aspn23TypeHeader* header,
                                              Aspn23TypeTimestamp* time_of_validity,
                                              uint16_t num_obs,
                                              Aspn23TypeDirection2DToPoint* obs) {
	Aspn23MeasurementDirection2DToPoints* self =
	    (struct Aspn23MeasurementDirection2DToPoints*)malloc(
	        sizeof(Aspn23MeasurementDirection2DToPoints));
	if (NULL == self) return NULL;

	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(header);
	self->header                  = *header_prep;
	free(header_prep);

	Aspn23TypeTimestamp* time_of_validity_prep = aspn23_type_timestamp_copy(time_of_validity);
	self->time_of_validity                     = *time_of_validity_prep;
	free(time_of_validity_prep);

	self->num_obs = num_obs;

	self->obs = NULL;
	if (obs != NULL && num_obs != 0) {
		if (num_obs == 0)
			self->obs = NULL;
		else if (num_obs > 0) {

			self->obs = (Aspn23TypeDirection2DToPoint*)calloc(num_obs,
			                                                  sizeof(Aspn23TypeDirection2DToPoint));
			for (size_t ii = 0; ii < num_obs; ii++) {
				Aspn23TypeDirection2DToPoint* pointer =
				    aspn23_type_direction_2d_to_point_copy(&obs[ii]);
				self->obs[ii] = *pointer;
				free(pointer);
			}

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "num_obs",
			    "obs");
			aspn23_measurement_direction_2d_to_points_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23MeasurementDirection2DToPoints* ASPN_NULLABLE
aspn23_measurement_direction_2d_to_points_copy(Aspn23MeasurementDirection2DToPoints* input) {
	Aspn23TypeHeader* header_prep = aspn23_type_header_copy(&input->header);
	Aspn23TypeTimestamp* time_of_validity_prep =
	    aspn23_type_timestamp_copy(&input->time_of_validity);
	Aspn23MeasurementDirection2DToPoints* out = aspn23_measurement_direction_2d_to_points_new(
	    header_prep, time_of_validity_prep, input->num_obs, input->obs);
	aspn23_type_header_free(header_prep);
	aspn23_type_timestamp_free(time_of_validity_prep);
	return out;
}

void aspn23_measurement_direction_2d_to_points_free(void* pointer) {
	Aspn23MeasurementDirection2DToPoints* self = (Aspn23MeasurementDirection2DToPoints*)pointer;
	if (NULL == self) return;
	aspn23_measurement_direction_2d_to_points_free_members(self);
	free(self);
}

void aspn23_measurement_direction_2d_to_points_free_members(
    Aspn23MeasurementDirection2DToPoints* self) {
	if (NULL == self) return;
	aspn23_type_header_free_members(&self->header);
	aspn23_type_timestamp_free_members(&self->time_of_validity);

	if (self->obs != NULL && self->num_obs != 0) {
		for (size_t ii = 0; ii < self->num_obs; ii++)
			aspn23_type_direction_2d_to_point_free_members(&self->obs[ii]);
		free(self->obs);
	}
}
