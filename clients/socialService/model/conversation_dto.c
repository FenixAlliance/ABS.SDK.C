#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conversation_dto.h"



conversation_dto_t *conversation_dto_create(
    char *id,
    char *timestamp,
    char *subject,
    char *social_profile_id,
    char *started_timestamp,
    char *last_message_timestamp,
    char *last_message,
    char *social_profile_name,
    char *social_profile_avatar_url
    ) {
    conversation_dto_t *conversation_dto_local_var = malloc(sizeof(conversation_dto_t));
    if (!conversation_dto_local_var) {
        return NULL;
    }
    conversation_dto_local_var->id = id;
    conversation_dto_local_var->timestamp = timestamp;
    conversation_dto_local_var->subject = subject;
    conversation_dto_local_var->social_profile_id = social_profile_id;
    conversation_dto_local_var->started_timestamp = started_timestamp;
    conversation_dto_local_var->last_message_timestamp = last_message_timestamp;
    conversation_dto_local_var->last_message = last_message;
    conversation_dto_local_var->social_profile_name = social_profile_name;
    conversation_dto_local_var->social_profile_avatar_url = social_profile_avatar_url;

    return conversation_dto_local_var;
}


void conversation_dto_free(conversation_dto_t *conversation_dto) {
    if(NULL == conversation_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (conversation_dto->id) {
        free(conversation_dto->id);
        conversation_dto->id = NULL;
    }
    if (conversation_dto->timestamp) {
        free(conversation_dto->timestamp);
        conversation_dto->timestamp = NULL;
    }
    if (conversation_dto->subject) {
        free(conversation_dto->subject);
        conversation_dto->subject = NULL;
    }
    if (conversation_dto->social_profile_id) {
        free(conversation_dto->social_profile_id);
        conversation_dto->social_profile_id = NULL;
    }
    if (conversation_dto->started_timestamp) {
        free(conversation_dto->started_timestamp);
        conversation_dto->started_timestamp = NULL;
    }
    if (conversation_dto->last_message_timestamp) {
        free(conversation_dto->last_message_timestamp);
        conversation_dto->last_message_timestamp = NULL;
    }
    if (conversation_dto->last_message) {
        free(conversation_dto->last_message);
        conversation_dto->last_message = NULL;
    }
    if (conversation_dto->social_profile_name) {
        free(conversation_dto->social_profile_name);
        conversation_dto->social_profile_name = NULL;
    }
    if (conversation_dto->social_profile_avatar_url) {
        free(conversation_dto->social_profile_avatar_url);
        conversation_dto->social_profile_avatar_url = NULL;
    }
    free(conversation_dto);
}

cJSON *conversation_dto_convertToJSON(conversation_dto_t *conversation_dto) {
    cJSON *item = cJSON_CreateObject();

    // conversation_dto->id
    if(conversation_dto->id) {
    if(cJSON_AddStringToObject(item, "id", conversation_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto->timestamp
    if(conversation_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", conversation_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // conversation_dto->subject
    if(conversation_dto->subject) {
    if(cJSON_AddStringToObject(item, "subject", conversation_dto->subject) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto->social_profile_id
    if(conversation_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", conversation_dto->social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto->started_timestamp
    if(conversation_dto->started_timestamp) {
    if(cJSON_AddStringToObject(item, "startedTimestamp", conversation_dto->started_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // conversation_dto->last_message_timestamp
    if(conversation_dto->last_message_timestamp) {
    if(cJSON_AddStringToObject(item, "lastMessageTimestamp", conversation_dto->last_message_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // conversation_dto->last_message
    if(conversation_dto->last_message) {
    if(cJSON_AddStringToObject(item, "lastMessage", conversation_dto->last_message) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto->social_profile_name
    if(conversation_dto->social_profile_name) {
    if(cJSON_AddStringToObject(item, "socialProfileName", conversation_dto->social_profile_name) == NULL) {
    goto fail; //String
    }
    }


    // conversation_dto->social_profile_avatar_url
    if(conversation_dto->social_profile_avatar_url) {
    if(cJSON_AddStringToObject(item, "socialProfileAvatarUrl", conversation_dto->social_profile_avatar_url) == NULL) {
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

conversation_dto_t *conversation_dto_parseFromJSON(cJSON *conversation_dtoJSON){

    conversation_dto_t *conversation_dto_local_var = NULL;

    // conversation_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // conversation_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // conversation_dto->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "subject");
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // conversation_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }

    // conversation_dto->started_timestamp
    cJSON *started_timestamp = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "startedTimestamp");
    if (started_timestamp) { 
    if(!cJSON_IsString(started_timestamp) && !cJSON_IsNull(started_timestamp))
    {
    goto end; //DateTime
    }
    }

    // conversation_dto->last_message_timestamp
    cJSON *last_message_timestamp = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "lastMessageTimestamp");
    if (last_message_timestamp) { 
    if(!cJSON_IsString(last_message_timestamp) && !cJSON_IsNull(last_message_timestamp))
    {
    goto end; //DateTime
    }
    }

    // conversation_dto->last_message
    cJSON *last_message = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "lastMessage");
    if (last_message) { 
    if(!cJSON_IsString(last_message) && !cJSON_IsNull(last_message))
    {
    goto end; //String
    }
    }

    // conversation_dto->social_profile_name
    cJSON *social_profile_name = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "socialProfileName");
    if (social_profile_name) { 
    if(!cJSON_IsString(social_profile_name) && !cJSON_IsNull(social_profile_name))
    {
    goto end; //String
    }
    }

    // conversation_dto->social_profile_avatar_url
    cJSON *social_profile_avatar_url = cJSON_GetObjectItemCaseSensitive(conversation_dtoJSON, "socialProfileAvatarUrl");
    if (social_profile_avatar_url) { 
    if(!cJSON_IsString(social_profile_avatar_url) && !cJSON_IsNull(social_profile_avatar_url))
    {
    goto end; //String
    }
    }


    conversation_dto_local_var = conversation_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        subject && !cJSON_IsNull(subject) ? strdup(subject->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL,
        started_timestamp && !cJSON_IsNull(started_timestamp) ? strdup(started_timestamp->valuestring) : NULL,
        last_message_timestamp && !cJSON_IsNull(last_message_timestamp) ? strdup(last_message_timestamp->valuestring) : NULL,
        last_message && !cJSON_IsNull(last_message) ? strdup(last_message->valuestring) : NULL,
        social_profile_name && !cJSON_IsNull(social_profile_name) ? strdup(social_profile_name->valuestring) : NULL,
        social_profile_avatar_url && !cJSON_IsNull(social_profile_avatar_url) ? strdup(social_profile_avatar_url->valuestring) : NULL
        );

    return conversation_dto_local_var;
end:
    return NULL;

}
