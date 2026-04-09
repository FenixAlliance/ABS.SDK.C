#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_post_create_dto.h"



social_post_create_dto_t *social_post_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *social_feed_id,
    char *social_profile_id
    ) {
    social_post_create_dto_t *social_post_create_dto_local_var = malloc(sizeof(social_post_create_dto_t));
    if (!social_post_create_dto_local_var) {
        return NULL;
    }
    social_post_create_dto_local_var->id = id;
    social_post_create_dto_local_var->timestamp = timestamp;
    social_post_create_dto_local_var->title = title;
    social_post_create_dto_local_var->message = message;
    social_post_create_dto_local_var->social_feed_id = social_feed_id;
    social_post_create_dto_local_var->social_profile_id = social_profile_id;

    return social_post_create_dto_local_var;
}


void social_post_create_dto_free(social_post_create_dto_t *social_post_create_dto) {
    if(NULL == social_post_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_post_create_dto->id) {
        free(social_post_create_dto->id);
        social_post_create_dto->id = NULL;
    }
    if (social_post_create_dto->timestamp) {
        free(social_post_create_dto->timestamp);
        social_post_create_dto->timestamp = NULL;
    }
    if (social_post_create_dto->title) {
        free(social_post_create_dto->title);
        social_post_create_dto->title = NULL;
    }
    if (social_post_create_dto->message) {
        free(social_post_create_dto->message);
        social_post_create_dto->message = NULL;
    }
    if (social_post_create_dto->social_feed_id) {
        free(social_post_create_dto->social_feed_id);
        social_post_create_dto->social_feed_id = NULL;
    }
    if (social_post_create_dto->social_profile_id) {
        free(social_post_create_dto->social_profile_id);
        social_post_create_dto->social_profile_id = NULL;
    }
    free(social_post_create_dto);
}

cJSON *social_post_create_dto_convertToJSON(social_post_create_dto_t *social_post_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_post_create_dto->id
    if(social_post_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_post_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_create_dto->timestamp
    if(social_post_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_post_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_post_create_dto->title
    if(social_post_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_post_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_post_create_dto->message
    if(social_post_create_dto->message) {
    if(cJSON_AddStringToObject(item, "message", social_post_create_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // social_post_create_dto->social_feed_id
    if(social_post_create_dto->social_feed_id) {
    if(cJSON_AddStringToObject(item, "socialFeedId", social_post_create_dto->social_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // social_post_create_dto->social_profile_id
    if(social_post_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_post_create_dto->social_profile_id) == NULL) {
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

social_post_create_dto_t *social_post_create_dto_parseFromJSON(cJSON *social_post_create_dtoJSON){

    social_post_create_dto_t *social_post_create_dto_local_var = NULL;

    // social_post_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_post_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_post_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_post_create_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // social_post_create_dto->social_feed_id
    cJSON *social_feed_id = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "socialFeedId");
    if (social_feed_id) { 
    if(!cJSON_IsString(social_feed_id) && !cJSON_IsNull(social_feed_id))
    {
    goto end; //String
    }
    }

    // social_post_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_post_create_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    social_post_create_dto_local_var = social_post_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        social_feed_id && !cJSON_IsNull(social_feed_id) ? strdup(social_feed_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return social_post_create_dto_local_var;
end:
    return NULL;

}
