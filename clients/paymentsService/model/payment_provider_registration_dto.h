/*
 * payment_provider_registration_dto.h
 *
 * 
 */

#ifndef _payment_provider_registration_dto_H_
#define _payment_provider_registration_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_provider_registration_dto_t payment_provider_registration_dto_t;


// Enum CREDENTIALMODE for payment_provider_registration_dto

typedef enum  { paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_NULL = 0, paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_TenantManaged, paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_PlatformManaged, paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_ExternalReference } paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e;

char* payment_provider_registration_dto_credential_mode_ToString(paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_mode);

paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e payment_provider_registration_dto_credential_mode_FromString(char* credential_mode);

// Enum ENABLEDCAPABILITIES for payment_provider_registration_dto

typedef enum  { paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_NULL = 0, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_None, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Collection, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Authorization, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Capture, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Refund, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES__Void, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_SplitPayment, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Transfer, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_Payout, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_RecipientOnboarding, paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_BalanceInquiry } paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e;

char* payment_provider_registration_dto_enabled_capabilities_ToString(paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilities);

paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e payment_provider_registration_dto_enabled_capabilities_FromString(char* enabled_capabilities);

// Enum STATUS for payment_provider_registration_dto

typedef enum  { paymentsservice_payment_provider_registration_dto_STATUS_NULL = 0, paymentsservice_payment_provider_registration_dto_STATUS_Draft, paymentsservice_payment_provider_registration_dto_STATUS_Active, paymentsservice_payment_provider_registration_dto_STATUS_Disabled, paymentsservice_payment_provider_registration_dto_STATUS_Suspended } paymentsservice_payment_provider_registration_dto_STATUS_e;

char* payment_provider_registration_dto_status_ToString(paymentsservice_payment_provider_registration_dto_STATUS_e status);

paymentsservice_payment_provider_registration_dto_STATUS_e payment_provider_registration_dto_status_FromString(char* status);



typedef struct payment_provider_registration_dto_t {
    char *id; // string
    char *created_at_utc; //date time
    char *last_modified_utc; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *provider_code; // string
    char *credential_set_reference; // string
    int has_credential; //boolean
    paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_mode; //enum
    char *external_account_id; // string
    paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilities; //enum
    paymentsservice_payment_provider_registration_dto_STATUS_e status; //enum

} payment_provider_registration_dto_t;

payment_provider_registration_dto_t *payment_provider_registration_dto_create(
    char *id,
    char *created_at_utc,
    char *last_modified_utc,
    char *tenant_id,
    char *enrollment_id,
    char *provider_code,
    char *credential_set_reference,
    int has_credential,
    paymentsservice_payment_provider_registration_dto_CREDENTIALMODE_e credential_mode,
    char *external_account_id,
    paymentsservice_payment_provider_registration_dto_ENABLEDCAPABILITIES_e enabled_capabilities,
    paymentsservice_payment_provider_registration_dto_STATUS_e status
);

void payment_provider_registration_dto_free(payment_provider_registration_dto_t *payment_provider_registration_dto);

payment_provider_registration_dto_t *payment_provider_registration_dto_parseFromJSON(cJSON *payment_provider_registration_dtoJSON);

cJSON *payment_provider_registration_dto_convertToJSON(payment_provider_registration_dto_t *payment_provider_registration_dto);

#endif /* _payment_provider_registration_dto_H_ */

