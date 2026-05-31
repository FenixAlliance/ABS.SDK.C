#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "string_string_key_value_pair.h"



string_string_key_value_pair_t *string_string_key_value_pair_create(
    char *key,
    char *value
    ) {
    string_string_key_value_pair_t *string_string_key_value_pair_local_var = malloc(sizeof(string_string_key_value_pair_t));
    if (!string_string_key_value_pair_local_var) {
        return NULL;
    }
    string_string_key_value_pair_local_var->key = key;
    string_string_key_value_pair_local_var->value = value;

    return string_string_key_value_pair_local_var;
}


void string_string_key_value_pair_free(string_string_key_value_pair_t *string_string_key_value_pair) {
    if(NULL == string_string_key_value_pair){
        return ;
    }
    listEntry_t *listEntry;
    if (string_string_key_value_pair->key) {
        free(string_string_key_value_pair->key);
        string_string_key_value_pair->key = NULL;
    }
    if (string_string_key_value_pair->value) {
        free(string_string_key_value_pair->value);
        string_string_key_value_pair->value = NULL;
    }
    free(string_string_key_value_pair);
}

cJSON *string_string_key_value_pair_convertToJSON(string_string_key_value_pair_t *string_string_key_value_pair) {
    cJSON *item = cJSON_CreateObject();

    // string_string_key_value_pair->key
    if(string_string_key_value_pair->key) {
    if(cJSON_AddStringToObject(item, "key", string_string_key_value_pair->key) == NULL) {
    goto fail; //String
    }
    }


    // string_string_key_value_pair->value
    if(string_string_key_value_pair->value) {
    if(cJSON_AddStringToObject(item, "value", string_string_key_value_pair->value) == NULL) {
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

string_string_key_value_pair_t *string_string_key_value_pair_parseFromJSON(cJSON *string_string_key_value_pairJSON){

    string_string_key_value_pair_t *string_string_key_value_pair_local_var = NULL;

    // string_string_key_value_pair->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(string_string_key_value_pairJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // string_string_key_value_pair->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(string_string_key_value_pairJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    string_string_key_value_pair_local_var = string_string_key_value_pair_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return string_string_key_value_pair_local_var;
end:
    return NULL;

}
