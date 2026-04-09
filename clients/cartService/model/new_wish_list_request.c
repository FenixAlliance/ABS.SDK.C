#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "new_wish_list_request.h"



new_wish_list_request_t *new_wish_list_request_create(
    char *title,
    char *description,
    char *cart_id,
    int _public
    ) {
    new_wish_list_request_t *new_wish_list_request_local_var = malloc(sizeof(new_wish_list_request_t));
    if (!new_wish_list_request_local_var) {
        return NULL;
    }
    new_wish_list_request_local_var->title = title;
    new_wish_list_request_local_var->description = description;
    new_wish_list_request_local_var->cart_id = cart_id;
    new_wish_list_request_local_var->_public = _public;

    return new_wish_list_request_local_var;
}


void new_wish_list_request_free(new_wish_list_request_t *new_wish_list_request) {
    if(NULL == new_wish_list_request){
        return ;
    }
    listEntry_t *listEntry;
    if (new_wish_list_request->title) {
        free(new_wish_list_request->title);
        new_wish_list_request->title = NULL;
    }
    if (new_wish_list_request->description) {
        free(new_wish_list_request->description);
        new_wish_list_request->description = NULL;
    }
    if (new_wish_list_request->cart_id) {
        free(new_wish_list_request->cart_id);
        new_wish_list_request->cart_id = NULL;
    }
    free(new_wish_list_request);
}

cJSON *new_wish_list_request_convertToJSON(new_wish_list_request_t *new_wish_list_request) {
    cJSON *item = cJSON_CreateObject();

    // new_wish_list_request->title
    if(new_wish_list_request->title) {
    if(cJSON_AddStringToObject(item, "title", new_wish_list_request->title) == NULL) {
    goto fail; //String
    }
    }


    // new_wish_list_request->description
    if(new_wish_list_request->description) {
    if(cJSON_AddStringToObject(item, "description", new_wish_list_request->description) == NULL) {
    goto fail; //String
    }
    }


    // new_wish_list_request->cart_id
    if(new_wish_list_request->cart_id) {
    if(cJSON_AddStringToObject(item, "cartID", new_wish_list_request->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // new_wish_list_request->_public
    if(new_wish_list_request->_public) {
    if(cJSON_AddBoolToObject(item, "public", new_wish_list_request->_public) == NULL) {
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

new_wish_list_request_t *new_wish_list_request_parseFromJSON(cJSON *new_wish_list_requestJSON){

    new_wish_list_request_t *new_wish_list_request_local_var = NULL;

    // new_wish_list_request->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(new_wish_list_requestJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // new_wish_list_request->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(new_wish_list_requestJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // new_wish_list_request->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(new_wish_list_requestJSON, "cartID");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // new_wish_list_request->_public
    cJSON *_public = cJSON_GetObjectItemCaseSensitive(new_wish_list_requestJSON, "public");
    if (_public) { 
    if(!cJSON_IsBool(_public))
    {
    goto end; //Bool
    }
    }


    new_wish_list_request_local_var = new_wish_list_request_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        _public ? _public->valueint : 0
        );

    return new_wish_list_request_local_var;
end:
    return NULL;

}
