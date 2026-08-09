/*
 * store_dto_envelope.h
 *
 * 
 */

#ifndef _store_dto_envelope_H_
#define _store_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_dto_envelope_t store_dto_envelope_t;

#include "store_dto.h"



typedef struct store_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct store_dto_t *result; //model

} store_dto_envelope_t;

store_dto_envelope_t *store_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    store_dto_t *result
);

void store_dto_envelope_free(store_dto_envelope_t *store_dto_envelope);

store_dto_envelope_t *store_dto_envelope_parseFromJSON(cJSON *store_dto_envelopeJSON);

cJSON *store_dto_envelope_convertToJSON(store_dto_envelope_t *store_dto_envelope);

#endif /* _store_dto_envelope_H_ */

