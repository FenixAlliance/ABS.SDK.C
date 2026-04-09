#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_attribute_update_dto.h"



item_attribute_update_dto_t *item_attribute_update_dto_create(
    char *name,
    char *description
    ) {
    item_attribute_update_dto_t *item_attribute_update_dto_local_var = malloc(sizeof(item_attribute_update_dto_t));
    if (!item_attribute_update_dto_local_var) {
        return NULL;
    }
    item_attribute_update_dto_local_var->name = name;
    item_attribute_update_dto_local_var->description = description;

    return item_attribute_update_dto_local_var;
}


void item_attribute_update_dto_free(item_attribute_update_dto_t *item_attribute_update_dto) {
    if(NULL == item_attribute_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_attribute_update_dto->name) {
        free(item_attribute_update_dto->name);
        item_attribute_update_dto->name = NULL;
    }
    if (item_attribute_update_dto->description) {
        free(item_attribute_update_dto->description);
        item_attribute_update_dto->description = NULL;
    }
    free(item_attribute_update_dto);
}

cJSON *item_attribute_update_dto_convertToJSON(item_attribute_update_dto_t *item_attribute_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_attribute_update_dto->name
    if (!item_attribute_update_dto->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", item_attribute_update_dto->name) == NULL) {
    goto fail; //String
    }


    // item_attribute_update_dto->description
    if(item_attribute_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_attribute_update_dto->description) == NULL) {
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

item_attribute_update_dto_t *item_attribute_update_dto_parseFromJSON(cJSON *item_attribute_update_dtoJSON){

    item_attribute_update_dto_t *item_attribute_update_dto_local_var = NULL;

    // item_attribute_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_attribute_update_dtoJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // item_attribute_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_attribute_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    item_attribute_update_dto_local_var = item_attribute_update_dto_create (
        strdup(name->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return item_attribute_update_dto_local_var;
end:
    return NULL;

}
