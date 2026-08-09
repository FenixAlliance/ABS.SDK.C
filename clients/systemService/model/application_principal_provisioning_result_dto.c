#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "application_principal_provisioning_result_dto.h"



application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_create(
    char *principal_id,
    char *enrollment_id,
    char *tenant_id,
    int principal_created,
    int enrollment_created
    ) {
    application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_local_var = malloc(sizeof(application_principal_provisioning_result_dto_t));
    if (!application_principal_provisioning_result_dto_local_var) {
        return NULL;
    }
    application_principal_provisioning_result_dto_local_var->principal_id = principal_id;
    application_principal_provisioning_result_dto_local_var->enrollment_id = enrollment_id;
    application_principal_provisioning_result_dto_local_var->tenant_id = tenant_id;
    application_principal_provisioning_result_dto_local_var->principal_created = principal_created;
    application_principal_provisioning_result_dto_local_var->enrollment_created = enrollment_created;

    return application_principal_provisioning_result_dto_local_var;
}


void application_principal_provisioning_result_dto_free(application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto) {
    if(NULL == application_principal_provisioning_result_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (application_principal_provisioning_result_dto->principal_id) {
        free(application_principal_provisioning_result_dto->principal_id);
        application_principal_provisioning_result_dto->principal_id = NULL;
    }
    if (application_principal_provisioning_result_dto->enrollment_id) {
        free(application_principal_provisioning_result_dto->enrollment_id);
        application_principal_provisioning_result_dto->enrollment_id = NULL;
    }
    if (application_principal_provisioning_result_dto->tenant_id) {
        free(application_principal_provisioning_result_dto->tenant_id);
        application_principal_provisioning_result_dto->tenant_id = NULL;
    }
    free(application_principal_provisioning_result_dto);
}

cJSON *application_principal_provisioning_result_dto_convertToJSON(application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto) {
    cJSON *item = cJSON_CreateObject();

    // application_principal_provisioning_result_dto->principal_id
    if(application_principal_provisioning_result_dto->principal_id) {
    if(cJSON_AddStringToObject(item, "principalId", application_principal_provisioning_result_dto->principal_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_provisioning_result_dto->enrollment_id
    if(application_principal_provisioning_result_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", application_principal_provisioning_result_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_provisioning_result_dto->tenant_id
    if(application_principal_provisioning_result_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", application_principal_provisioning_result_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // application_principal_provisioning_result_dto->principal_created
    if(application_principal_provisioning_result_dto->principal_created) {
    if(cJSON_AddBoolToObject(item, "principalCreated", application_principal_provisioning_result_dto->principal_created) == NULL) {
    goto fail; //Bool
    }
    }


    // application_principal_provisioning_result_dto->enrollment_created
    if(application_principal_provisioning_result_dto->enrollment_created) {
    if(cJSON_AddBoolToObject(item, "enrollmentCreated", application_principal_provisioning_result_dto->enrollment_created) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_parseFromJSON(cJSON *application_principal_provisioning_result_dtoJSON){

    application_principal_provisioning_result_dto_t *application_principal_provisioning_result_dto_local_var = NULL;

    // application_principal_provisioning_result_dto->principal_id
    cJSON *principal_id = cJSON_GetObjectItemCaseSensitive(application_principal_provisioning_result_dtoJSON, "principalId");
    if (principal_id) { 
    if(!cJSON_IsString(principal_id) && !cJSON_IsNull(principal_id))
    {
    goto end; //String
    }
    }

    // application_principal_provisioning_result_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(application_principal_provisioning_result_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // application_principal_provisioning_result_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(application_principal_provisioning_result_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // application_principal_provisioning_result_dto->principal_created
    cJSON *principal_created = cJSON_GetObjectItemCaseSensitive(application_principal_provisioning_result_dtoJSON, "principalCreated");
    if (principal_created) { 
    if(!cJSON_IsBool(principal_created))
    {
    goto end; //Bool
    }
    }

    // application_principal_provisioning_result_dto->enrollment_created
    cJSON *enrollment_created = cJSON_GetObjectItemCaseSensitive(application_principal_provisioning_result_dtoJSON, "enrollmentCreated");
    if (enrollment_created) { 
    if(!cJSON_IsBool(enrollment_created))
    {
    goto end; //Bool
    }
    }


    application_principal_provisioning_result_dto_local_var = application_principal_provisioning_result_dto_create (
        principal_id && !cJSON_IsNull(principal_id) ? strdup(principal_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        principal_created ? principal_created->valueint : 0,
        enrollment_created ? enrollment_created->valueint : 0
        );

    return application_principal_provisioning_result_dto_local_var;
end:
    return NULL;

}
