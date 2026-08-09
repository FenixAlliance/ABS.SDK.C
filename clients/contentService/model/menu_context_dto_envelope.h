/*
 * menu_context_dto_envelope.h
 *
 * 
 */

#ifndef _menu_context_dto_envelope_H_
#define _menu_context_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct menu_context_dto_envelope_t menu_context_dto_envelope_t;

#include "menu_context_dto.h"



typedef struct menu_context_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct menu_context_dto_t *result; //model

} menu_context_dto_envelope_t;

menu_context_dto_envelope_t *menu_context_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    menu_context_dto_t *result
);

void menu_context_dto_envelope_free(menu_context_dto_envelope_t *menu_context_dto_envelope);

menu_context_dto_envelope_t *menu_context_dto_envelope_parseFromJSON(cJSON *menu_context_dto_envelopeJSON);

cJSON *menu_context_dto_envelope_convertToJSON(menu_context_dto_envelope_t *menu_context_dto_envelope);

#endif /* _menu_context_dto_envelope_H_ */

