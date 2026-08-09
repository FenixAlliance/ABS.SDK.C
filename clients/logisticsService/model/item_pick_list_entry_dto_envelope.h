/*
 * item_pick_list_entry_dto_envelope.h
 *
 * 
 */

#ifndef _item_pick_list_entry_dto_envelope_H_
#define _item_pick_list_entry_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_pick_list_entry_dto_envelope_t item_pick_list_entry_dto_envelope_t;

#include "item_pick_list_entry_dto.h"



typedef struct item_pick_list_entry_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct item_pick_list_entry_dto_t *result; //model

} item_pick_list_entry_dto_envelope_t;

item_pick_list_entry_dto_envelope_t *item_pick_list_entry_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    item_pick_list_entry_dto_t *result
);

void item_pick_list_entry_dto_envelope_free(item_pick_list_entry_dto_envelope_t *item_pick_list_entry_dto_envelope);

item_pick_list_entry_dto_envelope_t *item_pick_list_entry_dto_envelope_parseFromJSON(cJSON *item_pick_list_entry_dto_envelopeJSON);

cJSON *item_pick_list_entry_dto_envelope_convertToJSON(item_pick_list_entry_dto_envelope_t *item_pick_list_entry_dto_envelope);

#endif /* _item_pick_list_entry_dto_envelope_H_ */

