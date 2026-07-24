/*
 * signing_request_dto.h
 *
 * 
 */

#ifndef _signing_request_dto_H_
#define _signing_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signing_request_dto_t signing_request_dto_t;


// Enum STATUS for signing_request_dto

typedef enum  { trustservice_signing_request_dto_STATUS_NULL = 0, trustservice_signing_request_dto_STATUS_Draft, trustservice_signing_request_dto_STATUS_Ready, trustservice_signing_request_dto_STATUS_Sent, trustservice_signing_request_dto_STATUS_InProgress, trustservice_signing_request_dto_STATUS_Completed, trustservice_signing_request_dto_STATUS_Declined, trustservice_signing_request_dto_STATUS_Voided, trustservice_signing_request_dto_STATUS_Expired, trustservice_signing_request_dto_STATUS_Failed } trustservice_signing_request_dto_STATUS_e;

char* signing_request_dto_status_ToString(trustservice_signing_request_dto_STATUS_e status);

trustservice_signing_request_dto_STATUS_e signing_request_dto_status_FromString(char* status);

// Enum ROUTINGMODE for signing_request_dto

typedef enum  { trustservice_signing_request_dto_ROUTINGMODE_NULL = 0, trustservice_signing_request_dto_ROUTINGMODE_Parallel, trustservice_signing_request_dto_ROUTINGMODE_Sequential } trustservice_signing_request_dto_ROUTINGMODE_e;

char* signing_request_dto_routing_mode_ToString(trustservice_signing_request_dto_ROUTINGMODE_e routing_mode);

trustservice_signing_request_dto_ROUTINGMODE_e signing_request_dto_routing_mode_FromString(char* routing_mode);



typedef struct signing_request_dto_t {
    char *id; // string
    char *tenant_id; // string
    char *signed_document_id; // string
    char *signed_document_title; // string
    char *frozen_source_file_upload_id; // string
    char *source_sha256; // string
    trustservice_signing_request_dto_STATUS_e status; //enum
    trustservice_signing_request_dto_ROUTINGMODE_e routing_mode; //enum
    char *created_at_utc; //date time
    char *sent_at_utc; //date time
    char *completed_at_utc; //date time
    char *expires_at_utc; //date time
    char *voided_at_utc; //date time
    char *voided_reason; // string
    char *message; // string
    char *correlation_id; // string
    char *external_reference; // string

} signing_request_dto_t;

signing_request_dto_t *signing_request_dto_create(
    char *id,
    char *tenant_id,
    char *signed_document_id,
    char *signed_document_title,
    char *frozen_source_file_upload_id,
    char *source_sha256,
    trustservice_signing_request_dto_STATUS_e status,
    trustservice_signing_request_dto_ROUTINGMODE_e routing_mode,
    char *created_at_utc,
    char *sent_at_utc,
    char *completed_at_utc,
    char *expires_at_utc,
    char *voided_at_utc,
    char *voided_reason,
    char *message,
    char *correlation_id,
    char *external_reference
);

void signing_request_dto_free(signing_request_dto_t *signing_request_dto);

signing_request_dto_t *signing_request_dto_parseFromJSON(cJSON *signing_request_dtoJSON);

cJSON *signing_request_dto_convertToJSON(signing_request_dto_t *signing_request_dto);

#endif /* _signing_request_dto_H_ */

