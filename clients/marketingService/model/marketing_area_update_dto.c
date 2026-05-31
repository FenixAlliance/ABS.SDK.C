#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "marketing_area_update_dto.h"



marketing_area_update_dto_t *marketing_area_update_dto_create(
    char *name,
    char *description
    ) {
    marketing_area_update_dto_t *marketing_area_update_dto_local_var = malloc(sizeof(marketing_area_update_dto_t));
    if (!marketing_area_update_dto_local_var) {
        return NULL;
    }
    marketing_area_update_dto_local_var->name = name;
    marketing_area_update_dto_local_var->description = description;

    return marketing_area_update_dto_local_var;
}


void marketing_area_update_dto_free(marketing_area_update_dto_t *marketing_area_update_dto) {
    if(NULL == marketing_area_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (marketing_area_update_dto->name) {
        free(marketing_area_update_dto->name);
        marketing_area_update_dto->name = NULL;
    }
    if (marketing_area_update_dto->description) {
        free(marketing_area_update_dto->description);
        marketing_area_update_dto->description = NULL;
    }
    free(marketing_area_update_dto);
}

cJSON *marketing_area_update_dto_convertToJSON(marketing_area_update_dto_t *marketing_area_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // marketing_area_update_dto->name
    if(marketing_area_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", marketing_area_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // marketing_area_update_dto->description
    if(marketing_area_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", marketing_area_update_dto->description) == NULL) {
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

marketing_area_update_dto_t *marketing_area_update_dto_parseFromJSON(cJSON *marketing_area_update_dtoJSON){

    marketing_area_update_dto_t *marketing_area_update_dto_local_var = NULL;

    // marketing_area_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(marketing_area_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // marketing_area_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(marketing_area_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    marketing_area_update_dto_local_var = marketing_area_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return marketing_area_update_dto_local_var;
end:
    return NULL;

}
