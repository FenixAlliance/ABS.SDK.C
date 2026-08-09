/*
 * provider_webhook_registration_created_dto.h
 *
 * 
 */

#ifndef _provider_webhook_registration_created_dto_H_
#define _provider_webhook_registration_created_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct provider_webhook_registration_created_dto_t provider_webhook_registration_created_dto_t;


// Enum STATUS for provider_webhook_registration_created_dto

typedef enum  { paymentsservice_provider_webhook_registration_created_dto_STATUS_NULL = 0, paymentsservice_provider_webhook_registration_created_dto_STATUS_Draft, paymentsservice_provider_webhook_registration_created_dto_STATUS_Active, paymentsservice_provider_webhook_registration_created_dto_STATUS_Disabled, paymentsservice_provider_webhook_registration_created_dto_STATUS_Suspended } paymentsservice_provider_webhook_registration_created_dto_STATUS_e;

char* provider_webhook_registration_created_dto_status_ToString(paymentsservice_provider_webhook_registration_created_dto_STATUS_e status);

paymentsservice_provider_webhook_registration_created_dto_STATUS_e provider_webhook_registration_created_dto_status_FromString(char* status);



typedef struct provider_webhook_registration_created_dto_t {
    char *id; // string
    char *provider_code; // string
    paymentsservice_provider_webhook_registration_created_dto_STATUS_e status; //enum
    char *webhook_registration_key; // string
    char *webhook_url; // string

} provider_webhook_registration_created_dto_t;

provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_create(
    char *id,
    char *provider_code,
    paymentsservice_provider_webhook_registration_created_dto_STATUS_e status,
    char *webhook_registration_key,
    char *webhook_url
);

void provider_webhook_registration_created_dto_free(provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto);

provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto_parseFromJSON(cJSON *provider_webhook_registration_created_dtoJSON);

cJSON *provider_webhook_registration_created_dto_convertToJSON(provider_webhook_registration_created_dto_t *provider_webhook_registration_created_dto);

#endif /* _provider_webhook_registration_created_dto_H_ */

