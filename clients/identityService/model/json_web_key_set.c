#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "json_web_key_set.h"



json_web_key_set_t *json_web_key_set_create(
    list_t *keys
    ) {
    json_web_key_set_t *json_web_key_set_local_var = malloc(sizeof(json_web_key_set_t));
    if (!json_web_key_set_local_var) {
        return NULL;
    }
    json_web_key_set_local_var->keys = keys;

    return json_web_key_set_local_var;
}


void json_web_key_set_free(json_web_key_set_t *json_web_key_set) {
    if(NULL == json_web_key_set){
        return ;
    }
    listEntry_t *listEntry;
    if (json_web_key_set->keys) {
        list_ForEach(listEntry, json_web_key_set->keys) {
            json_web_key_free(listEntry->data);
        }
        list_freeList(json_web_key_set->keys);
        json_web_key_set->keys = NULL;
    }
    free(json_web_key_set);
}

cJSON *json_web_key_set_convertToJSON(json_web_key_set_t *json_web_key_set) {
    cJSON *item = cJSON_CreateObject();

    // json_web_key_set->keys
    if(json_web_key_set->keys) {
    cJSON *keys = cJSON_AddArrayToObject(item, "keys");
    if(keys == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *keysListEntry;
    if (json_web_key_set->keys) {
    list_ForEach(keysListEntry, json_web_key_set->keys) {
    cJSON *itemLocal = json_web_key_convertToJSON(keysListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(keys, itemLocal);
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

json_web_key_set_t *json_web_key_set_parseFromJSON(cJSON *json_web_key_setJSON){

    json_web_key_set_t *json_web_key_set_local_var = NULL;

    // define the local list for json_web_key_set->keys
    list_t *keysList = NULL;

    // json_web_key_set->keys
    cJSON *keys = cJSON_GetObjectItemCaseSensitive(json_web_key_setJSON, "keys");
    if (keys) { 
    cJSON *keys_local_nonprimitive = NULL;
    if(!cJSON_IsArray(keys)){
        goto end; //nonprimitive container
    }

    keysList = list_createList();

    cJSON_ArrayForEach(keys_local_nonprimitive,keys )
    {
        if(!cJSON_IsObject(keys_local_nonprimitive)){
            goto end;
        }
        json_web_key_t *keysItem = json_web_key_parseFromJSON(keys_local_nonprimitive);

        list_addElement(keysList, keysItem);
    }
    }


    json_web_key_set_local_var = json_web_key_set_create (
        keys ? keysList : NULL
        );

    return json_web_key_set_local_var;
end:
    if (keysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, keysList) {
            json_web_key_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(keysList);
        keysList = NULL;
    }
    return NULL;

}
