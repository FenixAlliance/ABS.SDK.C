#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_update_dto.h"


char* shipment_update_dto_shipping_terms_ToString(shipmentsservice_shipment_update_dto_SHIPPINGTERMS_e shipping_terms) {
    char* shipping_termsArray[] =  { "NULL", "NC", "EXW", "FCA", "FOB", "FAS", "CFR", "CIF", "CPT", "CIP", "DDP", "DAP", "DPU" };
    return shipping_termsArray[shipping_terms];
}

shipmentsservice_shipment_update_dto_SHIPPINGTERMS_e shipment_update_dto_shipping_terms_FromString(char* shipping_terms){
    int stringToReturn = 0;
    char *shipping_termsArray[] =  { "NULL", "NC", "EXW", "FCA", "FOB", "FAS", "CFR", "CIF", "CPT", "CIP", "DDP", "DAP", "DPU" };
    size_t sizeofArray = sizeof(shipping_termsArray) / sizeof(shipping_termsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(shipping_terms, shipping_termsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

shipment_update_dto_t *shipment_update_dto_create(
    char *tracking_code,
    int is_international,
    int shipped,
    int delivered,
    char *shipment_timestamp,
    char *delivery_timestamp,
    char *expected_shipping_date,
    char *expected_delivery_date,
    shipmentsservice_shipment_update_dto_SHIPPINGTERMS_e shipping_terms,
    char *order_id
    ) {
    shipment_update_dto_t *shipment_update_dto_local_var = malloc(sizeof(shipment_update_dto_t));
    if (!shipment_update_dto_local_var) {
        return NULL;
    }
    shipment_update_dto_local_var->tracking_code = tracking_code;
    shipment_update_dto_local_var->is_international = is_international;
    shipment_update_dto_local_var->shipped = shipped;
    shipment_update_dto_local_var->delivered = delivered;
    shipment_update_dto_local_var->shipment_timestamp = shipment_timestamp;
    shipment_update_dto_local_var->delivery_timestamp = delivery_timestamp;
    shipment_update_dto_local_var->expected_shipping_date = expected_shipping_date;
    shipment_update_dto_local_var->expected_delivery_date = expected_delivery_date;
    shipment_update_dto_local_var->shipping_terms = shipping_terms;
    shipment_update_dto_local_var->order_id = order_id;

    return shipment_update_dto_local_var;
}


void shipment_update_dto_free(shipment_update_dto_t *shipment_update_dto) {
    if(NULL == shipment_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (shipment_update_dto->tracking_code) {
        free(shipment_update_dto->tracking_code);
        shipment_update_dto->tracking_code = NULL;
    }
    if (shipment_update_dto->shipment_timestamp) {
        free(shipment_update_dto->shipment_timestamp);
        shipment_update_dto->shipment_timestamp = NULL;
    }
    if (shipment_update_dto->delivery_timestamp) {
        free(shipment_update_dto->delivery_timestamp);
        shipment_update_dto->delivery_timestamp = NULL;
    }
    if (shipment_update_dto->expected_shipping_date) {
        free(shipment_update_dto->expected_shipping_date);
        shipment_update_dto->expected_shipping_date = NULL;
    }
    if (shipment_update_dto->expected_delivery_date) {
        free(shipment_update_dto->expected_delivery_date);
        shipment_update_dto->expected_delivery_date = NULL;
    }
    if (shipment_update_dto->order_id) {
        free(shipment_update_dto->order_id);
        shipment_update_dto->order_id = NULL;
    }
    free(shipment_update_dto);
}

cJSON *shipment_update_dto_convertToJSON(shipment_update_dto_t *shipment_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // shipment_update_dto->tracking_code
    if(shipment_update_dto->tracking_code) {
    if(cJSON_AddStringToObject(item, "trackingCode", shipment_update_dto->tracking_code) == NULL) {
    goto fail; //String
    }
    }


    // shipment_update_dto->is_international
    if(shipment_update_dto->is_international) {
    if(cJSON_AddBoolToObject(item, "isInternational", shipment_update_dto->is_international) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_update_dto->shipped
    if(shipment_update_dto->shipped) {
    if(cJSON_AddBoolToObject(item, "shipped", shipment_update_dto->shipped) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_update_dto->delivered
    if(shipment_update_dto->delivered) {
    if(cJSON_AddBoolToObject(item, "delivered", shipment_update_dto->delivered) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_update_dto->shipment_timestamp
    if(shipment_update_dto->shipment_timestamp) {
    if(cJSON_AddStringToObject(item, "shipmentTimestamp", shipment_update_dto->shipment_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_update_dto->delivery_timestamp
    if(shipment_update_dto->delivery_timestamp) {
    if(cJSON_AddStringToObject(item, "deliveryTimestamp", shipment_update_dto->delivery_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_update_dto->expected_shipping_date
    if(shipment_update_dto->expected_shipping_date) {
    if(cJSON_AddStringToObject(item, "expectedShippingDate", shipment_update_dto->expected_shipping_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_update_dto->expected_delivery_date
    if(shipment_update_dto->expected_delivery_date) {
    if(cJSON_AddStringToObject(item, "expectedDeliveryDate", shipment_update_dto->expected_delivery_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // shipment_update_dto->shipping_terms
    if(shipment_update_dto->shipping_terms != shipmentsservice_shipment_update_dto_SHIPPINGTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "shippingTerms", shipping_termsshipment_update_dto_ToString(shipment_update_dto->shipping_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shipment_update_dto->order_id
    if(shipment_update_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderID", shipment_update_dto->order_id) == NULL) {
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

shipment_update_dto_t *shipment_update_dto_parseFromJSON(cJSON *shipment_update_dtoJSON){

    shipment_update_dto_t *shipment_update_dto_local_var = NULL;

    // shipment_update_dto->tracking_code
    cJSON *tracking_code = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "trackingCode");
    if (tracking_code) { 
    if(!cJSON_IsString(tracking_code) && !cJSON_IsNull(tracking_code))
    {
    goto end; //String
    }
    }

    // shipment_update_dto->is_international
    cJSON *is_international = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "isInternational");
    if (is_international) { 
    if(!cJSON_IsBool(is_international))
    {
    goto end; //Bool
    }
    }

    // shipment_update_dto->shipped
    cJSON *shipped = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "shipped");
    if (shipped) { 
    if(!cJSON_IsBool(shipped))
    {
    goto end; //Bool
    }
    }

    // shipment_update_dto->delivered
    cJSON *delivered = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "delivered");
    if (delivered) { 
    if(!cJSON_IsBool(delivered))
    {
    goto end; //Bool
    }
    }

    // shipment_update_dto->shipment_timestamp
    cJSON *shipment_timestamp = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "shipmentTimestamp");
    if (shipment_timestamp) { 
    if(!cJSON_IsString(shipment_timestamp) && !cJSON_IsNull(shipment_timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipment_update_dto->delivery_timestamp
    cJSON *delivery_timestamp = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "deliveryTimestamp");
    if (delivery_timestamp) { 
    if(!cJSON_IsString(delivery_timestamp) && !cJSON_IsNull(delivery_timestamp))
    {
    goto end; //DateTime
    }
    }

    // shipment_update_dto->expected_shipping_date
    cJSON *expected_shipping_date = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "expectedShippingDate");
    if (expected_shipping_date) { 
    if(!cJSON_IsString(expected_shipping_date) && !cJSON_IsNull(expected_shipping_date))
    {
    goto end; //DateTime
    }
    }

    // shipment_update_dto->expected_delivery_date
    cJSON *expected_delivery_date = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "expectedDeliveryDate");
    if (expected_delivery_date) { 
    if(!cJSON_IsString(expected_delivery_date) && !cJSON_IsNull(expected_delivery_date))
    {
    goto end; //DateTime
    }
    }

    // shipment_update_dto->shipping_terms
    cJSON *shipping_terms = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "shippingTerms");
    shipmentsservice_shipment_update_dto_SHIPPINGTERMS_e shipping_termsVariable;
    if (shipping_terms) { 
    if(!cJSON_IsString(shipping_terms))
    {
    goto end; //Enum
    }
    shipping_termsVariable = shipment_update_dto_shipping_terms_FromString(shipping_terms->valuestring);
    }

    // shipment_update_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(shipment_update_dtoJSON, "orderID");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }


    shipment_update_dto_local_var = shipment_update_dto_create (
        tracking_code && !cJSON_IsNull(tracking_code) ? strdup(tracking_code->valuestring) : NULL,
        is_international ? is_international->valueint : 0,
        shipped ? shipped->valueint : 0,
        delivered ? delivered->valueint : 0,
        shipment_timestamp && !cJSON_IsNull(shipment_timestamp) ? strdup(shipment_timestamp->valuestring) : NULL,
        delivery_timestamp && !cJSON_IsNull(delivery_timestamp) ? strdup(delivery_timestamp->valuestring) : NULL,
        expected_shipping_date && !cJSON_IsNull(expected_shipping_date) ? strdup(expected_shipping_date->valuestring) : NULL,
        expected_delivery_date && !cJSON_IsNull(expected_delivery_date) ? strdup(expected_delivery_date->valuestring) : NULL,
        shipping_terms ? shipping_termsVariable : shipmentsservice_shipment_update_dto_SHIPPINGTERMS_NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL
        );

    return shipment_update_dto_local_var;
end:
    return NULL;

}
