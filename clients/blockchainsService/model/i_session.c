#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "i_session.h"



i_session_t *i_session_create(
    int is_available,
    char *id,
    list_t *keys
    ) {
    i_session_t *i_session_local_var = malloc(sizeof(i_session_t));
    if (!i_session_local_var) {
        return NULL;
    }
    i_session_local_var->is_available = is_available;
    i_session_local_var->id = id;
    i_session_local_var->keys = keys;

    return i_session_local_var;
}


void i_session_free(i_session_t *i_session) {
    if(NULL == i_session){
        return ;
    }
    listEntry_t *listEntry;
    if (i_session->id) {
        free(i_session->id);
        i_session->id = NULL;
    }
    if (i_session->keys) {
        list_ForEach(listEntry, i_session->keys) {
            free(listEntry->data);
        }
        list_freeList(i_session->keys);
        i_session->keys = NULL;
    }
    free(i_session);
}

cJSON *i_session_convertToJSON(i_session_t *i_session) {
    cJSON *item = cJSON_CreateObject();

    // i_session->is_available
    if(i_session->is_available) {
    if(cJSON_AddBoolToObject(item, "isAvailable", i_session->is_available) == NULL) {
    goto fail; //Bool
    }
    }


    // i_session->id
    if(i_session->id) {
    if(cJSON_AddStringToObject(item, "id", i_session->id) == NULL) {
    goto fail; //String
    }
    }


    // i_session->keys
    if(i_session->keys) {
    cJSON *keys = cJSON_AddArrayToObject(item, "keys");
    if(keys == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *keysListEntry;
    list_ForEach(keysListEntry, i_session->keys) {
    if(cJSON_AddStringToObject(keys, "", (char*)keysListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

i_session_t *i_session_parseFromJSON(cJSON *i_sessionJSON){

    i_session_t *i_session_local_var = NULL;

    // define the local list for i_session->keys
    list_t *keysList = NULL;

    // i_session->is_available
    cJSON *is_available = cJSON_GetObjectItemCaseSensitive(i_sessionJSON, "isAvailable");
    if (is_available) { 
    if(!cJSON_IsBool(is_available))
    {
    goto end; //Bool
    }
    }

    // i_session->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(i_sessionJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // i_session->keys
    cJSON *keys = cJSON_GetObjectItemCaseSensitive(i_sessionJSON, "keys");
    if (keys) { 
    cJSON *keys_local = NULL;
    if(!cJSON_IsArray(keys)) {
        goto end;//primitive container
    }
    keysList = list_createList();

    cJSON_ArrayForEach(keys_local, keys)
    {
        if(!cJSON_IsString(keys_local))
        {
            goto end;
        }
        list_addElement(keysList , strdup(keys_local->valuestring));
    }
    }


    i_session_local_var = i_session_create (
        is_available ? is_available->valueint : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        keys ? keysList : NULL
        );

    return i_session_local_var;
end:
    if (keysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, keysList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(keysList);
        keysList = NULL;
    }
    return NULL;

}
