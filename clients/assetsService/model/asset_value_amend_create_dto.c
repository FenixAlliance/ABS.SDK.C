#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_value_amend_create_dto.h"



asset_value_amend_create_dto_t *asset_value_amend_create_dto_create(
    char *id,
    char *timestamp,
    char *asset_id,
    double previous_value,
    double new_value,
    char *reason,
    char *amendment_date,
    char *approved_by,
    char *approval_date
    ) {
    asset_value_amend_create_dto_t *asset_value_amend_create_dto_local_var = malloc(sizeof(asset_value_amend_create_dto_t));
    if (!asset_value_amend_create_dto_local_var) {
        return NULL;
    }
    asset_value_amend_create_dto_local_var->id = id;
    asset_value_amend_create_dto_local_var->timestamp = timestamp;
    asset_value_amend_create_dto_local_var->asset_id = asset_id;
    asset_value_amend_create_dto_local_var->previous_value = previous_value;
    asset_value_amend_create_dto_local_var->new_value = new_value;
    asset_value_amend_create_dto_local_var->reason = reason;
    asset_value_amend_create_dto_local_var->amendment_date = amendment_date;
    asset_value_amend_create_dto_local_var->approved_by = approved_by;
    asset_value_amend_create_dto_local_var->approval_date = approval_date;

    return asset_value_amend_create_dto_local_var;
}


void asset_value_amend_create_dto_free(asset_value_amend_create_dto_t *asset_value_amend_create_dto) {
    if(NULL == asset_value_amend_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_value_amend_create_dto->id) {
        free(asset_value_amend_create_dto->id);
        asset_value_amend_create_dto->id = NULL;
    }
    if (asset_value_amend_create_dto->timestamp) {
        free(asset_value_amend_create_dto->timestamp);
        asset_value_amend_create_dto->timestamp = NULL;
    }
    if (asset_value_amend_create_dto->asset_id) {
        free(asset_value_amend_create_dto->asset_id);
        asset_value_amend_create_dto->asset_id = NULL;
    }
    if (asset_value_amend_create_dto->reason) {
        free(asset_value_amend_create_dto->reason);
        asset_value_amend_create_dto->reason = NULL;
    }
    if (asset_value_amend_create_dto->amendment_date) {
        free(asset_value_amend_create_dto->amendment_date);
        asset_value_amend_create_dto->amendment_date = NULL;
    }
    if (asset_value_amend_create_dto->approved_by) {
        free(asset_value_amend_create_dto->approved_by);
        asset_value_amend_create_dto->approved_by = NULL;
    }
    if (asset_value_amend_create_dto->approval_date) {
        free(asset_value_amend_create_dto->approval_date);
        asset_value_amend_create_dto->approval_date = NULL;
    }
    free(asset_value_amend_create_dto);
}

cJSON *asset_value_amend_create_dto_convertToJSON(asset_value_amend_create_dto_t *asset_value_amend_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_value_amend_create_dto->id
    if(asset_value_amend_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_value_amend_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_create_dto->timestamp
    if(asset_value_amend_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_value_amend_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_create_dto->asset_id
    if(asset_value_amend_create_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_value_amend_create_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_create_dto->previous_value
    if(asset_value_amend_create_dto->previous_value) {
    if(cJSON_AddNumberToObject(item, "previousValue", asset_value_amend_create_dto->previous_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_create_dto->new_value
    if(asset_value_amend_create_dto->new_value) {
    if(cJSON_AddNumberToObject(item, "newValue", asset_value_amend_create_dto->new_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_create_dto->reason
    if(asset_value_amend_create_dto->reason) {
    if(cJSON_AddStringToObject(item, "reason", asset_value_amend_create_dto->reason) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_create_dto->amendment_date
    if(asset_value_amend_create_dto->amendment_date) {
    if(cJSON_AddStringToObject(item, "amendmentDate", asset_value_amend_create_dto->amendment_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_create_dto->approved_by
    if(asset_value_amend_create_dto->approved_by) {
    if(cJSON_AddStringToObject(item, "approvedBy", asset_value_amend_create_dto->approved_by) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_create_dto->approval_date
    if(asset_value_amend_create_dto->approval_date) {
    if(cJSON_AddStringToObject(item, "approvalDate", asset_value_amend_create_dto->approval_date) == NULL) {
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

asset_value_amend_create_dto_t *asset_value_amend_create_dto_parseFromJSON(cJSON *asset_value_amend_create_dtoJSON){

    asset_value_amend_create_dto_t *asset_value_amend_create_dto_local_var = NULL;

    // asset_value_amend_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_create_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_value_amend_create_dto->previous_value
    cJSON *previous_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "previousValue");
    if (previous_value) { 
    if(!cJSON_IsNumber(previous_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_create_dto->new_value
    cJSON *new_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "newValue");
    if (new_value) { 
    if(!cJSON_IsNumber(new_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_create_dto->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // asset_value_amend_create_dto->amendment_date
    cJSON *amendment_date = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "amendmentDate");
    if (amendment_date) { 
    if(!cJSON_IsString(amendment_date) && !cJSON_IsNull(amendment_date))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_create_dto->approved_by
    cJSON *approved_by = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "approvedBy");
    if (approved_by) { 
    if(!cJSON_IsString(approved_by) && !cJSON_IsNull(approved_by))
    {
    goto end; //String
    }
    }

    // asset_value_amend_create_dto->approval_date
    cJSON *approval_date = cJSON_GetObjectItemCaseSensitive(asset_value_amend_create_dtoJSON, "approvalDate");
    if (approval_date) { 
    if(!cJSON_IsString(approval_date) && !cJSON_IsNull(approval_date))
    {
    goto end; //DateTime
    }
    }


    asset_value_amend_create_dto_local_var = asset_value_amend_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        previous_value ? previous_value->valuedouble : 0,
        new_value ? new_value->valuedouble : 0,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        amendment_date && !cJSON_IsNull(amendment_date) ? strdup(amendment_date->valuestring) : NULL,
        approved_by && !cJSON_IsNull(approved_by) ? strdup(approved_by->valuestring) : NULL,
        approval_date && !cJSON_IsNull(approval_date) ? strdup(approval_date->valuestring) : NULL
        );

    return asset_value_amend_create_dto_local_var;
end:
    return NULL;

}
