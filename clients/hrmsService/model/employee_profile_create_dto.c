#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_profile_create_dto.h"



employee_profile_create_dto_t *employee_profile_create_dto_create(
    char *id,
    char *timestamp
    ) {
    employee_profile_create_dto_t *employee_profile_create_dto_local_var = malloc(sizeof(employee_profile_create_dto_t));
    if (!employee_profile_create_dto_local_var) {
        return NULL;
    }
    employee_profile_create_dto_local_var->id = id;
    employee_profile_create_dto_local_var->timestamp = timestamp;

    return employee_profile_create_dto_local_var;
}


void employee_profile_create_dto_free(employee_profile_create_dto_t *employee_profile_create_dto) {
    if(NULL == employee_profile_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_profile_create_dto->id) {
        free(employee_profile_create_dto->id);
        employee_profile_create_dto->id = NULL;
    }
    if (employee_profile_create_dto->timestamp) {
        free(employee_profile_create_dto->timestamp);
        employee_profile_create_dto->timestamp = NULL;
    }
    free(employee_profile_create_dto);
}

cJSON *employee_profile_create_dto_convertToJSON(employee_profile_create_dto_t *employee_profile_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_profile_create_dto->id
    if(employee_profile_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", employee_profile_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // employee_profile_create_dto->timestamp
    if(employee_profile_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", employee_profile_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

employee_profile_create_dto_t *employee_profile_create_dto_parseFromJSON(cJSON *employee_profile_create_dtoJSON){

    employee_profile_create_dto_t *employee_profile_create_dto_local_var = NULL;

    // employee_profile_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(employee_profile_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // employee_profile_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(employee_profile_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }


    employee_profile_create_dto_local_var = employee_profile_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL
        );

    return employee_profile_create_dto_local_var;
end:
    return NULL;

}
