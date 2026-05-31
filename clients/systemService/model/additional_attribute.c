#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "additional_attribute.h"



additional_attribute_t *additional_attribute_create(
    char *key,
    char *value
    ) {
    additional_attribute_t *additional_attribute_local_var = malloc(sizeof(additional_attribute_t));
    if (!additional_attribute_local_var) {
        return NULL;
    }
    additional_attribute_local_var->key = key;
    additional_attribute_local_var->value = value;

    return additional_attribute_local_var;
}


void additional_attribute_free(additional_attribute_t *additional_attribute) {
    if(NULL == additional_attribute){
        return ;
    }
    listEntry_t *listEntry;
    if (additional_attribute->key) {
        free(additional_attribute->key);
        additional_attribute->key = NULL;
    }
    if (additional_attribute->value) {
        free(additional_attribute->value);
        additional_attribute->value = NULL;
    }
    free(additional_attribute);
}

cJSON *additional_attribute_convertToJSON(additional_attribute_t *additional_attribute) {
    cJSON *item = cJSON_CreateObject();

    // additional_attribute->key
    if(additional_attribute->key) {
    if(cJSON_AddStringToObject(item, "key", additional_attribute->key) == NULL) {
    goto fail; //String
    }
    }


    // additional_attribute->value
    if(additional_attribute->value) {
    if(cJSON_AddStringToObject(item, "value", additional_attribute->value) == NULL) {
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

additional_attribute_t *additional_attribute_parseFromJSON(cJSON *additional_attributeJSON){

    additional_attribute_t *additional_attribute_local_var = NULL;

    // additional_attribute->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(additional_attributeJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // additional_attribute->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(additional_attributeJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    additional_attribute_local_var = additional_attribute_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return additional_attribute_local_var;
end:
    return NULL;

}
