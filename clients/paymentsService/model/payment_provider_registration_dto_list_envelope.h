/*
 * payment_provider_registration_dto_list_envelope.h
 *
 * 
 */

#ifndef _payment_provider_registration_dto_list_envelope_H_
#define _payment_provider_registration_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_provider_registration_dto_list_envelope_t payment_provider_registration_dto_list_envelope_t;

#include "payment_provider_registration_dto.h"



typedef struct payment_provider_registration_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} payment_provider_registration_dto_list_envelope_t;

payment_provider_registration_dto_list_envelope_t *payment_provider_registration_dto_list_envelope_create(
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

void payment_provider_registration_dto_list_envelope_free(payment_provider_registration_dto_list_envelope_t *payment_provider_registration_dto_list_envelope);

payment_provider_registration_dto_list_envelope_t *payment_provider_registration_dto_list_envelope_parseFromJSON(cJSON *payment_provider_registration_dto_list_envelopeJSON);

cJSON *payment_provider_registration_dto_list_envelope_convertToJSON(payment_provider_registration_dto_list_envelope_t *payment_provider_registration_dto_list_envelope);

#endif /* _payment_provider_registration_dto_list_envelope_H_ */

