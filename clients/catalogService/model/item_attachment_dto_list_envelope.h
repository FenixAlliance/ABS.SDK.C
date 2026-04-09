/*
 * item_attachment_dto_list_envelope.h
 *
 * 
 */

#ifndef _item_attachment_dto_list_envelope_H_
#define _item_attachment_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_attachment_dto_list_envelope_t item_attachment_dto_list_envelope_t;

#include "item_attachment_dto.h"



typedef struct item_attachment_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} item_attachment_dto_list_envelope_t;

item_attachment_dto_list_envelope_t *item_attachment_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void item_attachment_dto_list_envelope_free(item_attachment_dto_list_envelope_t *item_attachment_dto_list_envelope);

item_attachment_dto_list_envelope_t *item_attachment_dto_list_envelope_parseFromJSON(cJSON *item_attachment_dto_list_envelopeJSON);

cJSON *item_attachment_dto_list_envelope_convertToJSON(item_attachment_dto_list_envelope_t *item_attachment_dto_list_envelope);

#endif /* _item_attachment_dto_list_envelope_H_ */

