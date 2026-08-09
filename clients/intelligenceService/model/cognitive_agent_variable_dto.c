#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_variable_dto.h"



cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_id,
    char *key,
    char *value,
    char *tenant_id,
    char *enrollment_id
    ) {
    cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_local_var = malloc(sizeof(cognitive_agent_variable_dto_t));
    if (!cognitive_agent_variable_dto_local_var) {
        return NULL;
    }
    cognitive_agent_variable_dto_local_var->id = id;
    cognitive_agent_variable_dto_local_var->timestamp = timestamp;
    cognitive_agent_variable_dto_local_var->cognitive_agent_id = cognitive_agent_id;
    cognitive_agent_variable_dto_local_var->key = key;
    cognitive_agent_variable_dto_local_var->value = value;
    cognitive_agent_variable_dto_local_var->tenant_id = tenant_id;
    cognitive_agent_variable_dto_local_var->enrollment_id = enrollment_id;

    return cognitive_agent_variable_dto_local_var;
}


void cognitive_agent_variable_dto_free(cognitive_agent_variable_dto_t *cognitive_agent_variable_dto) {
    if(NULL == cognitive_agent_variable_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_variable_dto->id) {
        free(cognitive_agent_variable_dto->id);
        cognitive_agent_variable_dto->id = NULL;
    }
    if (cognitive_agent_variable_dto->timestamp) {
        free(cognitive_agent_variable_dto->timestamp);
        cognitive_agent_variable_dto->timestamp = NULL;
    }
    if (cognitive_agent_variable_dto->cognitive_agent_id) {
        free(cognitive_agent_variable_dto->cognitive_agent_id);
        cognitive_agent_variable_dto->cognitive_agent_id = NULL;
    }
    if (cognitive_agent_variable_dto->key) {
        free(cognitive_agent_variable_dto->key);
        cognitive_agent_variable_dto->key = NULL;
    }
    if (cognitive_agent_variable_dto->value) {
        free(cognitive_agent_variable_dto->value);
        cognitive_agent_variable_dto->value = NULL;
    }
    if (cognitive_agent_variable_dto->tenant_id) {
        free(cognitive_agent_variable_dto->tenant_id);
        cognitive_agent_variable_dto->tenant_id = NULL;
    }
    if (cognitive_agent_variable_dto->enrollment_id) {
        free(cognitive_agent_variable_dto->enrollment_id);
        cognitive_agent_variable_dto->enrollment_id = NULL;
    }
    free(cognitive_agent_variable_dto);
}

cJSON *cognitive_agent_variable_dto_convertToJSON(cognitive_agent_variable_dto_t *cognitive_agent_variable_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_variable_dto->id
    if(cognitive_agent_variable_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_variable_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_dto->timestamp
    if(cognitive_agent_variable_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_variable_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_variable_dto->cognitive_agent_id
    if(cognitive_agent_variable_dto->cognitive_agent_id) {
    if(cJSON_AddStringToObject(item, "cognitiveAgentId", cognitive_agent_variable_dto->cognitive_agent_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_dto->key
    if(cognitive_agent_variable_dto->key) {
    if(cJSON_AddStringToObject(item, "key", cognitive_agent_variable_dto->key) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_dto->value
    if(cognitive_agent_variable_dto->value) {
    if(cJSON_AddStringToObject(item, "value", cognitive_agent_variable_dto->value) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_dto->tenant_id
    if(cognitive_agent_variable_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", cognitive_agent_variable_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_variable_dto->enrollment_id
    if(cognitive_agent_variable_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", cognitive_agent_variable_dto->enrollment_id) == NULL) {
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

cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_parseFromJSON(cJSON *cognitive_agent_variable_dtoJSON){

    cognitive_agent_variable_dto_t *cognitive_agent_variable_dto_local_var = NULL;

    // cognitive_agent_variable_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_variable_dto->cognitive_agent_id
    cJSON *cognitive_agent_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "cognitiveAgentId");
    if (cognitive_agent_id) { 
    if(!cJSON_IsString(cognitive_agent_id) && !cJSON_IsNull(cognitive_agent_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_dto->key
    cJSON *key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "key");
    if (key) { 
    if(!cJSON_IsString(key) && !cJSON_IsNull(key))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value) && !cJSON_IsNull(value))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_variable_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_variable_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    cognitive_agent_variable_dto_local_var = cognitive_agent_variable_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        cognitive_agent_id && !cJSON_IsNull(cognitive_agent_id) ? strdup(cognitive_agent_id->valuestring) : NULL,
        key && !cJSON_IsNull(key) ? strdup(key->valuestring) : NULL,
        value && !cJSON_IsNull(value) ? strdup(value->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return cognitive_agent_variable_dto_local_var;
end:
    return NULL;

}
