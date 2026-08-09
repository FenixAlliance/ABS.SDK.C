#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "suite_license_feature_dto.h"



suite_license_feature_dto_t *suite_license_feature_dto_create(
    char *key,
    char *value
    ) {
    suite_license_feature_dto_t *suite_license_feature_dto_local_var = malloc(sizeof(suite_license_feature_dto_t));
    if (!suite_license_feature_dto_local_var) {
        return NULL;
    }
    suite_license_feature_dto_local_var->key = key;
    suite_license_feature_dto_local_var->value = value;

    return suite_license_feature_dto_local_var;
}


void suite_license_feature_dto_free(suite_license_feature_dto_t *suite_license_feature_dto) {
    if(NULL == suite_license_feature_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (suite_license_feature_dto->key) {
        free(suite_license_feature_dto->key);
        suite_license_feature_dto->key = NULL;
    }
    if (suite_license_feature_dto->value) {
        free(suite_license_feature_dto->value);
        suite_license_feature_dto->value = NULL;
    }
    free(suite_license_feature_dto);
}

cJSON *suite_license_feature_dto_convertToJSON(suite_license_feature_dto_t *suite_license_feature_dto) {
    cJSON *item = cJSON_CreateObject();

    // suite_license_feature_dto->key
    if(suite_license_feature_dto->key) {
    if(cJSON_AddStringToObject(item, "key", suite_license_feature_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // suite_license_feature_dto->value
    if(suite_license_feature_dto->value) {
    if(cJSON_AddStringToObject(item, "value", suite_license_feature_dto->value) == NULL) {
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

suite_license_feature_dto_t *suite_license_feature_dto_parseFromJSON(cJSON *suite_license_feature_dtoJSON){

    suite_license_feature_dto_t *suite_license_feature_dto_local_var = NULL;

    // suite_license_feature_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(suite_license_feature_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // suite_license_feature_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(suite_license_feature_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    suite_license_feature_dto_local_var = suite_license_feature_dto_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return suite_license_feature_dto_local_var;
end:
    return NULL;

}
