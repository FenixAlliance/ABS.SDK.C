#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_dto.h"



cognitive_agent_dto_t *cognitive_agent_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *avatar,
    char *description,
    char *soul,
    char *provider_key,
    char *model_id,
    char *engine_key,
    char *tenant_id,
    char *enrollment_id
    ) {
    cognitive_agent_dto_t *cognitive_agent_dto_local_var = malloc(sizeof(cognitive_agent_dto_t));
    if (!cognitive_agent_dto_local_var) {
        return NULL;
    }
    cognitive_agent_dto_local_var->id = id;
    cognitive_agent_dto_local_var->timestamp = timestamp;
    cognitive_agent_dto_local_var->name = name;
    cognitive_agent_dto_local_var->avatar = avatar;
    cognitive_agent_dto_local_var->description = description;
    cognitive_agent_dto_local_var->soul = soul;
    cognitive_agent_dto_local_var->provider_key = provider_key;
    cognitive_agent_dto_local_var->model_id = model_id;
    cognitive_agent_dto_local_var->engine_key = engine_key;
    cognitive_agent_dto_local_var->tenant_id = tenant_id;
    cognitive_agent_dto_local_var->enrollment_id = enrollment_id;

    return cognitive_agent_dto_local_var;
}


void cognitive_agent_dto_free(cognitive_agent_dto_t *cognitive_agent_dto) {
    if(NULL == cognitive_agent_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_dto->id) {
        free(cognitive_agent_dto->id);
        cognitive_agent_dto->id = NULL;
    }
    if (cognitive_agent_dto->timestamp) {
        free(cognitive_agent_dto->timestamp);
        cognitive_agent_dto->timestamp = NULL;
    }
    if (cognitive_agent_dto->name) {
        free(cognitive_agent_dto->name);
        cognitive_agent_dto->name = NULL;
    }
    if (cognitive_agent_dto->avatar) {
        free(cognitive_agent_dto->avatar);
        cognitive_agent_dto->avatar = NULL;
    }
    if (cognitive_agent_dto->description) {
        free(cognitive_agent_dto->description);
        cognitive_agent_dto->description = NULL;
    }
    if (cognitive_agent_dto->soul) {
        free(cognitive_agent_dto->soul);
        cognitive_agent_dto->soul = NULL;
    }
    if (cognitive_agent_dto->provider_key) {
        free(cognitive_agent_dto->provider_key);
        cognitive_agent_dto->provider_key = NULL;
    }
    if (cognitive_agent_dto->model_id) {
        free(cognitive_agent_dto->model_id);
        cognitive_agent_dto->model_id = NULL;
    }
    if (cognitive_agent_dto->engine_key) {
        free(cognitive_agent_dto->engine_key);
        cognitive_agent_dto->engine_key = NULL;
    }
    if (cognitive_agent_dto->tenant_id) {
        free(cognitive_agent_dto->tenant_id);
        cognitive_agent_dto->tenant_id = NULL;
    }
    if (cognitive_agent_dto->enrollment_id) {
        free(cognitive_agent_dto->enrollment_id);
        cognitive_agent_dto->enrollment_id = NULL;
    }
    free(cognitive_agent_dto);
}

cJSON *cognitive_agent_dto_convertToJSON(cognitive_agent_dto_t *cognitive_agent_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_dto->id
    if(cognitive_agent_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->timestamp
    if(cognitive_agent_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_dto->name
    if(cognitive_agent_dto->name) {
    if(cJSON_AddStringToObject(item, "name", cognitive_agent_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->avatar
    if(cognitive_agent_dto->avatar) {
    if(cJSON_AddStringToObject(item, "avatar", cognitive_agent_dto->avatar) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->description
    if(cognitive_agent_dto->description) {
    if(cJSON_AddStringToObject(item, "description", cognitive_agent_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->soul
    if(cognitive_agent_dto->soul) {
    if(cJSON_AddStringToObject(item, "soul", cognitive_agent_dto->soul) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->provider_key
    if(cognitive_agent_dto->provider_key) {
    if(cJSON_AddStringToObject(item, "providerKey", cognitive_agent_dto->provider_key) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->model_id
    if(cognitive_agent_dto->model_id) {
    if(cJSON_AddStringToObject(item, "modelId", cognitive_agent_dto->model_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->engine_key
    if(cognitive_agent_dto->engine_key) {
    if(cJSON_AddStringToObject(item, "engineKey", cognitive_agent_dto->engine_key) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->tenant_id
    if(cognitive_agent_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", cognitive_agent_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_dto->enrollment_id
    if(cognitive_agent_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", cognitive_agent_dto->enrollment_id) == NULL) {
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

cognitive_agent_dto_t *cognitive_agent_dto_parseFromJSON(cJSON *cognitive_agent_dtoJSON){

    cognitive_agent_dto_t *cognitive_agent_dto_local_var = NULL;

    // cognitive_agent_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->avatar
    cJSON *avatar = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "avatar");
    if (avatar) { 
    if(!cJSON_IsString(avatar) && !cJSON_IsNull(avatar))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->soul
    cJSON *soul = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "soul");
    if (soul) { 
    if(!cJSON_IsString(soul) && !cJSON_IsNull(soul))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->provider_key
    cJSON *provider_key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "providerKey");
    if (provider_key) { 
    if(!cJSON_IsString(provider_key) && !cJSON_IsNull(provider_key))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->model_id
    cJSON *model_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "modelId");
    if (model_id) { 
    if(!cJSON_IsString(model_id) && !cJSON_IsNull(model_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->engine_key
    cJSON *engine_key = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "engineKey");
    if (engine_key) { 
    if(!cJSON_IsString(engine_key) && !cJSON_IsNull(engine_key))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    cognitive_agent_dto_local_var = cognitive_agent_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        avatar && !cJSON_IsNull(avatar) ? strdup(avatar->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        soul && !cJSON_IsNull(soul) ? strdup(soul->valuestring) : NULL,
        provider_key && !cJSON_IsNull(provider_key) ? strdup(provider_key->valuestring) : NULL,
        model_id && !cJSON_IsNull(model_id) ? strdup(model_id->valuestring) : NULL,
        engine_key && !cJSON_IsNull(engine_key) ? strdup(engine_key->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return cognitive_agent_dto_local_var;
end:
    return NULL;

}
