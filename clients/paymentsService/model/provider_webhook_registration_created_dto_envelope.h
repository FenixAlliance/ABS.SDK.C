/*
 * provider_webhook_registration_created_dto_envelope.h
 *
 * 
 */

#ifndef _provider_webhook_registration_created_dto_envelope_H_
#define _provider_webhook_registration_created_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct provider_webhook_registration_created_dto_envelope_t provider_webhook_registration_created_dto_envelope_t;

#include "provider_webhook_registration_created_dto.h"



typedef struct provider_webhook_registration_created_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct provider_webhook_registration_created_dto_t *result; //model

} provider_webhook_registration_created_dto_envelope_t;

provider_webhook_registration_created_dto_envelope_t *provider_webhook_registration_created_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    provider_webhook_registration_created_dto_t *result
);

void provider_webhook_registration_created_dto_envelope_free(provider_webhook_registration_created_dto_envelope_t *provider_webhook_registration_created_dto_envelope);

provider_webhook_registration_created_dto_envelope_t *provider_webhook_registration_created_dto_envelope_parseFromJSON(cJSON *provider_webhook_registration_created_dto_envelopeJSON);

cJSON *provider_webhook_registration_created_dto_envelope_convertToJSON(provider_webhook_registration_created_dto_envelope_t *provider_webhook_registration_created_dto_envelope);

#endif /* _provider_webhook_registration_created_dto_envelope_H_ */

