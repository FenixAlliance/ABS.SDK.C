#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "expense_type_dto.h"



expense_type_dto_t *expense_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int enabled,
    char *tenant_id,
    char *enrollment_id
    ) {
    expense_type_dto_t *expense_type_dto_local_var = malloc(sizeof(expense_type_dto_t));
    if (!expense_type_dto_local_var) {
        return NULL;
    }
    expense_type_dto_local_var->id = id;
    expense_type_dto_local_var->timestamp = timestamp;
    expense_type_dto_local_var->name = name;
    expense_type_dto_local_var->enabled = enabled;
    expense_type_dto_local_var->tenant_id = tenant_id;
    expense_type_dto_local_var->enrollment_id = enrollment_id;

    return expense_type_dto_local_var;
}


void expense_type_dto_free(expense_type_dto_t *expense_type_dto) {
    if(NULL == expense_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (expense_type_dto->id) {
        free(expense_type_dto->id);
        expense_type_dto->id = NULL;
    }
    if (expense_type_dto->timestamp) {
        free(expense_type_dto->timestamp);
        expense_type_dto->timestamp = NULL;
    }
    if (expense_type_dto->name) {
        free(expense_type_dto->name);
        expense_type_dto->name = NULL;
    }
    if (expense_type_dto->tenant_id) {
        free(expense_type_dto->tenant_id);
        expense_type_dto->tenant_id = NULL;
    }
    if (expense_type_dto->enrollment_id) {
        free(expense_type_dto->enrollment_id);
        expense_type_dto->enrollment_id = NULL;
    }
    free(expense_type_dto);
}

cJSON *expense_type_dto_convertToJSON(expense_type_dto_t *expense_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // expense_type_dto->id
    if(expense_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", expense_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto->timestamp
    if(expense_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", expense_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // expense_type_dto->name
    if(expense_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", expense_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto->enabled
    if(expense_type_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", expense_type_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // expense_type_dto->tenant_id
    if(expense_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", expense_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // expense_type_dto->enrollment_id
    if(expense_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", expense_type_dto->enrollment_id) == NULL) {
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

expense_type_dto_t *expense_type_dto_parseFromJSON(cJSON *expense_type_dtoJSON){

    expense_type_dto_t *expense_type_dto_local_var = NULL;

    // expense_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // expense_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // expense_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // expense_type_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // expense_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // expense_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(expense_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    expense_type_dto_local_var = expense_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return expense_type_dto_local_var;
end:
    return NULL;

}
