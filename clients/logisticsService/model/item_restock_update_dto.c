#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_restock_update_dto.h"



item_restock_update_dto_t *item_restock_update_dto_create(
    char *name,
    char *description
    ) {
    item_restock_update_dto_t *item_restock_update_dto_local_var = malloc(sizeof(item_restock_update_dto_t));
    if (!item_restock_update_dto_local_var) {
        return NULL;
    }
    item_restock_update_dto_local_var->name = name;
    item_restock_update_dto_local_var->description = description;

    return item_restock_update_dto_local_var;
}


void item_restock_update_dto_free(item_restock_update_dto_t *item_restock_update_dto) {
    if(NULL == item_restock_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_restock_update_dto->name) {
        free(item_restock_update_dto->name);
        item_restock_update_dto->name = NULL;
    }
    if (item_restock_update_dto->description) {
        free(item_restock_update_dto->description);
        item_restock_update_dto->description = NULL;
    }
    free(item_restock_update_dto);
}

cJSON *item_restock_update_dto_convertToJSON(item_restock_update_dto_t *item_restock_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_restock_update_dto->name
    if(item_restock_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", item_restock_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // item_restock_update_dto->description
    if(item_restock_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_restock_update_dto->description) == NULL) {
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

item_restock_update_dto_t *item_restock_update_dto_parseFromJSON(cJSON *item_restock_update_dtoJSON){

    item_restock_update_dto_t *item_restock_update_dto_local_var = NULL;

    // item_restock_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(item_restock_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // item_restock_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_restock_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    item_restock_update_dto_local_var = item_restock_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return item_restock_update_dto_local_var;
end:
    return NULL;

}
