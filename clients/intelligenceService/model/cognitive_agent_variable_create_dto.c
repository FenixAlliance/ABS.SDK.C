#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_variable_create_dto.h"



cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_create(
    char *id,
    char *timestamp,
    char *key,
    char *value
    ) {
    cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_local_var = malloc(sizeof(cognitive_agent_variable_create_dto_t));
    if (!cognitive_agent_variable_create_dto_local_var) {
        return NULL;
    }
    cognitive_agent_variable_create_dto_local_var->id = id;
    cognitive_agent_variable_create_dto_local_var->timestamp = timestamp;
    cognitive_agent_variable_create_dto_local_var->key = key;
    cognitive_agent_variable_create_dto_local_var->value = value;

    return cognitive_agent_variable_create_dto_local_var;
}


void cognitive_agent_variable_create_dto_free(cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto) {
    if(NULL == cognitive_agent_variable_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_variable_create_dto->id) {
        free(cognitive_agent_variable_create_dto->id);
        cognitive_agent_variable_create_dto->id = NULL;
    }
    if (cognitive_agent_variable_create_dto->timestamp) {
        free(cognitive_agent_variable_create_dto->timestamp);
        cognitive_agent_variable_create_dto->timestamp = NULL;
    }
    if (cognitive_agent_variable_create_dto->key) {
        free(cognitive_agent_variable_create_dto->key);
        cognitive_agent_variable_create_dto->key = NULL;
    }
    if (cognitive_agent_variable_create_dto->value) {
        free(cognitive_agent_variable_create_dto->value);
        cognitive_agent_variable_create_dto->value = NULL;
    }
    free(cognitive_agent_variable_create_dto);
}

cJSON *cognitive_agent_variable_create_dto_convertToJSON(cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_variable_create_dto->id
    if(cognitive_agent_variable_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_variable_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_create_dto->timestamp
    if(cognitive_agent_variable_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_variable_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_variable_create_dto->key
    if (!cognitive_agent_variable_create_dto->key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "key", cognitive_agent_variable_create_dto->key) == NULL) {
    goto fail; //String
    }


    // cognitive_agent_variable_create_dto->value
    if(cognitive_agent_variable_create_dto->value) {
    if(cJSON_AddStringToObject(item, "value", cognitive_agent_variable_create_dto->value) == NULL) {
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

cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_parseFromJSON(cJSON *cognitive_agent_variable_create_dtoJSON){

    cognitive_agent_variable_create_dto_t *cognitive_agent_variable_create_dto_local_var = NULL;

    // cognitive_agent_variable_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_variable_create_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_create_dtoJSON, "key");
    if (!key) {
        goto end;
    }

    
    if(!cJSON_IsString(key))
    {
    goto end; //String
    }

    // cognitive_agent_variable_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }


    cognitive_agent_variable_create_dto_local_var = cognitive_agent_variable_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        strdup(key->valuestring),
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL
        );

    return cognitive_agent_variable_create_dto_local_var;
end:
    return NULL;

}
