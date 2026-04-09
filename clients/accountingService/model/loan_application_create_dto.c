#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_application_create_dto.h"



loan_application_create_dto_t *loan_application_create_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id
    ) {
    loan_application_create_dto_t *loan_application_create_dto_local_var = malloc(sizeof(loan_application_create_dto_t));
    if (!loan_application_create_dto_local_var) {
        return NULL;
    }
    loan_application_create_dto_local_var->id = id;
    loan_application_create_dto_local_var->timestamp = timestamp;
    loan_application_create_dto_local_var->tenant_id = tenant_id;
    loan_application_create_dto_local_var->enrollment_id = enrollment_id;

    return loan_application_create_dto_local_var;
}


void loan_application_create_dto_free(loan_application_create_dto_t *loan_application_create_dto) {
    if(NULL == loan_application_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_application_create_dto->id) {
        free(loan_application_create_dto->id);
        loan_application_create_dto->id = NULL;
    }
    if (loan_application_create_dto->timestamp) {
        free(loan_application_create_dto->timestamp);
        loan_application_create_dto->timestamp = NULL;
    }
    if (loan_application_create_dto->tenant_id) {
        free(loan_application_create_dto->tenant_id);
        loan_application_create_dto->tenant_id = NULL;
    }
    if (loan_application_create_dto->enrollment_id) {
        free(loan_application_create_dto->enrollment_id);
        loan_application_create_dto->enrollment_id = NULL;
    }
    free(loan_application_create_dto);
}

cJSON *loan_application_create_dto_convertToJSON(loan_application_create_dto_t *loan_application_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_application_create_dto->id
    if(loan_application_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_application_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_create_dto->timestamp
    if(loan_application_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_application_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_application_create_dto->tenant_id
    if(loan_application_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", loan_application_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_application_create_dto->enrollment_id
    if(loan_application_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", loan_application_create_dto->enrollment_id) == NULL) {
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

loan_application_create_dto_t *loan_application_create_dto_parseFromJSON(cJSON *loan_application_create_dtoJSON){

    loan_application_create_dto_t *loan_application_create_dto_local_var = NULL;

    // loan_application_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_application_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_application_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // loan_application_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(loan_application_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    loan_application_create_dto_local_var = loan_application_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return loan_application_create_dto_local_var;
end:
    return NULL;

}
