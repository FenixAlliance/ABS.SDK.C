#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cognitive_agent_message_dto.h"



cognitive_agent_message_dto_t *cognitive_agent_message_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_conversation_id,
    char *cognitive_agent_id,
    char *role,
    char *content,
    int sequence,
    char *creation_date,
    char *metadata_json,
    char *ai_run_id,
    char *tenant_id,
    char *enrollment_id
    ) {
    cognitive_agent_message_dto_t *cognitive_agent_message_dto_local_var = malloc(sizeof(cognitive_agent_message_dto_t));
    if (!cognitive_agent_message_dto_local_var) {
        return NULL;
    }
    cognitive_agent_message_dto_local_var->id = id;
    cognitive_agent_message_dto_local_var->timestamp = timestamp;
    cognitive_agent_message_dto_local_var->cognitive_agent_conversation_id = cognitive_agent_conversation_id;
    cognitive_agent_message_dto_local_var->cognitive_agent_id = cognitive_agent_id;
    cognitive_agent_message_dto_local_var->role = role;
    cognitive_agent_message_dto_local_var->content = content;
    cognitive_agent_message_dto_local_var->sequence = sequence;
    cognitive_agent_message_dto_local_var->creation_date = creation_date;
    cognitive_agent_message_dto_local_var->metadata_json = metadata_json;
    cognitive_agent_message_dto_local_var->ai_run_id = ai_run_id;
    cognitive_agent_message_dto_local_var->tenant_id = tenant_id;
    cognitive_agent_message_dto_local_var->enrollment_id = enrollment_id;

    return cognitive_agent_message_dto_local_var;
}


void cognitive_agent_message_dto_free(cognitive_agent_message_dto_t *cognitive_agent_message_dto) {
    if(NULL == cognitive_agent_message_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (cognitive_agent_message_dto->id) {
        free(cognitive_agent_message_dto->id);
        cognitive_agent_message_dto->id = NULL;
    }
    if (cognitive_agent_message_dto->timestamp) {
        free(cognitive_agent_message_dto->timestamp);
        cognitive_agent_message_dto->timestamp = NULL;
    }
    if (cognitive_agent_message_dto->cognitive_agent_conversation_id) {
        free(cognitive_agent_message_dto->cognitive_agent_conversation_id);
        cognitive_agent_message_dto->cognitive_agent_conversation_id = NULL;
    }
    if (cognitive_agent_message_dto->cognitive_agent_id) {
        free(cognitive_agent_message_dto->cognitive_agent_id);
        cognitive_agent_message_dto->cognitive_agent_id = NULL;
    }
    if (cognitive_agent_message_dto->role) {
        free(cognitive_agent_message_dto->role);
        cognitive_agent_message_dto->role = NULL;
    }
    if (cognitive_agent_message_dto->content) {
        free(cognitive_agent_message_dto->content);
        cognitive_agent_message_dto->content = NULL;
    }
    if (cognitive_agent_message_dto->creation_date) {
        free(cognitive_agent_message_dto->creation_date);
        cognitive_agent_message_dto->creation_date = NULL;
    }
    if (cognitive_agent_message_dto->metadata_json) {
        free(cognitive_agent_message_dto->metadata_json);
        cognitive_agent_message_dto->metadata_json = NULL;
    }
    if (cognitive_agent_message_dto->ai_run_id) {
        free(cognitive_agent_message_dto->ai_run_id);
        cognitive_agent_message_dto->ai_run_id = NULL;
    }
    if (cognitive_agent_message_dto->tenant_id) {
        free(cognitive_agent_message_dto->tenant_id);
        cognitive_agent_message_dto->tenant_id = NULL;
    }
    if (cognitive_agent_message_dto->enrollment_id) {
        free(cognitive_agent_message_dto->enrollment_id);
        cognitive_agent_message_dto->enrollment_id = NULL;
    }
    free(cognitive_agent_message_dto);
}

cJSON *cognitive_agent_message_dto_convertToJSON(cognitive_agent_message_dto_t *cognitive_agent_message_dto) {
    cJSON *item = cJSON_CreateObject();

    // cognitive_agent_message_dto->id
    if(cognitive_agent_message_dto->id) {
    if(cJSON_AddStringToObject(item, "id", cognitive_agent_message_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->timestamp
    if(cognitive_agent_message_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", cognitive_agent_message_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_message_dto->cognitive_agent_conversation_id
    if(cognitive_agent_message_dto->cognitive_agent_conversation_id) {
    if(cJSON_AddStringToObject(item, "cognitiveAgentConversationId", cognitive_agent_message_dto->cognitive_agent_conversation_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->cognitive_agent_id
    if(cognitive_agent_message_dto->cognitive_agent_id) {
    if(cJSON_AddStringToObject(item, "cognitiveAgentId", cognitive_agent_message_dto->cognitive_agent_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->role
    if(cognitive_agent_message_dto->role) {
    if(cJSON_AddStringToObject(item, "role", cognitive_agent_message_dto->role) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->content
    if(cognitive_agent_message_dto->content) {
    if(cJSON_AddStringToObject(item, "content", cognitive_agent_message_dto->content) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->sequence
    if(cognitive_agent_message_dto->sequence) {
    if(cJSON_AddNumberToObject(item, "sequence", cognitive_agent_message_dto->sequence) == NULL) {
    goto fail; //Numeric
    }
    }


    // cognitive_agent_message_dto->creation_date
    if(cognitive_agent_message_dto->creation_date) {
    if(cJSON_AddStringToObject(item, "creationDate", cognitive_agent_message_dto->creation_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // cognitive_agent_message_dto->metadata_json
    if(cognitive_agent_message_dto->metadata_json) {
    if(cJSON_AddStringToObject(item, "metadataJson", cognitive_agent_message_dto->metadata_json) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->ai_run_id
    if(cognitive_agent_message_dto->ai_run_id) {
    if(cJSON_AddStringToObject(item, "aiRunId", cognitive_agent_message_dto->ai_run_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->tenant_id
    if(cognitive_agent_message_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", cognitive_agent_message_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // cognitive_agent_message_dto->enrollment_id
    if(cognitive_agent_message_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", cognitive_agent_message_dto->enrollment_id) == NULL) {
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

cognitive_agent_message_dto_t *cognitive_agent_message_dto_parseFromJSON(cJSON *cognitive_agent_message_dtoJSON){

    cognitive_agent_message_dto_t *cognitive_agent_message_dto_local_var = NULL;

    // cognitive_agent_message_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_message_dto->cognitive_agent_conversation_id
    cJSON *cognitive_agent_conversation_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "cognitiveAgentConversationId");
    if (cognitive_agent_conversation_id) { 
    if(!cJSON_IsString(cognitive_agent_conversation_id) && !cJSON_IsNull(cognitive_agent_conversation_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->cognitive_agent_id
    cJSON *cognitive_agent_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "cognitiveAgentId");
    if (cognitive_agent_id) { 
    if(!cJSON_IsString(cognitive_agent_id) && !cJSON_IsNull(cognitive_agent_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->role
    cJSON *role = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "role");
    if (role) { 
    if(!cJSON_IsString(role) && !cJSON_IsNull(role))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->content
    cJSON *content = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "content");
    if (content) { 
    if(!cJSON_IsString(content) && !cJSON_IsNull(content))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->sequence
    cJSON *sequence = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "sequence");
    if (sequence) { 
    if(!cJSON_IsNumber(sequence))
    {
    goto end; //Numeric
    }
    }

    // cognitive_agent_message_dto->creation_date
    cJSON *creation_date = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "creationDate");
    if (creation_date) { 
    if(!cJSON_IsString(creation_date) && !cJSON_IsNull(creation_date))
    {
    goto end; //DateTime
    }
    }

    // cognitive_agent_message_dto->metadata_json
    cJSON *metadata_json = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "metadataJson");
    if (metadata_json) { 
    if(!cJSON_IsString(metadata_json) && !cJSON_IsNull(metadata_json))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->ai_run_id
    cJSON *ai_run_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "aiRunId");
    if (ai_run_id) { 
    if(!cJSON_IsString(ai_run_id) && !cJSON_IsNull(ai_run_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // cognitive_agent_message_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(cognitive_agent_message_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }


    cognitive_agent_message_dto_local_var = cognitive_agent_message_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        cognitive_agent_conversation_id && !cJSON_IsNull(cognitive_agent_conversation_id) ? strdup(cognitive_agent_conversation_id->valuestring) : NULL,
        cognitive_agent_id && !cJSON_IsNull(cognitive_agent_id) ? strdup(cognitive_agent_id->valuestring) : NULL,
        role && !cJSON_IsNull(role) ? strdup(role->valuestring) : NULL,
        content && !cJSON_IsNull(content) ? strdup(content->valuestring) : NULL,
        sequence ? sequence->valuedouble : 0,
        creation_date && !cJSON_IsNull(creation_date) ? strdup(creation_date->valuestring) : NULL,
        metadata_json && !cJSON_IsNull(metadata_json) ? strdup(metadata_json->valuestring) : NULL,
        ai_run_id && !cJSON_IsNull(ai_run_id) ? strdup(ai_run_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL
        );

    return cognitive_agent_message_dto_local_var;
end:
    return NULL;

}
