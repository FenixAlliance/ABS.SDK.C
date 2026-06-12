#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipping_label_update_dto.h"



shipping_label_update_dto_t *shipping_label_update_dto_create(
    char *tracking_code,
    char *expected_delivery,
    char *location_id,
    char *shipment_id,
    char *shipping_courier_id
    ) {
    shipping_label_update_dto_t *shipping_label_update_dto_local_var = malloc(sizeof(shipping_label_update_dto_t));
    if (!shipping_label_update_dto_local_var) {
        return NULL;
    }
    shipping_label_update_dto_local_var->tracking_code = tracking_code;
    shipping_label_update_dto_local_var->expected_delivery = expected_delivery;
    shipping_label_update_dto_local_var->location_id = location_id;
    shipping_label_update_dto_local_var->shipment_id = shipment_id;
    shipping_label_update_dto_local_var->shipping_courier_id = shipping_courier_id;

    return shipping_label_update_dto_local_var;
}


void shipping_label_update_dto_free(shipping_label_update_dto_t *shipping_label_update_dto) {
    if(NULL == shipping_label_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipping_label_update_dto->tracking_code) {
        free(shipping_label_update_dto->tracking_code);
        shipping_label_update_dto->tracking_code = NULL;
    }
    if (shipping_label_update_dto->expected_delivery) {
        free(shipping_label_update_dto->expected_delivery);
        shipping_label_update_dto->expected_delivery = NULL;
    }
    if (shipping_label_update_dto->location_id) {
        free(shipping_label_update_dto->location_id);
        shipping_label_update_dto->location_id = NULL;
    }
    if (shipping_label_update_dto->shipment_id) {
        free(shipping_label_update_dto->shipment_id);
        shipping_label_update_dto->shipment_id = NULL;
    }
    if (shipping_label_update_dto->shipping_courier_id) {
        free(shipping_label_update_dto->shipping_courier_id);
        shipping_label_update_dto->shipping_courier_id = NULL;
    }
    free(shipping_label_update_dto);
}

cJSON *shipping_label_update_dto_convertToJSON(shipping_label_update_dto_t *shipping_label_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipping_label_update_dto->tracking_code
    if(shipping_label_update_dto->tracking_code) {
    if(cJSON_AddStringToObject(item, "trackingCode", shipping_label_update_dto->tracking_code) == NULL) {
    goto fail; //String
    }
    }


    // shipping_label_update_dto->expected_delivery
    if(shipping_label_update_dto->expected_delivery) {
    if(cJSON_AddStringToObject(item, "expectedDelivery", shipping_label_update_dto->expected_delivery) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipping_label_update_dto->location_id
    if(shipping_label_update_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", shipping_label_update_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_label_update_dto->shipment_id
    if(shipping_label_update_dto->shipment_id) {
    if(cJSON_AddStringToObject(item, "shipmentId", shipping_label_update_dto->shipment_id) == NULL) {
    goto fail; //String
    }
    }


    // shipping_label_update_dto->shipping_courier_id
    if(shipping_label_update_dto->shipping_courier_id) {
    if(cJSON_AddStringToObject(item, "shippingCourierId", shipping_label_update_dto->shipping_courier_id) == NULL) {
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

shipping_label_update_dto_t *shipping_label_update_dto_parseFromJSON(cJSON *shipping_label_update_dtoJSON){

    shipping_label_update_dto_t *shipping_label_update_dto_local_var = NULL;

    // shipping_label_update_dto->tracking_code
    cJSON *tracking_code = cJSON_GetObjectItemCaseSensitive(shipping_label_update_dtoJSON, "trackingCode");
    if (tracking_code) { 
    if(!cJSON_IsString(tracking_code) && !cJSON_IsNull(tracking_code))
    {
    goto end; //String
    }
    }

    // shipping_label_update_dto->expected_delivery
    cJSON *expected_delivery = cJSON_GetObjectItemCaseSensitive(shipping_label_update_dtoJSON, "expectedDelivery");
    if (expected_delivery) { 
    if(!cJSON_IsString(expected_delivery) && !cJSON_IsNull(expected_delivery))
    {
    goto end; //DateTime
    }
    }

    // shipping_label_update_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(shipping_label_update_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // shipping_label_update_dto->shipment_id
    cJSON *shipment_id = cJSON_GetObjectItemCaseSensitive(shipping_label_update_dtoJSON, "shipmentId");
    if (shipment_id) { 
    if(!cJSON_IsString(shipment_id) && !cJSON_IsNull(shipment_id))
    {
    goto end; //String
    }
    }

    // shipping_label_update_dto->shipping_courier_id
    cJSON *shipping_courier_id = cJSON_GetObjectItemCaseSensitive(shipping_label_update_dtoJSON, "shippingCourierId");
    if (shipping_courier_id) { 
    if(!cJSON_IsString(shipping_courier_id) && !cJSON_IsNull(shipping_courier_id))
    {
    goto end; //String
    }
    }


    shipping_label_update_dto_local_var = shipping_label_update_dto_create (
        tracking_code && !cJSON_IsNull(tracking_code) ? strdup(tracking_code->valuestring) : NULL,
        expected_delivery && !cJSON_IsNull(expected_delivery) ? strdup(expected_delivery->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        shipment_id && !cJSON_IsNull(shipment_id) ? strdup(shipment_id->valuestring) : NULL,
        shipping_courier_id && !cJSON_IsNull(shipping_courier_id) ? strdup(shipping_courier_id->valuestring) : NULL
        );

    return shipping_label_update_dto_local_var;
end:
    return NULL;

}
