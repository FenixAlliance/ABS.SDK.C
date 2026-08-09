#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_skill_tool_dto.h"



cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_create(
    char *tool_key,
    char *config_json,
    int enabled
    ) {
    cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_local_var = malloc(sizeof(cognitive_skill_tool_dto_t));
    if (!cognitive_skill_tool_dto_local_var) {
        return NULL;
    }
    cognitive_skill_tool_dto_local_var->tool_key = tool_key;
    cognitive_skill_tool_dto_local_var->config_json = config_json;
    cognitive_skill_tool_dto_local_var->enabled = enabled;

    return cognitive_skill_tool_dto_local_var;
}


void cognitive_skill_tool_dto_free(cognitive_skill_tool_dto_t *cognitive_skill_tool_dto) {
    if(NULL == cognitive_skill_tool_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_skill_tool_dto->tool_key) {
        free(cognitive_skill_tool_dto->tool_key);
        cognitive_skill_tool_dto->tool_key = NULL;
    }
    if (cognitive_skill_tool_dto->config_json) {
        free(cognitive_skill_tool_dto->config_json);
        cognitive_skill_tool_dto->config_json = NULL;
    }
    free(cognitive_skill_tool_dto);
}

cJSON *cognitive_skill_tool_dto_convertToJSON(cognitive_skill_tool_dto_t *cognitive_skill_tool_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_skill_tool_dto->tool_key
    if (!cognitive_skill_tool_dto->tool_key) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "toolKey", cognitive_skill_tool_dto->tool_key) == NULL) {
    goto fail; //String
    }


    // cognitive_skill_tool_dto->config_json
    if(cognitive_skill_tool_dto->config_json) {
    if(cJSON_AddStringToObject(item, "configJson", cognitive_skill_tool_dto->config_json) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_skill_tool_dto->enabled
    if(cognitive_skill_tool_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", cognitive_skill_tool_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_parseFromJSON(cJSON *cognitive_skill_tool_dtoJSON){

    cognitive_skill_tool_dto_t *cognitive_skill_tool_dto_local_var = NULL;

    // cognitive_skill_tool_dto->tool_key
    cJSON *tool_key = cJSON_GetObjectItemCaseSensitive(cognitive_skill_tool_dtoJSON, "toolKey");
    if (!tool_key) {
        goto end;
    }

    
    if(!cJSON_IsString(tool_key))
    {
    goto end; //String
    }

    // cognitive_skill_tool_dto->config_json
    cJSON *config_json = cJSON_GetObjectItemCaseSensitive(cognitive_skill_tool_dtoJSON, "configJson");
    if (config_json) { 
    if(!cJSON_IsString(config_json) && !cJSON_IsNull(config_json))
    {
    goto end; //String
    }
    }

    // cognitive_skill_tool_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cognitive_skill_tool_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }


    cognitive_skill_tool_dto_local_var = cognitive_skill_tool_dto_create (
        strdup(tool_key->valuestring),
        config_json && !cJSON_IsNull(config_json) ? strdup(config_json->valuestring) : NULL,
        enabled ? enabled->valueint : 0
        );

    return cognitive_skill_tool_dto_local_var;
end:
    return NULL;

}
