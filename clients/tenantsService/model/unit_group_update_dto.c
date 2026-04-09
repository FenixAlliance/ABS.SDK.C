#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_group_update_dto.h"



unit_group_update_dto_t *unit_group_update_dto_create(
    char *name,
    char *description
    ) {
    unit_group_update_dto_t *unit_group_update_dto_local_var = malloc(sizeof(unit_group_update_dto_t));
    if (!unit_group_update_dto_local_var) {
        return NULL;
    }
    unit_group_update_dto_local_var->name = name;
    unit_group_update_dto_local_var->description = description;

    return unit_group_update_dto_local_var;
}


void unit_group_update_dto_free(unit_group_update_dto_t *unit_group_update_dto) {
    if(NULL == unit_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_group_update_dto->name) {
        free(unit_group_update_dto->name);
        unit_group_update_dto->name = NULL;
    }
    if (unit_group_update_dto->description) {
        free(unit_group_update_dto->description);
        unit_group_update_dto->description = NULL;
    }
    free(unit_group_update_dto);
}

cJSON *unit_group_update_dto_convertToJSON(unit_group_update_dto_t *unit_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_group_update_dto->name
    if(unit_group_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", unit_group_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_update_dto->description
    if(unit_group_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", unit_group_update_dto->description) == NULL) {
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

unit_group_update_dto_t *unit_group_update_dto_parseFromJSON(cJSON *unit_group_update_dtoJSON){

    unit_group_update_dto_t *unit_group_update_dto_local_var = NULL;

    // unit_group_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_group_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // unit_group_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(unit_group_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    unit_group_update_dto_local_var = unit_group_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return unit_group_update_dto_local_var;
end:
    return NULL;

}
