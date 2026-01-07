
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeRemotePoint.h"

Aspn23TypeRemotePoint* ASPN_NULLABLE aspn23_type_remote_point_new(
    uint8_t included_terms,
    uint32_t id,
    enum Aspn23TypeRemotePointPositionReferenceFrame position_reference_frame,
    double position1,
    double position2,
    double position3,
    uint8_t num_position_components,
    double* position_covariance) {
	size_t position_covariance_elements;
	Aspn23TypeRemotePoint* self =
	    (struct Aspn23TypeRemotePoint*)malloc(sizeof(Aspn23TypeRemotePoint));
	if (NULL == self) return NULL;
	self->included_terms           = included_terms;
	self->id                       = id;
	self->position_reference_frame = position_reference_frame;
	self->position1                = position1;
	self->position2                = position2;
	self->position3                = position3;
	self->num_position_components  = num_position_components;

	self->position_covariance = NULL;
	if (position_covariance != NULL && num_position_components != 0 &&
	    num_position_components != 0) {
		position_covariance_elements = num_position_components * num_position_components;
		if (position_covariance_elements > 0) {
			self->position_covariance =
			    (double*)calloc(position_covariance_elements, sizeof(double));
			memcpy(self->position_covariance,
			       position_covariance,
			       position_covariance_elements * sizeof(double));
		} else {
			fprintf(stderr,
			        "An error occurred: (%s * %s) defines the row and column lengths of '%s' and "
			        "both must be a positive integer",
			        "num_position_components",
			        "num_position_components",
			        "position_covariance");
			aspn23_type_remote_point_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23TypeRemotePoint* ASPN_NULLABLE aspn23_type_remote_point_copy(Aspn23TypeRemotePoint* input) {

	Aspn23TypeRemotePoint* out = aspn23_type_remote_point_new(input->included_terms,
	                                                          input->id,
	                                                          input->position_reference_frame,
	                                                          input->position1,
	                                                          input->position2,
	                                                          input->position3,
	                                                          input->num_position_components,
	                                                          input->position_covariance);

	return out;
}

void aspn23_type_remote_point_free(void* pointer) {
	Aspn23TypeRemotePoint* self = (Aspn23TypeRemotePoint*)pointer;
	if (NULL == self) return;
	aspn23_type_remote_point_free_members(self);
	free(self);
}

void aspn23_type_remote_point_free_members(Aspn23TypeRemotePoint* self) {
	if (NULL == self) return;
	free(self->position_covariance);
}
