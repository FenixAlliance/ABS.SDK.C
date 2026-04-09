#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "private_message_dto.h"



private_message_dto_t *private_message_dto_create(
    char *id,
    char *timestamp,
    int read,
    char *title,
    char *message,
    char *conversation_id,
    char *sender_social_profile_id,
    char *receiver_social_profile_id,
    char *sent_timestamp,
    char *read_timestamp,
    char *received_timestamp
    ) {
    private_message_dto_t *private_message_dto_local_var = malloc(sizeof(private_message_dto_t));
    if (!private_message_dto_local_var) {
        return NULL;
    }
    private_message_dto_local_var->id = id;
    private_message_dto_local_var->timestamp = timestamp;
    private_message_dto_local_var->read = read;
    private_message_dto_local_var->title = title;
    private_message_dto_local_var->message = message;
    private_message_dto_local_var->conversation_id = conversation_id;
    private_message_dto_local_var->sender_social_profile_id = sender_social_profile_id;
    private_message_dto_local_var->receiver_social_profile_id = receiver_social_profile_id;
    private_message_dto_local_var->sent_timestamp = sent_timestamp;
    private_message_dto_local_var->read_timestamp = read_timestamp;
    private_message_dto_local_var->received_timestamp = received_timestamp;

    return private_message_dto_local_var;
}


void private_message_dto_free(private_message_dto_t *private_message_dto) {
    if(NULL == private_message_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (private_message_dto->id) {
        free(private_message_dto->id);
        private_message_dto->id = NULL;
    }
    if (private_message_dto->timestamp) {
        free(private_message_dto->timestamp);
        private_message_dto->timestamp = NULL;
    }
    if (private_message_dto->title) {
        free(private_message_dto->title);
        private_message_dto->title = NULL;
    }
    if (private_message_dto->message) {
        free(private_message_dto->message);
        private_message_dto->message = NULL;
    }
    if (private_message_dto->conversation_id) {
        free(private_message_dto->conversation_id);
        private_message_dto->conversation_id = NULL;
    }
    if (private_message_dto->sender_social_profile_id) {
        free(private_message_dto->sender_social_profile_id);
        private_message_dto->sender_social_profile_id = NULL;
    }
    if (private_message_dto->receiver_social_profile_id) {
        free(private_message_dto->receiver_social_profile_id);
        private_message_dto->receiver_social_profile_id = NULL;
    }
    if (private_message_dto->sent_timestamp) {
        free(private_message_dto->sent_timestamp);
        private_message_dto->sent_timestamp = NULL;
    }
    if (private_message_dto->read_timestamp) {
        free(private_message_dto->read_timestamp);
        private_message_dto->read_timestamp = NULL;
    }
    if (private_message_dto->received_timestamp) {
        free(private_message_dto->received_timestamp);
        private_message_dto->received_timestamp = NULL;
    }
    free(private_message_dto);
}

cJSON *private_message_dto_convertToJSON(private_message_dto_t *private_message_dto) {
    cJSON *item = cJSON_CreateObject();

    // private_message_dto->id
    if(private_message_dto->id) {
    if(cJSON_AddStringToObject(item, "id", private_message_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->timestamp
    if(private_message_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", private_message_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // private_message_dto->read
    if(private_message_dto->read) {
    if(cJSON_AddBoolToObject(item, "read", private_message_dto->read) == NULL) {
    goto fail; //Bool
    }
    }


    // private_message_dto->title
    if(private_message_dto->title) {
    if(cJSON_AddStringToObject(item, "title", private_message_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->message
    if(private_message_dto->message) {
    if(cJSON_AddStringToObject(item, "message", private_message_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->conversation_id
    if(private_message_dto->conversation_id) {
    if(cJSON_AddStringToObject(item, "conversationId", private_message_dto->conversation_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->sender_social_profile_id
    if(private_message_dto->sender_social_profile_id) {
    if(cJSON_AddStringToObject(item, "senderSocialProfileId", private_message_dto->sender_social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->receiver_social_profile_id
    if(private_message_dto->receiver_social_profile_id) {
    if(cJSON_AddStringToObject(item, "receiverSocialProfileID", private_message_dto->receiver_social_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // private_message_dto->sent_timestamp
    if(private_message_dto->sent_timestamp) {
    if(cJSON_AddStringToObject(item, "sentTimestamp", private_message_dto->sent_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // private_message_dto->read_timestamp
    if(private_message_dto->read_timestamp) {
    if(cJSON_AddStringToObject(item, "readTimestamp", private_message_dto->read_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // private_message_dto->received_timestamp
    if(private_message_dto->received_timestamp) {
    if(cJSON_AddStringToObject(item, "receivedTimestamp", private_message_dto->received_timestamp) == NULL) {
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

private_message_dto_t *private_message_dto_parseFromJSON(cJSON *private_message_dtoJSON){

    private_message_dto_t *private_message_dto_local_var = NULL;

    // private_message_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // private_message_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // private_message_dto->read
    cJSON *read = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "read");
    if (read) { 
    if(!cJSON_IsBool(read))
    {
    goto end; //Bool
    }
    }

    // private_message_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // private_message_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // private_message_dto->conversation_id
    cJSON *conversation_id = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "conversationId");
    if (conversation_id) { 
    if(!cJSON_IsString(conversation_id) && !cJSON_IsNull(conversation_id))
    {
    goto end; //String
    }
    }

    // private_message_dto->sender_social_profile_id
    cJSON *sender_social_profile_id = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "senderSocialProfileId");
    if (sender_social_profile_id) { 
    if(!cJSON_IsString(sender_social_profile_id) && !cJSON_IsNull(sender_social_profile_id))
    {
    goto end; //String
    }
    }

    // private_message_dto->receiver_social_profile_id
    cJSON *receiver_social_profile_id = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "receiverSocialProfileID");
    if (receiver_social_profile_id) { 
    if(!cJSON_IsString(receiver_social_profile_id) && !cJSON_IsNull(receiver_social_profile_id))
    {
    goto end; //String
    }
    }

    // private_message_dto->sent_timestamp
    cJSON *sent_timestamp = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "sentTimestamp");
    if (sent_timestamp) { 
    if(!cJSON_IsString(sent_timestamp) && !cJSON_IsNull(sent_timestamp))
    {
    goto end; //DateTime
    }
    }

    // private_message_dto->read_timestamp
    cJSON *read_timestamp = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "readTimestamp");
    if (read_timestamp) { 
    if(!cJSON_IsString(read_timestamp) && !cJSON_IsNull(read_timestamp))
    {
    goto end; //DateTime
    }
    }

    // private_message_dto->received_timestamp
    cJSON *received_timestamp = cJSON_GetObjectItemCaseSensitive(private_message_dtoJSON, "receivedTimestamp");
    if (received_timestamp) { 
    if(!cJSON_IsString(received_timestamp) && !cJSON_IsNull(received_timestamp))
    {
    goto end; //DateTime
    }
    }


    private_message_dto_local_var = private_message_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        read ? read->valueint : 0,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        conversation_id && !cJSON_IsNull(conversation_id) ? strdup(conversation_id->valuestring) : NULL,
        sender_social_profile_id && !cJSON_IsNull(sender_social_profile_id) ? strdup(sender_social_profile_id->valuestring) : NULL,
        receiver_social_profile_id && !cJSON_IsNull(receiver_social_profile_id) ? strdup(receiver_social_profile_id->valuestring) : NULL,
        sent_timestamp && !cJSON_IsNull(sent_timestamp) ? strdup(sent_timestamp->valuestring) : NULL,
        read_timestamp && !cJSON_IsNull(read_timestamp) ? strdup(read_timestamp->valuestring) : NULL,
        received_timestamp && !cJSON_IsNull(received_timestamp) ? strdup(received_timestamp->valuestring) : NULL
        );

    return private_message_dto_local_var;
end:
    return NULL;

}
