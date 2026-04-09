/*
 * wish_list_dto_envelope.h
 *
 * 
 */

#ifndef _wish_list_dto_envelope_H_
#define _wish_list_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wish_list_dto_envelope_t wish_list_dto_envelope_t;

#include "wish_list_dto.h"



typedef struct wish_list_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct wish_list_dto_t *result; //model

} wish_list_dto_envelope_t;

wish_list_dto_envelope_t *wish_list_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    wish_list_dto_t *result
);

void wish_list_dto_envelope_free(wish_list_dto_envelope_t *wish_list_dto_envelope);

wish_list_dto_envelope_t *wish_list_dto_envelope_parseFromJSON(cJSON *wish_list_dto_envelopeJSON);

cJSON *wish_list_dto_envelope_convertToJSON(wish_list_dto_envelope_t *wish_list_dto_envelope);

#endif /* _wish_list_dto_envelope_H_ */

