#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "share_transfer_create_dto.h"



share_transfer_create_dto_t *share_transfer_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double value,
    char *new_share_holder_id,
    char *former_share_holder_id,
    char *share_transfer_reason_id,
    char *enrollment_id,
    char *tenant_id
    ) {
    share_transfer_create_dto_t *share_transfer_create_dto_local_var = malloc(sizeof(share_transfer_create_dto_t));
    if (!share_transfer_create_dto_local_var) {
        return NULL;
    }
    share_transfer_create_dto_local_var->id = id;
    share_transfer_create_dto_local_var->timestamp = timestamp;
    share_transfer_create_dto_local_var->description = description;
    share_transfer_create_dto_local_var->value = value;
    share_transfer_create_dto_local_var->new_share_holder_id = new_share_holder_id;
    share_transfer_create_dto_local_var->former_share_holder_id = former_share_holder_id;
    share_transfer_create_dto_local_var->share_transfer_reason_id = share_transfer_reason_id;
    share_transfer_create_dto_local_var->enrollment_id = enrollment_id;
    share_transfer_create_dto_local_var->tenant_id = tenant_id;

    return share_transfer_create_dto_local_var;
}


void share_transfer_create_dto_free(share_transfer_create_dto_t *share_transfer_create_dto) {
    if(NULL == share_transfer_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (share_transfer_create_dto->id) {
        free(share_transfer_create_dto->id);
        share_transfer_create_dto->id = NULL;
    }
    if (share_transfer_create_dto->timestamp) {
        free(share_transfer_create_dto->timestamp);
        share_transfer_create_dto->timestamp = NULL;
    }
    if (share_transfer_create_dto->description) {
        free(share_transfer_create_dto->description);
        share_transfer_create_dto->description = NULL;
    }
    if (share_transfer_create_dto->new_share_holder_id) {
        free(share_transfer_create_dto->new_share_holder_id);
        share_transfer_create_dto->new_share_holder_id = NULL;
    }
    if (share_transfer_create_dto->former_share_holder_id) {
        free(share_transfer_create_dto->former_share_holder_id);
        share_transfer_create_dto->former_share_holder_id = NULL;
    }
    if (share_transfer_create_dto->share_transfer_reason_id) {
        free(share_transfer_create_dto->share_transfer_reason_id);
        share_transfer_create_dto->share_transfer_reason_id = NULL;
    }
    if (share_transfer_create_dto->enrollment_id) {
        free(share_transfer_create_dto->enrollment_id);
        share_transfer_create_dto->enrollment_id = NULL;
    }
    if (share_transfer_create_dto->tenant_id) {
        free(share_transfer_create_dto->tenant_id);
        share_transfer_create_dto->tenant_id = NULL;
    }
    free(share_transfer_create_dto);
}

cJSON *share_transfer_create_dto_convertToJSON(share_transfer_create_dto_t *share_transfer_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // share_transfer_create_dto->id
    if(share_transfer_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", share_transfer_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->timestamp
    if(share_transfer_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", share_transfer_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // share_transfer_create_dto->description
    if(share_transfer_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", share_transfer_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->value
    if(share_transfer_create_dto->value) {
    if(cJSON_AddNumberToObject(item, "value", share_transfer_create_dto->value) == NULL) {
    goto fail; //Numeric
    }
    }


    // share_transfer_create_dto->new_share_holder_id
    if(share_transfer_create_dto->new_share_holder_id) {
    if(cJSON_AddStringToObject(item, "newShareHolderId", share_transfer_create_dto->new_share_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->former_share_holder_id
    if(share_transfer_create_dto->former_share_holder_id) {
    if(cJSON_AddStringToObject(item, "formerShareHolderId", share_transfer_create_dto->former_share_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->share_transfer_reason_id
    if(share_transfer_create_dto->share_transfer_reason_id) {
    if(cJSON_AddStringToObject(item, "shareTransferReasonId", share_transfer_create_dto->share_transfer_reason_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->enrollment_id
    if(share_transfer_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", share_transfer_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // share_transfer_create_dto->tenant_id
    if(share_transfer_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", share_transfer_create_dto->tenant_id) == NULL) {
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

share_transfer_create_dto_t *share_transfer_create_dto_parseFromJSON(cJSON *share_transfer_create_dtoJSON){

    share_transfer_create_dto_t *share_transfer_create_dto_local_var = NULL;

    // share_transfer_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // share_transfer_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "value");
    if (value) { 
    if(!cJSON_IsNumber(value))
    {
    goto end; //Numeric
    }
    }

    // share_transfer_create_dto->new_share_holder_id
    cJSON *new_share_holder_id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "newShareHolderId");
    if (new_share_holder_id) { 
    if(!cJSON_IsString(new_share_holder_id) && !cJSON_IsNull(new_share_holder_id))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->former_share_holder_id
    cJSON *former_share_holder_id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "formerShareHolderId");
    if (former_share_holder_id) { 
    if(!cJSON_IsString(former_share_holder_id) && !cJSON_IsNull(former_share_holder_id))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->share_transfer_reason_id
    cJSON *share_transfer_reason_id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "shareTransferReasonId");
    if (share_transfer_reason_id) { 
    if(!cJSON_IsString(share_transfer_reason_id) && !cJSON_IsNull(share_transfer_reason_id))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // share_transfer_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(share_transfer_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }


    share_transfer_create_dto_local_var = share_transfer_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        value ? value->valuedouble : 0,
        new_share_holder_id && !cJSON_IsNull(new_share_holder_id) ? strdup(new_share_holder_id->valuestring) : NULL,
        former_share_holder_id && !cJSON_IsNull(former_share_holder_id) ? strdup(former_share_holder_id->valuestring) : NULL,
        share_transfer_reason_id && !cJSON_IsNull(share_transfer_reason_id) ? strdup(share_transfer_reason_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL
        );

    return share_transfer_create_dto_local_var;
end:
    return NULL;

}
