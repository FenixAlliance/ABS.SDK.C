#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_external_login_dto.h"



user_external_login_dto_t *user_external_login_dto_create(
    char *login_provider,
    char *provider_key,
    char *provider_display_name
    ) {
    user_external_login_dto_t *user_external_login_dto_local_var = malloc(sizeof(user_external_login_dto_t));
    if (!user_external_login_dto_local_var) {
        return NULL;
    }
    user_external_login_dto_local_var->login_provider = login_provider;
    user_external_login_dto_local_var->provider_key = provider_key;
    user_external_login_dto_local_var->provider_display_name = provider_display_name;

    return user_external_login_dto_local_var;
}


void user_external_login_dto_free(user_external_login_dto_t *user_external_login_dto) {
    if(NULL == user_external_login_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_external_login_dto->login_provider) {
        free(user_external_login_dto->login_provider);
        user_external_login_dto->login_provider = NULL;
    }
    if (user_external_login_dto->provider_key) {
        free(user_external_login_dto->provider_key);
        user_external_login_dto->provider_key = NULL;
    }
    if (user_external_login_dto->provider_display_name) {
        free(user_external_login_dto->provider_display_name);
        user_external_login_dto->provider_display_name = NULL;
    }
    free(user_external_login_dto);
}

cJSON *user_external_login_dto_convertToJSON(user_external_login_dto_t *user_external_login_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_external_login_dto->login_provider
    if(user_external_login_dto->login_provider) {
    if(cJSON_AddStringToObject(item, "loginProvider", user_external_login_dto->login_provider) == NULL) {
    goto fail; //String
    }
    }


    // user_external_login_dto->provider_key
    if(user_external_login_dto->provider_key) {
    if(cJSON_AddStringToObject(item, "providerKey", user_external_login_dto->provider_key) == NULL) {
    goto fail; //String
    }
    }


    // user_external_login_dto->provider_display_name
    if(user_external_login_dto->provider_display_name) {
    if(cJSON_AddStringToObject(item, "providerDisplayName", user_external_login_dto->provider_display_name) == NULL) {
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

user_external_login_dto_t *user_external_login_dto_parseFromJSON(cJSON *user_external_login_dtoJSON){

    user_external_login_dto_t *user_external_login_dto_local_var = NULL;

    // user_external_login_dto->login_provider
    cJSON *login_provider = cJSON_GetObjectItemCaseSensitive(user_external_login_dtoJSON, "loginProvider");
    if (login_provider) { 
    if(!cJSON_IsString(login_provider) && !cJSON_IsNull(login_provider))
    {
    goto end; //String
    }
    }

    // user_external_login_dto->provider_key
    cJSON *provider_key = cJSON_GetObjectItemCaseSensitive(user_external_login_dtoJSON, "providerKey");
    if (provider_key) { 
    if(!cJSON_IsString(provider_key) && !cJSON_IsNull(provider_key))
    {
    goto end; //String
    }
    }

    // user_external_login_dto->provider_display_name
    cJSON *provider_display_name = cJSON_GetObjectItemCaseSensitive(user_external_login_dtoJSON, "providerDisplayName");
    if (provider_display_name) { 
    if(!cJSON_IsString(provider_display_name) && !cJSON_IsNull(provider_display_name))
    {
    goto end; //String
    }
    }


    user_external_login_dto_local_var = user_external_login_dto_create (
        login_provider && !cJSON_IsNull(login_provider) ? strdup(login_provider->valuestring) : NULL,
        provider_key && !cJSON_IsNull(provider_key) ? strdup(provider_key->valuestring) : NULL,
        provider_display_name && !cJSON_IsNull(provider_display_name) ? strdup(provider_display_name->valuestring) : NULL
        );

    return user_external_login_dto_local_var;
end:
    return NULL;

}
