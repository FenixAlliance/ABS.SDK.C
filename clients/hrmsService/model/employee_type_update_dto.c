#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_type_update_dto.h"



employee_type_update_dto_t *employee_type_update_dto_create(
    char *name,
    char *description
    ) {
    employee_type_update_dto_t *employee_type_update_dto_local_var = malloc(sizeof(employee_type_update_dto_t));
    if (!employee_type_update_dto_local_var) {
        return NULL;
    }
    employee_type_update_dto_local_var->name = name;
    employee_type_update_dto_local_var->description = description;

    return employee_type_update_dto_local_var;
}


void employee_type_update_dto_free(employee_type_update_dto_t *employee_type_update_dto) {
    if(NULL == employee_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (employee_type_update_dto->name) {
        free(employee_type_update_dto->name);
        employee_type_update_dto->name = NULL;
    }
    if (employee_type_update_dto->description) {
        free(employee_type_update_dto->description);
        employee_type_update_dto->description = NULL;
    }
    free(employee_type_update_dto);
}

cJSON *employee_type_update_dto_convertToJSON(employee_type_update_dto_t *employee_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // employee_type_update_dto->name
    if(employee_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", employee_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // employee_type_update_dto->description
    if(employee_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", employee_type_update_dto->description) == NULL) {
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

employee_type_update_dto_t *employee_type_update_dto_parseFromJSON(cJSON *employee_type_update_dtoJSON){

    employee_type_update_dto_t *employee_type_update_dto_local_var = NULL;

    // employee_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(employee_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // employee_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(employee_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    employee_type_update_dto_local_var = employee_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return employee_type_update_dto_local_var;
end:
    return NULL;

}
