#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signing_request_dto.h"


char* signing_request_dto_status_ToString(trustservice_signing_request_dto_STATUS_e status) {
    char* statusArray[] =  { "NULL", "Draft", "Ready", "Sent", "InProgress", "Completed", "Declined", "Voided", "Expired", "Failed" };
    return statusArray[status];
}

trustservice_signing_request_dto_STATUS_e signing_request_dto_status_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "Draft", "Ready", "Sent", "InProgress", "Completed", "Declined", "Voided", "Expired", "Failed" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* signing_request_dto_routing_mode_ToString(trustservice_signing_request_dto_ROUTINGMODE_e routing_mode) {
    char* routing_modeArray[] =  { "NULL", "Parallel", "Sequential" };
    return routing_modeArray[routing_mode];
}

trustservice_signing_request_dto_ROUTINGMODE_e signing_request_dto_routing_mode_FromString(char* routing_mode){
    int stringToReturn = 0;
    char *routing_modeArray[] =  { "NULL", "Parallel", "Sequential" };
    size_t sizeofArray = sizeof(routing_modeArray) / sizeof(routing_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(routing_mode, routing_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    signing_request_dto_t *signing_request_dto_local_var = malloc(sizeof(signing_request_dto_t));
    if (!signing_request_dto_local_var) {
        return NULL;
    }
    signing_request_dto_local_var->id = id;
    signing_request_dto_local_var->tenant_id = tenant_id;
    signing_request_dto_local_var->signed_document_id = signed_document_id;
    signing_request_dto_local_var->signed_document_title = signed_document_title;
    signing_request_dto_local_var->frozen_source_file_upload_id = frozen_source_file_upload_id;
    signing_request_dto_local_var->source_sha256 = source_sha256;
    signing_request_dto_local_var->status = status;
    signing_request_dto_local_var->routing_mode = routing_mode;
    signing_request_dto_local_var->created_at_utc = created_at_utc;
    signing_request_dto_local_var->sent_at_utc = sent_at_utc;
    signing_request_dto_local_var->completed_at_utc = completed_at_utc;
    signing_request_dto_local_var->expires_at_utc = expires_at_utc;
    signing_request_dto_local_var->voided_at_utc = voided_at_utc;
    signing_request_dto_local_var->voided_reason = voided_reason;
    signing_request_dto_local_var->message = message;
    signing_request_dto_local_var->correlation_id = correlation_id;
    signing_request_dto_local_var->external_reference = external_reference;

    return signing_request_dto_local_var;
}


void signing_request_dto_free(signing_request_dto_t *signing_request_dto) {
    if(NULL == signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signing_request_dto->id) {
        free(signing_request_dto->id);
        signing_request_dto->id = NULL;
    }
    if (signing_request_dto->tenant_id) {
        free(signing_request_dto->tenant_id);
        signing_request_dto->tenant_id = NULL;
    }
    if (signing_request_dto->signed_document_id) {
        free(signing_request_dto->signed_document_id);
        signing_request_dto->signed_document_id = NULL;
    }
    if (signing_request_dto->signed_document_title) {
        free(signing_request_dto->signed_document_title);
        signing_request_dto->signed_document_title = NULL;
    }
    if (signing_request_dto->frozen_source_file_upload_id) {
        free(signing_request_dto->frozen_source_file_upload_id);
        signing_request_dto->frozen_source_file_upload_id = NULL;
    }
    if (signing_request_dto->source_sha256) {
        free(signing_request_dto->source_sha256);
        signing_request_dto->source_sha256 = NULL;
    }
    if (signing_request_dto->created_at_utc) {
        free(signing_request_dto->created_at_utc);
        signing_request_dto->created_at_utc = NULL;
    }
    if (signing_request_dto->sent_at_utc) {
        free(signing_request_dto->sent_at_utc);
        signing_request_dto->sent_at_utc = NULL;
    }
    if (signing_request_dto->completed_at_utc) {
        free(signing_request_dto->completed_at_utc);
        signing_request_dto->completed_at_utc = NULL;
    }
    if (signing_request_dto->expires_at_utc) {
        free(signing_request_dto->expires_at_utc);
        signing_request_dto->expires_at_utc = NULL;
    }
    if (signing_request_dto->voided_at_utc) {
        free(signing_request_dto->voided_at_utc);
        signing_request_dto->voided_at_utc = NULL;
    }
    if (signing_request_dto->voided_reason) {
        free(signing_request_dto->voided_reason);
        signing_request_dto->voided_reason = NULL;
    }
    if (signing_request_dto->message) {
        free(signing_request_dto->message);
        signing_request_dto->message = NULL;
    }
    if (signing_request_dto->correlation_id) {
        free(signing_request_dto->correlation_id);
        signing_request_dto->correlation_id = NULL;
    }
    if (signing_request_dto->external_reference) {
        free(signing_request_dto->external_reference);
        signing_request_dto->external_reference = NULL;
    }
    free(signing_request_dto);
}

cJSON *signing_request_dto_convertToJSON(signing_request_dto_t *signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // signing_request_dto->id
    if(signing_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", signing_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->tenant_id
    if(signing_request_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", signing_request_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->signed_document_id
    if(signing_request_dto->signed_document_id) {
    if(cJSON_AddStringToObject(item, "signedDocumentId", signing_request_dto->signed_document_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->signed_document_title
    if(signing_request_dto->signed_document_title) {
    if(cJSON_AddStringToObject(item, "signedDocumentTitle", signing_request_dto->signed_document_title) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->frozen_source_file_upload_id
    if(signing_request_dto->frozen_source_file_upload_id) {
    if(cJSON_AddStringToObject(item, "frozenSourceFileUploadId", signing_request_dto->frozen_source_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->source_sha256
    if(signing_request_dto->source_sha256) {
    if(cJSON_AddStringToObject(item, "sourceSha256", signing_request_dto->source_sha256) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->status
    if(signing_request_dto->status != trustservice_signing_request_dto_STATUS_NULL) {
    if(cJSON_AddStringToObject(item, "status", statussigning_request_dto_ToString(signing_request_dto->status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_request_dto->routing_mode
    if(signing_request_dto->routing_mode != trustservice_signing_request_dto_ROUTINGMODE_NULL) {
    if(cJSON_AddStringToObject(item, "routingMode", routing_modesigning_request_dto_ToString(signing_request_dto->routing_mode)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // signing_request_dto->created_at_utc
    if(signing_request_dto->created_at_utc) {
    if(cJSON_AddStringToObject(item, "createdAtUtc", signing_request_dto->created_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_request_dto->sent_at_utc
    if(signing_request_dto->sent_at_utc) {
    if(cJSON_AddStringToObject(item, "sentAtUtc", signing_request_dto->sent_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_request_dto->completed_at_utc
    if(signing_request_dto->completed_at_utc) {
    if(cJSON_AddStringToObject(item, "completedAtUtc", signing_request_dto->completed_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_request_dto->expires_at_utc
    if(signing_request_dto->expires_at_utc) {
    if(cJSON_AddStringToObject(item, "expiresAtUtc", signing_request_dto->expires_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_request_dto->voided_at_utc
    if(signing_request_dto->voided_at_utc) {
    if(cJSON_AddStringToObject(item, "voidedAtUtc", signing_request_dto->voided_at_utc) == NULL) {
    goto fail; //Date-Time
    }
    }


    // signing_request_dto->voided_reason
    if(signing_request_dto->voided_reason) {
    if(cJSON_AddStringToObject(item, "voidedReason", signing_request_dto->voided_reason) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->message
    if(signing_request_dto->message) {
    if(cJSON_AddStringToObject(item, "message", signing_request_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->correlation_id
    if(signing_request_dto->correlation_id) {
    if(cJSON_AddStringToObject(item, "correlationId", signing_request_dto->correlation_id) == NULL) {
    goto fail; //String
    }
    }


    // signing_request_dto->external_reference
    if(signing_request_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", signing_request_dto->external_reference) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signing_request_dto_t *signing_request_dto_parseFromJSON(cJSON *signing_request_dtoJSON){

    signing_request_dto_t *signing_request_dto_local_var = NULL;

    // signing_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // signing_request_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // signing_request_dto->signed_document_id
    cJSON *signed_document_id = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "signedDocumentId");
    if (signed_document_id) { 
    if(!cJSON_IsString(signed_document_id) && !cJSON_IsNull(signed_document_id))
    {
    goto end; //String
    }
    }

    // signing_request_dto->signed_document_title
    cJSON *signed_document_title = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "signedDocumentTitle");
    if (signed_document_title) { 
    if(!cJSON_IsString(signed_document_title) && !cJSON_IsNull(signed_document_title))
    {
    goto end; //String
    }
    }

    // signing_request_dto->frozen_source_file_upload_id
    cJSON *frozen_source_file_upload_id = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "frozenSourceFileUploadId");
    if (frozen_source_file_upload_id) { 
    if(!cJSON_IsString(frozen_source_file_upload_id) && !cJSON_IsNull(frozen_source_file_upload_id))
    {
    goto end; //String
    }
    }

    // signing_request_dto->source_sha256
    cJSON *source_sha256 = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "sourceSha256");
    if (source_sha256) { 
    if(!cJSON_IsString(source_sha256) && !cJSON_IsNull(source_sha256))
    {
    goto end; //String
    }
    }

    // signing_request_dto->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "status");
    trustservice_signing_request_dto_STATUS_e statusVariable;
    if (status) { 
    if(!cJSON_IsString(status))
    {
    goto end; //Enum
    }
    statusVariable = signing_request_dto_status_FromString(status->valuestring);
    }

    // signing_request_dto->routing_mode
    cJSON *routing_mode = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "routingMode");
    trustservice_signing_request_dto_ROUTINGMODE_e routing_modeVariable;
    if (routing_mode) { 
    if(!cJSON_IsString(routing_mode))
    {
    goto end; //Enum
    }
    routing_modeVariable = signing_request_dto_routing_mode_FromString(routing_mode->valuestring);
    }

    // signing_request_dto->created_at_utc
    cJSON *created_at_utc = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "createdAtUtc");
    if (created_at_utc) { 
    if(!cJSON_IsString(created_at_utc) && !cJSON_IsNull(created_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_request_dto->sent_at_utc
    cJSON *sent_at_utc = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "sentAtUtc");
    if (sent_at_utc) { 
    if(!cJSON_IsString(sent_at_utc) && !cJSON_IsNull(sent_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_request_dto->completed_at_utc
    cJSON *completed_at_utc = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "completedAtUtc");
    if (completed_at_utc) { 
    if(!cJSON_IsString(completed_at_utc) && !cJSON_IsNull(completed_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_request_dto->expires_at_utc
    cJSON *expires_at_utc = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "expiresAtUtc");
    if (expires_at_utc) { 
    if(!cJSON_IsString(expires_at_utc) && !cJSON_IsNull(expires_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_request_dto->voided_at_utc
    cJSON *voided_at_utc = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "voidedAtUtc");
    if (voided_at_utc) { 
    if(!cJSON_IsString(voided_at_utc) && !cJSON_IsNull(voided_at_utc))
    {
    goto end; //DateTime
    }
    }

    // signing_request_dto->voided_reason
    cJSON *voided_reason = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "voidedReason");
    if (voided_reason) { 
    if(!cJSON_IsString(voided_reason) && !cJSON_IsNull(voided_reason))
    {
    goto end; //String
    }
    }

    // signing_request_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // signing_request_dto->correlation_id
    cJSON *correlation_id = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "correlationId");
    if (correlation_id) { 
    if(!cJSON_IsString(correlation_id) && !cJSON_IsNull(correlation_id))
    {
    goto end; //String
    }
    }

    // signing_request_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(signing_request_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }


    signing_request_dto_local_var = signing_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        signed_document_id && !cJSON_IsNull(signed_document_id) ? strdup(signed_document_id->valuestring) : NULL,
        signed_document_title && !cJSON_IsNull(signed_document_title) ? strdup(signed_document_title->valuestring) : NULL,
        frozen_source_file_upload_id && !cJSON_IsNull(frozen_source_file_upload_id) ? strdup(frozen_source_file_upload_id->valuestring) : NULL,
        source_sha256 && !cJSON_IsNull(source_sha256) ? strdup(source_sha256->valuestring) : NULL,
        status ? statusVariable : trustservice_signing_request_dto_STATUS_NULL,
        routing_mode ? routing_modeVariable : trustservice_signing_request_dto_ROUTINGMODE_NULL,
        created_at_utc && !cJSON_IsNull(created_at_utc) ? strdup(created_at_utc->valuestring) : NULL,
        sent_at_utc && !cJSON_IsNull(sent_at_utc) ? strdup(sent_at_utc->valuestring) : NULL,
        completed_at_utc && !cJSON_IsNull(completed_at_utc) ? strdup(completed_at_utc->valuestring) : NULL,
        expires_at_utc && !cJSON_IsNull(expires_at_utc) ? strdup(expires_at_utc->valuestring) : NULL,
        voided_at_utc && !cJSON_IsNull(voided_at_utc) ? strdup(voided_at_utc->valuestring) : NULL,
        voided_reason && !cJSON_IsNull(voided_reason) ? strdup(voided_reason->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        correlation_id && !cJSON_IsNull(correlation_id) ? strdup(correlation_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL
        );

    return signing_request_dto_local_var;
end:
    return NULL;

}
