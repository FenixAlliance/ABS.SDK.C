#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unit_group_create_dto.h"



unit_group_create_dto_t *unit_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    unit_group_create_dto_t *unit_group_create_dto_local_var = malloc(sizeof(unit_group_create_dto_t));
    if (!unit_group_create_dto_local_var) {
        return NULL;
    }
    unit_group_create_dto_local_var->id = id;
    unit_group_create_dto_local_var->timestamp = timestamp;
    unit_group_create_dto_local_var->name = name;
    unit_group_create_dto_local_var->description = description;

    return unit_group_create_dto_local_var;
}


void unit_group_create_dto_free(unit_group_create_dto_t *unit_group_create_dto) {
    if(NULL == unit_group_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (unit_group_create_dto->id) {
        free(unit_group_create_dto->id);
        unit_group_create_dto->id = NULL;
    }
    if (unit_group_create_dto->timestamp) {
        free(unit_group_create_dto->timestamp);
        unit_group_create_dto->timestamp = NULL;
    }
    if (unit_group_create_dto->name) {
        free(unit_group_create_dto->name);
        unit_group_create_dto->name = NULL;
    }
    if (unit_group_create_dto->description) {
        free(unit_group_create_dto->description);
        unit_group_create_dto->description = NULL;
    }
    free(unit_group_create_dto);
}

cJSON *unit_group_create_dto_convertToJSON(unit_group_create_dto_t *unit_group_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // unit_group_create_dto->id
    if(unit_group_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", unit_group_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // unit_group_create_dto->timestamp
    if(unit_group_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", unit_group_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // unit_group_create_dto->name
    if (!unit_group_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", unit_group_create_dto->name) == NULL) {
    goto fail; //String
    }


    // unit_group_create_dto->description
    if(unit_group_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", unit_group_create_dto->description) == NULL) {
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

unit_group_create_dto_t *unit_group_create_dto_parseFromJSON(cJSON *unit_group_create_dtoJSON){

    unit_group_create_dto_t *unit_group_create_dto_local_var = NULL;

    // unit_group_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(unit_group_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // unit_group_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(unit_group_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // unit_group_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(unit_group_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // unit_group_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(unit_group_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    unit_group_create_dto_local_var = unit_group_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return unit_group_create_dto_local_var;
end:
    return NULL;

}
