#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_tag_update_dto.h"



item_tag_update_dto_t *item_tag_update_dto_create(
    char *title,
    char *description
    ) {
    item_tag_update_dto_t *item_tag_update_dto_local_var = malloc(sizeof(item_tag_update_dto_t));
    if (!item_tag_update_dto_local_var) {
        return NULL;
    }
    item_tag_update_dto_local_var->title = title;
    item_tag_update_dto_local_var->description = description;

    return item_tag_update_dto_local_var;
}


void item_tag_update_dto_free(item_tag_update_dto_t *item_tag_update_dto) {
    if(NULL == item_tag_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_tag_update_dto->title) {
        free(item_tag_update_dto->title);
        item_tag_update_dto->title = NULL;
    }
    if (item_tag_update_dto->description) {
        free(item_tag_update_dto->description);
        item_tag_update_dto->description = NULL;
    }
    free(item_tag_update_dto);
}

cJSON *item_tag_update_dto_convertToJSON(item_tag_update_dto_t *item_tag_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_tag_update_dto->title
    if (!item_tag_update_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", item_tag_update_dto->title) == NULL) {
    goto fail; //String
    }


    // item_tag_update_dto->description
    if(item_tag_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_tag_update_dto->description) == NULL) {
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

item_tag_update_dto_t *item_tag_update_dto_parseFromJSON(cJSON *item_tag_update_dtoJSON){

    item_tag_update_dto_t *item_tag_update_dto_local_var = NULL;

    // item_tag_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(item_tag_update_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // item_tag_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_tag_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    item_tag_update_dto_local_var = item_tag_update_dto_create (
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return item_tag_update_dto_local_var;
end:
    return NULL;

}
