/*
 * signing_participant_dto.h
 *
 * 
 */

#ifndef _signing_participant_dto_H_
#define _signing_participant_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_participant_dto_t signing_participant_dto_t;


// Enum ROLE for signing_participant_dto

typedef enum  { trustservice_signing_participant_dto_ROLE_NULL = 0, trustservice_signing_participant_dto_ROLE_Signer, trustservice_signing_participant_dto_ROLE_Approver, trustservice_signing_participant_dto_ROLE_Viewer, trustservice_signing_participant_dto_ROLE_Witness, trustservice_signing_participant_dto_ROLE_CarbonCopy, trustservice_signing_participant_dto_ROLE_System } trustservice_signing_participant_dto_ROLE_e;

char* signing_participant_dto_role_ToString(trustservice_signing_participant_dto_ROLE_e role);

trustservice_signing_participant_dto_ROLE_e signing_participant_dto_role_FromString(char* role);

// Enum STATUS for signing_participant_dto

typedef enum  { trustservice_signing_participant_dto_STATUS_NULL = 0, trustservice_signing_participant_dto_STATUS_Pending, trustservice_signing_participant_dto_STATUS_Sent, trustservice_signing_participant_dto_STATUS_Viewed, trustservice_signing_participant_dto_STATUS__Signed, trustservice_signing_participant_dto_STATUS_Approved, trustservice_signing_participant_dto_STATUS_Declined, trustservice_signing_participant_dto_STATUS_Skipped, trustservice_signing_participant_dto_STATUS_Expired, trustservice_signing_participant_dto_STATUS_Failed } trustservice_signing_participant_dto_STATUS_e;

char* signing_participant_dto_status_ToString(trustservice_signing_participant_dto_STATUS_e status);

trustservice_signing_participant_dto_STATUS_e signing_participant_dto_status_FromString(char* status);



typedef struct signing_participant_dto_t {
    char *id; // string
    char *tenant_id; // string
    char *signing_request_id; // string
    char *contact_id; // string
    char *contact_name; // string
    trustservice_signing_participant_dto_ROLE_e role; //enum
    trustservice_signing_participant_dto_STATUS_e status; //enum
    int routing_order; //numeric
    char *sent_at_utc; //date time
    char *viewed_at_utc; //date time
    char *signed_at_utc; //date time
    char *approved_at_utc; //date time
    char *declined_at_utc; //date time
    char *decline_reason; // string
    char *signature_id; // string
    char *access_token_expires_at_utc; //date time
    char *correlation_id; // string
    char *external_reference; // string

} signing_participant_dto_t;

signing_participant_dto_t *signing_participant_dto_create(
    char *id,
    char *tenant_id,
    char *signing_request_id,
    char *contact_id,
    char *contact_name,
    trustservice_signing_participant_dto_ROLE_e role,
    trustservice_signing_participant_dto_STATUS_e status,
    int routing_order,
    char *sent_at_utc,
    char *viewed_at_utc,
    char *signed_at_utc,
    char *approved_at_utc,
    char *declined_at_utc,
    char *decline_reason,
    char *signature_id,
    char *access_token_expires_at_utc,
    char *correlation_id,
    char *external_reference
);

void signing_participant_dto_free(signing_participant_dto_t *signing_participant_dto);

signing_participant_dto_t *signing_participant_dto_parseFromJSON(cJSON *signing_participant_dtoJSON);

cJSON *signing_participant_dto_convertToJSON(signing_participant_dto_t *signing_participant_dto);

#endif /* _signing_participant_dto_H_ */

