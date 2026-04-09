#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tenant_position_dto.h"



tenant_position_dto_t *tenant_position_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *title,
    char *description,
    char *type
    ) {
    tenant_position_dto_t *tenant_position_dto_local_var = malloc(sizeof(tenant_position_dto_t));
    if (!tenant_position_dto_local_var) {
        return NULL;
    }
    tenant_position_dto_local_var->id = id;
    tenant_position_dto_local_var->timestamp = timestamp;
    tenant_position_dto_local_var->business_id = business_id;
    tenant_position_dto_local_var->business_profile_record_id = business_profile_record_id;
    tenant_position_dto_local_var->title = title;
    tenant_position_dto_local_var->description = description;
    tenant_position_dto_local_var->type = type;

    return tenant_position_dto_local_var;
}


void tenant_position_dto_free(tenant_position_dto_t *tenant_position_dto) {
    if(NULL == tenant_position_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (tenant_position_dto->id) {
        free(tenant_position_dto->id);
        tenant_position_dto->id = NULL;
    }
    if (tenant_position_dto->timestamp) {
        free(tenant_position_dto->timestamp);
        tenant_position_dto->timestamp = NULL;
    }
    if (tenant_position_dto->business_id) {
        free(tenant_position_dto->business_id);
        tenant_position_dto->business_id = NULL;
    }
    if (tenant_position_dto->business_profile_record_id) {
        free(tenant_position_dto->business_profile_record_id);
        tenant_position_dto->business_profile_record_id = NULL;
    }
    if (tenant_position_dto->title) {
        free(tenant_position_dto->title);
        tenant_position_dto->title = NULL;
    }
    if (tenant_position_dto->description) {
        free(tenant_position_dto->description);
        tenant_position_dto->description = NULL;
    }
    if (tenant_position_dto->type) {
        free(tenant_position_dto->type);
        tenant_position_dto->type = NULL;
    }
    free(tenant_position_dto);
}

cJSON *tenant_position_dto_convertToJSON(tenant_position_dto_t *tenant_position_dto) {
    cJSON *item = cJSON_CreateObject();

    // tenant_position_dto->id
    if(tenant_position_dto->id) {
    if(cJSON_AddStringToObject(item, "id", tenant_position_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto->timestamp
    if(tenant_position_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", tenant_position_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // tenant_position_dto->business_id
    if(tenant_position_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", tenant_position_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto->business_profile_record_id
    if(tenant_position_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordID", tenant_position_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto->title
    if(tenant_position_dto->title) {
    if(cJSON_AddStringToObject(item, "title", tenant_position_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto->description
    if(tenant_position_dto->description) {
    if(cJSON_AddStringToObject(item, "description", tenant_position_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // tenant_position_dto->type
    if(tenant_position_dto->type) {
    if(cJSON_AddStringToObject(item, "type", tenant_position_dto->type) == NULL) {
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

tenant_position_dto_t *tenant_position_dto_parseFromJSON(cJSON *tenant_position_dtoJSON){

    tenant_position_dto_t *tenant_position_dto_local_var = NULL;

    // tenant_position_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // tenant_position_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // tenant_position_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // tenant_position_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "businessProfileRecordID");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // tenant_position_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // tenant_position_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // tenant_position_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(tenant_position_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }


    tenant_position_dto_local_var = tenant_position_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL
        );

    return tenant_position_dto_local_var;
end:
    return NULL;

}
