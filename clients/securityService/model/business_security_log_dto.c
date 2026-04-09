#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "business_security_log_dto.h"



business_security_log_dto_t *business_security_log_dto_create(
    char *id,
    char *timestamp,
    char *type,
    char *message,
    char *security_event,
    int requires_attention,
    char *business_id
    ) {
    business_security_log_dto_t *business_security_log_dto_local_var = malloc(sizeof(business_security_log_dto_t));
    if (!business_security_log_dto_local_var) {
        return NULL;
    }
    business_security_log_dto_local_var->id = id;
    business_security_log_dto_local_var->timestamp = timestamp;
    business_security_log_dto_local_var->type = type;
    business_security_log_dto_local_var->message = message;
    business_security_log_dto_local_var->security_event = security_event;
    business_security_log_dto_local_var->requires_attention = requires_attention;
    business_security_log_dto_local_var->business_id = business_id;

    return business_security_log_dto_local_var;
}


void business_security_log_dto_free(business_security_log_dto_t *business_security_log_dto) {
    if(NULL == business_security_log_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (business_security_log_dto->id) {
        free(business_security_log_dto->id);
        business_security_log_dto->id = NULL;
    }
    if (business_security_log_dto->timestamp) {
        free(business_security_log_dto->timestamp);
        business_security_log_dto->timestamp = NULL;
    }
    if (business_security_log_dto->type) {
        free(business_security_log_dto->type);
        business_security_log_dto->type = NULL;
    }
    if (business_security_log_dto->message) {
        free(business_security_log_dto->message);
        business_security_log_dto->message = NULL;
    }
    if (business_security_log_dto->security_event) {
        free(business_security_log_dto->security_event);
        business_security_log_dto->security_event = NULL;
    }
    if (business_security_log_dto->business_id) {
        free(business_security_log_dto->business_id);
        business_security_log_dto->business_id = NULL;
    }
    free(business_security_log_dto);
}

cJSON *business_security_log_dto_convertToJSON(business_security_log_dto_t *business_security_log_dto) {
    cJSON *item = cJSON_CreateObject();

    // business_security_log_dto->id
    if(business_security_log_dto->id) {
    if(cJSON_AddStringToObject(item, "id", business_security_log_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto->timestamp
    if(business_security_log_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", business_security_log_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // business_security_log_dto->type
    if(business_security_log_dto->type) {
    if(cJSON_AddStringToObject(item, "type", business_security_log_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto->message
    if(business_security_log_dto->message) {
    if(cJSON_AddStringToObject(item, "message", business_security_log_dto->message) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto->security_event
    if(business_security_log_dto->security_event) {
    if(cJSON_AddStringToObject(item, "securityEvent", business_security_log_dto->security_event) == NULL) {
    goto fail; //String
    }
    }


    // business_security_log_dto->requires_attention
    if(business_security_log_dto->requires_attention) {
    if(cJSON_AddBoolToObject(item, "requiresAttention", business_security_log_dto->requires_attention) == NULL) {
    goto fail; //Bool
    }
    }


    // business_security_log_dto->business_id
    if(business_security_log_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", business_security_log_dto->business_id) == NULL) {
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

business_security_log_dto_t *business_security_log_dto_parseFromJSON(cJSON *business_security_log_dtoJSON){

    business_security_log_dto_t *business_security_log_dto_local_var = NULL;

    // business_security_log_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // business_security_log_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // business_security_log_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // business_security_log_dto->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "message");
    if (message) { 
    if(!cJSON_IsString(message) && !cJSON_IsNull(message))
    {
    goto end; //String
    }
    }

    // business_security_log_dto->security_event
    cJSON *security_event = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "securityEvent");
    if (security_event) { 
    if(!cJSON_IsString(security_event) && !cJSON_IsNull(security_event))
    {
    goto end; //String
    }
    }

    // business_security_log_dto->requires_attention
    cJSON *requires_attention = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "requiresAttention");
    if (requires_attention) { 
    if(!cJSON_IsBool(requires_attention))
    {
    goto end; //Bool
    }
    }

    // business_security_log_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(business_security_log_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    business_security_log_dto_local_var = business_security_log_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        message && !cJSON_IsNull(message) ? strdup(message->valuestring) : NULL,
        security_event && !cJSON_IsNull(security_event) ? strdup(security_event->valuestring) : NULL,
        requires_attention ? requires_attention->valueint : 0,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return business_security_log_dto_local_var;
end:
    return NULL;

}
