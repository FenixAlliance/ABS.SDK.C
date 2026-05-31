#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_type_dto.h"



employee_type_dto_t *employee_type_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id
    ) {
    employee_type_dto_t *employee_type_dto_local_var = malloc(sizeof(employee_type_dto_t));
    if (!employee_type_dto_local_var) {
        return NULL;
    }
    employee_type_dto_local_var->id = id;
    employee_type_dto_local_var->timestamp = timestamp;
    employee_type_dto_local_var->name = name;
    employee_type_dto_local_var->description = description;
    employee_type_dto_local_var->tenant_id = tenant_id;
    employee_type_dto_local_var->enrollment_id = enrollment_id;

    return employee_type_dto_local_var;
}


void employee_type_dto_free(employee_type_dto_t *employee_type_dto) {
    if(NULL == employee_type_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_type_dto->id) {
        free(employee_type_dto->id);
        employee_type_dto->id = NULL;
    }
    if (employee_type_dto->timestamp) {
        free(employee_type_dto->timestamp);
        employee_type_dto->timestamp = NULL;
    }
    if (employee_type_dto->name) {
        free(employee_type_dto->name);
        employee_type_dto->name = NULL;
    }
    if (employee_type_dto->description) {
        free(employee_type_dto->description);
        employee_type_dto->description = NULL;
    }
    if (employee_type_dto->tenant_id) {
        free(employee_type_dto->tenant_id);
        employee_type_dto->tenant_id = NULL;
    }
    if (employee_type_dto->enrollment_id) {
        free(employee_type_dto->enrollment_id);
        employee_type_dto->enrollment_id = NULL;
    }
    free(employee_type_dto);
}

cJSON *employee_type_dto_convertToJSON(employee_type_dto_t *employee_type_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_type_dto->id
    if(employee_type_dto->id) {
    if(cJSON_AddStringToObject(item, "id", employee_type_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto->timestamp
    if(employee_type_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_type_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // employee_type_dto->name
    if(employee_type_dto->name) {
    if(cJSON_AddStringToObject(item, "name", employee_type_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto->description
    if(employee_type_dto->description) {
    if(cJSON_AddStringToObject(item, "description", employee_type_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto->tenant_id
    if(employee_type_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", employee_type_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_dto->enrollment_id
    if(employee_type_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", employee_type_dto->enrollment_id) == NULL) {
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

employee_type_dto_t *employee_type_dto_parseFromJSON(cJSON *employee_type_dtoJSON){

    employee_type_dto_t *employee_type_dto_local_var = NULL;

    // employee_type_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // employee_type_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // employee_type_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // employee_type_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // employee_type_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // employee_type_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(employee_type_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    employee_type_dto_local_var = employee_type_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return employee_type_dto_local_var;
end:
    return NULL;

}
