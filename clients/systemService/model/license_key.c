#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_key.h"



license_key_t *license_key_create(
    char *key
    ) {
    license_key_t *license_key_local_var = malloc(sizeof(license_key_t));
    if (!license_key_local_var) {
        return NULL;
    }
    license_key_local_var->key = key;

    return license_key_local_var;
}


void license_key_free(license_key_t *license_key) {
    if(NULL == license_key){
        return ;
    }
    listEntry_t *listEntry;
    if (license_key->key) {
        free(license_key->key);
        license_key->key = NULL;
    }
    free(license_key);
}

cJSON *license_key_convertToJSON(license_key_t *license_key) {
    cJSON *item = cJSON_CreateObject();

    // license_key->key
    if(license_key->key) {
    if(cJSON_AddStringToObject(item, "key", license_key->key) == NULL) {
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

license_key_t *license_key_parseFromJSON(cJSON *license_keyJSON){

    license_key_t *license_key_local_var = NULL;

    // license_key->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(license_keyJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }


    license_key_local_var = license_key_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL
        );

    return license_key_local_var;
end:
    return NULL;

}
