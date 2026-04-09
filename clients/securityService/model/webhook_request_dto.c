#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_request_dto.h"



webhook_request_dto_t *webhook_request_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *type,
    char *request_url,
    char *business_id
    ) {
    webhook_request_dto_t *webhook_request_dto_local_var = malloc(sizeof(webhook_request_dto_t));
    if (!webhook_request_dto_local_var) {
        return NULL;
    }
    webhook_request_dto_local_var->id = id;
    webhook_request_dto_local_var->timestamp = timestamp;
    webhook_request_dto_local_var->name = name;
    webhook_request_dto_local_var->type = type;
    webhook_request_dto_local_var->request_url = request_url;
    webhook_request_dto_local_var->business_id = business_id;

    return webhook_request_dto_local_var;
}


void webhook_request_dto_free(webhook_request_dto_t *webhook_request_dto) {
    if(NULL == webhook_request_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_request_dto->id) {
        free(webhook_request_dto->id);
        webhook_request_dto->id = NULL;
    }
    if (webhook_request_dto->timestamp) {
        free(webhook_request_dto->timestamp);
        webhook_request_dto->timestamp = NULL;
    }
    if (webhook_request_dto->name) {
        free(webhook_request_dto->name);
        webhook_request_dto->name = NULL;
    }
    if (webhook_request_dto->type) {
        free(webhook_request_dto->type);
        webhook_request_dto->type = NULL;
    }
    if (webhook_request_dto->request_url) {
        free(webhook_request_dto->request_url);
        webhook_request_dto->request_url = NULL;
    }
    if (webhook_request_dto->business_id) {
        free(webhook_request_dto->business_id);
        webhook_request_dto->business_id = NULL;
    }
    free(webhook_request_dto);
}

cJSON *webhook_request_dto_convertToJSON(webhook_request_dto_t *webhook_request_dto) {
    cJSON *item = cJSON_CreateObject();

    // webhook_request_dto->id
    if(webhook_request_dto->id) {
    if(cJSON_AddStringToObject(item, "id", webhook_request_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto->timestamp
    if(webhook_request_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", webhook_request_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // webhook_request_dto->name
    if(webhook_request_dto->name) {
    if(cJSON_AddStringToObject(item, "name", webhook_request_dto->name) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto->type
    if(webhook_request_dto->type) {
    if(cJSON_AddStringToObject(item, "type", webhook_request_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto->request_url
    if(webhook_request_dto->request_url) {
    if(cJSON_AddStringToObject(item, "requestURL", webhook_request_dto->request_url) == NULL) {
    goto fail; //String
    }
    }


    // webhook_request_dto->business_id
    if(webhook_request_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", webhook_request_dto->business_id) == NULL) {
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

webhook_request_dto_t *webhook_request_dto_parseFromJSON(cJSON *webhook_request_dtoJSON){

    webhook_request_dto_t *webhook_request_dto_local_var = NULL;

    // webhook_request_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // webhook_request_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // webhook_request_dto->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // webhook_request_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // webhook_request_dto->request_url
    cJSON *request_url = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "requestURL");
    if (request_url) { 
    if(!cJSON_IsString(request_url) && !cJSON_IsNull(request_url))
    {
    goto end; //String
    }
    }

    // webhook_request_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(webhook_request_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    webhook_request_dto_local_var = webhook_request_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        request_url && !cJSON_IsNull(request_url) ? strdup(request_url->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return webhook_request_dto_local_var;
end:
    return NULL;

}
