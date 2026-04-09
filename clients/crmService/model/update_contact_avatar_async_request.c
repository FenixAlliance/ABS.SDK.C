#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_contact_avatar_async_request.h"



update_contact_avatar_async_request_t *update_contact_avatar_async_request_create(
    binary_t* avatar
    ) {
    update_contact_avatar_async_request_t *update_contact_avatar_async_request_local_var = malloc(sizeof(update_contact_avatar_async_request_t));
    if (!update_contact_avatar_async_request_local_var) {
        return NULL;
    }
    update_contact_avatar_async_request_local_var->avatar = avatar;

    return update_contact_avatar_async_request_local_var;
}


void update_contact_avatar_async_request_free(update_contact_avatar_async_request_t *update_contact_avatar_async_request) {
    if(NULL == update_contact_avatar_async_request){
        return ;
    }
    listEntry_t *listEntry;
    if (update_contact_avatar_async_request->avatar) {
        free(update_contact_avatar_async_request->avatar->data);
        update_contact_avatar_async_request->avatar = NULL;
    }
    free(update_contact_avatar_async_request);
}

cJSON *update_contact_avatar_async_request_convertToJSON(update_contact_avatar_async_request_t *update_contact_avatar_async_request) {
    cJSON *item = cJSON_CreateObject();

    // update_contact_avatar_async_request->avatar
    if(update_contact_avatar_async_request->avatar) {
    char* encoded_str_avatar = base64encode(update_contact_avatar_async_request->avatar->data,update_contact_avatar_async_request->avatar->len);
    if(cJSON_AddStringToObject(item, "avatar", encoded_str_avatar) == NULL) {
    goto fail; //Binary
    }
    free (encoded_str_avatar);
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_contact_avatar_async_request_t *update_contact_avatar_async_request_parseFromJSON(cJSON *update_contact_avatar_async_requestJSON){

    update_contact_avatar_async_request_t *update_contact_avatar_async_request_local_var = NULL;

    // update_contact_avatar_async_request->avatar
    cJSON *avatar = cJSON_GetObjectItemCaseSensitive(update_contact_avatar_async_requestJSON, "avatar");
    binary_t* decoded_str_avatar = malloc(sizeof(struct binary_t));
    if (avatar) { 
    if(!cJSON_IsString(avatar))
    {
    goto end; //Binary
    }
    decoded_str_avatar->data = base64decode(avatar->valuestring, strlen(avatar->valuestring), &decoded_str_avatar->len);
    if (!decoded_str_avatar->data) {
        goto end;
    }
    }


    update_contact_avatar_async_request_local_var = update_contact_avatar_async_request_create (
        avatar ? decoded_str_avatar : NULL
        );

    return update_contact_avatar_async_request_local_var;
end:
    return NULL;

}
