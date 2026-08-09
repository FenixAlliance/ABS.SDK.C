#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_admin_update_dto.h"



user_admin_update_dto_t *user_admin_update_dto_create(
    char *email,
    char *user_name,
    char *handler,
    char *name,
    char *last_name,
    char *public_name,
    char *about,
    int two_factor_enabled,
    int lockout_enabled,
    char *lockout_end
    ) {
    user_admin_update_dto_t *user_admin_update_dto_local_var = malloc(sizeof(user_admin_update_dto_t));
    if (!user_admin_update_dto_local_var) {
        return NULL;
    }
    user_admin_update_dto_local_var->email = email;
    user_admin_update_dto_local_var->user_name = user_name;
    user_admin_update_dto_local_var->handler = handler;
    user_admin_update_dto_local_var->name = name;
    user_admin_update_dto_local_var->last_name = last_name;
    user_admin_update_dto_local_var->public_name = public_name;
    user_admin_update_dto_local_var->about = about;
    user_admin_update_dto_local_var->two_factor_enabled = two_factor_enabled;
    user_admin_update_dto_local_var->lockout_enabled = lockout_enabled;
    user_admin_update_dto_local_var->lockout_end = lockout_end;

    return user_admin_update_dto_local_var;
}


void user_admin_update_dto_free(user_admin_update_dto_t *user_admin_update_dto) {
    if(NULL == user_admin_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (user_admin_update_dto->email) {
        free(user_admin_update_dto->email);
        user_admin_update_dto->email = NULL;
    }
    if (user_admin_update_dto->user_name) {
        free(user_admin_update_dto->user_name);
        user_admin_update_dto->user_name = NULL;
    }
    if (user_admin_update_dto->handler) {
        free(user_admin_update_dto->handler);
        user_admin_update_dto->handler = NULL;
    }
    if (user_admin_update_dto->name) {
        free(user_admin_update_dto->name);
        user_admin_update_dto->name = NULL;
    }
    if (user_admin_update_dto->last_name) {
        free(user_admin_update_dto->last_name);
        user_admin_update_dto->last_name = NULL;
    }
    if (user_admin_update_dto->public_name) {
        free(user_admin_update_dto->public_name);
        user_admin_update_dto->public_name = NULL;
    }
    if (user_admin_update_dto->about) {
        free(user_admin_update_dto->about);
        user_admin_update_dto->about = NULL;
    }
    if (user_admin_update_dto->lockout_end) {
        free(user_admin_update_dto->lockout_end);
        user_admin_update_dto->lockout_end = NULL;
    }
    free(user_admin_update_dto);
}

cJSON *user_admin_update_dto_convertToJSON(user_admin_update_dto_t *user_admin_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // user_admin_update_dto->email
    if(user_admin_update_dto->email) {
    if(cJSON_AddStringToObject(item, "email", user_admin_update_dto->email) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->user_name
    if(user_admin_update_dto->user_name) {
    if(cJSON_AddStringToObject(item, "userName", user_admin_update_dto->user_name) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->handler
    if(user_admin_update_dto->handler) {
    if(cJSON_AddStringToObject(item, "handler", user_admin_update_dto->handler) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->name
    if(user_admin_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", user_admin_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->last_name
    if(user_admin_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", user_admin_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->public_name
    if(user_admin_update_dto->public_name) {
    if(cJSON_AddStringToObject(item, "publicName", user_admin_update_dto->public_name) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->about
    if(user_admin_update_dto->about) {
    if(cJSON_AddStringToObject(item, "about", user_admin_update_dto->about) == NULL) {
    goto fail; //String
    }
    }


    // user_admin_update_dto->two_factor_enabled
    if(user_admin_update_dto->two_factor_enabled) {
    if(cJSON_AddBoolToObject(item, "twoFactorEnabled", user_admin_update_dto->two_factor_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // user_admin_update_dto->lockout_enabled
    if(user_admin_update_dto->lockout_enabled) {
    if(cJSON_AddBoolToObject(item, "lockoutEnabled", user_admin_update_dto->lockout_enabled) == NULL) {
    goto fail; //Bool
    }
    }


    // user_admin_update_dto->lockout_end
    if(user_admin_update_dto->lockout_end) {
    if(cJSON_AddStringToObject(item, "lockoutEnd", user_admin_update_dto->lockout_end) == NULL) {
    goto fail; //Date-Time
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_admin_update_dto_t *user_admin_update_dto_parseFromJSON(cJSON *user_admin_update_dtoJSON){

    user_admin_update_dto_t *user_admin_update_dto_local_var = NULL;

    // user_admin_update_dto->email
    cJSON *email = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "email");
    if (email) { 
    if(!cJSON_IsString(email) && !cJSON_IsNull(email))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "userName");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->handler
    cJSON *handler = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "handler");
    if (handler) { 
    if(!cJSON_IsString(handler) && !cJSON_IsNull(handler))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->public_name
    cJSON *public_name = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "publicName");
    if (public_name) { 
    if(!cJSON_IsString(public_name) && !cJSON_IsNull(public_name))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->about
    cJSON *about = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "about");
    if (about) { 
    if(!cJSON_IsString(about) && !cJSON_IsNull(about))
    {
    goto end; //String
    }
    }

    // user_admin_update_dto->two_factor_enabled
    cJSON *two_factor_enabled = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "twoFactorEnabled");
    if (two_factor_enabled) { 
    if(!cJSON_IsBool(two_factor_enabled))
    {
    goto end; //Bool
    }
    }

    // user_admin_update_dto->lockout_enabled
    cJSON *lockout_enabled = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "lockoutEnabled");
    if (lockout_enabled) { 
    if(!cJSON_IsBool(lockout_enabled))
    {
    goto end; //Bool
    }
    }

    // user_admin_update_dto->lockout_end
    cJSON *lockout_end = cJSON_GetObjectItemCaseSensitive(user_admin_update_dtoJSON, "lockoutEnd");
    if (lockout_end) { 
    if(!cJSON_IsString(lockout_end) && !cJSON_IsNull(lockout_end))
    {
    goto end; //DateTime
    }
    }


    user_admin_update_dto_local_var = user_admin_update_dto_create (
        email && !cJSON_IsNull(email) ? strdup(email->valuestring) : NULL,
        user_name && !cJSON_IsNull(user_name) ? strdup(user_name->valuestring) : NULL,
        handler && !cJSON_IsNull(handler) ? strdup(handler->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        public_name && !cJSON_IsNull(public_name) ? strdup(public_name->valuestring) : NULL,
        about && !cJSON_IsNull(about) ? strdup(about->valuestring) : NULL,
        two_factor_enabled ? two_factor_enabled->valueint : 0,
        lockout_enabled ? lockout_enabled->valueint : 0,
        lockout_end && !cJSON_IsNull(lockout_end) ? strdup(lockout_end->valuestring) : NULL
        );

    return user_admin_update_dto_local_var;
end:
    return NULL;

}
