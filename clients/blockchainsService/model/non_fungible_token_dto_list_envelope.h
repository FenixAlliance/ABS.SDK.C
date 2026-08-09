/*
 * non_fungible_token_dto_list_envelope.h
 *
 * 
 */

#ifndef _non_fungible_token_dto_list_envelope_H_
#define _non_fungible_token_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_dto_list_envelope_t non_fungible_token_dto_list_envelope_t;

#include "non_fungible_token_dto.h"



typedef struct non_fungible_token_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} non_fungible_token_dto_list_envelope_t;

non_fungible_token_dto_list_envelope_t *non_fungible_token_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
);

void non_fungible_token_dto_list_envelope_free(non_fungible_token_dto_list_envelope_t *non_fungible_token_dto_list_envelope);

non_fungible_token_dto_list_envelope_t *non_fungible_token_dto_list_envelope_parseFromJSON(cJSON *non_fungible_token_dto_list_envelopeJSON);

cJSON *non_fungible_token_dto_list_envelope_convertToJSON(non_fungible_token_dto_list_envelope_t *non_fungible_token_dto_list_envelope);

#endif /* _non_fungible_token_dto_list_envelope_H_ */

