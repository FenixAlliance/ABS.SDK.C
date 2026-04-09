#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "option_update_dto.h"



option_update_dto_t *option_update_dto_create(
    char *key,
    char *value,
    char *portal_id,
    int frozen,
    int autoload,
    int transient,
    int expiration
    ) {
    option_update_dto_t *option_update_dto_local_var = malloc(sizeof(option_update_dto_t));
    if (!option_update_dto_local_var) {
        return NULL;
    }
    option_update_dto_local_var->key = key;
    option_update_dto_local_var->value = value;
    option_update_dto_local_var->portal_id = portal_id;
    option_update_dto_local_var->frozen = frozen;
    option_update_dto_local_var->autoload = autoload;
    option_update_dto_local_var->transient = transient;
    option_update_dto_local_var->expiration = expiration;

    return option_update_dto_local_var;
}


void option_update_dto_free(option_update_dto_t *option_update_dto) {
    if(NULL == option_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (option_update_dto->key) {
        free(option_update_dto->key);
        option_update_dto->key = NULL;
    }
    if (option_update_dto->value) {
        free(option_update_dto->value);
        option_update_dto->value = NULL;
    }
    if (option_update_dto->portal_id) {
        free(option_update_dto->portal_id);
        option_update_dto->portal_id = NULL;
    }
    free(option_update_dto);
}

cJSON *option_update_dto_convertToJSON(option_update_dto_t *option_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // option_update_dto->key
    if(option_update_dto->key) {
    if(cJSON_AddStringToObject(item, "key", option_update_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // option_update_dto->value
    if(option_update_dto->value) {
    if(cJSON_AddStringToObject(item, "value", option_update_dto->value) == NULL) {
    goto fail; //String
    }
    }


    // option_update_dto->portal_id
    if(option_update_dto->portal_id) {
    if(cJSON_AddStringToObject(item, "portalId", option_update_dto->portal_id) == NULL) {
    goto fail; //String
    }
    }


    // option_update_dto->frozen
    if(option_update_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", option_update_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // option_update_dto->autoload
    if(option_update_dto->autoload) {
    if(cJSON_AddBoolToObject(item, "autoload", option_update_dto->autoload) == NULL) {
    goto fail; //Bool
    }
    }


    // option_update_dto->transient
    if(option_update_dto->transient) {
    if(cJSON_AddBoolToObject(item, "transient", option_update_dto->transient) == NULL) {
    goto fail; //Bool
    }
    }


    // option_update_dto->expiration
    if(option_update_dto->expiration) {
    if(cJSON_AddNumberToObject(item, "expiration", option_update_dto->expiration) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

option_update_dto_t *option_update_dto_parseFromJSON(cJSON *option_update_dtoJSON){

    option_update_dto_t *option_update_dto_local_var = NULL;

    // option_update_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // option_update_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // option_update_dto->portal_id
    cJSON *portal_id = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "portalId");
    if (portal_id) { 
    if(!cJSON_IsString(portal_id) && !cJSON_IsNull(portal_id))
    {
    goto end; //String
    }
    }

    // option_update_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // option_update_dto->autoload
    cJSON *autoload = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "autoload");
    if (autoload) { 
    if(!cJSON_IsBool(autoload))
    {
    goto end; //Bool
    }
    }

    // option_update_dto->transient
    cJSON *transient = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "transient");
    if (transient) { 
    if(!cJSON_IsBool(transient))
    {
    goto end; //Bool
    }
    }

    // option_update_dto->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(option_update_dtoJSON, "expiration");
    if (expiration) { 
    if(!cJSON_IsNumber(expiration))
    {
    goto end; //Numeric
    }
    }


    option_update_dto_local_var = option_update_dto_create (
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        portal_id && !cJSON_IsNull(portal_id) ? strdup(portal_id->valuestring) : NULL,
        frozen ? frozen->valueint : 0,
        autoload ? autoload->valueint : 0,
        transient ? transient->valueint : 0,
        expiration ? expiration->valuedouble : 0
        );

    return option_update_dto_local_var;
end:
    return NULL;

}
