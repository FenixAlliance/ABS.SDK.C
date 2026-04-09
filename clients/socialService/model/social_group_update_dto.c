#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_group_update_dto.h"



social_group_update_dto_t *social_group_update_dto_create(
    char *name,
    char *title,
    char *avatar_url
    ) {
    social_group_update_dto_t *social_group_update_dto_local_var = malloc(sizeof(social_group_update_dto_t));
    if (!social_group_update_dto_local_var) {
        return NULL;
    }
    social_group_update_dto_local_var->name = name;
    social_group_update_dto_local_var->title = title;
    social_group_update_dto_local_var->avatar_url = avatar_url;

    return social_group_update_dto_local_var;
}


void social_group_update_dto_free(social_group_update_dto_t *social_group_update_dto) {
    if(NULL == social_group_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_group_update_dto->name) {
        free(social_group_update_dto->name);
        social_group_update_dto->name = NULL;
    }
    if (social_group_update_dto->title) {
        free(social_group_update_dto->title);
        social_group_update_dto->title = NULL;
    }
    if (social_group_update_dto->avatar_url) {
        free(social_group_update_dto->avatar_url);
        social_group_update_dto->avatar_url = NULL;
    }
    free(social_group_update_dto);
}

cJSON *social_group_update_dto_convertToJSON(social_group_update_dto_t *social_group_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_group_update_dto->name
    if(social_group_update_dto->name) {
    if(cJSON_AddStringToObject(item, "name", social_group_update_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // social_group_update_dto->title
    if(social_group_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_group_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_group_update_dto->avatar_url
    if(social_group_update_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarURL", social_group_update_dto->avatar_url) == NULL) {
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

social_group_update_dto_t *social_group_update_dto_parseFromJSON(cJSON *social_group_update_dtoJSON){

    social_group_update_dto_t *social_group_update_dto_local_var = NULL;

    // social_group_update_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(social_group_update_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // social_group_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_group_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_group_update_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(social_group_update_dtoJSON, "avatarURL");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }


    social_group_update_dto_local_var = social_group_update_dto_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL
        );

    return social_group_update_dto_local_var;
end:
    return NULL;

}
