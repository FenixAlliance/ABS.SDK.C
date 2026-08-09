#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_skill_dto.h"



cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_id,
    char *cognitive_skill_id,
    int enabled,
    char *config_json,
    char *tenant_id,
    char *enrollment_id
    ) {
    cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_local_var = malloc(sizeof(cognitive_agent_skill_dto_t));
    if (!cognitive_agent_skill_dto_local_var) {
        return NULL;
    }
    cognitive_agent_skill_dto_local_var->id = id;
    cognitive_agent_skill_dto_local_var->timestamp = timestamp;
    cognitive_agent_skill_dto_local_var->cognitive_agent_id = cognitive_agent_id;
    cognitive_agent_skill_dto_local_var->cognitive_skill_id = cognitive_skill_id;
    cognitive_agent_skill_dto_local_var->enabled = enabled;
    cognitive_agent_skill_dto_local_var->config_json = config_json;
    cognitive_agent_skill_dto_local_var->tenant_id = tenant_id;
    cognitive_agent_skill_dto_local_var->enrollment_id = enrollment_id;

    return cognitive_agent_skill_dto_local_var;
}


void cognitive_agent_skill_dto_free(cognitive_agent_skill_dto_t *cognitive_agent_skill_dto) {
    if(NULL == cognitive_agent_skill_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_skill_dto->id) {
        free(cognitive_agent_skill_dto->id);
        cognitive_agent_skill_dto->id = NULL;
    }
    if (cognitive_agent_skill_dto->timestamp) {
        free(cognitive_agent_skill_dto->timestamp);
        cognitive_agent_skill_dto->timestamp = NULL;
    }
    if (cognitive_agent_skill_dto->cognitive_agent_id) {
        free(cognitive_agent_skill_dto->cognitive_agent_id);
        cognitive_agent_skill_dto->cognitive_agent_id = NULL;
    }
    if (cognitive_agent_skill_dto->cognitive_skill_id) {
        free(cognitive_agent_skill_dto->cognitive_skill_id);
        cognitive_agent_skill_dto->cognitive_skill_id = NULL;
    }
    if (cognitive_agent_skill_dto->config_json) {
        free(cognitive_agent_skill_dto->config_json);
        cognitive_agent_skill_dto->config_json = NULL;
    }
    if (cognitive_agent_skill_dto->tenant_id) {
        free(cognitive_agent_skill_dto->tenant_id);
        cognitive_agent_skill_dto->tenant_id = NULL;
    }
    if (cognitive_agent_skill_dto->enrollment_id) {
        free(cognitive_agent_skill_dto->enrollment_id);
        cognitive_agent_skill_dto->enrollment_id = NULL;
    }
    free(cognitive_agent_skill_dto);
}

cJSON *cognitive_agent_skill_dto_convertToJSON(cognitive_agent_skill_dto_t *cognitive_agent_skill_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_skill_dto->id
    if(cognitive_agent_skill_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_skill_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_skill_dto->timestamp
    if(cognitive_agent_skill_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_skill_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_skill_dto->cognitive_agent_id
    if(cognitive_agent_skill_dto->cognitive_agent_id) {
    if(cJSON_AddStringToObject(item, "cognitiveAgentId", cognitive_agent_skill_dto->cognitive_agent_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_skill_dto->cognitive_skill_id
    if(cognitive_agent_skill_dto->cognitive_skill_id) {
    if(cJSON_AddStringToObject(item, "cognitiveSkillId", cognitive_agent_skill_dto->cognitive_skill_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_skill_dto->enabled
    if(cognitive_agent_skill_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", cognitive_agent_skill_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cognitive_agent_skill_dto->config_json
    if(cognitive_agent_skill_dto->config_json) {
    if(cJSON_AddStringToObject(item, "configJson", cognitive_agent_skill_dto->config_json) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_skill_dto->tenant_id
    if(cognitive_agent_skill_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", cognitive_agent_skill_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_skill_dto->enrollment_id
    if(cognitive_agent_skill_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", cognitive_agent_skill_dto->enrollment_id) == NULL) {
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

cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_parseFromJSON(cJSON *cognitive_agent_skill_dtoJSON){

    cognitive_agent_skill_dto_t *cognitive_agent_skill_dto_local_var = NULL;

    // cognitive_agent_skill_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_skill_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_skill_dto->cognitive_agent_id
    cJSON *cognitive_agent_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "cognitiveAgentId");
    if (cognitive_agent_id) { 
    if(!cJSON_IsString(cognitive_agent_id) && !cJSON_IsNull(cognitive_agent_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_skill_dto->cognitive_skill_id
    cJSON *cognitive_skill_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "cognitiveSkillId");
    if (cognitive_skill_id) { 
    if(!cJSON_IsString(cognitive_skill_id) && !cJSON_IsNull(cognitive_skill_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_skill_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // cognitive_agent_skill_dto->config_json
    cJSON *config_json = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "configJson");
    if (config_json) { 
    if(!cJSON_IsString(config_json) && !cJSON_IsNull(config_json))
    {
    goto end; //String
    }
    }

    // cognitive_agent_skill_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_skill_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    cognitive_agent_skill_dto_local_var = cognitive_agent_skill_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        cognitive_agent_id && !cJSON_IsNull(cognitive_agent_id) ? strdup(cognitive_agent_id->valuestring) : NULL,
        cognitive_skill_id && !cJSON_IsNull(cognitive_skill_id) ? strdup(cognitive_skill_id->valuestring) : NULL,
        enabled ? enabled->valueint : 0,
        config_json && !cJSON_IsNull(config_json) ? strdup(config_json->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return cognitive_agent_skill_dto_local_var;
end:
    return NULL;

}
