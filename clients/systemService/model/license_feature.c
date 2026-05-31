#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "license_feature.h"



license_feature_t *license_feature_create(
    char *key,
    char *value
    ) {
    license_feature_t *license_feature_local_var = malloc(sizeof(license_feature_t));
    if (!license_feature_local_var) {
        return NULL;
    }
    license_feature_local_var->key = key;
    license_feature_local_var->value = value;

    return license_feature_local_var;
}


void license_feature_free(license_feature_t *license_feature) {
    if(NULL == license_feature){
        return ;
    }
    listEntry_t *listEntry;
    if (license_feature->key) {
        free(license_feature->key);
        license_feature->key = NULL;
    }
    if (license_feature->value) {
        free(license_feature->value);
        license_feature->value = NULL;
    }
    free(license_feature);
}

cJSON *license_feature_convertToJSON(license_feature_t *license_feature) {
    cJSON *item = cJSON_CreateObject();

    // license_feature->key
    if(license_feature->key) {
    if(cJSON_AddStringToObject(item, "key", license_feature->key) == NULL) {
    goto fail; //String
    }
    }


    // license_feature->value
    if(license_feature->value) {
    if(cJSON_AddStringToObject(item, "value", license_feature->value) == NULL) {
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

license_feature_t *license_feature_parseFromJSON(cJSON *license_featureJSON){

    license_feature_t *license_feature_local_var = NULL;

    // license_feature->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(license_featureJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // license_feature->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(license_featureJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    license_feature_local_var = license_feature_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return license_feature_local_var;
end:
    return NULL;

}
