#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "production_plan_update_dto.h"



production_plan_update_dto_t *production_plan_update_dto_create(
    char *title,
    char *description
    ) {
    production_plan_update_dto_t *production_plan_update_dto_local_var = malloc(sizeof(production_plan_update_dto_t));
    if (!production_plan_update_dto_local_var) {
        return NULL;
    }
    production_plan_update_dto_local_var->title = title;
    production_plan_update_dto_local_var->description = description;

    return production_plan_update_dto_local_var;
}


void production_plan_update_dto_free(production_plan_update_dto_t *production_plan_update_dto) {
    if(NULL == production_plan_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (production_plan_update_dto->title) {
        free(production_plan_update_dto->title);
        production_plan_update_dto->title = NULL;
    }
    if (production_plan_update_dto->description) {
        free(production_plan_update_dto->description);
        production_plan_update_dto->description = NULL;
    }
    free(production_plan_update_dto);
}

cJSON *production_plan_update_dto_convertToJSON(production_plan_update_dto_t *production_plan_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // production_plan_update_dto->title
    if(production_plan_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", production_plan_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // production_plan_update_dto->description
    if(production_plan_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", production_plan_update_dto->description) == NULL) {
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

production_plan_update_dto_t *production_plan_update_dto_parseFromJSON(cJSON *production_plan_update_dtoJSON){

    production_plan_update_dto_t *production_plan_update_dto_local_var = NULL;

    // production_plan_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(production_plan_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // production_plan_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(production_plan_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    production_plan_update_dto_local_var = production_plan_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return production_plan_update_dto_local_var;
end:
    return NULL;

}
