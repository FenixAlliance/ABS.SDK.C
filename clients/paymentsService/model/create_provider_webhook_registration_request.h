/*
 * create_provider_webhook_registration_request.h
 *
 * 
 */

#ifndef _create_provider_webhook_registration_request_H_
#define _create_provider_webhook_registration_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct create_provider_webhook_registration_request_t create_provider_webhook_registration_request_t;


// Enum CREDENTIALMODE for create_provider_webhook_registration_request

typedef enum  { paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_NULL = 0, paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_TenantManaged, paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_PlatformManaged, paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_ExternalReference } paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e;

char* create_provider_webhook_registration_request_credential_mode_ToString(paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_mode);

paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e create_provider_webhook_registration_request_credential_mode_FromString(char* credential_mode);



typedef struct create_provider_webhook_registration_request_t {
    char *provider_code; // string
    char *external_account_id; // string
    char *webhook_signing_secret; // string
    paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_mode; //enum

} create_provider_webhook_registration_request_t;

create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_create(
    char *provider_code,
    char *external_account_id,
    char *webhook_signing_secret,
    paymentsservice_create_provider_webhook_registration_request_CREDENTIALMODE_e credential_mode
);

void create_provider_webhook_registration_request_free(create_provider_webhook_registration_request_t *create_provider_webhook_registration_request);

create_provider_webhook_registration_request_t *create_provider_webhook_registration_request_parseFromJSON(cJSON *create_provider_webhook_registration_requestJSON);

cJSON *create_provider_webhook_registration_request_convertToJSON(create_provider_webhook_registration_request_t *create_provider_webhook_registration_request);

#endif /* _create_provider_webhook_registration_request_H_ */

