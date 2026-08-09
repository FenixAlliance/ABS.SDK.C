/*
 * outbox_message_dto.h
 *
 * 
 */

#ifndef _outbox_message_dto_H_
#define _outbox_message_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct outbox_message_dto_t outbox_message_dto_t;


// Enum KIND for outbox_message_dto

typedef enum  { systemservice_outbox_message_dto_KIND_NULL = 0, systemservice_outbox_message_dto_KIND_Event, systemservice_outbox_message_dto_KIND_Command } systemservice_outbox_message_dto_KIND_e;

char* outbox_message_dto_kind_ToString(systemservice_outbox_message_dto_KIND_e kind);

systemservice_outbox_message_dto_KIND_e outbox_message_dto_kind_FromString(char* kind);

// Enum STATUS for outbox_message_dto

typedef enum  { systemservice_outbox_message_dto_STATUS_NULL = 0, systemservice_outbox_message_dto_STATUS_Pending, systemservice_outbox_message_dto_STATUS_Processing, systemservice_outbox_message_dto_STATUS_Succeeded, systemservice_outbox_message_dto_STATUS_Failed, systemservice_outbox_message_dto_STATUS_DeadLettered, systemservice_outbox_message_dto_STATUS_Cancelled } systemservice_outbox_message_dto_STATUS_e;

char* outbox_message_dto_status_ToString(systemservice_outbox_message_dto_STATUS_e status);

systemservice_outbox_message_dto_STATUS_e outbox_message_dto_status_FromString(char* status);



typedef struct outbox_message_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    systemservice_outbox_message_dto_KIND_e kind; //enum
    char *message_type; // string
    systemservice_outbox_message_dto_STATUS_e status; //enum
    int attempts; //numeric
    int max_attempts; //numeric
    char *failure_code; // string
    char *failure_reason; // string
    char *idempotency_key; // string
    char *correlation_id; // string
    char *locked_by; // string
    char *locked_until_utc; //date time
    char *available_at_utc; //date time
    char *created_at_utc; //date time
    char *last_attempt_at_utc; //date time
    char *processed_at_utc; //date time
    char *failed_at_utc; //date time

} outbox_message_dto_t;

outbox_message_dto_t *outbox_message_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    systemservice_outbox_message_dto_KIND_e kind,
    char *message_type,
    systemservice_outbox_message_dto_STATUS_e status,
    int attempts,
    int max_attempts,
    char *failure_code,
    char *failure_reason,
    char *idempotency_key,
    char *correlation_id,
    char *locked_by,
    char *locked_until_utc,
    char *available_at_utc,
    char *created_at_utc,
    char *last_attempt_at_utc,
    char *processed_at_utc,
    char *failed_at_utc
);

void outbox_message_dto_free(outbox_message_dto_t *outbox_message_dto);

outbox_message_dto_t *outbox_message_dto_parseFromJSON(cJSON *outbox_message_dtoJSON);

cJSON *outbox_message_dto_convertToJSON(outbox_message_dto_t *outbox_message_dto);

#endif /* _outbox_message_dto_H_ */

