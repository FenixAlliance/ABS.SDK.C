/*
 * marketing_list_dto_envelope.h
 *
 * 
 */

#ifndef _marketing_list_dto_envelope_H_
#define _marketing_list_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_list_dto_envelope_t marketing_list_dto_envelope_t;

#include "marketing_list_dto.h"



typedef struct marketing_list_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct marketing_list_dto_t *result; //model

} marketing_list_dto_envelope_t;

marketing_list_dto_envelope_t *marketing_list_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    marketing_list_dto_t *result
);

void marketing_list_dto_envelope_free(marketing_list_dto_envelope_t *marketing_list_dto_envelope);

marketing_list_dto_envelope_t *marketing_list_dto_envelope_parseFromJSON(cJSON *marketing_list_dto_envelopeJSON);

cJSON *marketing_list_dto_envelope_convertToJSON(marketing_list_dto_envelope_t *marketing_list_dto_envelope);

#endif /* _marketing_list_dto_envelope_H_ */

