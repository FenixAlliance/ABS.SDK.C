#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "private_message_create_dto.h"



private_message_create_dto_t *private_message_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *conversation_id,
    char *sender_social_profile_id,
    char *receiver_social_profile_id
    ) {
    private_message_create_dto_t *private_message_create_dto_local_var = malloc(sizeof(private_message_create_dto_t));
    if (!private_message_create_dto_local_var) {
        return NULL;
    }
    private_message_create_dto_local_var->id = id;
    private_message_create_dto_local_var->timestamp = timestamp;
    private_message_create_dto_local_var->title = title;
    private_message_create_dto_local_var->message = message;
    private_message_create_dto_local_var->conversation_id = conversation_id;
    private_message_create_dto_local_var->sender_social_profile_id = sender_social_profile_id;
    private_message_create_dto_local_var->receiver_social_profile_id = receiver_social_profile_id;

    return private_message_create_dto_local_var;
}


void private_message_create_dto_free(private_message_create_dto_t *private_message_create_dto) {
    if(NULL == private_message_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (private_message_create_dto->id) {
        free(private_message_create_dto->id);
        private_message_create_dto->id = NULL;
    }
    if (private_message_create_dto->timestamp) {
        free(private_message_create_dto->timestamp);
        private_message_create_dto->timestamp = NULL;
    }
    if (private_message_create_dto->title) {
        free(private_message_create_dto->title);
        private_message_create_dto->title = NULL;
    }
    if (private_message_create_dto->message) {
        free(private_message_create_dto->message);
        private_message_create_dto->message = NULL;
    }
    if (private_message_create_dto->conversation_id) {
        free(private_message_create_dto->conversation_id);
        private_message_create_dto->conversation_id = NULL;
    }
    if (private_message_create_dto->sender_social_profile_id) {
        free(private_message_create_dto->sender_social_profile_id);
        private_message_create_dto->sender_social_profile_id = NULL;
    }
    if (private_message_create_dto->receiver_social_profile_id) {
        free(private_message_create_dto->receiver_social_profile_id);
        private_message_create_dto->receiver_social_profile_id = NULL;
    }
    free(private_message_create_dto);
}

cJSON *private_message_create_dto_convertToJSON(private_message_create_dto_t *private_message_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // private_message_create_dto->id
    if(private_message_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", private_message_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_create_dto->timestamp
    if(private_message_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", private_message_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // private_message_create_dto->title
    if(private_message_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", private_message_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // private_message_create_dto->message
    if(private_message_create_dto->message) {
    if(cJSON_AddStringToObject(item, "message", private_message_create_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // private_message_create_dto->conversation_id
    if(private_message_create_dto->conversation_id) {
    if(cJSON_AddStringToObject(item, "conversationId", private_message_create_dto->conversation_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_create_dto->sender_social_profile_id
    if(private_message_create_dto->sender_social_profile_id) {
    if(cJSON_AddStringToObject(item, "senderSocialProfileId", private_message_create_dto->sender_social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_create_dto->receiver_social_profile_id
    if(private_message_create_dto->receiver_social_profile_id) {
    if(cJSON_AddStringToObject(item, "receiverSocialProfileId", private_message_create_dto->receiver_social_profile_id) == NULL) {
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

private_message_create_dto_t *private_message_create_dto_parseFromJSON(cJSON *private_message_create_dtoJSON){

    private_message_create_dto_t *private_message_create_dto_local_var = NULL;

    // private_message_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // private_message_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // private_message_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // private_message_create_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // private_message_create_dto->conversation_id
    cJSON *conversation_id = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "conversationId");
    if (conversation_id) { 
    if(!cJSON_IsString(conversation_id) && !cJSON_IsNull(conversation_id))
    {
    goto end; //String
    }
    }

    // private_message_create_dto->sender_social_profile_id
    cJSON *sender_social_profile_id = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "senderSocialProfileId");
    if (sender_social_profile_id) { 
    if(!cJSON_IsString(sender_social_profile_id) && !cJSON_IsNull(sender_social_profile_id))
    {
    goto end; //String
    }
    }

    // private_message_create_dto->receiver_social_profile_id
    cJSON *receiver_social_profile_id = cJSON_GetObjectItemCaseSensitive(private_message_create_dtoJSON, "receiverSocialProfileId");
    if (receiver_social_profile_id) { 
    if(!cJSON_IsString(receiver_social_profile_id) && !cJSON_IsNull(receiver_social_profile_id))
    {
    goto end; //String
    }
    }


    private_message_create_dto_local_var = private_message_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        conversation_id && !cJSON_IsNull(conversation_id) ? strdup(conversation_id->valuestring) : NULL,
        sender_social_profile_id && !cJSON_IsNull(sender_social_profile_id) ? strdup(sender_social_profile_id->valuestring) : NULL,
        receiver_social_profile_id && !cJSON_IsNull(receiver_social_profile_id) ? strdup(receiver_social_profile_id->valuestring) : NULL
        );

    return private_message_create_dto_local_var;
end:
    return NULL;

}
