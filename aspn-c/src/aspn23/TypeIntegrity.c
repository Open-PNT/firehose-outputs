
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeIntegrity.h"

Aspn23TypeIntegrity* ASPN_NULLABLE aspn23_type_integrity_new(uint8_t integrity_method,
                                                             double integrity_value) {
	Aspn23TypeIntegrity* self = (struct Aspn23TypeIntegrity*)malloc(sizeof(Aspn23TypeIntegrity));
	if (NULL == self) return NULL;
	self->integrity_method = integrity_method;
	self->integrity_value  = integrity_value;
	return self;
}

Aspn23TypeIntegrity* ASPN_NULLABLE aspn23_type_integrity_copy(Aspn23TypeIntegrity* input) {

	Aspn23TypeIntegrity* out =
	    aspn23_type_integrity_new(input->integrity_method, input->integrity_value);

	return out;
}

void aspn23_type_integrity_free(void* pointer) {
	Aspn23TypeIntegrity* self = (Aspn23TypeIntegrity*)pointer;
	if (NULL == self) return;
	aspn23_type_integrity_free_members(self);
	free(self);
}

void aspn23_type_integrity_free_members(Aspn23TypeIntegrity* self) {
	if (NULL == self) return;
}
