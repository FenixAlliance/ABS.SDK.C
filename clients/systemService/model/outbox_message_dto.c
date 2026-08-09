#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "outbox_message_dto.h"


char* outbox_message_dto_kind_ToString(systemservice_outbox_message_dto_KIND_e kind) {
    char* kindArray[] =  { "NULL", "Event", "Command" };
    return kindArray[kind];
}

systemservice_outbox_message_dto_KIND_e outbox_message_dto_kind_FromString(char* kind){
    int stringToReturn = 0;
    char *kindArray[] =  { "NULL", "Event", "Command" };
    size_t sizeofArray = sizeof(kindArray) / sizeof(kindArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kind, kindArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* outbox_message_dto_status_ToString(systemservice_outbox_message_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Pending", "Processing", "Succeeded", "Failed", "DeadLettered", "Cancelled" };
    return statusArray[status];
}

systemservice_outbox_message_dto_STATUS_e outbox_message_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Pending", "Processing", "Succeeded", "Failed", "DeadLettered", "Cancelled" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    outbox_message_dto_t *outbox_message_dto_local_var = malloc(sizeof(outbox_message_dto_t));
    if (!outbox_message_dto_local_var) {
        return NULL;
    }
    outbox_message_dto_local_var->id = id;
    outbox_message_dto_local_var->timestamp = timestamp;
    outbox_message_dto_local_var->tenant_id = tenant_id;
    outbox_message_dto_local_var->kind = kind;
    outbox_message_dto_local_var->message_type = message_type;
    outbox_message_dto_local_var->status = status;
    outbox_message_dto_local_var->attempts = attempts;
    outbox_message_dto_local_var->max_attempts = max_attempts;
    outbox_message_dto_local_var->failure_code = failure_code;
    outbox_message_dto_local_var->failure_reason = failure_reason;
    outbox_message_dto_local_var->idempotency_key = idempotency_key;
    outbox_message_dto_local_var->correlation_id = correlation_id;
    outbox_message_dto_local_var->locked_by = locked_by;
    outbox_message_dto_local_var->locked_until_utc = locked_until_utc;
    outbox_message_dto_local_var->available_at_utc = available_at_utc;
    outbox_message_dto_local_var->created_at_utc = created_at_utc;
    outbox_message_dto_local_var->last_attempt_at_utc = last_attempt_at_utc;
    outbox_message_dto_local_var->processed_at_utc = processed_at_utc;
    outbox_message_dto_local_var->failed_at_utc = failed_at_utc;

    return outbox_message_dto_local_var;
}


void outbox_message_dto_free(outbox_message_dto_t *outbox_message_dto) {
    if(NULL == outbox_message_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (outbox_message_dto->id) {
        free(outbox_message_dto->id);
        outbox_message_dto->id = NULL;
    }
    if (outbox_message_dto->timestamp) {
        free(outbox_message_dto->timestamp);
        outbox_message_dto->timestamp = NULL;
    }
    if (outbox_message_dto->tenant_id) {
        free(outbox_message_dto->tenant_id);
        outbox_message_dto->tenant_id = NULL;
    }
    if (outbox_message_dto->message_type) {
        free(outbox_message_dto->message_type);
        outbox_message_dto->message_type = NULL;
    }
    if (outbox_message_dto->failure_code) {
        free(outbox_message_dto->failure_code);
        outbox_message_dto->failure_code = NULL;
    }
    if (outbox_message_dto->failure_reason) {
        free(outbox_message_dto->failure_reason);
        outbox_message_dto->failure_reason = NULL;
    }
    if (outbox_message_dto->idempotency_key) {
        free(outbox_message_dto->idempotency_key);
        outbox_message_dto->idempotency_key = NULL;
    }
    if (outbox_message_dto->correlation_id) {
        free(outbox_message_dto->correlation_id);
        outbox_message_dto->correlation_id = NULL;
    }
    if (outbox_message_dto->locked_by) {
        free(outbox_message_dto->locked_by);
        outbox_message_dto->locked_by = NULL;
    }
    if (outbox_message_dto->locked_until_utc) {
        free(outbox_message_dto->locked_until_utc);
        outbox_message_dto->locked_until_utc = NULL;
    }
    if (outbox_message_dto->available_at_utc) {
        free(outbox_message_dto->available_at_utc);
        outbox_message_dto->available_at_utc = NULL;
    }
    if (outbox_message_dto->created_at_utc) {
        free(outbox_message_dto->created_at_utc);
        outbox_message_dto->created_at_utc = NULL;
    }
    if (outbox_message_dto->last_attempt_at_utc) {
        free(outbox_message_dto->last_attempt_at_utc);
        outbox_message_dto->last_attempt_at_utc = NULL;
    }
    if (outbox_message_dto->processed_at_utc) {
        free(outbox_message_dto->processed_at_utc);
        outbox_message_dto->processed_at_utc = NULL;
    }
    if (outbox_message_dto->failed_at_utc) {
        free(outbox_message_dto->failed_at_utc);
        outbox_message_dto->failed_at_utc = NULL;
    }
    free(outbox_message_dto);
}

cJSON *outbox_message_dto_convertToJSON(outbox_message_dto_t *outbox_message_dto) {
    cJSON *item = cJSON_CreateObject();

    // outbox_message_dto->id
    if(outbox_message_dto->id) {
    if(cJSON_AddStringToObject(item, "id", outbox_message_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->timestamp
    if(outbox_message_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", outbox_message_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->tenant_id
    if(outbox_message_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", outbox_message_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->kind
    if(outbox_message_dto->kind != systemservice_outbox_message_dto_KIND_NULL) {
    if(cJSON_AddStringToObject(item, "kind", kindoutbox_message_dto_ToString(outbox_message_dto->kind)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // outbox_message_dto->message_type
    if(outbox_message_dto->message_type) {
    if(cJSON_AddStringToObject(item, "messageType", outbox_message_dto->message_type) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->status
    if(outbox_message_dto->status != systemservice_outbox_message_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusoutbox_message_dto_ToString(outbox_message_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // outbox_message_dto->attempts
    if(outbox_message_dto->attempts) {
    if(cJSON_AddNumberToObject(item, "attempts", outbox_message_dto->attempts) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_message_dto->max_attempts
    if(outbox_message_dto->max_attempts) {
    if(cJSON_AddNumberToObject(item, "maxAttempts", outbox_message_dto->max_attempts) == NULL) {
    goto fail; //Numeric
    }
    }


    // outbox_message_dto->failure_code
    if(outbox_message_dto->failure_code) {
    if(cJSON_AddStringToObject(item, "failureCode", outbox_message_dto->failure_code) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->failure_reason
    if(outbox_message_dto->failure_reason) {
    if(cJSON_AddStringToObject(item, "failureReason", outbox_message_dto->failure_reason) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->idempotency_key
    if(outbox_message_dto->idempotency_key) {
    if(cJSON_AddStringToObject(item, "idempotencyKey", outbox_message_dto->idempotency_key) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->correlation_id
    if(outbox_message_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", outbox_message_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->locked_by
    if(outbox_message_dto->locked_by) {
    if(cJSON_AddStringToObject(item, "lockedBy", outbox_message_dto->locked_by) == NULL) {
    goto fail; //String
    }
    }


    // outbox_message_dto->locked_until_utc
    if(outbox_message_dto->locked_until_utc) {
    if(cJSON_AddStringToObject(item, "lockedUntilUtc", outbox_message_dto->locked_until_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->available_at_utc
    if(outbox_message_dto->available_at_utc) {
    if(cJSON_AddStringToObject(item, "availableAtUtc", outbox_message_dto->available_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->created_at_utc
    if(outbox_message_dto->created_at_utc) {
    if(cJSON_AddStringToObject(item, "createdAtUtc", outbox_message_dto->created_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->last_attempt_at_utc
    if(outbox_message_dto->last_attempt_at_utc) {
    if(cJSON_AddStringToObject(item, "lastAttemptAtUtc", outbox_message_dto->last_attempt_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->processed_at_utc
    if(outbox_message_dto->processed_at_utc) {
    if(cJSON_AddStringToObject(item, "processedAtUtc", outbox_message_dto->processed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // outbox_message_dto->failed_at_utc
    if(outbox_message_dto->failed_at_utc) {
    if(cJSON_AddStringToObject(item, "failedAtUtc", outbox_message_dto->failed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

outbox_message_dto_t *outbox_message_dto_parseFromJSON(cJSON *outbox_message_dtoJSON){

    outbox_message_dto_t *outbox_message_dto_local_var = NULL;

    // outbox_message_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "kind");
    systemservice_outbox_message_dto_KIND_e kindVariable;
    if (kind) { 
    if(!cJSON_IsString(kind))
    {
    goto end; //Enum
    }
    kindVariable = outbox_message_dto_kind_FromString(kind->valuestring);
    }

    // outbox_message_dto->message_type
    cJSON *message_type = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "messageType");
    if (message_type) { 
    if(!cJSON_IsString(message_type) && !cJSON_IsNull(message_type))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "status");
    systemservice_outbox_message_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = outbox_message_dto_status_FromString(status->valuestring);
    }

    // outbox_message_dto->attempts
    cJSON *attempts = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "attempts");
    if (attempts) { 
    if(!cJSON_IsNumber(attempts))
    {
    goto end; //Numeric
    }
    }

    // outbox_message_dto->max_attempts
    cJSON *max_attempts = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "maxAttempts");
    if (max_attempts) { 
    if(!cJSON_IsNumber(max_attempts))
    {
    goto end; //Numeric
    }
    }

    // outbox_message_dto->failure_code
    cJSON *failure_code = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "failureCode");
    if (failure_code) { 
    if(!cJSON_IsString(failure_code) && !cJSON_IsNull(failure_code))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->failure_reason
    cJSON *failure_reason = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "failureReason");
    if (failure_reason) { 
    if(!cJSON_IsString(failure_reason) && !cJSON_IsNull(failure_reason))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->idempotency_key
    cJSON *idempotency_key = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "idempotencyKey");
    if (idempotency_key) { 
    if(!cJSON_IsString(idempotency_key) && !cJSON_IsNull(idempotency_key))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->locked_by
    cJSON *locked_by = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "lockedBy");
    if (locked_by) { 
    if(!cJSON_IsString(locked_by) && !cJSON_IsNull(locked_by))
    {
    goto end; //String
    }
    }

    // outbox_message_dto->locked_until_utc
    cJSON *locked_until_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "lockedUntilUtc");
    if (locked_until_utc) { 
    if(!cJSON_IsString(locked_until_utc) && !cJSON_IsNull(locked_until_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->available_at_utc
    cJSON *available_at_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "availableAtUtc");
    if (available_at_utc) { 
    if(!cJSON_IsString(available_at_utc) && !cJSON_IsNull(available_at_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->created_at_utc
    cJSON *created_at_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "createdAtUtc");
    if (created_at_utc) { 
    if(!cJSON_IsString(created_at_utc) && !cJSON_IsNull(created_at_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->last_attempt_at_utc
    cJSON *last_attempt_at_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "lastAttemptAtUtc");
    if (last_attempt_at_utc) { 
    if(!cJSON_IsString(last_attempt_at_utc) && !cJSON_IsNull(last_attempt_at_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->processed_at_utc
    cJSON *processed_at_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "processedAtUtc");
    if (processed_at_utc) { 
    if(!cJSON_IsString(processed_at_utc) && !cJSON_IsNull(processed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // outbox_message_dto->failed_at_utc
    cJSON *failed_at_utc = cJSON_GetObjectItemCaseSensitive(outbox_message_dtoJSON, "failedAtUtc");
    if (failed_at_utc) { 
    if(!cJSON_IsString(failed_at_utc) && !cJSON_IsNull(failed_at_utc))
    {
    goto end; //DateTime
    }
    }


    outbox_message_dto_local_var = outbox_message_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        kind ? kindVariable : systemservice_outbox_message_dto_KIND_NULL,
        message_type && !cJSON_IsNull(message_type) ? strdup(message_type->valuestring) : NULL,
        status ? statusVariable : systemservice_outbox_message_dto_STATUS_NULL,
        attempts ? attempts->valuedouble : 0,
        max_attempts ? max_attempts->valuedouble : 0,
        failure_code && !cJSON_IsNull(failure_code) ? strdup(failure_code->valuestring) : NULL,
        failure_reason && !cJSON_IsNull(failure_reason) ? strdup(failure_reason->valuestring) : NULL,
        idempotency_key && !cJSON_IsNull(idempotency_key) ? strdup(idempotency_key->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        locked_by && !cJSON_IsNull(locked_by) ? strdup(locked_by->valuestring) : NULL,
        locked_until_utc && !cJSON_IsNull(locked_until_utc) ? strdup(locked_until_utc->valuestring) : NULL,
        available_at_utc && !cJSON_IsNull(available_at_utc) ? strdup(available_at_utc->valuestring) : NULL,
        created_at_utc && !cJSON_IsNull(created_at_utc) ? strdup(created_at_utc->valuestring) : NULL,
        last_attempt_at_utc && !cJSON_IsNull(last_attempt_at_utc) ? strdup(last_attempt_at_utc->valuestring) : NULL,
        processed_at_utc && !cJSON_IsNull(processed_at_utc) ? strdup(processed_at_utc->valuestring) : NULL,
        failed_at_utc && !cJSON_IsNull(failed_at_utc) ? strdup(failed_at_utc->valuestring) : NULL
        );

    return outbox_message_dto_local_var;
end:
    return NULL;

}
