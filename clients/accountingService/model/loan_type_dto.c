#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "loan_type_dto.h"



loan_type_dto_t *loan_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    loan_type_dto_t *loan_type_dto_local_var = malloc(sizeof(loan_type_dto_t));
    if (!loan_type_dto_local_var) {
        return NULL;
    }
    loan_type_dto_local_var->id = id;
    loan_type_dto_local_var->timestamp = timestamp;
    loan_type_dto_local_var->name = name;
    loan_type_dto_local_var->description = description;
    loan_type_dto_local_var->tenant_id = tenant_id;
    loan_type_dto_local_var->enrollment_id = enrollment_id;

    return loan_type_dto_local_var;
}


void loan_type_dto_free(loan_type_dto_t *loan_type_dto) {
    if(NULL == loan_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (loan_type_dto->id) {
        free(loan_type_dto->id);
        loan_type_dto->id = NULL;
    }
    if (loan_type_dto->timestamp) {
        free(loan_type_dto->timestamp);
        loan_type_dto->timestamp = NULL;
    }
    if (loan_type_dto->name) {
        free(loan_type_dto->name);
        loan_type_dto->name = NULL;
    }
    if (loan_type_dto->description) {
        free(loan_type_dto->description);
        loan_type_dto->description = NULL;
    }
    if (loan_type_dto->tenant_id) {
        free(loan_type_dto->tenant_id);
        loan_type_dto->tenant_id = NULL;
    }
    if (loan_type_dto->enrollment_id) {
        free(loan_type_dto->enrollment_id);
        loan_type_dto->enrollment_id = NULL;
    }
    free(loan_type_dto);
}

cJSON *loan_type_dto_convertToJSON(loan_type_dto_t *loan_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // loan_type_dto->id
    if(loan_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", loan_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // loan_type_dto->timestamp
    if(loan_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", loan_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // loan_type_dto->name
    if(loan_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", loan_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // loan_type_dto->description
    if(loan_type_dto->description) {
    if(cJSON_AddStringToObject(item, "description", loan_type_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // loan_type_dto->tenant_id
    if(loan_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", loan_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // loan_type_dto->enrollment_id
    if(loan_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", loan_type_dto->enrollment_id) == NULL) {
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

loan_type_dto_t *loan_type_dto_parseFromJSON(cJSON *loan_type_dtoJSON){

    loan_type_dto_t *loan_type_dto_local_var = NULL;

    // loan_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // loan_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // loan_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // loan_type_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // loan_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // loan_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(loan_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    loan_type_dto_local_var = loan_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return loan_type_dto_local_var;
end:
    return NULL;

}
