#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_type_update_dto.h"



asset_type_update_dto_t *asset_type_update_dto_create(
    char *name,
    char *description
    ) {
    asset_type_update_dto_t *asset_type_update_dto_local_var = malloc(sizeof(asset_type_update_dto_t));
    if (!asset_type_update_dto_local_var) {
        return NULL;
    }
    asset_type_update_dto_local_var->name = name;
    asset_type_update_dto_local_var->description = description;

    return asset_type_update_dto_local_var;
}


void asset_type_update_dto_free(asset_type_update_dto_t *asset_type_update_dto) {
    if(NULL == asset_type_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_type_update_dto->name) {
        free(asset_type_update_dto->name);
        asset_type_update_dto->name = NULL;
    }
    if (asset_type_update_dto->description) {
        free(asset_type_update_dto->description);
        asset_type_update_dto->description = NULL;
    }
    free(asset_type_update_dto);
}

cJSON *asset_type_update_dto_convertToJSON(asset_type_update_dto_t *asset_type_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_type_update_dto->name
    if(asset_type_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", asset_type_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // asset_type_update_dto->description
    if(asset_type_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", asset_type_update_dto->description) == NULL) {
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

asset_type_update_dto_t *asset_type_update_dto_parseFromJSON(cJSON *asset_type_update_dtoJSON){

    asset_type_update_dto_t *asset_type_update_dto_local_var = NULL;

    // asset_type_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(asset_type_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // asset_type_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(asset_type_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    asset_type_update_dto_local_var = asset_type_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return asset_type_update_dto_local_var;
end:
    return NULL;

}
