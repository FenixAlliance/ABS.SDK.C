#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_conversation_create_dto.h"



cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_create(
    char *id,
    char *timestamp,
    char *channel_id,
    char *conversation_id,
    char *state,
    int current,
    char *account_holder_id,
    char *individual_id,
    char *organization_id,
    char *receiver_business_id
    ) {
    cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_local_var = malloc(sizeof(cognitive_agent_conversation_create_dto_t));
    if (!cognitive_agent_conversation_create_dto_local_var) {
        return NULL;
    }
    cognitive_agent_conversation_create_dto_local_var->id = id;
    cognitive_agent_conversation_create_dto_local_var->timestamp = timestamp;
    cognitive_agent_conversation_create_dto_local_var->channel_id = channel_id;
    cognitive_agent_conversation_create_dto_local_var->conversation_id = conversation_id;
    cognitive_agent_conversation_create_dto_local_var->state = state;
    cognitive_agent_conversation_create_dto_local_var->current = current;
    cognitive_agent_conversation_create_dto_local_var->account_holder_id = account_holder_id;
    cognitive_agent_conversation_create_dto_local_var->individual_id = individual_id;
    cognitive_agent_conversation_create_dto_local_var->organization_id = organization_id;
    cognitive_agent_conversation_create_dto_local_var->receiver_business_id = receiver_business_id;

    return cognitive_agent_conversation_create_dto_local_var;
}


void cognitive_agent_conversation_create_dto_free(cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto) {
    if(NULL == cognitive_agent_conversation_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_conversation_create_dto->id) {
        free(cognitive_agent_conversation_create_dto->id);
        cognitive_agent_conversation_create_dto->id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->timestamp) {
        free(cognitive_agent_conversation_create_dto->timestamp);
        cognitive_agent_conversation_create_dto->timestamp = NULL;
    }
    if (cognitive_agent_conversation_create_dto->channel_id) {
        free(cognitive_agent_conversation_create_dto->channel_id);
        cognitive_agent_conversation_create_dto->channel_id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->conversation_id) {
        free(cognitive_agent_conversation_create_dto->conversation_id);
        cognitive_agent_conversation_create_dto->conversation_id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->state) {
        free(cognitive_agent_conversation_create_dto->state);
        cognitive_agent_conversation_create_dto->state = NULL;
    }
    if (cognitive_agent_conversation_create_dto->account_holder_id) {
        free(cognitive_agent_conversation_create_dto->account_holder_id);
        cognitive_agent_conversation_create_dto->account_holder_id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->individual_id) {
        free(cognitive_agent_conversation_create_dto->individual_id);
        cognitive_agent_conversation_create_dto->individual_id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->organization_id) {
        free(cognitive_agent_conversation_create_dto->organization_id);
        cognitive_agent_conversation_create_dto->organization_id = NULL;
    }
    if (cognitive_agent_conversation_create_dto->receiver_business_id) {
        free(cognitive_agent_conversation_create_dto->receiver_business_id);
        cognitive_agent_conversation_create_dto->receiver_business_id = NULL;
    }
    free(cognitive_agent_conversation_create_dto);
}

cJSON *cognitive_agent_conversation_create_dto_convertToJSON(cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_conversation_create_dto->id
    if(cognitive_agent_conversation_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_conversation_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->timestamp
    if(cognitive_agent_conversation_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_conversation_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_conversation_create_dto->channel_id
    if(cognitive_agent_conversation_create_dto->channel_id) {
    if(cJSON_AddStringToObject(item, "channelID", cognitive_agent_conversation_create_dto->channel_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->conversation_id
    if(cognitive_agent_conversation_create_dto->conversation_id) {
    if(cJSON_AddStringToObject(item, "conversationID", cognitive_agent_conversation_create_dto->conversation_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->state
    if(cognitive_agent_conversation_create_dto->state) {
    if(cJSON_AddStringToObject(item, "state", cognitive_agent_conversation_create_dto->state) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->current
    if(cognitive_agent_conversation_create_dto->current) {
    if(cJSON_AddBoolToObject(item, "current", cognitive_agent_conversation_create_dto->current) == NULL) {
    goto fail; //Bool
    }
    }


    // cognitive_agent_conversation_create_dto->account_holder_id
    if(cognitive_agent_conversation_create_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", cognitive_agent_conversation_create_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->individual_id
    if(cognitive_agent_conversation_create_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", cognitive_agent_conversation_create_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->organization_id
    if(cognitive_agent_conversation_create_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", cognitive_agent_conversation_create_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_conversation_create_dto->receiver_business_id
    if(cognitive_agent_conversation_create_dto->receiver_business_id) {
    if(cJSON_AddStringToObject(item, "receiverBusinessId", cognitive_agent_conversation_create_dto->receiver_business_id) == NULL) {
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

cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_parseFromJSON(cJSON *cognitive_agent_conversation_create_dtoJSON){

    cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_local_var = NULL;

    // cognitive_agent_conversation_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_conversation_create_dto->channel_id
    cJSON *channel_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "channelID");
    if (channel_id) { 
    if(!cJSON_IsString(channel_id) && !cJSON_IsNull(channel_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->conversation_id
    cJSON *conversation_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "conversationID");
    if (conversation_id) { 
    if(!cJSON_IsString(conversation_id) && !cJSON_IsNull(conversation_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->current
    cJSON *current = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "current");
    if (current) { 
    if(!cJSON_IsBool(current))
    {
    goto end; //Bool
    }
    }

    // cognitive_agent_conversation_create_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_conversation_create_dto->receiver_business_id
    cJSON *receiver_business_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_conversation_create_dtoJSON, "receiverBusinessId");
    if (receiver_business_id) { 
    if(!cJSON_IsString(receiver_business_id) && !cJSON_IsNull(receiver_business_id))
    {
    goto end; //String
    }
    }


    cognitive_agent_conversation_create_dto_local_var = cognitive_agent_conversation_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        channel_id && !cJSON_IsNull(channel_id) ? strdup(channel_id->valuestring) : NULL,
        conversation_id && !cJSON_IsNull(conversation_id) ? strdup(conversation_id->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        current ? current->valueint : 0,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        receiver_business_id && !cJSON_IsNull(receiver_business_id) ? strdup(receiver_business_id->valuestring) : NULL
        );

    return cognitive_agent_conversation_create_dto_local_var;
end:
    return NULL;

}
