#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wish_list_dto.h"



wish_list_dto_t *wish_list_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *cart_id,
    int _public
    ) {
    wish_list_dto_t *wish_list_dto_local_var = malloc(sizeof(wish_list_dto_t));
    if (!wish_list_dto_local_var) {
        return NULL;
    }
    wish_list_dto_local_var->id = id;
    wish_list_dto_local_var->timestamp = timestamp;
    wish_list_dto_local_var->title = title;
    wish_list_dto_local_var->description = description;
    wish_list_dto_local_var->cart_id = cart_id;
    wish_list_dto_local_var->_public = _public;

    return wish_list_dto_local_var;
}


void wish_list_dto_free(wish_list_dto_t *wish_list_dto) {
    if(NULL == wish_list_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (wish_list_dto->id) {
        free(wish_list_dto->id);
        wish_list_dto->id = NULL;
    }
    if (wish_list_dto->timestamp) {
        free(wish_list_dto->timestamp);
        wish_list_dto->timestamp = NULL;
    }
    if (wish_list_dto->title) {
        free(wish_list_dto->title);
        wish_list_dto->title = NULL;
    }
    if (wish_list_dto->description) {
        free(wish_list_dto->description);
        wish_list_dto->description = NULL;
    }
    if (wish_list_dto->cart_id) {
        free(wish_list_dto->cart_id);
        wish_list_dto->cart_id = NULL;
    }
    free(wish_list_dto);
}

cJSON *wish_list_dto_convertToJSON(wish_list_dto_t *wish_list_dto) {
    cJSON *item = cJSON_CreateObject();

    // wish_list_dto->id
    if(wish_list_dto->id) {
    if(cJSON_AddStringToObject(item, "id", wish_list_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_dto->timestamp
    if(wish_list_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", wish_list_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // wish_list_dto->title
    if(wish_list_dto->title) {
    if(cJSON_AddStringToObject(item, "title", wish_list_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_dto->description
    if(wish_list_dto->description) {
    if(cJSON_AddStringToObject(item, "description", wish_list_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_dto->cart_id
    if(wish_list_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", wish_list_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // wish_list_dto->_public
    if(wish_list_dto->_public) {
    if(cJSON_AddBoolToObject(item, "public", wish_list_dto->_public) == NULL) {
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

wish_list_dto_t *wish_list_dto_parseFromJSON(cJSON *wish_list_dtoJSON){

    wish_list_dto_t *wish_list_dto_local_var = NULL;

    // wish_list_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // wish_list_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // wish_list_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // wish_list_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // wish_list_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // wish_list_dto->_public
    cJSON *_public = cJSON_GetObjectItemCaseSensitive(wish_list_dtoJSON, "public");
    if (_public) { 
    if(!cJSON_IsBool(_public))
    {
    goto end; //Bool
    }
    }


    wish_list_dto_local_var = wish_list_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        _public ? _public->valueint : 0
        );

    return wish_list_dto_local_var;
end:
    return NULL;

}
