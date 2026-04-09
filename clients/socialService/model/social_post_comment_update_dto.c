#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_comment_update_dto.h"



social_post_comment_update_dto_t *social_post_comment_update_dto_create(
    char *message,
    char *social_post_id
    ) {
    social_post_comment_update_dto_t *social_post_comment_update_dto_local_var = malloc(sizeof(social_post_comment_update_dto_t));
    if (!social_post_comment_update_dto_local_var) {
        return NULL;
    }
    social_post_comment_update_dto_local_var->message = message;
    social_post_comment_update_dto_local_var->social_post_id = social_post_id;

    return social_post_comment_update_dto_local_var;
}


void social_post_comment_update_dto_free(social_post_comment_update_dto_t *social_post_comment_update_dto) {
    if(NULL == social_post_comment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_comment_update_dto->message) {
        free(social_post_comment_update_dto->message);
        social_post_comment_update_dto->message = NULL;
    }
    if (social_post_comment_update_dto->social_post_id) {
        free(social_post_comment_update_dto->social_post_id);
        social_post_comment_update_dto->social_post_id = NULL;
    }
    free(social_post_comment_update_dto);
}

cJSON *social_post_comment_update_dto_convertToJSON(social_post_comment_update_dto_t *social_post_comment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_comment_update_dto->message
    if(social_post_comment_update_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_comment_update_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_comment_update_dto->social_post_id
    if(social_post_comment_update_dto->social_post_id) {
    if(cJSON_AddStringToObject(item, "socialPostId", social_post_comment_update_dto->social_post_id) == NULL) {
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

social_post_comment_update_dto_t *social_post_comment_update_dto_parseFromJSON(cJSON *social_post_comment_update_dtoJSON){

    social_post_comment_update_dto_t *social_post_comment_update_dto_local_var = NULL;

    // social_post_comment_update_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_comment_update_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_comment_update_dto->social_post_id
    cJSON *social_post_id = cJSON_GetObjectItemCaseSensitive(social_post_comment_update_dtoJSON, "socialPostId");
    if (social_post_id) { 
    if(!cJSON_IsString(social_post_id) && !cJSON_IsNull(social_post_id))
    {
    goto end; //String
    }
    }


    social_post_comment_update_dto_local_var = social_post_comment_update_dto_create (
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_post_id && !cJSON_IsNull(social_post_id) ? strdup(social_post_id->valuestring) : NULL
        );

    return social_post_comment_update_dto_local_var;
end:
    return NULL;

}
