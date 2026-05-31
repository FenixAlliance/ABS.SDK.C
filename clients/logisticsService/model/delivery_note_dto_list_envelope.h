/*
 * delivery_note_dto_list_envelope.h
 *
 * 
 */

#ifndef _delivery_note_dto_list_envelope_H_
#define _delivery_note_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct delivery_note_dto_list_envelope_t delivery_note_dto_list_envelope_t;

#include "delivery_note_dto.h"



typedef struct delivery_note_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} delivery_note_dto_list_envelope_t;

delivery_note_dto_list_envelope_t *delivery_note_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void delivery_note_dto_list_envelope_free(delivery_note_dto_list_envelope_t *delivery_note_dto_list_envelope);

delivery_note_dto_list_envelope_t *delivery_note_dto_list_envelope_parseFromJSON(cJSON *delivery_note_dto_list_envelopeJSON);

cJSON *delivery_note_dto_list_envelope_convertToJSON(delivery_note_dto_list_envelope_t *delivery_note_dto_list_envelope);

#endif /* _delivery_note_dto_list_envelope_H_ */

