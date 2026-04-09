#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_dto.h"



shipment_dto_t *shipment_dto_create(
    char *id,
    char *tracking_code,
    int is_international,
    char *shipment_timestamp,
    char *delivery_timestamp,
    char *expected_shipping_date,
    char *expected_delivery_date
    ) {
    shipment_dto_t *shipment_dto_local_var = malloc(sizeof(shipment_dto_t));
    if (!shipment_dto_local_var) {
        return NULL;
    }
    shipment_dto_local_var->id = id;
    shipment_dto_local_var->tracking_code = tracking_code;
    shipment_dto_local_var->is_international = is_international;
    shipment_dto_local_var->shipment_timestamp = shipment_timestamp;
    shipment_dto_local_var->delivery_timestamp = delivery_timestamp;
    shipment_dto_local_var->expected_shipping_date = expected_shipping_date;
    shipment_dto_local_var->expected_delivery_date = expected_delivery_date;

    return shipment_dto_local_var;
}


void shipment_dto_free(shipment_dto_t *shipment_dto) {
    if(NULL == shipment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_dto->id) {
        free(shipment_dto->id);
        shipment_dto->id = NULL;
    }
    if (shipment_dto->tracking_code) {
        free(shipment_dto->tracking_code);
        shipment_dto->tracking_code = NULL;
    }
    if (shipment_dto->shipment_timestamp) {
        free(shipment_dto->shipment_timestamp);
        shipment_dto->shipment_timestamp = NULL;
    }
    if (shipment_dto->delivery_timestamp) {
        free(shipment_dto->delivery_timestamp);
        shipment_dto->delivery_timestamp = NULL;
    }
    if (shipment_dto->expected_shipping_date) {
        free(shipment_dto->expected_shipping_date);
        shipment_dto->expected_shipping_date = NULL;
    }
    if (shipment_dto->expected_delivery_date) {
        free(shipment_dto->expected_delivery_date);
        shipment_dto->expected_delivery_date = NULL;
    }
    free(shipment_dto);
}

cJSON *shipment_dto_convertToJSON(shipment_dto_t *shipment_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipment_dto->id
    if(shipment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", shipment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto->tracking_code
    if(shipment_dto->tracking_code) {
    if(cJSON_AddStringToObject(item, "trackingCode", shipment_dto->tracking_code) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto->is_international
    if(shipment_dto->is_international) {
    if(cJSON_AddBoolToObject(item, "isInternational", shipment_dto->is_international) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_dto->shipment_timestamp
    if(shipment_dto->shipment_timestamp) {
    if(cJSON_AddStringToObject(item, "shipmentTimestamp", shipment_dto->shipment_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_dto->delivery_timestamp
    if(shipment_dto->delivery_timestamp) {
    if(cJSON_AddStringToObject(item, "deliveryTimestamp", shipment_dto->delivery_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_dto->expected_shipping_date
    if(shipment_dto->expected_shipping_date) {
    if(cJSON_AddStringToObject(item, "expectedShippingDate", shipment_dto->expected_shipping_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_dto->expected_delivery_date
    if(shipment_dto->expected_delivery_date) {
    if(cJSON_AddStringToObject(item, "expectedDeliveryDate", shipment_dto->expected_delivery_date) == NULL) {
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

shipment_dto_t *shipment_dto_parseFromJSON(cJSON *shipment_dtoJSON){

    shipment_dto_t *shipment_dto_local_var = NULL;

    // shipment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // shipment_dto->tracking_code
    cJSON *tracking_code = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "trackingCode");
    if (tracking_code) { 
    if(!cJSON_IsString(tracking_code) && !cJSON_IsNull(tracking_code))
    {
    goto end; //String
    }
    }

    // shipment_dto->is_international
    cJSON *is_international = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "isInternational");
    if (is_international) { 
    if(!cJSON_IsBool(is_international))
    {
    goto end; //Bool
    }
    }

    // shipment_dto->shipment_timestamp
    cJSON *shipment_timestamp = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "shipmentTimestamp");
    if (shipment_timestamp) { 
    if(!cJSON_IsString(shipment_timestamp) && !cJSON_IsNull(shipment_timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipment_dto->delivery_timestamp
    cJSON *delivery_timestamp = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "deliveryTimestamp");
    if (delivery_timestamp) { 
    if(!cJSON_IsString(delivery_timestamp) && !cJSON_IsNull(delivery_timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipment_dto->expected_shipping_date
    cJSON *expected_shipping_date = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "expectedShippingDate");
    if (expected_shipping_date) { 
    if(!cJSON_IsString(expected_shipping_date) && !cJSON_IsNull(expected_shipping_date))
    {
    goto end; //DateTime
    }
    }

    // shipment_dto->expected_delivery_date
    cJSON *expected_delivery_date = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "expectedDeliveryDate");
    if (expected_delivery_date) { 
    if(!cJSON_IsString(expected_delivery_date) && !cJSON_IsNull(expected_delivery_date))
    {
    goto end; //DateTime
    }
    }


    shipment_dto_local_var = shipment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        tracking_code && !cJSON_IsNull(tracking_code) ? strdup(tracking_code->valuestring) : NULL,
        is_international ? is_international->valueint : 0,
        shipment_timestamp && !cJSON_IsNull(shipment_timestamp) ? strdup(shipment_timestamp->valuestring) : NULL,
        delivery_timestamp && !cJSON_IsNull(delivery_timestamp) ? strdup(delivery_timestamp->valuestring) : NULL,
        expected_shipping_date && !cJSON_IsNull(expected_shipping_date) ? strdup(expected_shipping_date->valuestring) : NULL,
        expected_delivery_date && !cJSON_IsNull(expected_delivery_date) ? strdup(expected_delivery_date->valuestring) : NULL
        );

    return shipment_dto_local_var;
end:
    return NULL;

}
