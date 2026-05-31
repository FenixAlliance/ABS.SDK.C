#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_bundle_update_dto.h"



item_bundle_update_dto_t *item_bundle_update_dto_create(
    char *name,
    char *code,
    char *description,
    int disabled
    ) {
    item_bundle_update_dto_t *item_bundle_update_dto_local_var = malloc(sizeof(item_bundle_update_dto_t));
    if (!item_bundle_update_dto_local_var) {
        return NULL;
    }
    item_bundle_update_dto_local_var->name = name;
    item_bundle_update_dto_local_var->code = code;
    item_bundle_update_dto_local_var->description = description;
    item_bundle_update_dto_local_var->disabled = disabled;

    return item_bundle_update_dto_local_var;
}


void item_bundle_update_dto_free(item_bundle_update_dto_t *item_bundle_update_dto) {
    if(NULL == item_bundle_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_bundle_update_dto->name) {
        free(item_bundle_update_dto->name);
        item_bundle_update_dto->name = NULL;
    }
    if (item_bundle_update_dto->code) {
        free(item_bundle_update_dto->code);
        item_bundle_update_dto->code = NULL;
    }
    if (item_bundle_update_dto->description) {
        free(item_bundle_update_dto->description);
        item_bundle_update_dto->description = NULL;
    }
    free(item_bundle_update_dto);
}

cJSON *item_bundle_update_dto_convertToJSON(item_bundle_update_dto_t *item_bundle_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_bundle_update_dto->name
    if (!item_bundle_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_bundle_update_dto->name) == NULL) {
    goto fail; //String
    }


    // item_bundle_update_dto->code
    if(item_bundle_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", item_bundle_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // item_bundle_update_dto->description
    if(item_bundle_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_bundle_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_bundle_update_dto->disabled
    if(item_bundle_update_dto->disabled) {
    if(cJSON_AddBoolToObject(item, "disabled", item_bundle_update_dto->disabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_bundle_update_dto_t *item_bundle_update_dto_parseFromJSON(cJSON *item_bundle_update_dtoJSON){

    item_bundle_update_dto_t *item_bundle_update_dto_local_var = NULL;

    // item_bundle_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_bundle_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_bundle_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(item_bundle_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // item_bundle_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_bundle_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_bundle_update_dto->disabled
    cJSON *disabled = cJSON_GetObjectItemCaseSensitive(item_bundle_update_dtoJSON, "disabled");
    if (disabled) { 
    if(!cJSON_IsBool(disabled))
    {
    goto end; //Bool
    }
    }


    item_bundle_update_dto_local_var = item_bundle_update_dto_create (
        strdup(name->valuestring),
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        disabled ? disabled->valueint : 0
        );

    return item_bundle_update_dto_local_var;
end:
    return NULL;

}
