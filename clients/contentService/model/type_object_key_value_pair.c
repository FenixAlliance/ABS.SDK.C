#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "type_object_key_value_pair.h"



type_object_key_value_pair_t *type_object_key_value_pair_create(
    type_t *key,
    any_type_t *value
    ) {
    type_object_key_value_pair_t *type_object_key_value_pair_local_var = malloc(sizeof(type_object_key_value_pair_t));
    if (!type_object_key_value_pair_local_var) {
        return NULL;
    }
    type_object_key_value_pair_local_var->key = key;
    type_object_key_value_pair_local_var->value = value;

    return type_object_key_value_pair_local_var;
}


void type_object_key_value_pair_free(type_object_key_value_pair_t *type_object_key_value_pair) {
    if(NULL == type_object_key_value_pair){
        return ;
    }
    listEntry_t *listEntry;
    if (type_object_key_value_pair->key) {
        type_free(type_object_key_value_pair->key);
        type_object_key_value_pair->key = NULL;
    }
    if (type_object_key_value_pair->value) {
        _free(type_object_key_value_pair->value);
        type_object_key_value_pair->value = NULL;
    }
    free(type_object_key_value_pair);
}

cJSON *type_object_key_value_pair_convertToJSON(type_object_key_value_pair_t *type_object_key_value_pair) {
    cJSON *item = cJSON_CreateObject();

    // type_object_key_value_pair->key
    if(type_object_key_value_pair->key) {
    cJSON *key_local_JSON = type_convertToJSON(type_object_key_value_pair->key);
    if(key_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "key", key_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_object_key_value_pair->value
    if(type_object_key_value_pair->value) {
    cJSON *value_local_JSON = _convertToJSON(type_object_key_value_pair->value);
    if(value_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "value", value_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

type_object_key_value_pair_t *type_object_key_value_pair_parseFromJSON(cJSON *type_object_key_value_pairJSON){

    type_object_key_value_pair_t *type_object_key_value_pair_local_var = NULL;

    // define the local variable for type_object_key_value_pair->key
    type_t *key_local_nonprim = NULL;

    // define the local variable for type_object_key_value_pair->value
    _t *value_local_nonprim = NULL;

    // type_object_key_value_pair->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(type_object_key_value_pairJSON, "key");
    if (key) { 
    key_local_nonprim = type_parseFromJSON(key); //nonprimitive
    }

    // type_object_key_value_pair->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(type_object_key_value_pairJSON, "value");
    if (value) { 
    value_local_nonprim = _parseFromJSON(value); //custom
    }


    type_object_key_value_pair_local_var = type_object_key_value_pair_create (
        key ? key_local_nonprim : NULL,
        value ? value_local_nonprim : NULL
        );

    return type_object_key_value_pair_local_var;
end:
    if (key_local_nonprim) {
        type_free(key_local_nonprim);
        key_local_nonprim = NULL;
    }
    if (value_local_nonprim) {
        _free(value_local_nonprim);
        value_local_nonprim = NULL;
    }
    return NULL;

}
