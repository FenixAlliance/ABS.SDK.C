#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "finalize_signing_request_dto.h"



finalize_signing_request_dto_t *finalize_signing_request_dto_create(
    char *signed_file_upload_id,
    char *evidence_file_upload_id,
    char *external_reference,
    char *provider_name,
    char *outcome_notes
    ) {
    finalize_signing_request_dto_t *finalize_signing_request_dto_local_var = malloc(sizeof(finalize_signing_request_dto_t));
    if (!finalize_signing_request_dto_local_var) {
        return NULL;
    }
    finalize_signing_request_dto_local_var->signed_file_upload_id = signed_file_upload_id;
    finalize_signing_request_dto_local_var->evidence_file_upload_id = evidence_file_upload_id;
    finalize_signing_request_dto_local_var->external_reference = external_reference;
    finalize_signing_request_dto_local_var->provider_name = provider_name;
    finalize_signing_request_dto_local_var->outcome_notes = outcome_notes;

    return finalize_signing_request_dto_local_var;
}


void finalize_signing_request_dto_free(finalize_signing_request_dto_t *finalize_signing_request_dto) {
    if(NULL == finalize_signing_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (finalize_signing_request_dto->signed_file_upload_id) {
        free(finalize_signing_request_dto->signed_file_upload_id);
        finalize_signing_request_dto->signed_file_upload_id = NULL;
    }
    if (finalize_signing_request_dto->evidence_file_upload_id) {
        free(finalize_signing_request_dto->evidence_file_upload_id);
        finalize_signing_request_dto->evidence_file_upload_id = NULL;
    }
    if (finalize_signing_request_dto->external_reference) {
        free(finalize_signing_request_dto->external_reference);
        finalize_signing_request_dto->external_reference = NULL;
    }
    if (finalize_signing_request_dto->provider_name) {
        free(finalize_signing_request_dto->provider_name);
        finalize_signing_request_dto->provider_name = NULL;
    }
    if (finalize_signing_request_dto->outcome_notes) {
        free(finalize_signing_request_dto->outcome_notes);
        finalize_signing_request_dto->outcome_notes = NULL;
    }
    free(finalize_signing_request_dto);
}

cJSON *finalize_signing_request_dto_convertToJSON(finalize_signing_request_dto_t *finalize_signing_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // finalize_signing_request_dto->signed_file_upload_id
    if (!finalize_signing_request_dto->signed_file_upload_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "signedFileUploadId", finalize_signing_request_dto->signed_file_upload_id) == NULL) {
    goto fail; //String
    }


    // finalize_signing_request_dto->evidence_file_upload_id
    if(finalize_signing_request_dto->evidence_file_upload_id) {
    if(cJSON_AddStringToObject(item, "evidenceFileUploadId", finalize_signing_request_dto->evidence_file_upload_id) == NULL) {
    goto fail; //String
    }
    }


    // finalize_signing_request_dto->external_reference
    if(finalize_signing_request_dto->external_reference) {
    if(cJSON_AddStringToObject(item, "externalReference", finalize_signing_request_dto->external_reference) == NULL) {
    goto fail; //String
    }
    }


    // finalize_signing_request_dto->provider_name
    if(finalize_signing_request_dto->provider_name) {
    if(cJSON_AddStringToObject(item, "providerName", finalize_signing_request_dto->provider_name) == NULL) {
    goto fail; //String
    }
    }


    // finalize_signing_request_dto->outcome_notes
    if(finalize_signing_request_dto->outcome_notes) {
    if(cJSON_AddStringToObject(item, "outcomeNotes", finalize_signing_request_dto->outcome_notes) == NULL) {
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

finalize_signing_request_dto_t *finalize_signing_request_dto_parseFromJSON(cJSON *finalize_signing_request_dtoJSON){

    finalize_signing_request_dto_t *finalize_signing_request_dto_local_var = NULL;

    // finalize_signing_request_dto->signed_file_upload_id
    cJSON *signed_file_upload_id = cJSON_GetObjectItemCaseSensitive(finalize_signing_request_dtoJSON, "signedFileUploadId");
    if (!signed_file_upload_id) {
        goto end;
    }

    
    if(!cJSON_IsString(signed_file_upload_id))
    {
    goto end; //String
    }

    // finalize_signing_request_dto->evidence_file_upload_id
    cJSON *evidence_file_upload_id = cJSON_GetObjectItemCaseSensitive(finalize_signing_request_dtoJSON, "evidenceFileUploadId");
    if (evidence_file_upload_id) { 
    if(!cJSON_IsString(evidence_file_upload_id) && !cJSON_IsNull(evidence_file_upload_id))
    {
    goto end; //String
    }
    }

    // finalize_signing_request_dto->external_reference
    cJSON *external_reference = cJSON_GetObjectItemCaseSensitive(finalize_signing_request_dtoJSON, "externalReference");
    if (external_reference) { 
    if(!cJSON_IsString(external_reference) && !cJSON_IsNull(external_reference))
    {
    goto end; //String
    }
    }

    // finalize_signing_request_dto->provider_name
    cJSON *provider_name = cJSON_GetObjectItemCaseSensitive(finalize_signing_request_dtoJSON, "providerName");
    if (provider_name) { 
    if(!cJSON_IsString(provider_name) && !cJSON_IsNull(provider_name))
    {
    goto end; //String
    }
    }

    // finalize_signing_request_dto->outcome_notes
    cJSON *outcome_notes = cJSON_GetObjectItemCaseSensitive(finalize_signing_request_dtoJSON, "outcomeNotes");
    if (outcome_notes) { 
    if(!cJSON_IsString(outcome_notes) && !cJSON_IsNull(outcome_notes))
    {
    goto end; //String
    }
    }


    finalize_signing_request_dto_local_var = finalize_signing_request_dto_create (
        strdup(signed_file_upload_id->valuestring),
        evidence_file_upload_id && !cJSON_IsNull(evidence_file_upload_id) ? strdup(evidence_file_upload_id->valuestring) : NULL,
        external_reference && !cJSON_IsNull(external_reference) ? strdup(external_reference->valuestring) : NULL,
        provider_name && !cJSON_IsNull(provider_name) ? strdup(provider_name->valuestring) : NULL,
        outcome_notes && !cJSON_IsNull(outcome_notes) ? strdup(outcome_notes->valuestring) : NULL
        );

    return finalize_signing_request_dto_local_var;
end:
    return NULL;

}
