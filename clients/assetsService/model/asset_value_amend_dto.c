#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_value_amend_dto.h"



asset_value_amend_dto_t *asset_value_amend_dto_create(
    object_t *id,
    char *timestamp,
    object_t *business_id,
    object_t *business_profile_record_id,
    object_t *asset_id,
    char *asset_name,
    double previous_value,
    double new_value,
    double amendment_amount,
    char *reason,
    char *amendment_date,
    char *approved_by,
    char *approval_date
    ) {
    asset_value_amend_dto_t *asset_value_amend_dto_local_var = malloc(sizeof(asset_value_amend_dto_t));
    if (!asset_value_amend_dto_local_var) {
        return NULL;
    }
    asset_value_amend_dto_local_var->id = id;
    asset_value_amend_dto_local_var->timestamp = timestamp;
    asset_value_amend_dto_local_var->business_id = business_id;
    asset_value_amend_dto_local_var->business_profile_record_id = business_profile_record_id;
    asset_value_amend_dto_local_var->asset_id = asset_id;
    asset_value_amend_dto_local_var->asset_name = asset_name;
    asset_value_amend_dto_local_var->previous_value = previous_value;
    asset_value_amend_dto_local_var->new_value = new_value;
    asset_value_amend_dto_local_var->amendment_amount = amendment_amount;
    asset_value_amend_dto_local_var->reason = reason;
    asset_value_amend_dto_local_var->amendment_date = amendment_date;
    asset_value_amend_dto_local_var->approved_by = approved_by;
    asset_value_amend_dto_local_var->approval_date = approval_date;

    return asset_value_amend_dto_local_var;
}


void asset_value_amend_dto_free(asset_value_amend_dto_t *asset_value_amend_dto) {
    if(NULL == asset_value_amend_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_value_amend_dto->id) {
        object_free(asset_value_amend_dto->id);
        asset_value_amend_dto->id = NULL;
    }
    if (asset_value_amend_dto->timestamp) {
        free(asset_value_amend_dto->timestamp);
        asset_value_amend_dto->timestamp = NULL;
    }
    if (asset_value_amend_dto->business_id) {
        object_free(asset_value_amend_dto->business_id);
        asset_value_amend_dto->business_id = NULL;
    }
    if (asset_value_amend_dto->business_profile_record_id) {
        object_free(asset_value_amend_dto->business_profile_record_id);
        asset_value_amend_dto->business_profile_record_id = NULL;
    }
    if (asset_value_amend_dto->asset_id) {
        object_free(asset_value_amend_dto->asset_id);
        asset_value_amend_dto->asset_id = NULL;
    }
    if (asset_value_amend_dto->asset_name) {
        free(asset_value_amend_dto->asset_name);
        asset_value_amend_dto->asset_name = NULL;
    }
    if (asset_value_amend_dto->reason) {
        free(asset_value_amend_dto->reason);
        asset_value_amend_dto->reason = NULL;
    }
    if (asset_value_amend_dto->amendment_date) {
        free(asset_value_amend_dto->amendment_date);
        asset_value_amend_dto->amendment_date = NULL;
    }
    if (asset_value_amend_dto->approved_by) {
        free(asset_value_amend_dto->approved_by);
        asset_value_amend_dto->approved_by = NULL;
    }
    if (asset_value_amend_dto->approval_date) {
        free(asset_value_amend_dto->approval_date);
        asset_value_amend_dto->approval_date = NULL;
    }
    free(asset_value_amend_dto);
}

cJSON *asset_value_amend_dto_convertToJSON(asset_value_amend_dto_t *asset_value_amend_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_value_amend_dto->id
    if(asset_value_amend_dto->id) {
    cJSON *id_object = object_convertToJSON(asset_value_amend_dto->id);
    if(id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "id", id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // asset_value_amend_dto->timestamp
    if(asset_value_amend_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_value_amend_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_dto->business_id
    if(asset_value_amend_dto->business_id) {
    cJSON *business_id_object = object_convertToJSON(asset_value_amend_dto->business_id);
    if(business_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "businessId", business_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // asset_value_amend_dto->business_profile_record_id
    if(asset_value_amend_dto->business_profile_record_id) {
    cJSON *business_profile_record_id_object = object_convertToJSON(asset_value_amend_dto->business_profile_record_id);
    if(business_profile_record_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "businessProfileRecordId", business_profile_record_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // asset_value_amend_dto->asset_id
    if(asset_value_amend_dto->asset_id) {
    cJSON *asset_id_object = object_convertToJSON(asset_value_amend_dto->asset_id);
    if(asset_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assetId", asset_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // asset_value_amend_dto->asset_name
    if(asset_value_amend_dto->asset_name) {
    if(cJSON_AddStringToObject(item, "assetName", asset_value_amend_dto->asset_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->previous_value
    if(asset_value_amend_dto->previous_value) {
    if(cJSON_AddNumberToObject(item, "previousValue", asset_value_amend_dto->previous_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->new_value
    if(asset_value_amend_dto->new_value) {
    if(cJSON_AddNumberToObject(item, "newValue", asset_value_amend_dto->new_value) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->amendment_amount
    if(asset_value_amend_dto->amendment_amount) {
    if(cJSON_AddNumberToObject(item, "amendmentAmount", asset_value_amend_dto->amendment_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // asset_value_amend_dto->reason
    if(asset_value_amend_dto->reason) {
    if(cJSON_AddStringToObject(item, "reason", asset_value_amend_dto->reason) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->amendment_date
    if(asset_value_amend_dto->amendment_date) {
    if(cJSON_AddStringToObject(item, "amendmentDate", asset_value_amend_dto->amendment_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_value_amend_dto->approved_by
    if(asset_value_amend_dto->approved_by) {
    if(cJSON_AddStringToObject(item, "approvedBy", asset_value_amend_dto->approved_by) == NULL) {
    goto fail; //String
    }
    }


    // asset_value_amend_dto->approval_date
    if(asset_value_amend_dto->approval_date) {
    if(cJSON_AddStringToObject(item, "approvalDate", asset_value_amend_dto->approval_date) == NULL) {
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

asset_value_amend_dto_t *asset_value_amend_dto_parseFromJSON(cJSON *asset_value_amend_dtoJSON){

    asset_value_amend_dto_t *asset_value_amend_dto_local_var = NULL;

    // asset_value_amend_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "id");
    object_t *id_local_object = NULL;
    if (id) { 
    id_local_object = object_parseFromJSON(id); //object
    }

    // asset_value_amend_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "businessId");
    object_t *business_id_local_object = NULL;
    if (business_id) { 
    business_id_local_object = object_parseFromJSON(business_id); //object
    }

    // asset_value_amend_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "businessProfileRecordId");
    object_t *business_profile_record_id_local_object = NULL;
    if (business_profile_record_id) { 
    business_profile_record_id_local_object = object_parseFromJSON(business_profile_record_id); //object
    }

    // asset_value_amend_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "assetId");
    object_t *asset_id_local_object = NULL;
    if (asset_id) { 
    asset_id_local_object = object_parseFromJSON(asset_id); //object
    }

    // asset_value_amend_dto->asset_name
    cJSON *asset_name = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "assetName");
    if (asset_name) { 
    if(!cJSON_IsString(asset_name) && !cJSON_IsNull(asset_name))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->previous_value
    cJSON *previous_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "previousValue");
    if (previous_value) { 
    if(!cJSON_IsNumber(previous_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->new_value
    cJSON *new_value = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "newValue");
    if (new_value) { 
    if(!cJSON_IsNumber(new_value))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->amendment_amount
    cJSON *amendment_amount = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "amendmentAmount");
    if (amendment_amount) { 
    if(!cJSON_IsNumber(amendment_amount))
    {
    goto end; //Numeric
    }
    }

    // asset_value_amend_dto->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->amendment_date
    cJSON *amendment_date = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "amendmentDate");
    if (amendment_date) { 
    if(!cJSON_IsString(amendment_date) && !cJSON_IsNull(amendment_date))
    {
    goto end; //DateTime
    }
    }

    // asset_value_amend_dto->approved_by
    cJSON *approved_by = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "approvedBy");
    if (approved_by) { 
    if(!cJSON_IsString(approved_by) && !cJSON_IsNull(approved_by))
    {
    goto end; //String
    }
    }

    // asset_value_amend_dto->approval_date
    cJSON *approval_date = cJSON_GetObjectItemCaseSensitive(asset_value_amend_dtoJSON, "approvalDate");
    if (approval_date) { 
    if(!cJSON_IsString(approval_date) && !cJSON_IsNull(approval_date))
    {
    goto end; //DateTime
    }
    }


    asset_value_amend_dto_local_var = asset_value_amend_dto_create (
        id ? id_local_object : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id ? business_id_local_object : NULL,
        business_profile_record_id ? business_profile_record_id_local_object : NULL,
        asset_id ? asset_id_local_object : NULL,
        asset_name && !cJSON_IsNull(asset_name) ? strdup(asset_name->valuestring) : NULL,
        previous_value ? previous_value->valuedouble : 0,
        new_value ? new_value->valuedouble : 0,
        amendment_amount ? amendment_amount->valuedouble : 0,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        amendment_date && !cJSON_IsNull(amendment_date) ? strdup(amendment_date->valuestring) : NULL,
        approved_by && !cJSON_IsNull(approved_by) ? strdup(approved_by->valuestring) : NULL,
        approval_date && !cJSON_IsNull(approval_date) ? strdup(approval_date->valuestring) : NULL
        );

    return asset_value_amend_dto_local_var;
end:
    return NULL;

}
