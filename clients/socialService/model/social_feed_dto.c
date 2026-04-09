#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_feed_dto.h"



social_feed_dto_t *social_feed_dto_create(
    char *id,
    char *timestamp,
    int social_posts_count,
    char *social_profile_id
    ) {
    social_feed_dto_t *social_feed_dto_local_var = malloc(sizeof(social_feed_dto_t));
    if (!social_feed_dto_local_var) {
        return NULL;
    }
    social_feed_dto_local_var->id = id;
    social_feed_dto_local_var->timestamp = timestamp;
    social_feed_dto_local_var->social_posts_count = social_posts_count;
    social_feed_dto_local_var->social_profile_id = social_profile_id;

    return social_feed_dto_local_var;
}


void social_feed_dto_free(social_feed_dto_t *social_feed_dto) {
    if(NULL == social_feed_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_feed_dto->id) {
        free(social_feed_dto->id);
        social_feed_dto->id = NULL;
    }
    if (social_feed_dto->timestamp) {
        free(social_feed_dto->timestamp);
        social_feed_dto->timestamp = NULL;
    }
    if (social_feed_dto->social_profile_id) {
        free(social_feed_dto->social_profile_id);
        social_feed_dto->social_profile_id = NULL;
    }
    free(social_feed_dto);
}

cJSON *social_feed_dto_convertToJSON(social_feed_dto_t *social_feed_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_feed_dto->id
    if(social_feed_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_feed_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_feed_dto->timestamp
    if(social_feed_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_feed_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_feed_dto->social_posts_count
    if(social_feed_dto->social_posts_count) {
    if(cJSON_AddNumberToObject(item, "socialPostsCount", social_feed_dto->social_posts_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // social_feed_dto->social_profile_id
    if(social_feed_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", social_feed_dto->social_profile_id) == NULL) {
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

social_feed_dto_t *social_feed_dto_parseFromJSON(cJSON *social_feed_dtoJSON){

    social_feed_dto_t *social_feed_dto_local_var = NULL;

    // social_feed_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_feed_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_feed_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_feed_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_feed_dto->social_posts_count
    cJSON *social_posts_count = cJSON_GetObjectItemCaseSensitive(social_feed_dtoJSON, "socialPostsCount");
    if (social_posts_count) { 
    if(!cJSON_IsNumber(social_posts_count))
    {
    goto end; //Numeric
    }
    }

    // social_feed_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_feed_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    social_feed_dto_local_var = social_feed_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        social_posts_count ? social_posts_count->valuedouble : 0,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return social_feed_dto_local_var;
end:
    return NULL;

}
