#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wish_list_update_dto.h"



wish_list_update_dto_t *wish_list_update_dto_create(
    char *title,
    char *description,
    int _public
    ) {
    wish_list_update_dto_t *wish_list_update_dto_local_var = malloc(sizeof(wish_list_update_dto_t));
    if (!wish_list_update_dto_local_var) {
        return NULL;
    }
    wish_list_update_dto_local_var->title = title;
    wish_list_update_dto_local_var->description = description;
    wish_list_update_dto_local_var->_public = _public;

    return wish_list_update_dto_local_var;
}


void wish_list_update_dto_free(wish_list_update_dto_t *wish_list_update_dto) {
    if(NULL == wish_list_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wish_list_update_dto->title) {
        free(wish_list_update_dto->title);
        wish_list_update_dto->title = NULL;
    }
    if (wish_list_update_dto->description) {
        free(wish_list_update_dto->description);
        wish_list_update_dto->description = NULL;
    }
    free(wish_list_update_dto);
}

cJSON *wish_list_update_dto_convertToJSON(wish_list_update_dto_t *wish_list_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // wish_list_update_dto->title
    if (!wish_list_update_dto->title) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "title", wish_list_update_dto->title) == NULL) {
    goto fail; //String
    }


    // wish_list_update_dto->description
    if(wish_list_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", wish_list_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_update_dto->_public
    if(wish_list_update_dto->_public) {
    if(cJSON_AddBoolToObject(item, "public", wish_list_update_dto->_public) == NULL) {
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

wish_list_update_dto_t *wish_list_update_dto_parseFromJSON(cJSON *wish_list_update_dtoJSON){

    wish_list_update_dto_t *wish_list_update_dto_local_var = NULL;

    // wish_list_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(wish_list_update_dtoJSON, "title");
    if (!title) {
        goto end;
    }

    
    if(!cJSON_IsString(title))
    {
    goto end; //String
    }

    // wish_list_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(wish_list_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // wish_list_update_dto->_public
    cJSON *_public = cJSON_GetObjectItemCaseSensitive(wish_list_update_dtoJSON, "public");
    if (_public) { 
    if(!cJSON_IsBool(_public))
    {
    goto end; //Bool
    }
    }


    wish_list_update_dto_local_var = wish_list_update_dto_create (
        strdup(title->valuestring),
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        _public ? _public->valueint : 0
        );

    return wish_list_update_dto_local_var;
end:
    return NULL;

}
