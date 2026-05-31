#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_area_create_dto.h"



marketing_area_create_dto_t *marketing_area_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description
    ) {
    marketing_area_create_dto_t *marketing_area_create_dto_local_var = malloc(sizeof(marketing_area_create_dto_t));
    if (!marketing_area_create_dto_local_var) {
        return NULL;
    }
    marketing_area_create_dto_local_var->id = id;
    marketing_area_create_dto_local_var->timestamp = timestamp;
    marketing_area_create_dto_local_var->name = name;
    marketing_area_create_dto_local_var->description = description;

    return marketing_area_create_dto_local_var;
}


void marketing_area_create_dto_free(marketing_area_create_dto_t *marketing_area_create_dto) {
    if(NULL == marketing_area_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_area_create_dto->id) {
        free(marketing_area_create_dto->id);
        marketing_area_create_dto->id = NULL;
    }
    if (marketing_area_create_dto->timestamp) {
        free(marketing_area_create_dto->timestamp);
        marketing_area_create_dto->timestamp = NULL;
    }
    if (marketing_area_create_dto->name) {
        free(marketing_area_create_dto->name);
        marketing_area_create_dto->name = NULL;
    }
    if (marketing_area_create_dto->description) {
        free(marketing_area_create_dto->description);
        marketing_area_create_dto->description = NULL;
    }
    free(marketing_area_create_dto);
}

cJSON *marketing_area_create_dto_convertToJSON(marketing_area_create_dto_t *marketing_area_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_area_create_dto->id
    if(marketing_area_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", marketing_area_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // marketing_area_create_dto->timestamp
    if(marketing_area_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", marketing_area_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // marketing_area_create_dto->name
    if (!marketing_area_create_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", marketing_area_create_dto->name) == NULL) {
    goto fail; //String
    }


    // marketing_area_create_dto->description
    if(marketing_area_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", marketing_area_create_dto->description) == NULL) {
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

marketing_area_create_dto_t *marketing_area_create_dto_parseFromJSON(cJSON *marketing_area_create_dtoJSON){

    marketing_area_create_dto_t *marketing_area_create_dto_local_var = NULL;

    // marketing_area_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(marketing_area_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // marketing_area_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(marketing_area_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // marketing_area_create_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(marketing_area_create_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // marketing_area_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(marketing_area_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    marketing_area_create_dto_local_var = marketing_area_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return marketing_area_create_dto_local_var;
end:
    return NULL;

}
