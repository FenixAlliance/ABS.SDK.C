#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "social_group_dto.h"



social_group_dto_t *social_group_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *title,
    char *avatar_url,
    char *business_id,
    char *business_profile_record_id,
    char *social_profile_id
    ) {
    social_group_dto_t *social_group_dto_local_var = malloc(sizeof(social_group_dto_t));
    if (!social_group_dto_local_var) {
        return NULL;
    }
    social_group_dto_local_var->id = id;
    social_group_dto_local_var->timestamp = timestamp;
    social_group_dto_local_var->name = name;
    social_group_dto_local_var->title = title;
    social_group_dto_local_var->avatar_url = avatar_url;
    social_group_dto_local_var->business_id = business_id;
    social_group_dto_local_var->business_profile_record_id = business_profile_record_id;
    social_group_dto_local_var->social_profile_id = social_profile_id;

    return social_group_dto_local_var;
}


void social_group_dto_free(social_group_dto_t *social_group_dto) {
    if(NULL == social_group_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (social_group_dto->id) {
        free(social_group_dto->id);
        social_group_dto->id = NULL;
    }
    if (social_group_dto->timestamp) {
        free(social_group_dto->timestamp);
        social_group_dto->timestamp = NULL;
    }
    if (social_group_dto->name) {
        free(social_group_dto->name);
        social_group_dto->name = NULL;
    }
    if (social_group_dto->title) {
        free(social_group_dto->title);
        social_group_dto->title = NULL;
    }
    if (social_group_dto->avatar_url) {
        free(social_group_dto->avatar_url);
        social_group_dto->avatar_url = NULL;
    }
    if (social_group_dto->business_id) {
        free(social_group_dto->business_id);
        social_group_dto->business_id = NULL;
    }
    if (social_group_dto->business_profile_record_id) {
        free(social_group_dto->business_profile_record_id);
        social_group_dto->business_profile_record_id = NULL;
    }
    if (social_group_dto->social_profile_id) {
        free(social_group_dto->social_profile_id);
        social_group_dto->social_profile_id = NULL;
    }
    free(social_group_dto);
}

cJSON *social_group_dto_convertToJSON(social_group_dto_t *social_group_dto) {
    cJSON *item = cJSON_CreateObject();

    // social_group_dto->id
    if(social_group_dto->id) {
    if(cJSON_AddStringToObject(item, "id", social_group_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->timestamp
    if(social_group_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", social_group_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // social_group_dto->name
    if(social_group_dto->name) {
    if(cJSON_AddStringToObject(item, "name", social_group_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->title
    if(social_group_dto->title) {
    if(cJSON_AddStringToObject(item, "title", social_group_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->avatar_url
    if(social_group_dto->avatar_url) {
    if(cJSON_AddStringToObject(item, "avatarURL", social_group_dto->avatar_url) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->business_id
    if(social_group_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", social_group_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->business_profile_record_id
    if(social_group_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", social_group_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // social_group_dto->social_profile_id
    if(social_group_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", social_group_dto->social_profile_id) == NULL) {
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

social_group_dto_t *social_group_dto_parseFromJSON(cJSON *social_group_dtoJSON){

    social_group_dto_t *social_group_dto_local_var = NULL;

    // social_group_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // social_group_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // social_group_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // social_group_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // social_group_dto->avatar_url
    cJSON *avatar_url = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "avatarURL");
    if (avatar_url) { 
    if(!cJSON_IsString(avatar_url) && !cJSON_IsNull(avatar_url))
    {
    goto end; //String
    }
    }

    // social_group_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // social_group_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // social_group_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(social_group_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    social_group_dto_local_var = social_group_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        avatar_url && !cJSON_IsNull(avatar_url) ? strdup(avatar_url->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return social_group_dto_local_var;
end:
    return NULL;

}
