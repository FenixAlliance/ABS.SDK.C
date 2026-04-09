#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conversation_create_dto.h"



conversation_create_dto_t *conversation_create_dto_create(
    char *id,
    char *timestamp,
    char *subject,
    char *social_profile_id
    ) {
    conversation_create_dto_t *conversation_create_dto_local_var = malloc(sizeof(conversation_create_dto_t));
    if (!conversation_create_dto_local_var) {
        return NULL;
    }
    conversation_create_dto_local_var->id = id;
    conversation_create_dto_local_var->timestamp = timestamp;
    conversation_create_dto_local_var->subject = subject;
    conversation_create_dto_local_var->social_profile_id = social_profile_id;

    return conversation_create_dto_local_var;
}


void conversation_create_dto_free(conversation_create_dto_t *conversation_create_dto) {
    if(NULL == conversation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (conversation_create_dto->id) {
        free(conversation_create_dto->id);
        conversation_create_dto->id = NULL;
    }
    if (conversation_create_dto->timestamp) {
        free(conversation_create_dto->timestamp);
        conversation_create_dto->timestamp = NULL;
    }
    if (conversation_create_dto->subject) {
        free(conversation_create_dto->subject);
        conversation_create_dto->subject = NULL;
    }
    if (conversation_create_dto->social_profile_id) {
        free(conversation_create_dto->social_profile_id);
        conversation_create_dto->social_profile_id = NULL;
    }
    free(conversation_create_dto);
}

cJSON *conversation_create_dto_convertToJSON(conversation_create_dto_t *conversation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // conversation_create_dto->id
    if(conversation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", conversation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // conversation_create_dto->timestamp
    if(conversation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", conversation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // conversation_create_dto->subject
    if(conversation_create_dto->subject) {
    if(cJSON_AddStringToObject(item, "subject", conversation_create_dto->subject) == NULL) {
    goto fail; //String
    }
    }


    // conversation_create_dto->social_profile_id
    if(conversation_create_dto->social_profile_id) {
    if(cJSON_AddStringToObject(item, "socialProfileId", conversation_create_dto->social_profile_id) == NULL) {
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

conversation_create_dto_t *conversation_create_dto_parseFromJSON(cJSON *conversation_create_dtoJSON){

    conversation_create_dto_t *conversation_create_dto_local_var = NULL;

    // conversation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(conversation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // conversation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(conversation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // conversation_create_dto->subject
    cJSON *subject = cJSON_GetObjectItemCaseSensitive(conversation_create_dtoJSON, "subject");
    if (subject) { 
    if(!cJSON_IsString(subject) && !cJSON_IsNull(subject))
    {
    goto end; //String
    }
    }

    // conversation_create_dto->social_profile_id
    cJSON *social_profile_id = cJSON_GetObjectItemCaseSensitive(conversation_create_dtoJSON, "socialProfileId");
    if (social_profile_id) { 
    if(!cJSON_IsString(social_profile_id) && !cJSON_IsNull(social_profile_id))
    {
    goto end; //String
    }
    }


    conversation_create_dto_local_var = conversation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        subject && !cJSON_IsNull(subject) ? strdup(subject->valuestring) : NULL,
        social_profile_id && !cJSON_IsNull(social_profile_id) ? strdup(social_profile_id->valuestring) : NULL
        );

    return conversation_create_dto_local_var;
end:
    return NULL;

}
