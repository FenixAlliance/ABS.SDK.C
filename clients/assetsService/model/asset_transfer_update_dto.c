#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "asset_transfer_update_dto.h"



asset_transfer_update_dto_t *asset_transfer_update_dto_create(
    char *serial_list,
    char *quantity,
    char *serial,
    char *destination_location_id,
    char *destination_contact_id,
    char *destination_department_id
    ) {
    asset_transfer_update_dto_t *asset_transfer_update_dto_local_var = malloc(sizeof(asset_transfer_update_dto_t));
    if (!asset_transfer_update_dto_local_var) {
        return NULL;
    }
    asset_transfer_update_dto_local_var->serial_list = serial_list;
    asset_transfer_update_dto_local_var->quantity = quantity;
    asset_transfer_update_dto_local_var->serial = serial;
    asset_transfer_update_dto_local_var->destination_location_id = destination_location_id;
    asset_transfer_update_dto_local_var->destination_contact_id = destination_contact_id;
    asset_transfer_update_dto_local_var->destination_department_id = destination_department_id;

    return asset_transfer_update_dto_local_var;
}


void asset_transfer_update_dto_free(asset_transfer_update_dto_t *asset_transfer_update_dto) {
    if(NULL == asset_transfer_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (asset_transfer_update_dto->serial_list) {
        free(asset_transfer_update_dto->serial_list);
        asset_transfer_update_dto->serial_list = NULL;
    }
    if (asset_transfer_update_dto->quantity) {
        free(asset_transfer_update_dto->quantity);
        asset_transfer_update_dto->quantity = NULL;
    }
    if (asset_transfer_update_dto->serial) {
        free(asset_transfer_update_dto->serial);
        asset_transfer_update_dto->serial = NULL;
    }
    if (asset_transfer_update_dto->destination_location_id) {
        free(asset_transfer_update_dto->destination_location_id);
        asset_transfer_update_dto->destination_location_id = NULL;
    }
    if (asset_transfer_update_dto->destination_contact_id) {
        free(asset_transfer_update_dto->destination_contact_id);
        asset_transfer_update_dto->destination_contact_id = NULL;
    }
    if (asset_transfer_update_dto->destination_department_id) {
        free(asset_transfer_update_dto->destination_department_id);
        asset_transfer_update_dto->destination_department_id = NULL;
    }
    free(asset_transfer_update_dto);
}

cJSON *asset_transfer_update_dto_convertToJSON(asset_transfer_update_dto_t *asset_transfer_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // asset_transfer_update_dto->serial_list
    if(asset_transfer_update_dto->serial_list) {
    if(cJSON_AddStringToObject(item, "serialList", asset_transfer_update_dto->serial_list) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_update_dto->quantity
    if(asset_transfer_update_dto->quantity) {
    if(cJSON_AddStringToObject(item, "quantity", asset_transfer_update_dto->quantity) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_update_dto->serial
    if(asset_transfer_update_dto->serial) {
    if(cJSON_AddStringToObject(item, "serial", asset_transfer_update_dto->serial) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_update_dto->destination_location_id
    if(asset_transfer_update_dto->destination_location_id) {
    if(cJSON_AddStringToObject(item, "destinationLocationId", asset_transfer_update_dto->destination_location_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_update_dto->destination_contact_id
    if(asset_transfer_update_dto->destination_contact_id) {
    if(cJSON_AddStringToObject(item, "destinationContactId", asset_transfer_update_dto->destination_contact_id) == NULL) {
    goto fail; //String
    }
    }


    // asset_transfer_update_dto->destination_department_id
    if(asset_transfer_update_dto->destination_department_id) {
    if(cJSON_AddStringToObject(item, "destinationDepartmentId", asset_transfer_update_dto->destination_department_id) == NULL) {
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

asset_transfer_update_dto_t *asset_transfer_update_dto_parseFromJSON(cJSON *asset_transfer_update_dtoJSON){

    asset_transfer_update_dto_t *asset_transfer_update_dto_local_var = NULL;

    // asset_transfer_update_dto->serial_list
    cJSON *serial_list = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "serialList");
    if (serial_list) { 
    if(!cJSON_IsString(serial_list) && !cJSON_IsNull(serial_list))
    {
    goto end; //String
    }
    }

    // asset_transfer_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsString(quantity) && !cJSON_IsNull(quantity))
    {
    goto end; //String
    }
    }

    // asset_transfer_update_dto->serial
    cJSON *serial = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "serial");
    if (serial) { 
    if(!cJSON_IsString(serial) && !cJSON_IsNull(serial))
    {
    goto end; //String
    }
    }

    // asset_transfer_update_dto->destination_location_id
    cJSON *destination_location_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "destinationLocationId");
    if (destination_location_id) { 
    if(!cJSON_IsString(destination_location_id) && !cJSON_IsNull(destination_location_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_update_dto->destination_contact_id
    cJSON *destination_contact_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "destinationContactId");
    if (destination_contact_id) { 
    if(!cJSON_IsString(destination_contact_id) && !cJSON_IsNull(destination_contact_id))
    {
    goto end; //String
    }
    }

    // asset_transfer_update_dto->destination_department_id
    cJSON *destination_department_id = cJSON_GetObjectItemCaseSensitive(asset_transfer_update_dtoJSON, "destinationDepartmentId");
    if (destination_department_id) { 
    if(!cJSON_IsString(destination_department_id) && !cJSON_IsNull(destination_department_id))
    {
    goto end; //String
    }
    }


    asset_transfer_update_dto_local_var = asset_transfer_update_dto_create (
        serial_list && !cJSON_IsNull(serial_list) ? strdup(serial_list->valuestring) : NULL,
        quantity && !cJSON_IsNull(quantity) ? strdup(quantity->valuestring) : NULL,
        serial && !cJSON_IsNull(serial) ? strdup(serial->valuestring) : NULL,
        destination_location_id && !cJSON_IsNull(destination_location_id) ? strdup(destination_location_id->valuestring) : NULL,
        destination_contact_id && !cJSON_IsNull(destination_contact_id) ? strdup(destination_contact_id->valuestring) : NULL,
        destination_department_id && !cJSON_IsNull(destination_department_id) ? strdup(destination_department_id->valuestring) : NULL
        );

    return asset_transfer_update_dto_local_var;
end:
    return NULL;

}
