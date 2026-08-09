#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inbox_message_dto.h"


char* inbox_message_dto_status_ToString(systemservice_inbox_message_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Received", "AuthenticityPending", "Accepted", "Processing", "Succeeded", "RetryScheduled", "Rejected", "Quarantined", "DeadLettered", "Cancelled" };
    return statusArray[status];
}

systemservice_inbox_message_dto_STATUS_e inbox_message_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Received", "AuthenticityPending", "Accepted", "Processing", "Succeeded", "RetryScheduled", "Rejected", "Quarantined", "DeadLettered", "Cancelled" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* inbox_message_dto_verification_status_ToString(systemservice_inbox_message_dto_VERIFICATIONSTATUS_e verification_status) {
    char* verification_statusArray[] =  { "NULL", "Unverified", "Verified", "Failed", "Untrusted", "NotRequired" };
    return verification_statusArray[verification_status];
}

systemservice_inbox_message_dto_VERIFICATIONSTATUS_e inbox_message_dto_verification_status_FromString(char* verification_status){
    int stringToReturn = 0;
    char *verification_statusArray[] =  { "NULL", "Unverified", "Verified", "Failed", "Untrusted", "NotRequired" };
    size_t sizeofArray = sizeof(verification_statusArray) / sizeof(verification_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(verification_status, verification_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    inbox_message_dto_t *inbox_message_dto_local_var = malloc(sizeof(inbox_message_dto_t));
    if (!inbox_message_dto_local_var) {
        return NULL;
    }
    inbox_message_dto_local_var->id = id;
    inbox_message_dto_local_var->timestamp = timestamp;
    inbox_message_dto_local_var->tenant_id = tenant_id;
    inbox_message_dto_local_var->source_system = source_system;
    inbox_message_dto_local_var->source_registration_id = source_registration_id;
    inbox_message_dto_local_var->external_message_id = external_message_id;
    inbox_message_dto_local_var->deduplication_key = deduplication_key;
    inbox_message_dto_local_var->deduplication_signature = deduplication_signature;
    inbox_message_dto_local_var->payload_digest = payload_digest;
    inbox_message_dto_local_var->delivery_count = delivery_count;
    inbox_message_dto_local_var->last_duplicate_received_at_utc = last_duplicate_received_at_utc;
    inbox_message_dto_local_var->message_type = message_type;
    inbox_message_dto_local_var->version = version;
    inbox_message_dto_local_var->content_type = content_type;
    inbox_message_dto_local_var->status = status;
    inbox_message_dto_local_var->attempts = attempts;
    inbox_message_dto_local_var->max_attempts = max_attempts;
    inbox_message_dto_local_var->verification_status = verification_status;
    inbox_message_dto_local_var->verification_profile = verification_profile;
    inbox_message_dto_local_var->verification_algorithm = verification_algorithm;
    inbox_message_dto_local_var->verified_at_utc = verified_at_utc;
    inbox_message_dto_local_var->generation = generation;
    inbox_message_dto_local_var->replay_count = replay_count;
    inbox_message_dto_local_var->original_inbox_message_id = original_inbox_message_id;
    inbox_message_dto_local_var->failure_code = failure_code;
    inbox_message_dto_local_var->failure_reason = failure_reason;
    inbox_message_dto_local_var->correlation_id = correlation_id;
    inbox_message_dto_local_var->causation_id = causation_id;
    inbox_message_dto_local_var->locked_by = locked_by;
    inbox_message_dto_local_var->locked_until_utc = locked_until_utc;
    inbox_message_dto_local_var->available_at_utc = available_at_utc;
    inbox_message_dto_local_var->received_at_utc = received_at_utc;
    inbox_message_dto_local_var->created_at_utc = created_at_utc;
    inbox_message_dto_local_var->last_attempt_at_utc = last_attempt_at_utc;
    inbox_message_dto_local_var->processed_at_utc = processed_at_utc;
    inbox_message_dto_local_var->failed_at_utc = failed_at_utc;

    return inbox_message_dto_local_var;
}


void inbox_message_dto_free(inbox_message_dto_t *inbox_message_dto) {
    if(NULL == inbox_message_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (inbox_message_dto->id) {
        free(inbox_message_dto->id);
        inbox_message_dto->id = NULL;
    }
    if (inbox_message_dto->timestamp) {
        free(inbox_message_dto->timestamp);
        inbox_message_dto->timestamp = NULL;
    }
    if (inbox_message_dto->tenant_id) {
        free(inbox_message_dto->tenant_id);
        inbox_message_dto->tenant_id = NULL;
    }
    if (inbox_message_dto->source_system) {
        free(inbox_message_dto->source_system);
        inbox_message_dto->source_system = NULL;
    }
    if (inbox_message_dto->source_registration_id) {
        free(inbox_message_dto->source_registration_id);
        inbox_message_dto->source_registration_id = NULL;
    }
    if (inbox_message_dto->external_message_id) {
        free(inbox_message_dto->external_message_id);
        inbox_message_dto->external_message_id = NULL;
    }
    if (inbox_message_dto->deduplication_key) {
        free(inbox_message_dto->deduplication_key);
        inbox_message_dto->deduplication_key = NULL;
    }
    if (inbox_message_dto->deduplication_signature) {
        free(inbox_message_dto->deduplication_signature);
        inbox_message_dto->deduplication_signature = NULL;
    }
    if (inbox_message_dto->payload_digest) {
        free(inbox_message_dto->payload_digest);
        inbox_message_dto->payload_digest = NULL;
    }
    if (inbox_message_dto->last_duplicate_received_at_utc) {
        free(inbox_message_dto->last_duplicate_received_at_utc);
        inbox_message_dto->last_duplicate_received_at_utc = NULL;
    }
    if (inbox_message_dto->message_type) {
        free(inbox_message_dto->message_type);
        inbox_message_dto->message_type = NULL;
    }
    if (inbox_message_dto->version) {
        free(inbox_message_dto->version);
        inbox_message_dto->version = NULL;
    }
    if (inbox_message_dto->content_type) {
        free(inbox_message_dto->content_type);
        inbox_message_dto->content_type = NULL;
    }
    if (inbox_message_dto->verification_profile) {
        free(inbox_message_dto->verification_profile);
        inbox_message_dto->verification_profile = NULL;
    }
    if (inbox_message_dto->verification_algorithm) {
        free(inbox_message_dto->verification_algorithm);
        inbox_message_dto->verification_algorithm = NULL;
    }
    if (inbox_message_dto->verified_at_utc) {
        free(inbox_message_dto->verified_at_utc);
        inbox_message_dto->verified_at_utc = NULL;
    }
    if (inbox_message_dto->original_inbox_message_id) {
        free(inbox_message_dto->original_inbox_message_id);
        inbox_message_dto->original_inbox_message_id = NULL;
    }
    if (inbox_message_dto->failure_code) {
        free(inbox_message_dto->failure_code);
        inbox_message_dto->failure_code = NULL;
    }
    if (inbox_message_dto->failure_reason) {
        free(inbox_message_dto->failure_reason);
        inbox_message_dto->failure_reason = NULL;
    }
    if (inbox_message_dto->correlation_id) {
        free(inbox_message_dto->correlation_id);
        inbox_message_dto->correlation_id = NULL;
    }
    if (inbox_message_dto->causation_id) {
        free(inbox_message_dto->causation_id);
        inbox_message_dto->causation_id = NULL;
    }
    if (inbox_message_dto->locked_by) {
        free(inbox_message_dto->locked_by);
        inbox_message_dto->locked_by = NULL;
    }
    if (inbox_message_dto->locked_until_utc) {
        free(inbox_message_dto->locked_until_utc);
        inbox_message_dto->locked_until_utc = NULL;
    }
    if (inbox_message_dto->available_at_utc) {
        free(inbox_message_dto->available_at_utc);
        inbox_message_dto->available_at_utc = NULL;
    }
    if (inbox_message_dto->received_at_utc) {
        free(inbox_message_dto->received_at_utc);
        inbox_message_dto->received_at_utc = NULL;
    }
    if (inbox_message_dto->created_at_utc) {
        free(inbox_message_dto->created_at_utc);
        inbox_message_dto->created_at_utc = NULL;
    }
    if (inbox_message_dto->last_attempt_at_utc) {
        free(inbox_message_dto->last_attempt_at_utc);
        inbox_message_dto->last_attempt_at_utc = NULL;
    }
    if (inbox_message_dto->processed_at_utc) {
        free(inbox_message_dto->processed_at_utc);
        inbox_message_dto->processed_at_utc = NULL;
    }
    if (inbox_message_dto->failed_at_utc) {
        free(inbox_message_dto->failed_at_utc);
        inbox_message_dto->failed_at_utc = NULL;
    }
    free(inbox_message_dto);
}

cJSON *inbox_message_dto_convertToJSON(inbox_message_dto_t *inbox_message_dto) {
    cJSON *item = cJSON_CreateObject();

    // inbox_message_dto->id
    if(inbox_message_dto->id) {
    if(cJSON_AddStringToObject(item, "id", inbox_message_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->timestamp
    if(inbox_message_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", inbox_message_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->tenant_id
    if(inbox_message_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", inbox_message_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->source_system
    if(inbox_message_dto->source_system) {
    if(cJSON_AddStringToObject(item, "sourceSystem", inbox_message_dto->source_system) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->source_registration_id
    if(inbox_message_dto->source_registration_id) {
    if(cJSON_AddStringToObject(item, "sourceRegistrationId", inbox_message_dto->source_registration_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->external_message_id
    if(inbox_message_dto->external_message_id) {
    if(cJSON_AddStringToObject(item, "externalMessageId", inbox_message_dto->external_message_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->deduplication_key
    if(inbox_message_dto->deduplication_key) {
    if(cJSON_AddStringToObject(item, "deduplicationKey", inbox_message_dto->deduplication_key) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->deduplication_signature
    if(inbox_message_dto->deduplication_signature) {
    if(cJSON_AddStringToObject(item, "deduplicationSignature", inbox_message_dto->deduplication_signature) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->payload_digest
    if(inbox_message_dto->payload_digest) {
    if(cJSON_AddStringToObject(item, "payloadDigest", inbox_message_dto->payload_digest) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->delivery_count
    if(inbox_message_dto->delivery_count) {
    if(cJSON_AddNumberToObject(item, "deliveryCount", inbox_message_dto->delivery_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_message_dto->last_duplicate_received_at_utc
    if(inbox_message_dto->last_duplicate_received_at_utc) {
    if(cJSON_AddStringToObject(item, "lastDuplicateReceivedAtUtc", inbox_message_dto->last_duplicate_received_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->message_type
    if(inbox_message_dto->message_type) {
    if(cJSON_AddStringToObject(item, "messageType", inbox_message_dto->message_type) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->version
    if(inbox_message_dto->version) {
    if(cJSON_AddStringToObject(item, "version", inbox_message_dto->version) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->content_type
    if(inbox_message_dto->content_type) {
    if(cJSON_AddStringToObject(item, "contentType", inbox_message_dto->content_type) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->status
    if(inbox_message_dto->status != systemservice_inbox_message_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statusinbox_message_dto_ToString(inbox_message_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // inbox_message_dto->attempts
    if(inbox_message_dto->attempts) {
    if(cJSON_AddNumberToObject(item, "attempts", inbox_message_dto->attempts) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_message_dto->max_attempts
    if(inbox_message_dto->max_attempts) {
    if(cJSON_AddNumberToObject(item, "maxAttempts", inbox_message_dto->max_attempts) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_message_dto->verification_status
    if(inbox_message_dto->verification_status != systemservice_inbox_message_dto_VERIFICATIONSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "verificationStatus", verification_statusinbox_message_dto_ToString(inbox_message_dto->verification_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // inbox_message_dto->verification_profile
    if(inbox_message_dto->verification_profile) {
    if(cJSON_AddStringToObject(item, "verificationProfile", inbox_message_dto->verification_profile) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->verification_algorithm
    if(inbox_message_dto->verification_algorithm) {
    if(cJSON_AddStringToObject(item, "verificationAlgorithm", inbox_message_dto->verification_algorithm) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->verified_at_utc
    if(inbox_message_dto->verified_at_utc) {
    if(cJSON_AddStringToObject(item, "verifiedAtUtc", inbox_message_dto->verified_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->generation
    if(inbox_message_dto->generation) {
    if(cJSON_AddNumberToObject(item, "generation", inbox_message_dto->generation) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_message_dto->replay_count
    if(inbox_message_dto->replay_count) {
    if(cJSON_AddNumberToObject(item, "replayCount", inbox_message_dto->replay_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // inbox_message_dto->original_inbox_message_id
    if(inbox_message_dto->original_inbox_message_id) {
    if(cJSON_AddStringToObject(item, "originalInboxMessageId", inbox_message_dto->original_inbox_message_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->failure_code
    if(inbox_message_dto->failure_code) {
    if(cJSON_AddStringToObject(item, "failureCode", inbox_message_dto->failure_code) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->failure_reason
    if(inbox_message_dto->failure_reason) {
    if(cJSON_AddStringToObject(item, "failureReason", inbox_message_dto->failure_reason) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->correlation_id
    if(inbox_message_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", inbox_message_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->causation_id
    if(inbox_message_dto->causation_id) {
    if(cJSON_AddStringToObject(item, "causationId", inbox_message_dto->causation_id) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->locked_by
    if(inbox_message_dto->locked_by) {
    if(cJSON_AddStringToObject(item, "lockedBy", inbox_message_dto->locked_by) == NULL) {
    goto fail; //String
    }
    }


    // inbox_message_dto->locked_until_utc
    if(inbox_message_dto->locked_until_utc) {
    if(cJSON_AddStringToObject(item, "lockedUntilUtc", inbox_message_dto->locked_until_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->available_at_utc
    if(inbox_message_dto->available_at_utc) {
    if(cJSON_AddStringToObject(item, "availableAtUtc", inbox_message_dto->available_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->received_at_utc
    if(inbox_message_dto->received_at_utc) {
    if(cJSON_AddStringToObject(item, "receivedAtUtc", inbox_message_dto->received_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->created_at_utc
    if(inbox_message_dto->created_at_utc) {
    if(cJSON_AddStringToObject(item, "createdAtUtc", inbox_message_dto->created_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->last_attempt_at_utc
    if(inbox_message_dto->last_attempt_at_utc) {
    if(cJSON_AddStringToObject(item, "lastAttemptAtUtc", inbox_message_dto->last_attempt_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->processed_at_utc
    if(inbox_message_dto->processed_at_utc) {
    if(cJSON_AddStringToObject(item, "processedAtUtc", inbox_message_dto->processed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // inbox_message_dto->failed_at_utc
    if(inbox_message_dto->failed_at_utc) {
    if(cJSON_AddStringToObject(item, "failedAtUtc", inbox_message_dto->failed_at_utc) == NULL) {
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

inbox_message_dto_t *inbox_message_dto_parseFromJSON(cJSON *inbox_message_dtoJSON){

    inbox_message_dto_t *inbox_message_dto_local_var = NULL;

    // inbox_message_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->source_system
    cJSON *source_system = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "sourceSystem");
    if (source_system) { 
    if(!cJSON_IsString(source_system) && !cJSON_IsNull(source_system))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->source_registration_id
    cJSON *source_registration_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "sourceRegistrationId");
    if (source_registration_id) { 
    if(!cJSON_IsString(source_registration_id) && !cJSON_IsNull(source_registration_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->external_message_id
    cJSON *external_message_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "externalMessageId");
    if (external_message_id) { 
    if(!cJSON_IsString(external_message_id) && !cJSON_IsNull(external_message_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->deduplication_key
    cJSON *deduplication_key = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "deduplicationKey");
    if (deduplication_key) { 
    if(!cJSON_IsString(deduplication_key) && !cJSON_IsNull(deduplication_key))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->deduplication_signature
    cJSON *deduplication_signature = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "deduplicationSignature");
    if (deduplication_signature) { 
    if(!cJSON_IsString(deduplication_signature) && !cJSON_IsNull(deduplication_signature))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->payload_digest
    cJSON *payload_digest = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "payloadDigest");
    if (payload_digest) { 
    if(!cJSON_IsString(payload_digest) && !cJSON_IsNull(payload_digest))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->delivery_count
    cJSON *delivery_count = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "deliveryCount");
    if (delivery_count) { 
    if(!cJSON_IsNumber(delivery_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_message_dto->last_duplicate_received_at_utc
    cJSON *last_duplicate_received_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "lastDuplicateReceivedAtUtc");
    if (last_duplicate_received_at_utc) { 
    if(!cJSON_IsString(last_duplicate_received_at_utc) && !cJSON_IsNull(last_duplicate_received_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->message_type
    cJSON *message_type = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "messageType");
    if (message_type) { 
    if(!cJSON_IsString(message_type) && !cJSON_IsNull(message_type))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->content_type
    cJSON *content_type = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "contentType");
    if (content_type) { 
    if(!cJSON_IsString(content_type) && !cJSON_IsNull(content_type))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "status");
    systemservice_inbox_message_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = inbox_message_dto_status_FromString(status->valuestring);
    }

    // inbox_message_dto->attempts
    cJSON *attempts = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "attempts");
    if (attempts) { 
    if(!cJSON_IsNumber(attempts))
    {
    goto end; //Numeric
    }
    }

    // inbox_message_dto->max_attempts
    cJSON *max_attempts = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "maxAttempts");
    if (max_attempts) { 
    if(!cJSON_IsNumber(max_attempts))
    {
    goto end; //Numeric
    }
    }

    // inbox_message_dto->verification_status
    cJSON *verification_status = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "verificationStatus");
    systemservice_inbox_message_dto_VERIFICATIONSTATUS_e verification_statusVariable;
    if (verification_status) { 
    if(!cJSON_IsString(verification_status))
    {
    goto end; //Enum
    }
    verification_statusVariable = inbox_message_dto_verification_status_FromString(verification_status->valuestring);
    }

    // inbox_message_dto->verification_profile
    cJSON *verification_profile = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "verificationProfile");
    if (verification_profile) { 
    if(!cJSON_IsString(verification_profile) && !cJSON_IsNull(verification_profile))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->verification_algorithm
    cJSON *verification_algorithm = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "verificationAlgorithm");
    if (verification_algorithm) { 
    if(!cJSON_IsString(verification_algorithm) && !cJSON_IsNull(verification_algorithm))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->verified_at_utc
    cJSON *verified_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "verifiedAtUtc");
    if (verified_at_utc) { 
    if(!cJSON_IsString(verified_at_utc) && !cJSON_IsNull(verified_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->generation
    cJSON *generation = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "generation");
    if (generation) { 
    if(!cJSON_IsNumber(generation))
    {
    goto end; //Numeric
    }
    }

    // inbox_message_dto->replay_count
    cJSON *replay_count = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "replayCount");
    if (replay_count) { 
    if(!cJSON_IsNumber(replay_count))
    {
    goto end; //Numeric
    }
    }

    // inbox_message_dto->original_inbox_message_id
    cJSON *original_inbox_message_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "originalInboxMessageId");
    if (original_inbox_message_id) { 
    if(!cJSON_IsString(original_inbox_message_id) && !cJSON_IsNull(original_inbox_message_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->failure_code
    cJSON *failure_code = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "failureCode");
    if (failure_code) { 
    if(!cJSON_IsString(failure_code) && !cJSON_IsNull(failure_code))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->failure_reason
    cJSON *failure_reason = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "failureReason");
    if (failure_reason) { 
    if(!cJSON_IsString(failure_reason) && !cJSON_IsNull(failure_reason))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->causation_id
    cJSON *causation_id = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "causationId");
    if (causation_id) { 
    if(!cJSON_IsString(causation_id) && !cJSON_IsNull(causation_id))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->locked_by
    cJSON *locked_by = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "lockedBy");
    if (locked_by) { 
    if(!cJSON_IsString(locked_by) && !cJSON_IsNull(locked_by))
    {
    goto end; //String
    }
    }

    // inbox_message_dto->locked_until_utc
    cJSON *locked_until_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "lockedUntilUtc");
    if (locked_until_utc) { 
    if(!cJSON_IsString(locked_until_utc) && !cJSON_IsNull(locked_until_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->available_at_utc
    cJSON *available_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "availableAtUtc");
    if (available_at_utc) { 
    if(!cJSON_IsString(available_at_utc) && !cJSON_IsNull(available_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->received_at_utc
    cJSON *received_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "receivedAtUtc");
    if (received_at_utc) { 
    if(!cJSON_IsString(received_at_utc) && !cJSON_IsNull(received_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->created_at_utc
    cJSON *created_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "createdAtUtc");
    if (created_at_utc) { 
    if(!cJSON_IsString(created_at_utc) && !cJSON_IsNull(created_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->last_attempt_at_utc
    cJSON *last_attempt_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "lastAttemptAtUtc");
    if (last_attempt_at_utc) { 
    if(!cJSON_IsString(last_attempt_at_utc) && !cJSON_IsNull(last_attempt_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->processed_at_utc
    cJSON *processed_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "processedAtUtc");
    if (processed_at_utc) { 
    if(!cJSON_IsString(processed_at_utc) && !cJSON_IsNull(processed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // inbox_message_dto->failed_at_utc
    cJSON *failed_at_utc = cJSON_GetObjectItemCaseSensitive(inbox_message_dtoJSON, "failedAtUtc");
    if (failed_at_utc) { 
    if(!cJSON_IsString(failed_at_utc) && !cJSON_IsNull(failed_at_utc))
    {
    goto end; //DateTime
    }
    }


    inbox_message_dto_local_var = inbox_message_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        source_system && !cJSON_IsNull(source_system) ? strdup(source_system->valuestring) : NULL,
        source_registration_id && !cJSON_IsNull(source_registration_id) ? strdup(source_registration_id->valuestring) : NULL,
        external_message_id && !cJSON_IsNull(external_message_id) ? strdup(external_message_id->valuestring) : NULL,
        deduplication_key && !cJSON_IsNull(deduplication_key) ? strdup(deduplication_key->valuestring) : NULL,
        deduplication_signature && !cJSON_IsNull(deduplication_signature) ? strdup(deduplication_signature->valuestring) : NULL,
        payload_digest && !cJSON_IsNull(payload_digest) ? strdup(payload_digest->valuestring) : NULL,
        delivery_count ? delivery_count->valuedouble : 0,
        last_duplicate_received_at_utc && !cJSON_IsNull(last_duplicate_received_at_utc) ? strdup(last_duplicate_received_at_utc->valuestring) : NULL,
        message_type && !cJSON_IsNull(message_type) ? strdup(message_type->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL,
        content_type && !cJSON_IsNull(content_type) ? strdup(content_type->valuestring) : NULL,
        status ? statusVariable : systemservice_inbox_message_dto_STATUS_NULL,
        attempts ? attempts->valuedouble : 0,
        max_attempts ? max_attempts->valuedouble : 0,
        verification_status ? verification_statusVariable : systemservice_inbox_message_dto_VERIFICATIONSTATUS_NULL,
        verification_profile && !cJSON_IsNull(verification_profile) ? strdup(verification_profile->valuestring) : NULL,
        verification_algorithm && !cJSON_IsNull(verification_algorithm) ? strdup(verification_algorithm->valuestring) : NULL,
        verified_at_utc && !cJSON_IsNull(verified_at_utc) ? strdup(verified_at_utc->valuestring) : NULL,
        generation ? generation->valuedouble : 0,
        replay_count ? replay_count->valuedouble : 0,
        original_inbox_message_id && !cJSON_IsNull(original_inbox_message_id) ? strdup(original_inbox_message_id->valuestring) : NULL,
        failure_code && !cJSON_IsNull(failure_code) ? strdup(failure_code->valuestring) : NULL,
        failure_reason && !cJSON_IsNull(failure_reason) ? strdup(failure_reason->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        causation_id && !cJSON_IsNull(causation_id) ? strdup(causation_id->valuestring) : NULL,
        locked_by && !cJSON_IsNull(locked_by) ? strdup(locked_by->valuestring) : NULL,
        locked_until_utc && !cJSON_IsNull(locked_until_utc) ? strdup(locked_until_utc->valuestring) : NULL,
        available_at_utc && !cJSON_IsNull(available_at_utc) ? strdup(available_at_utc->valuestring) : NULL,
        received_at_utc && !cJSON_IsNull(received_at_utc) ? strdup(received_at_utc->valuestring) : NULL,
        created_at_utc && !cJSON_IsNull(created_at_utc) ? strdup(created_at_utc->valuestring) : NULL,
        last_attempt_at_utc && !cJSON_IsNull(last_attempt_at_utc) ? strdup(last_attempt_at_utc->valuestring) : NULL,
        processed_at_utc && !cJSON_IsNull(processed_at_utc) ? strdup(processed_at_utc->valuestring) : NULL,
        failed_at_utc && !cJSON_IsNull(failed_at_utc) ? strdup(failed_at_utc->valuestring) : NULL
        );

    return inbox_message_dto_local_var;
end:
    return NULL;

}
