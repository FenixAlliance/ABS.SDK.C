#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_application_update_dto.h"



loan_application_update_dto_t *loan_application_update_dto_create(
    char *tenant_id,
    char *enrollment_id
    ) {
    loan_application_update_dto_t *loan_application_update_dto_local_var = malloc(sizeof(loan_application_update_dto_t));
    if (!loan_application_update_dto_local_var) {
        return NULL;
    }
    loan_application_update_dto_local_var->tenant_id = tenant_id;
    loan_application_update_dto_local_var->enrollment_id = enrollment_id;

    return loan_application_update_dto_local_var;
}


void loan_application_update_dto_free(loan_application_update_dto_t *loan_application_update_dto) {
    if(NULL == loan_application_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_application_update_dto->tenant_id) {
        free(loan_application_update_dto->tenant_id);
        loan_application_update_dto->tenant_id = NULL;
    }
    if (loan_application_update_dto->enrollment_id) {
        free(loan_application_update_dto->enrollment_id);
        loan_application_update_dto->enrollment_id = NULL;
    }
    free(loan_application_update_dto);
}

cJSON *loan_application_update_dto_convertToJSON(loan_application_update_dto_t *loan_application_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_application_update_dto->tenant_id
    if(loan_application_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", loan_application_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_update_dto->enrollment_id
    if(loan_application_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", loan_application_update_dto->enrollment_id) == NULL) {
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

loan_application_update_dto_t *loan_application_update_dto_parseFromJSON(cJSON *loan_application_update_dtoJSON){

    loan_application_update_dto_t *loan_application_update_dto_local_var = NULL;

    // loan_application_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(loan_application_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // loan_application_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(loan_application_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    loan_application_update_dto_local_var = loan_application_update_dto_create (
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return loan_application_update_dto_local_var;
end:
    return NULL;

}
