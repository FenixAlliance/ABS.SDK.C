#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "string_string_values_key_value_pair.h"



string_string_values_key_value_pair_t *string_string_values_key_value_pair_create(
    char *key,
    list_t *value
    ) {
    string_string_values_key_value_pair_t *string_string_values_key_value_pair_local_var = malloc(sizeof(string_string_values_key_value_pair_t));
    if (!string_string_values_key_value_pair_local_var) {
        return NULL;
    }
    string_string_values_key_value_pair_local_var->key = key;
    string_string_values_key_value_pair_local_var->value = value;

    return string_string_values_key_value_pair_local_var;
}


void string_string_values_key_value_pair_free(string_string_values_key_value_pair_t *string_string_values_key_value_pair) {
    if(NULL == string_string_values_key_value_pair){
        return ;
    }
    listEntry_t *listEntry;
    if (string_string_values_key_value_pair->key) {
        free(string_string_values_key_value_pair->key);
        string_string_values_key_value_pair->key = NULL;
    }
    if (string_string_values_key_value_pair->value) {
        list_ForEach(listEntry, string_string_values_key_value_pair->value) {
            free(listEntry->data);
        }
        list_freeList(string_string_values_key_value_pair->value);
        string_string_values_key_value_pair->value = NULL;
    }
    free(string_string_values_key_value_pair);
}

cJSON *string_string_values_key_value_pair_convertToJSON(string_string_values_key_value_pair_t *string_string_values_key_value_pair) {
    cJSON *item = cJSON_CreateObject();

    // string_string_values_key_value_pair->key
    if(string_string_values_key_value_pair->key) {
    if(cJSON_AddStringToObject(item, "key", string_string_values_key_value_pair->key) == NULL) {
    goto fail; //String
    }
    }


    // string_string_values_key_value_pair->value
    if(string_string_values_key_value_pair->value) {
    cJSON *value = cJSON_AddArrayToObject(item, "value");
    if(value == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *valueListEntry;
    list_ForEach(valueListEntry, string_string_values_key_value_pair->value) {
    if(cJSON_AddStringToObject(value, "", (char*)valueListEntry->data) == NULL)
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

string_string_values_key_value_pair_t *string_string_values_key_value_pair_parseFromJSON(cJSON *string_string_values_key_value_pairJSON){

    string_string_values_key_value_pair_t *string_string_values_key_value_pair_local_var = NULL;

    // define the local list for string_string_values_key_value_pair->value
    list_t *valueList = NULL;

    // string_string_values_key_value_pair->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(string_string_values_key_value_pairJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // string_string_values_key_value_pair->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(string_string_values_key_value_pairJSON, "value");
    if (value) { 
    cJSON *value_local = NULL;
    if(!cJSON_IsArray(value)) {
        goto end;//primitive container
    }
    valueList = list_createList();

    cJSON_ArrayForEach(value_local, value)
    {
        if(!cJSON_IsString(value_local))
        {
            goto end;
        }
        list_addElement(valueList , strdup(value_local->valuestring));
    }
    }


    string_string_values_key_value_pair_local_var = string_string_values_key_value_pair_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value ? valueList : NULL
        );

    return string_string_values_key_value_pair_local_var;
end:
    if (valueList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, valueList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(valueList);
        valueList = NULL;
    }
    return NULL;

}
