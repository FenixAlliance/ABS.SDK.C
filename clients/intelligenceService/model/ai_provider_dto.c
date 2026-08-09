#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ai_provider_dto.h"



ai_provider_dto_t *ai_provider_dto_create(
    char *provider_key
    ) {
    ai_provider_dto_t *ai_provider_dto_local_var = malloc(sizeof(ai_provider_dto_t));
    if (!ai_provider_dto_local_var) {
        return NULL;
    }
    ai_provider_dto_local_var->provider_key = provider_key;

    return ai_provider_dto_local_var;
}


void ai_provider_dto_free(ai_provider_dto_t *ai_provider_dto) {
    if(NULL == ai_provider_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (ai_provider_dto->provider_key) {
        free(ai_provider_dto->provider_key);
        ai_provider_dto->provider_key = NULL;
    }
    free(ai_provider_dto);
}

cJSON *ai_provider_dto_convertToJSON(ai_provider_dto_t *ai_provider_dto) {
    cJSON *item = cJSON_CreateObject();

    // ai_provider_dto->provider_key
    if(ai_provider_dto->provider_key) {
    if(cJSON_AddStringToObject(item, "providerKey", ai_provider_dto->provider_key) == NULL) {
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

ai_provider_dto_t *ai_provider_dto_parseFromJSON(cJSON *ai_provider_dtoJSON){

    ai_provider_dto_t *ai_provider_dto_local_var = NULL;

    // ai_provider_dto->provider_key
    cJSON *provider_key = cJSON_GetObjectItemCaseSensitive(ai_provider_dtoJSON, "providerKey");
    if (provider_key) { 
    if(!cJSON_IsString(provider_key) && !cJSON_IsNull(provider_key))
    {
    goto end; //String
    }
    }


    ai_provider_dto_local_var = ai_provider_dto_create (
        provider_key && !cJSON_IsNull(provider_key) ? strdup(provider_key->valuestring) : NULL
        );

    return ai_provider_dto_local_var;
end:
    return NULL;

}
