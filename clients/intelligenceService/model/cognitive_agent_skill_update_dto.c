#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_skill_update_dto.h"



cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_create(
    int enabled,
    char *config_json
    ) {
    cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_local_var = malloc(sizeof(cognitive_agent_skill_update_dto_t));
    if (!cognitive_agent_skill_update_dto_local_var) {
        return NULL;
    }
    cognitive_agent_skill_update_dto_local_var->enabled = enabled;
    cognitive_agent_skill_update_dto_local_var->config_json = config_json;

    return cognitive_agent_skill_update_dto_local_var;
}


void cognitive_agent_skill_update_dto_free(cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto) {
    if(NULL == cognitive_agent_skill_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_skill_update_dto->config_json) {
        free(cognitive_agent_skill_update_dto->config_json);
        cognitive_agent_skill_update_dto->config_json = NULL;
    }
    free(cognitive_agent_skill_update_dto);
}

cJSON *cognitive_agent_skill_update_dto_convertToJSON(cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_skill_update_dto->enabled
    if(cognitive_agent_skill_update_dto->enabled) {
    if(cJSON_AddBoolToObject(item, "enabled", cognitive_agent_skill_update_dto->enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // cognitive_agent_skill_update_dto->config_json
    if(cognitive_agent_skill_update_dto->config_json) {
    if(cJSON_AddStringToObject(item, "configJson", cognitive_agent_skill_update_dto->config_json) == NULL) {
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

cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_parseFromJSON(cJSON *cognitive_agent_skill_update_dtoJSON){

    cognitive_agent_skill_update_dto_t *cognitive_agent_skill_update_dto_local_var = NULL;

    // cognitive_agent_skill_update_dto->enabled
    cJSON *enabled = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_update_dtoJSON, "enabled");
    if (enabled) { 
    if(!cJSON_IsBool(enabled))
    {
    goto end; //Bool
    }
    }

    // cognitive_agent_skill_update_dto->config_json
    cJSON *config_json = cJSON_GetObjectItemCaseSensitive(cognitive_agent_skill_update_dtoJSON, "configJson");
    if (config_json) { 
    if(!cJSON_IsString(config_json) && !cJSON_IsNull(config_json))
    {
    goto end; //String
    }
    }


    cognitive_agent_skill_update_dto_local_var = cognitive_agent_skill_update_dto_create (
        enabled ? enabled->valueint : 0,
        config_json && !cJSON_IsNull(config_json) ? strdup(config_json->valuestring) : NULL
        );

    return cognitive_agent_skill_update_dto_local_var;
end:
    return NULL;

}
