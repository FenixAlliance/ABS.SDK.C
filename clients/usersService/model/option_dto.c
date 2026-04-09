#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "option_dto.h"



option_dto_t *option_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *value,
    char *portal_id,
    int frozen,
    int autoload,
    int transient,
    int expiration
    ) {
    option_dto_t *option_dto_local_var = malloc(sizeof(option_dto_t));
    if (!option_dto_local_var) {
        return NULL;
    }
    option_dto_local_var->id = id;
    option_dto_local_var->timestamp = timestamp;
    option_dto_local_var->key = key;
    option_dto_local_var->value = value;
    option_dto_local_var->portal_id = portal_id;
    option_dto_local_var->frozen = frozen;
    option_dto_local_var->autoload = autoload;
    option_dto_local_var->transient = transient;
    option_dto_local_var->expiration = expiration;

    return option_dto_local_var;
}


void option_dto_free(option_dto_t *option_dto) {
    if(NULL == option_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (option_dto->id) {
        free(option_dto->id);
        option_dto->id = NULL;
    }
    if (option_dto->timestamp) {
        free(option_dto->timestamp);
        option_dto->timestamp = NULL;
    }
    if (option_dto->key) {
        free(option_dto->key);
        option_dto->key = NULL;
    }
    if (option_dto->value) {
        free(option_dto->value);
        option_dto->value = NULL;
    }
    if (option_dto->portal_id) {
        free(option_dto->portal_id);
        option_dto->portal_id = NULL;
    }
    free(option_dto);
}

cJSON *option_dto_convertToJSON(option_dto_t *option_dto) {
    cJSON *item = cJSON_CreateObject();

    // option_dto->id
    if(option_dto->id) {
    if(cJSON_AddStringToObject(item, "id", option_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // option_dto->timestamp
    if(option_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", option_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // option_dto->key
    if(option_dto->key) {
    if(cJSON_AddStringToObject(item, "key", option_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // option_dto->value
    if(option_dto->value) {
    if(cJSON_AddStringToObject(item, "value", option_dto->value) == NULL) {
    goto fail; //String
    }
    }


    // option_dto->portal_id
    if(option_dto->portal_id) {
    if(cJSON_AddStringToObject(item, "portalId", option_dto->portal_id) == NULL) {
    goto fail; //String
    }
    }


    // option_dto->frozen
    if(option_dto->frozen) {
    if(cJSON_AddBoolToObject(item, "frozen", option_dto->frozen) == NULL) {
    goto fail; //Bool
    }
    }


    // option_dto->autoload
    if(option_dto->autoload) {
    if(cJSON_AddBoolToObject(item, "autoload", option_dto->autoload) == NULL) {
    goto fail; //Bool
    }
    }


    // option_dto->transient
    if(option_dto->transient) {
    if(cJSON_AddBoolToObject(item, "transient", option_dto->transient) == NULL) {
    goto fail; //Bool
    }
    }


    // option_dto->expiration
    if(option_dto->expiration) {
    if(cJSON_AddNumberToObject(item, "expiration", option_dto->expiration) == NULL) {
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

option_dto_t *option_dto_parseFromJSON(cJSON *option_dtoJSON){

    option_dto_t *option_dto_local_var = NULL;

    // option_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // option_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // option_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // option_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // option_dto->portal_id
    cJSON *portal_id = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "portalId");
    if (portal_id) { 
    if(!cJSON_IsString(portal_id) && !cJSON_IsNull(portal_id))
    {
    goto end; //String
    }
    }

    // option_dto->frozen
    cJSON *frozen = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "frozen");
    if (frozen) { 
    if(!cJSON_IsBool(frozen))
    {
    goto end; //Bool
    }
    }

    // option_dto->autoload
    cJSON *autoload = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "autoload");
    if (autoload) { 
    if(!cJSON_IsBool(autoload))
    {
    goto end; //Bool
    }
    }

    // option_dto->transient
    cJSON *transient = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "transient");
    if (transient) { 
    if(!cJSON_IsBool(transient))
    {
    goto end; //Bool
    }
    }

    // option_dto->expiration
    cJSON *expiration = cJSON_GetObjectItemCaseSensitive(option_dtoJSON, "expiration");
    if (expiration) { 
    if(!cJSON_IsNumber(expiration))
    {
    goto end; //Numeric
    }
    }


    option_dto_local_var = option_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        portal_id && !cJSON_IsNull(portal_id) ? strdup(portal_id->valuestring) : NULL,
        frozen ? frozen->valueint : 0,
        autoload ? autoload->valueint : 0,
        transient ? transient->valueint : 0,
        expiration ? expiration->valuedouble : 0
        );

    return option_dto_local_var;
end:
    return NULL;

}
