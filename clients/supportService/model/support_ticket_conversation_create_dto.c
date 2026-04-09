#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_ticket_conversation_create_dto.h"



support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto_create(
    char *id,
    char *timestamp,
    char *topic,
    int closed,
    char *closed_timestamp,
    char *social_profile_id
    ) {
    support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto_local_var = malloc(sizeof(support_ticket_conversation_create_dto_t));
    if (!support_ticket_conversation_create_dto_local_var) {
        return NULL;
    }
    support_ticket_conversation_create_dto_local_var->id = id;
    support_ticket_conversation_create_dto_local_var->timestamp = timestamp;
    support_ticket_conversation_create_dto_local_var->topic = topic;
    support_ticket_conversation_create_dto_local_var->closed = closed;
    support_ticket_conversation_create_dto_local_var->closed_timestamp = closed_timestamp;
    support_ticket_conversation_create_dto_local_var->social_profile_id = social_profile_id;

    return support_ticket_conversation_create_dto_local_var;
}


void support_ticket_conversation_create_dto_free(support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto) {
    if(NULL == support_ticket_conversation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_ticket_conversation_create_dto->id) {
        free(support_ticket_conversation_create_dto->id);
        support_ticket_conversation_create_dto->id = NULL;
    }
    if (support_ticket_conversation_create_dto->timestamp) {
        free(support_ticket_conversation_create_dto->timestamp);
        support_ticket_conversation_create_dto->timestamp = NULL;
    }
    if (support_ticket_conversation_create_dto->topic) {
        free(support_ticket_conversation_create_dto->topic);
        support_ticket_conversation_create_dto->topic = NULL;
    }
    if (support_ticket_conversation_create_dto->closed_timestamp) {
        free(support_ticket_conversation_create_dto->closed_timestamp);
        support_ticket_conversation_create_dto->closed_timestamp = NULL;
    }
    if (support_ticket_conversation_create_dto->social_profile_id) {
        free(support_ticket_conversation_create_dto->social_profile_id);
        support_ticket_conversation_create_dto->social_profile_id = NULL;
    }
    free(support_ticket_conversation_create_dto);
}

cJSON *support_ticket_conversation_create_dto_convertToJSON(support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_ticket_conversation_create_dto->id
    if(support_ticket_conversation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", support_ticket_conversation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_conversation_create_dto->timestamp
    if(support_ticket_conversation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", support_ticket_conversation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_conversation_create_dto->topic
    if(support_ticket_conversation_create_dto->topic) {
    if(cJSON_AddStringToObject(item, "topic", support_ticket_conversation_create_dto->topic) == NULL) {
    goto fail; //String
    }
    }


    // support_ticket_conversation_create_dto->closed
    if(support_ticket_conversation_create_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", support_ticket_conversation_create_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // support_ticket_conversation_create_dto->closed_timestamp
    if(support_ticket_conversation_create_dto->closed_timestamp) {
    if(cJSON_AddStringToObject(item, "closedTimestamp", support_ticket_conversation_create_dto->closed_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_ticket_conversation_create_dto->social_profile_id
    if(support_ticket_conversation_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileID", support_ticket_conversation_create_dto->social_profile_id) == NULL) {
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

support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto_parseFromJSON(cJSON *support_ticket_conversation_create_dtoJSON){

    support_ticket_conversation_create_dto_t *support_ticket_conversation_create_dto_local_var = NULL;

    // support_ticket_conversation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // support_ticket_conversation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_conversation_create_dto->topic
    cJSON *topic = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "topic");
    if (topic) { 
    if(!cJSON_IsString(topic) && !cJSON_IsNull(topic))
    {
    goto end; //String
    }
    }

    // support_ticket_conversation_create_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // support_ticket_conversation_create_dto->closed_timestamp
    cJSON *closed_timestamp = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "closedTimestamp");
    if (closed_timestamp) { 
    if(!cJSON_IsString(closed_timestamp) && !cJSON_IsNull(closed_timestamp))
    {
    goto end; //DateTime
    }
    }

    // support_ticket_conversation_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(support_ticket_conversation_create_dtoJSON, "socialProfileID");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    support_ticket_conversation_create_dto_local_var = support_ticket_conversation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        topic && !cJSON_IsNull(topic) ? strdup(topic->valuestring) : NULL,
        closed ? closed->valueint : 0,
        closed_timestamp && !cJSON_IsNull(closed_timestamp) ? strdup(closed_timestamp->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return support_ticket_conversation_create_dto_local_var;
end:
    return NULL;

}
