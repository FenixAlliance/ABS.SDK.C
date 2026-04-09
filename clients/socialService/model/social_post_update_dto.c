#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_update_dto.h"



social_post_update_dto_t *social_post_update_dto_create(
    char *title,
    char *message
    ) {
    social_post_update_dto_t *social_post_update_dto_local_var = malloc(sizeof(social_post_update_dto_t));
    if (!social_post_update_dto_local_var) {
        return NULL;
    }
    social_post_update_dto_local_var->title = title;
    social_post_update_dto_local_var->message = message;

    return social_post_update_dto_local_var;
}


void social_post_update_dto_free(social_post_update_dto_t *social_post_update_dto) {
    if(NULL == social_post_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_update_dto->title) {
        free(social_post_update_dto->title);
        social_post_update_dto->title = NULL;
    }
    if (social_post_update_dto->message) {
        free(social_post_update_dto->message);
        social_post_update_dto->message = NULL;
    }
    free(social_post_update_dto);
}

cJSON *social_post_update_dto_convertToJSON(social_post_update_dto_t *social_post_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_update_dto->title
    if(social_post_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_update_dto->message
    if(social_post_update_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_update_dto->message) == NULL) {
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

social_post_update_dto_t *social_post_update_dto_parseFromJSON(cJSON *social_post_update_dtoJSON){

    social_post_update_dto_t *social_post_update_dto_local_var = NULL;

    // social_post_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_update_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_update_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    social_post_update_dto_local_var = social_post_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return social_post_update_dto_local_var;
end:
    return NULL;

}
