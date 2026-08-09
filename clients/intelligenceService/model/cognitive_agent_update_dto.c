#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_update_dto.h"



cognitive_agent_update_dto_t *cognitive_agent_update_dto_create(
    char *name,
    char *avatar,
    char *description,
    char *soul,
    char *provider_key,
    char *model_id,
    char *engine_key
    ) {
    cognitive_agent_update_dto_t *cognitive_agent_update_dto_local_var = malloc(sizeof(cognitive_agent_update_dto_t));
    if (!cognitive_agent_update_dto_local_var) {
        return NULL;
    }
    cognitive_agent_update_dto_local_var->name = name;
    cognitive_agent_update_dto_local_var->avatar = avatar;
    cognitive_agent_update_dto_local_var->description = description;
    cognitive_agent_update_dto_local_var->soul = soul;
    cognitive_agent_update_dto_local_var->provider_key = provider_key;
    cognitive_agent_update_dto_local_var->model_id = model_id;
    cognitive_agent_update_dto_local_var->engine_key = engine_key;

    return cognitive_agent_update_dto_local_var;
}


void cognitive_agent_update_dto_free(cognitive_agent_update_dto_t *cognitive_agent_update_dto) {
    if(NULL == cognitive_agent_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_update_dto->name) {
        free(cognitive_agent_update_dto->name);
        cognitive_agent_update_dto->name = NULL;
    }
    if (cognitive_agent_update_dto->avatar) {
        free(cognitive_agent_update_dto->avatar);
        cognitive_agent_update_dto->avatar = NULL;
    }
    if (cognitive_agent_update_dto->description) {
        free(cognitive_agent_update_dto->description);
        cognitive_agent_update_dto->description = NULL;
    }
    if (cognitive_agent_update_dto->soul) {
        free(cognitive_agent_update_dto->soul);
        cognitive_agent_update_dto->soul = NULL;
    }
    if (cognitive_agent_update_dto->provider_key) {
        free(cognitive_agent_update_dto->provider_key);
        cognitive_agent_update_dto->provider_key = NULL;
    }
    if (cognitive_agent_update_dto->model_id) {
        free(cognitive_agent_update_dto->model_id);
        cognitive_agent_update_dto->model_id = NULL;
    }
    if (cognitive_agent_update_dto->engine_key) {
        free(cognitive_agent_update_dto->engine_key);
        cognitive_agent_update_dto->engine_key = NULL;
    }
    free(cognitive_agent_update_dto);
}

cJSON *cognitive_agent_update_dto_convertToJSON(cognitive_agent_update_dto_t *cognitive_agent_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_update_dto->name
    if(cognitive_agent_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", cognitive_agent_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->avatar
    if(cognitive_agent_update_dto->avatar) {
    if(cJSON_AddStringToObject(item, "avatar", cognitive_agent_update_dto->avatar) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->description
    if(cognitive_agent_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", cognitive_agent_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->soul
    if(cognitive_agent_update_dto->soul) {
    if(cJSON_AddStringToObject(item, "soul", cognitive_agent_update_dto->soul) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->provider_key
    if(cognitive_agent_update_dto->provider_key) {
    if(cJSON_AddStringToObject(item, "providerKey", cognitive_agent_update_dto->provider_key) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->model_id
    if(cognitive_agent_update_dto->model_id) {
    if(cJSON_AddStringToObject(item, "modelId", cognitive_agent_update_dto->model_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_update_dto->engine_key
    if(cognitive_agent_update_dto->engine_key) {
    if(cJSON_AddStringToObject(item, "engineKey", cognitive_agent_update_dto->engine_key) == NULL) {
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

cognitive_agent_update_dto_t *cognitive_agent_update_dto_parseFromJSON(cJSON *cognitive_agent_update_dtoJSON){

    cognitive_agent_update_dto_t *cognitive_agent_update_dto_local_var = NULL;

    // cognitive_agent_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->avatar
    cJSON *avatar = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "avatar");
    if (avatar) { 
    if(!cJSON_IsString(avatar) && !cJSON_IsNull(avatar))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->soul
    cJSON *soul = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "soul");
    if (soul) { 
    if(!cJSON_IsString(soul) && !cJSON_IsNull(soul))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->provider_key
    cJSON *provider_key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "providerKey");
    if (provider_key) { 
    if(!cJSON_IsString(provider_key) && !cJSON_IsNull(provider_key))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->model_id
    cJSON *model_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "modelId");
    if (model_id) { 
    if(!cJSON_IsString(model_id) && !cJSON_IsNull(model_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_update_dto->engine_key
    cJSON *engine_key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_update_dtoJSON, "engineKey");
    if (engine_key) { 
    if(!cJSON_IsString(engine_key) && !cJSON_IsNull(engine_key))
    {
    goto end; //String
    }
    }


    cognitive_agent_update_dto_local_var = cognitive_agent_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        avatar && !cJSON_IsNull(avatar) ? strdup(avatar->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        soul && !cJSON_IsNull(soul) ? strdup(soul->valuestring) : NULL,
        provider_key && !cJSON_IsNull(provider_key) ? strdup(provider_key->valuestring) : NULL,
        model_id && !cJSON_IsNull(model_id) ? strdup(model_id->valuestring) : NULL,
        engine_key && !cJSON_IsNull(engine_key) ? strdup(engine_key->valuestring) : NULL
        );

    return cognitive_agent_update_dto_local_var;
end:
    return NULL;

}
