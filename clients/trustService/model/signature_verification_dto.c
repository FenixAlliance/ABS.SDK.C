#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_verification_dto.h"



signature_verification_dto_t *signature_verification_dto_create(
    int is_valid,
    char *method,
    char *signer_subject,
    char *signer_thumbprint,
    list_t *issues
    ) {
    signature_verification_dto_t *signature_verification_dto_local_var = malloc(sizeof(signature_verification_dto_t));
    if (!signature_verification_dto_local_var) {
        return NULL;
    }
    signature_verification_dto_local_var->is_valid = is_valid;
    signature_verification_dto_local_var->method = method;
    signature_verification_dto_local_var->signer_subject = signer_subject;
    signature_verification_dto_local_var->signer_thumbprint = signer_thumbprint;
    signature_verification_dto_local_var->issues = issues;

    return signature_verification_dto_local_var;
}


void signature_verification_dto_free(signature_verification_dto_t *signature_verification_dto) {
    if(NULL == signature_verification_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_verification_dto->method) {
        free(signature_verification_dto->method);
        signature_verification_dto->method = NULL;
    }
    if (signature_verification_dto->signer_subject) {
        free(signature_verification_dto->signer_subject);
        signature_verification_dto->signer_subject = NULL;
    }
    if (signature_verification_dto->signer_thumbprint) {
        free(signature_verification_dto->signer_thumbprint);
        signature_verification_dto->signer_thumbprint = NULL;
    }
    if (signature_verification_dto->issues) {
        list_ForEach(listEntry, signature_verification_dto->issues) {
            free(listEntry->data);
        }
        list_freeList(signature_verification_dto->issues);
        signature_verification_dto->issues = NULL;
    }
    free(signature_verification_dto);
}

cJSON *signature_verification_dto_convertToJSON(signature_verification_dto_t *signature_verification_dto) {
    cJSON *item = cJSON_CreateObject();

    // signature_verification_dto->is_valid
    if(signature_verification_dto->is_valid) {
    if(cJSON_AddBoolToObject(item, "isValid", signature_verification_dto->is_valid) == NULL) {
    goto fail; //Bool
    }
    }


    // signature_verification_dto->method
    if(signature_verification_dto->method) {
    if(cJSON_AddStringToObject(item, "method", signature_verification_dto->method) == NULL) {
    goto fail; //String
    }
    }


    // signature_verification_dto->signer_subject
    if(signature_verification_dto->signer_subject) {
    if(cJSON_AddStringToObject(item, "signerSubject", signature_verification_dto->signer_subject) == NULL) {
    goto fail; //String
    }
    }


    // signature_verification_dto->signer_thumbprint
    if(signature_verification_dto->signer_thumbprint) {
    if(cJSON_AddStringToObject(item, "signerThumbprint", signature_verification_dto->signer_thumbprint) == NULL) {
    goto fail; //String
    }
    }


    // signature_verification_dto->issues
    if(signature_verification_dto->issues) {
    cJSON *issues = cJSON_AddArrayToObject(item, "issues");
    if(issues == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *issuesListEntry;
    list_ForEach(issuesListEntry, signature_verification_dto->issues) {
    if(cJSON_AddStringToObject(issues, "", (char*)issuesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

signature_verification_dto_t *signature_verification_dto_parseFromJSON(cJSON *signature_verification_dtoJSON){

    signature_verification_dto_t *signature_verification_dto_local_var = NULL;

    // define the local list for signature_verification_dto->issues
    list_t *issuesList = NULL;

    // signature_verification_dto->is_valid
    cJSON *is_valid = cJSON_GetObjectItemCaseSensitive(signature_verification_dtoJSON, "isValid");
    if (is_valid) { 
    if(!cJSON_IsBool(is_valid))
    {
    goto end; //Bool
    }
    }

    // signature_verification_dto->method
    cJSON *method = cJSON_GetObjectItemCaseSensitive(signature_verification_dtoJSON, "method");
    if (method) { 
    if(!cJSON_IsString(method) && !cJSON_IsNull(method))
    {
    goto end; //String
    }
    }

    // signature_verification_dto->signer_subject
    cJSON *signer_subject = cJSON_GetObjectItemCaseSensitive(signature_verification_dtoJSON, "signerSubject");
    if (signer_subject) { 
    if(!cJSON_IsString(signer_subject) && !cJSON_IsNull(signer_subject))
    {
    goto end; //String
    }
    }

    // signature_verification_dto->signer_thumbprint
    cJSON *signer_thumbprint = cJSON_GetObjectItemCaseSensitive(signature_verification_dtoJSON, "signerThumbprint");
    if (signer_thumbprint) { 
    if(!cJSON_IsString(signer_thumbprint) && !cJSON_IsNull(signer_thumbprint))
    {
    goto end; //String
    }
    }

    // signature_verification_dto->issues
    cJSON *issues = cJSON_GetObjectItemCaseSensitive(signature_verification_dtoJSON, "issues");
    if (issues) { 
    cJSON *issues_local = NULL;
    if(!cJSON_IsArray(issues)) {
        goto end;//primitive container
    }
    issuesList = list_createList();

    cJSON_ArrayForEach(issues_local, issues)
    {
        if(!cJSON_IsString(issues_local))
        {
            goto end;
        }
        list_addElement(issuesList , strdup(issues_local->valuestring));
    }
    }


    signature_verification_dto_local_var = signature_verification_dto_create (
        is_valid ? is_valid->valueint : 0,
        method && !cJSON_IsNull(method) ? strdup(method->valuestring) : NULL,
        signer_subject && !cJSON_IsNull(signer_subject) ? strdup(signer_subject->valuestring) : NULL,
        signer_thumbprint && !cJSON_IsNull(signer_thumbprint) ? strdup(signer_thumbprint->valuestring) : NULL,
        issues ? issuesList : NULL
        );

    return signature_verification_dto_local_var;
end:
    if (issuesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, issuesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(issuesList);
        issuesList = NULL;
    }
    return NULL;

}
