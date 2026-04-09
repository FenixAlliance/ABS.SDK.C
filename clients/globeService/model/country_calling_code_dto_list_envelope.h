/*
 * country_calling_code_dto_list_envelope.h
 *
 * 
 */

#ifndef _country_calling_code_dto_list_envelope_H_
#define _country_calling_code_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_calling_code_dto_list_envelope_t country_calling_code_dto_list_envelope_t;

#include "country_calling_code_dto.h"



typedef struct country_calling_code_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} country_calling_code_dto_list_envelope_t;

country_calling_code_dto_list_envelope_t *country_calling_code_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void country_calling_code_dto_list_envelope_free(country_calling_code_dto_list_envelope_t *country_calling_code_dto_list_envelope);

country_calling_code_dto_list_envelope_t *country_calling_code_dto_list_envelope_parseFromJSON(cJSON *country_calling_code_dto_list_envelopeJSON);

cJSON *country_calling_code_dto_list_envelope_convertToJSON(country_calling_code_dto_list_envelope_t *country_calling_code_dto_list_envelope);

#endif /* _country_calling_code_dto_list_envelope_H_ */

