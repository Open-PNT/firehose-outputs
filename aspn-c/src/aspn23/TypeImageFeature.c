
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeImageFeature.h"

Aspn23TypeImageFeature* ASPN_NULLABLE aspn23_type_image_feature_new(double response,
                                                                    double orientation,
                                                                    double size,
                                                                    uint16_t class_id,
                                                                    uint16_t octave,
                                                                    uint16_t descriptor_size,
                                                                    uint8_t* descriptor) {
	Aspn23TypeImageFeature* self =
	    (struct Aspn23TypeImageFeature*)malloc(sizeof(Aspn23TypeImageFeature));
	if (NULL == self) return NULL;
	self->response        = response;
	self->orientation     = orientation;
	self->size            = size;
	self->class_id        = class_id;
	self->octave          = octave;
	self->descriptor_size = descriptor_size;

	self->descriptor = NULL;
	if (descriptor != NULL && descriptor_size != 0) {
		if (descriptor_size == 0)
			self->descriptor = NULL;
		else if (descriptor_size > 0) {

			self->descriptor = (uint8_t*)calloc(descriptor_size, sizeof(uint8_t));
			memcpy(self->descriptor, descriptor, sizeof(uint8_t) * descriptor_size);

		} else {
			fprintf(
			    stderr,
			    "An error occurred: '%s' defines the length '%s' and must be a positive integer",
			    "descriptor_size",
			    "descriptor");
			aspn23_type_image_feature_free(self);
			return NULL;
		}
	}

	return self;
}

Aspn23TypeImageFeature* ASPN_NULLABLE
aspn23_type_image_feature_copy(Aspn23TypeImageFeature* input) {

	Aspn23TypeImageFeature* out = aspn23_type_image_feature_new(input->response,
	                                                            input->orientation,
	                                                            input->size,
	                                                            input->class_id,
	                                                            input->octave,
	                                                            input->descriptor_size,
	                                                            input->descriptor);

	return out;
}

void aspn23_type_image_feature_free(void* pointer) {
	Aspn23TypeImageFeature* self = (Aspn23TypeImageFeature*)pointer;
	if (NULL == self) return;
	aspn23_type_image_feature_free_members(self);
	free(self);
}

void aspn23_type_image_feature_free_members(Aspn23TypeImageFeature* self) {
	if (NULL == self) return;

	if (self->descriptor != NULL && self->descriptor_size != 0) {
		free(self->descriptor);
	}
}
