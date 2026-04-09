#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_transfer_dto.h"



asset_transfer_dto_t *asset_transfer_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *asset_id,
    char *asset_name,
    int is_root_transfer,
    char *serial_list,
    char *quantity,
    char *serial,
    char *previous_asset_transfer_id,
    char *source_location_id,
    char *source_location_name,
    char *destination_location_id,
    char *destination_location_name,
    char *source_contact_id,
    char *source_contact_name,
    char *destination_contact_id,
    char *destination_contact_name,
    char *source_department_id,
    char *source_department_name,
    char *destination_department_id,
    char *destination_department_name
    ) {
    asset_transfer_dto_t *asset_transfer_dto_local_var = malloc(sizeof(asset_transfer_dto_t));
    if (!asset_transfer_dto_local_var) {
        return NULL;
    }
    asset_transfer_dto_local_var->id = id;
    asset_transfer_dto_local_var->timestamp = timestamp;
    asset_transfer_dto_local_var->business_id = business_id;
    asset_transfer_dto_local_var->business_profile_record_id = business_profile_record_id;
    asset_transfer_dto_local_var->asset_id = asset_id;
    asset_transfer_dto_local_var->asset_name = asset_name;
    asset_transfer_dto_local_var->is_root_transfer = is_root_transfer;
    asset_transfer_dto_local_var->serial_list = serial_list;
    asset_transfer_dto_local_var->quantity = quantity;
    asset_transfer_dto_local_var->serial = serial;
    asset_transfer_dto_local_var->previous_asset_transfer_id = previous_asset_transfer_id;
    asset_transfer_dto_local_var->source_location_id = source_location_id;
    asset_transfer_dto_local_var->source_location_name = source_location_name;
    asset_transfer_dto_local_var->destination_location_id = destination_location_id;
    asset_transfer_dto_local_var->destination_location_name = destination_location_name;
    asset_transfer_dto_local_var->source_contact_id = source_contact_id;
    asset_transfer_dto_local_var->source_contact_name = source_contact_name;
    asset_transfer_dto_local_var->destination_contact_id = destination_contact_id;
    asset_transfer_dto_local_var->destination_contact_name = destination_contact_name;
    asset_transfer_dto_local_var->source_department_id = source_department_id;
    asset_transfer_dto_local_var->source_department_name = source_department_name;
    asset_transfer_dto_local_var->destination_department_id = destination_department_id;
    asset_transfer_dto_local_var->destination_department_name = destination_department_name;

    return asset_transfer_dto_local_var;
}


void asset_transfer_dto_free(asset_transfer_dto_t *asset_transfer_dto) {
    if(NULL == asset_transfer_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_transfer_dto->id) {
        free(asset_transfer_dto->id);
        asset_transfer_dto->id = NULL;
    }
    if (asset_transfer_dto->timestamp) {
        free(asset_transfer_dto->timestamp);
        asset_transfer_dto->timestamp = NULL;
    }
    if (asset_transfer_dto->business_id) {
        free(asset_transfer_dto->business_id);
        asset_transfer_dto->business_id = NULL;
    }
    if (asset_transfer_dto->business_profile_record_id) {
        free(asset_transfer_dto->business_profile_record_id);
        asset_transfer_dto->business_profile_record_id = NULL;
    }
    if (asset_transfer_dto->asset_id) {
        free(asset_transfer_dto->asset_id);
        asset_transfer_dto->asset_id = NULL;
    }
    if (asset_transfer_dto->asset_name) {
        free(asset_transfer_dto->asset_name);
        asset_transfer_dto->asset_name = NULL;
    }
    if (asset_transfer_dto->serial_list) {
        free(asset_transfer_dto->serial_list);
        asset_transfer_dto->serial_list = NULL;
    }
    if (asset_transfer_dto->quantity) {
        free(asset_transfer_dto->quantity);
        asset_transfer_dto->quantity = NULL;
    }
    if (asset_transfer_dto->serial) {
        free(asset_transfer_dto->serial);
        asset_transfer_dto->serial = NULL;
    }
    if (asset_transfer_dto->previous_asset_transfer_id) {
        free(asset_transfer_dto->previous_asset_transfer_id);
        asset_transfer_dto->previous_asset_transfer_id = NULL;
    }
    if (asset_transfer_dto->source_location_id) {
        free(asset_transfer_dto->source_location_id);
        asset_transfer_dto->source_location_id = NULL;
    }
    if (asset_transfer_dto->source_location_name) {
        free(asset_transfer_dto->source_location_name);
        asset_transfer_dto->source_location_name = NULL;
    }
    if (asset_transfer_dto->destination_location_id) {
        free(asset_transfer_dto->destination_location_id);
        asset_transfer_dto->destination_location_id = NULL;
    }
    if (asset_transfer_dto->destination_location_name) {
        free(asset_transfer_dto->destination_location_name);
        asset_transfer_dto->destination_location_name = NULL;
    }
    if (asset_transfer_dto->source_contact_id) {
        free(asset_transfer_dto->source_contact_id);
        asset_transfer_dto->source_contact_id = NULL;
    }
    if (asset_transfer_dto->source_contact_name) {
        free(asset_transfer_dto->source_contact_name);
        asset_transfer_dto->source_contact_name = NULL;
    }
    if (asset_transfer_dto->destination_contact_id) {
        free(asset_transfer_dto->destination_contact_id);
        asset_transfer_dto->destination_contact_id = NULL;
    }
    if (asset_transfer_dto->destination_contact_name) {
        free(asset_transfer_dto->destination_contact_name);
        asset_transfer_dto->destination_contact_name = NULL;
    }
    if (asset_transfer_dto->source_department_id) {
        free(asset_transfer_dto->source_department_id);
        asset_transfer_dto->source_department_id = NULL;
    }
    if (asset_transfer_dto->source_department_name) {
        free(asset_transfer_dto->source_department_name);
        asset_transfer_dto->source_department_name = NULL;
    }
    if (asset_transfer_dto->destination_department_id) {
        free(asset_transfer_dto->destination_department_id);
        asset_transfer_dto->destination_department_id = NULL;
    }
    if (asset_transfer_dto->destination_department_name) {
        free(asset_transfer_dto->destination_department_name);
        asset_transfer_dto->destination_department_name = NULL;
    }
    free(asset_transfer_dto);
}

cJSON *asset_transfer_dto_convertToJSON(asset_transfer_dto_t *asset_transfer_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_transfer_dto->id
    if(asset_transfer_dto->id) {
    if(cJSON_AddStringToObject(item, "id", asset_transfer_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->timestamp
    if(asset_transfer_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", asset_transfer_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // asset_transfer_dto->business_id
    if(asset_transfer_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessId", asset_transfer_dto->business_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->business_profile_record_id
    if(asset_transfer_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", asset_transfer_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->asset_id
    if(asset_transfer_dto->asset_id) {
    if(cJSON_AddStringToObject(item, "assetId", asset_transfer_dto->asset_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->asset_name
    if(asset_transfer_dto->asset_name) {
    if(cJSON_AddStringToObject(item, "assetName", asset_transfer_dto->asset_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->is_root_transfer
    if(asset_transfer_dto->is_root_transfer) {
    if(cJSON_AddBoolToObject(item, "isRootTransfer", asset_transfer_dto->is_root_transfer) == NULL) {
    goto fail; //Bool
    }
    }


    // asset_transfer_dto->serial_list
    if(asset_transfer_dto->serial_list) {
    if(cJSON_AddStringToObject(item, "serialList", asset_transfer_dto->serial_list) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->quantity
    if(asset_transfer_dto->quantity) {
    if(cJSON_AddStringToObject(item, "quantity", asset_transfer_dto->quantity) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->serial
    if(asset_transfer_dto->serial) {
    if(cJSON_AddStringToObject(item, "serial", asset_transfer_dto->serial) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->previous_asset_transfer_id
    if(asset_transfer_dto->previous_asset_transfer_id) {
    if(cJSON_AddStringToObject(item, "previousAssetTransferId", asset_transfer_dto->previous_asset_transfer_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_location_id
    if(asset_transfer_dto->source_location_id) {
    if(cJSON_AddStringToObject(item, "sourceLocationId", asset_transfer_dto->source_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_location_name
    if(asset_transfer_dto->source_location_name) {
    if(cJSON_AddStringToObject(item, "sourceLocationName", asset_transfer_dto->source_location_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_location_id
    if(asset_transfer_dto->destination_location_id) {
    if(cJSON_AddStringToObject(item, "destinationLocationId", asset_transfer_dto->destination_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_location_name
    if(asset_transfer_dto->destination_location_name) {
    if(cJSON_AddStringToObject(item, "destinationLocationName", asset_transfer_dto->destination_location_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_contact_id
    if(asset_transfer_dto->source_contact_id) {
    if(cJSON_AddStringToObject(item, "sourceContactId", asset_transfer_dto->source_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_contact_name
    if(asset_transfer_dto->source_contact_name) {
    if(cJSON_AddStringToObject(item, "sourceContactName", asset_transfer_dto->source_contact_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_contact_id
    if(asset_transfer_dto->destination_contact_id) {
    if(cJSON_AddStringToObject(item, "destinationContactId", asset_transfer_dto->destination_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_contact_name
    if(asset_transfer_dto->destination_contact_name) {
    if(cJSON_AddStringToObject(item, "destinationContactName", asset_transfer_dto->destination_contact_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_department_id
    if(asset_transfer_dto->source_department_id) {
    if(cJSON_AddStringToObject(item, "sourceDepartmentId", asset_transfer_dto->source_department_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->source_department_name
    if(asset_transfer_dto->source_department_name) {
    if(cJSON_AddStringToObject(item, "sourceDepartmentName", asset_transfer_dto->source_department_name) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_department_id
    if(asset_transfer_dto->destination_department_id) {
    if(cJSON_AddStringToObject(item, "destinationDepartmentId", asset_transfer_dto->destination_department_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_dto->destination_department_name
    if(asset_transfer_dto->destination_department_name) {
    if(cJSON_AddStringToObject(item, "destinationDepartmentName", asset_transfer_dto->destination_department_name) == NULL) {
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

asset_transfer_dto_t *asset_transfer_dto_parseFromJSON(cJSON *asset_transfer_dtoJSON){

    asset_transfer_dto_t *asset_transfer_dto_local_var = NULL;

    // asset_transfer_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // asset_transfer_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "businessId");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->asset_id
    cJSON *asset_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "assetId");
    if (asset_id) { 
    if(!cJSON_IsString(asset_id) && !cJSON_IsNull(asset_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->asset_name
    cJSON *asset_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "assetName");
    if (asset_name) { 
    if(!cJSON_IsString(asset_name) && !cJSON_IsNull(asset_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->is_root_transfer
    cJSON *is_root_transfer = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "isRootTransfer");
    if (is_root_transfer) { 
    if(!cJSON_IsBool(is_root_transfer))
    {
    goto end; //Bool
    }
    }

    // asset_transfer_dto->serial_list
    cJSON *serial_list = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "serialList");
    if (serial_list) { 
    if(!cJSON_IsString(serial_list) && !cJSON_IsNull(serial_list))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsString(quantity) && !cJSON_IsNull(quantity))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->serial
    cJSON *serial = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "serial");
    if (serial) { 
    if(!cJSON_IsString(serial) && !cJSON_IsNull(serial))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->previous_asset_transfer_id
    cJSON *previous_asset_transfer_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "previousAssetTransferId");
    if (previous_asset_transfer_id) { 
    if(!cJSON_IsString(previous_asset_transfer_id) && !cJSON_IsNull(previous_asset_transfer_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_location_id
    cJSON *source_location_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceLocationId");
    if (source_location_id) { 
    if(!cJSON_IsString(source_location_id) && !cJSON_IsNull(source_location_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_location_name
    cJSON *source_location_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceLocationName");
    if (source_location_name) { 
    if(!cJSON_IsString(source_location_name) && !cJSON_IsNull(source_location_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_location_id
    cJSON *destination_location_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationLocationId");
    if (destination_location_id) { 
    if(!cJSON_IsString(destination_location_id) && !cJSON_IsNull(destination_location_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_location_name
    cJSON *destination_location_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationLocationName");
    if (destination_location_name) { 
    if(!cJSON_IsString(destination_location_name) && !cJSON_IsNull(destination_location_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_contact_id
    cJSON *source_contact_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceContactId");
    if (source_contact_id) { 
    if(!cJSON_IsString(source_contact_id) && !cJSON_IsNull(source_contact_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_contact_name
    cJSON *source_contact_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceContactName");
    if (source_contact_name) { 
    if(!cJSON_IsString(source_contact_name) && !cJSON_IsNull(source_contact_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_contact_id
    cJSON *destination_contact_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationContactId");
    if (destination_contact_id) { 
    if(!cJSON_IsString(destination_contact_id) && !cJSON_IsNull(destination_contact_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_contact_name
    cJSON *destination_contact_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationContactName");
    if (destination_contact_name) { 
    if(!cJSON_IsString(destination_contact_name) && !cJSON_IsNull(destination_contact_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_department_id
    cJSON *source_department_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceDepartmentId");
    if (source_department_id) { 
    if(!cJSON_IsString(source_department_id) && !cJSON_IsNull(source_department_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->source_department_name
    cJSON *source_department_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "sourceDepartmentName");
    if (source_department_name) { 
    if(!cJSON_IsString(source_department_name) && !cJSON_IsNull(source_department_name))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_department_id
    cJSON *destination_department_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationDepartmentId");
    if (destination_department_id) { 
    if(!cJSON_IsString(destination_department_id) && !cJSON_IsNull(destination_department_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_dto->destination_department_name
    cJSON *destination_department_name = cJSON_GetObjectItemCaseSensitive(asset_transfer_dtoJSON, "destinationDepartmentName");
    if (destination_department_name) { 
    if(!cJSON_IsString(destination_department_name) && !cJSON_IsNull(destination_department_name))
    {
    goto end; //String
    }
    }


    asset_transfer_dto_local_var = asset_transfer_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        asset_id && !cJSON_IsNull(asset_id) ? strdup(asset_id->valuestring) : NULL,
        asset_name && !cJSON_IsNull(asset_name) ? strdup(asset_name->valuestring) : NULL,
        is_root_transfer ? is_root_transfer->valueint : 0,
        serial_list && !cJSON_IsNull(serial_list) ? strdup(serial_list->valuestring) : NULL,
        quantity && !cJSON_IsNull(quantity) ? strdup(quantity->valuestring) : NULL,
        serial && !cJSON_IsNull(serial) ? strdup(serial->valuestring) : NULL,
        previous_asset_transfer_id && !cJSON_IsNull(previous_asset_transfer_id) ? strdup(previous_asset_transfer_id->valuestring) : NULL,
        source_location_id && !cJSON_IsNull(source_location_id) ? strdup(source_location_id->valuestring) : NULL,
        source_location_name && !cJSON_IsNull(source_location_name) ? strdup(source_location_name->valuestring) : NULL,
        destination_location_id && !cJSON_IsNull(destination_location_id) ? strdup(destination_location_id->valuestring) : NULL,
        destination_location_name && !cJSON_IsNull(destination_location_name) ? strdup(destination_location_name->valuestring) : NULL,
        source_contact_id && !cJSON_IsNull(source_contact_id) ? strdup(source_contact_id->valuestring) : NULL,
        source_contact_name && !cJSON_IsNull(source_contact_name) ? strdup(source_contact_name->valuestring) : NULL,
        destination_contact_id && !cJSON_IsNull(destination_contact_id) ? strdup(destination_contact_id->valuestring) : NULL,
        destination_contact_name && !cJSON_IsNull(destination_contact_name) ? strdup(destination_contact_name->valuestring) : NULL,
        source_department_id && !cJSON_IsNull(source_department_id) ? strdup(source_department_id->valuestring) : NULL,
        source_department_name && !cJSON_IsNull(source_department_name) ? strdup(source_department_name->valuestring) : NULL,
        destination_department_id && !cJSON_IsNull(destination_department_id) ? strdup(destination_department_id->valuestring) : NULL,
        destination_department_name && !cJSON_IsNull(destination_department_name) ? strdup(destination_department_name->valuestring) : NULL
        );

    return asset_transfer_dto_local_var;
end:
    return NULL;

}
