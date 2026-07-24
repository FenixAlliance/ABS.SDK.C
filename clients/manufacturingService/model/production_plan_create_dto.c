#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "production_plan_create_dto.h"



production_plan_create_dto_t *production_plan_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
    ) {
    production_plan_create_dto_t *production_plan_create_dto_local_var = malloc(sizeof(production_plan_create_dto_t));
    if (!production_plan_create_dto_local_var) {
        return NULL;
    }
    production_plan_create_dto_local_var->id = id;
    production_plan_create_dto_local_var->timestamp = timestamp;
    production_plan_create_dto_local_var->title = title;
    production_plan_create_dto_local_var->description = description;

    return production_plan_create_dto_local_var;
}


void production_plan_create_dto_free(production_plan_create_dto_t *production_plan_create_dto) {
    if(NULL == production_plan_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (production_plan_create_dto->id) {
        free(production_plan_create_dto->id);
        production_plan_create_dto->id = NULL;
    }
    if (production_plan_create_dto->timestamp) {
        free(production_plan_create_dto->timestamp);
        production_plan_create_dto->timestamp = NULL;
    }
    if (production_plan_create_dto->title) {
        free(production_plan_create_dto->title);
        production_plan_create_dto->title = NULL;
    }
    if (production_plan_create_dto->description) {
        free(production_plan_create_dto->description);
        production_plan_create_dto->description = NULL;
    }
    free(production_plan_create_dto);
}

cJSON *production_plan_create_dto_convertToJSON(production_plan_create_dto_t *production_plan_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // production_plan_create_dto->id
    if(production_plan_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", production_plan_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_create_dto->timestamp
    if(production_plan_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", production_plan_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // production_plan_create_dto->title
    if (!production_plan_create_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", production_plan_create_dto->title) == NULL) {
    goto fail; //String
    }


    // production_plan_create_dto->description
    if(production_plan_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", production_plan_create_dto->description) == NULL) {
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

production_plan_create_dto_t *production_plan_create_dto_parseFromJSON(cJSON *production_plan_create_dtoJSON){

    production_plan_create_dto_t *production_plan_create_dto_local_var = NULL;

    // production_plan_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(production_plan_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // production_plan_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(production_plan_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // production_plan_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(production_plan_create_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // production_plan_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(production_plan_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    production_plan_create_dto_local_var = production_plan_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return production_plan_create_dto_local_var;
end:
    return NULL;

}
