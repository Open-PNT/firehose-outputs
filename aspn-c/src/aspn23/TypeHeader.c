
/*
 * This code is generated via firehose.
 * DO NOT hand edit code.  Make any changes required using the firehose repo instead
 */

#include "TypeHeader.h"

Aspn23TypeHeader* ASPN_NULLABLE aspn23_type_header_new(Aspn23MessageType message_type,
                                                       uint32_t vendor_id,
                                                       uint64_t device_id,
                                                       uint32_t context_id,
                                                       uint16_t sequence_id) {
	Aspn23TypeHeader* self = (struct Aspn23TypeHeader*)malloc(sizeof(Aspn23TypeHeader));
	if (NULL == self) return NULL;
	self->message_type = message_type;
	self->vendor_id    = vendor_id;
	self->device_id    = device_id;
	self->context_id   = context_id;
	self->sequence_id  = sequence_id;
	return self;
}

Aspn23TypeHeader* ASPN_NULLABLE aspn23_type_header_copy(Aspn23TypeHeader* input) {

	Aspn23TypeHeader* out = aspn23_type_header_new(input->message_type,
	                                               input->vendor_id,
	                                               input->device_id,
	                                               input->context_id,
	                                               input->sequence_id);

	return out;
}

void aspn23_type_header_free(void* pointer) {
	Aspn23TypeHeader* self = (Aspn23TypeHeader*)pointer;
	if (NULL == self) return;
	aspn23_type_header_free_members(self);
	free(self);
}

void aspn23_type_header_free_members(Aspn23TypeHeader* self) {
	if (NULL == self) return;
}
