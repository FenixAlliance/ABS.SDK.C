/*
 * inbox_message_dto.h
 *
 * 
 */

#ifndef _inbox_message_dto_H_
#define _inbox_message_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_message_dto_t inbox_message_dto_t;


// Enum STATUS for inbox_message_dto

typedef enum  { systemservice_inbox_message_dto_STATUS_NULL = 0, systemservice_inbox_message_dto_STATUS_Received, systemservice_inbox_message_dto_STATUS_AuthenticityPending, systemservice_inbox_message_dto_STATUS_Accepted, systemservice_inbox_message_dto_STATUS_Processing, systemservice_inbox_message_dto_STATUS_Succeeded, systemservice_inbox_message_dto_STATUS_RetryScheduled, systemservice_inbox_message_dto_STATUS_Rejected, systemservice_inbox_message_dto_STATUS_Quarantined, systemservice_inbox_message_dto_STATUS_DeadLettered, systemservice_inbox_message_dto_STATUS_Cancelled } systemservice_inbox_message_dto_STATUS_e;

char* inbox_message_dto_status_ToString(systemservice_inbox_message_dto_STATUS_e status);

systemservice_inbox_message_dto_STATUS_e inbox_message_dto_status_FromString(char* status);

// Enum VERIFICATIONSTATUS for inbox_message_dto

typedef enum  { systemservice_inbox_message_dto_VERIFICATIONSTATUS_NULL = 0, systemservice_inbox_message_dto_VERIFICATIONSTATUS_Unverified, systemservice_inbox_message_dto_VERIFICATIONSTATUS_Verified, systemservice_inbox_message_dto_VERIFICATIONSTATUS_Failed, systemservice_inbox_message_dto_VERIFICATIONSTATUS_Untrusted, systemservice_inbox_message_dto_VERIFICATIONSTATUS_NotRequired } systemservice_inbox_message_dto_VERIFICATIONSTATUS_e;

char* inbox_message_dto_verification_status_ToString(systemservice_inbox_message_dto_VERIFICATIONSTATUS_e verification_status);

systemservice_inbox_message_dto_VERIFICATIONSTATUS_e inbox_message_dto_verification_status_FromString(char* verification_status);



typedef struct inbox_message_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *source_system; // string
    char *source_registration_id; // string
    char *external_message_id; // string
    char *deduplication_key; // string
    char *deduplication_signature; // string
    char *payload_digest; // string
    int delivery_count; //numeric
    char *last_duplicate_received_at_utc; //date time
    char *message_type; // string
    char *version; // string
    char *content_type; // string
    systemservice_inbox_message_dto_STATUS_e status; //enum
    int attempts; //numeric
    int max_attempts; //numeric
    systemservice_inbox_message_dto_VERIFICATIONSTATUS_e verification_status; //enum
    char *verification_profile; // string
    char *verification_algorithm; // string
    char *verified_at_utc; //date time
    int generation; //numeric
    int replay_count; //numeric
    char *original_inbox_message_id; // string
    char *failure_code; // string
    char *failure_reason; // string
    char *correlation_id; // string
    char *causation_id; // string
    char *locked_by; // string
    char *locked_until_utc; //date time
    char *available_at_utc; //date time
    char *received_at_utc; //date time
    char *created_at_utc; //date time
    char *last_attempt_at_utc; //date time
    char *processed_at_utc; //date time
    char *failed_at_utc; //date time

} inbox_message_dto_t;

inbox_message_dto_t *inbox_message_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *source_system,
    char *source_registration_id,
    char *external_message_id,
    char *deduplication_key,
    char *deduplication_signature,
    char *payload_digest,
    int delivery_count,
    char *last_duplicate_received_at_utc,
    char *message_type,
    char *version,
    char *content_type,
    systemservice_inbox_message_dto_STATUS_e status,
    int attempts,
    int max_attempts,
    systemservice_inbox_message_dto_VERIFICATIONSTATUS_e verification_status,
    char *verification_profile,
    char *verification_algorithm,
    char *verified_at_utc,
    int generation,
    int replay_count,
    char *original_inbox_message_id,
    char *failure_code,
    char *failure_reason,
    char *correlation_id,
    char *causation_id,
    char *locked_by,
    char *locked_until_utc,
    char *available_at_utc,
    char *received_at_utc,
    char *created_at_utc,
    char *last_attempt_at_utc,
    char *processed_at_utc,
    char *failed_at_utc
);

void inbox_message_dto_free(inbox_message_dto_t *inbox_message_dto);

inbox_message_dto_t *inbox_message_dto_parseFromJSON(cJSON *inbox_message_dtoJSON);

cJSON *inbox_message_dto_convertToJSON(inbox_message_dto_t *inbox_message_dto);

#endif /* _inbox_message_dto_H_ */

