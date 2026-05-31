#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_type_create_dto.h"



employee_type_create_dto_t *employee_type_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    employee_type_create_dto_t *employee_type_create_dto_local_var = malloc(sizeof(employee_type_create_dto_t));
    if (!employee_type_create_dto_local_var) {
        return NULL;
    }
    employee_type_create_dto_local_var->id = id;
    employee_type_create_dto_local_var->timestamp = timestamp;
    employee_type_create_dto_local_var->name = name;
    employee_type_create_dto_local_var->description = description;

    return employee_type_create_dto_local_var;
}


void employee_type_create_dto_free(employee_type_create_dto_t *employee_type_create_dto) {
    if(NULL == employee_type_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_type_create_dto->id) {
        free(employee_type_create_dto->id);
        employee_type_create_dto->id = NULL;
    }
    if (employee_type_create_dto->timestamp) {
        free(employee_type_create_dto->timestamp);
        employee_type_create_dto->timestamp = NULL;
    }
    if (employee_type_create_dto->name) {
        free(employee_type_create_dto->name);
        employee_type_create_dto->name = NULL;
    }
    if (employee_type_create_dto->description) {
        free(employee_type_create_dto->description);
        employee_type_create_dto->description = NULL;
    }
    free(employee_type_create_dto);
}

cJSON *employee_type_create_dto_convertToJSON(employee_type_create_dto_t *employee_type_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_type_create_dto->id
    if(employee_type_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", employee_type_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_create_dto->timestamp
    if(employee_type_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_type_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // employee_type_create_dto->name
    if(employee_type_create_dto->name) {
    if(cJSON_AddStringToObject(item, "name", employee_type_create_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_create_dto->description
    if(employee_type_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", employee_type_create_dto->description) == NULL) {
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

employee_type_create_dto_t *employee_type_create_dto_parseFromJSON(cJSON *employee_type_create_dtoJSON){

    employee_type_create_dto_t *employee_type_create_dto_local_var = NULL;

    // employee_type_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(employee_type_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // employee_type_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_type_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // employee_type_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(employee_type_create_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // employee_type_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(employee_type_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    employee_type_create_dto_local_var = employee_type_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return employee_type_create_dto_local_var;
end:
    return NULL;

}
