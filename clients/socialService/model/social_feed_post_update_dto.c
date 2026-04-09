#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_post_update_dto.h"



social_feed_post_update_dto_t *social_feed_post_update_dto_create(
    char *title,
    char *message
    ) {
    social_feed_post_update_dto_t *social_feed_post_update_dto_local_var = malloc(sizeof(social_feed_post_update_dto_t));
    if (!social_feed_post_update_dto_local_var) {
        return NULL;
    }
    social_feed_post_update_dto_local_var->title = title;
    social_feed_post_update_dto_local_var->message = message;

    return social_feed_post_update_dto_local_var;
}


void social_feed_post_update_dto_free(social_feed_post_update_dto_t *social_feed_post_update_dto) {
    if(NULL == social_feed_post_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_post_update_dto->title) {
        free(social_feed_post_update_dto->title);
        social_feed_post_update_dto->title = NULL;
    }
    if (social_feed_post_update_dto->message) {
        free(social_feed_post_update_dto->message);
        social_feed_post_update_dto->message = NULL;
    }
    free(social_feed_post_update_dto);
}

cJSON *social_feed_post_update_dto_convertToJSON(social_feed_post_update_dto_t *social_feed_post_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_post_update_dto->title
    if(social_feed_post_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_feed_post_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_post_update_dto->message
    if(social_feed_post_update_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_feed_post_update_dto->message) == NULL) {
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

social_feed_post_update_dto_t *social_feed_post_update_dto_parseFromJSON(cJSON *social_feed_post_update_dtoJSON){

    social_feed_post_update_dto_t *social_feed_post_update_dto_local_var = NULL;

    // social_feed_post_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_feed_post_update_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_feed_post_update_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }


    social_feed_post_update_dto_local_var = social_feed_post_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL
        );

    return social_feed_post_update_dto_local_var;
end:
    return NULL;

}
