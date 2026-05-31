#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "shipment_dto.h"


char* shipment_dto_shipping_terms_ToString(shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipping_terms) {
    char* shipping_termsArray[] =  { "NULL", "NC", "EXW", "FCA", "FOB", "FAS", "CFR", "CIF", "CPT", "CIP", "DDP", "DAP", "DPU" };
    return shipping_termsArray[shipping_terms];
}

shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipment_dto_shipping_terms_FromString(char* shipping_terms){
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

shipment_dto_t *shipment_dto_create(
    char *id,
    char *timestamp,
    char *tracking_code,
    int is_international,
    int shipped,
    int delivered,
    char *shipment_timestamp,
    char *delivery_timestamp,
    char *expected_shipping_date,
    char *expected_delivery_date,
    shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipping_terms,
    char *order_id,
    char *business_id
    ) {
    shipment_dto_t *shipment_dto_local_var = malloc(sizeof(shipment_dto_t));
    if (!shipment_dto_local_var) {
        return NULL;
    }
    shipment_dto_local_var->id = id;
    shipment_dto_local_var->timestamp = timestamp;
    shipment_dto_local_var->tracking_code = tracking_code;
    shipment_dto_local_var->is_international = is_international;
    shipment_dto_local_var->shipped = shipped;
    shipment_dto_local_var->delivered = delivered;
    shipment_dto_local_var->shipment_timestamp = shipment_timestamp;
    shipment_dto_local_var->delivery_timestamp = delivery_timestamp;
    shipment_dto_local_var->expected_shipping_date = expected_shipping_date;
    shipment_dto_local_var->expected_delivery_date = expected_delivery_date;
    shipment_dto_local_var->shipping_terms = shipping_terms;
    shipment_dto_local_var->order_id = order_id;
    shipment_dto_local_var->business_id = business_id;

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
    if (shipment_dto->timestamp) {
        free(shipment_dto->timestamp);
        shipment_dto->timestamp = NULL;
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
    if (shipment_dto->order_id) {
        free(shipment_dto->order_id);
        shipment_dto->order_id = NULL;
    }
    if (shipment_dto->business_id) {
        free(shipment_dto->business_id);
        shipment_dto->business_id = NULL;
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


    // shipment_dto->timestamp
    if(shipment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", shipment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
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


    // shipment_dto->shipped
    if(shipment_dto->shipped) {
    if(cJSON_AddBoolToObject(item, "shipped", shipment_dto->shipped) == NULL) {
    goto fail; //Bool
    }
    }


    // shipment_dto->delivered
    if(shipment_dto->delivered) {
    if(cJSON_AddBoolToObject(item, "delivered", shipment_dto->delivered) == NULL) {
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


    // shipment_dto->shipping_terms
    if(shipment_dto->shipping_terms != shipmentsservice_shipment_dto_SHIPPINGTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "shippingTerms", shipping_termsshipment_dto_ToString(shipment_dto->shipping_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // shipment_dto->order_id
    if(shipment_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderID", shipment_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // shipment_dto->business_id
    if(shipment_dto->business_id) {
    if(cJSON_AddStringToObject(item, "businessID", shipment_dto->business_id) == NULL) {
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

    // shipment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
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

    // shipment_dto->shipped
    cJSON *shipped = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "shipped");
    if (shipped) { 
    if(!cJSON_IsBool(shipped))
    {
    goto end; //Bool
    }
    }

    // shipment_dto->delivered
    cJSON *delivered = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "delivered");
    if (delivered) { 
    if(!cJSON_IsBool(delivered))
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

    // shipment_dto->shipping_terms
    cJSON *shipping_terms = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "shippingTerms");
    shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipping_termsVariable;
    if (shipping_terms) { 
    if(!cJSON_IsString(shipping_terms))
    {
    goto end; //Enum
    }
    shipping_termsVariable = shipment_dto_shipping_terms_FromString(shipping_terms->valuestring);
    }

    // shipment_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "orderID");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // shipment_dto->business_id
    cJSON *business_id = cJSON_GetObjectItemCaseSensitive(shipment_dtoJSON, "businessID");
    if (business_id) { 
    if(!cJSON_IsString(business_id) && !cJSON_IsNull(business_id))
    {
    goto end; //String
    }
    }


    shipment_dto_local_var = shipment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        tracking_code && !cJSON_IsNull(tracking_code) ? strdup(tracking_code->valuestring) : NULL,
        is_international ? is_international->valueint : 0,
        shipped ? shipped->valueint : 0,
        delivered ? delivered->valueint : 0,
        shipment_timestamp && !cJSON_IsNull(shipment_timestamp) ? strdup(shipment_timestamp->valuestring) : NULL,
        delivery_timestamp && !cJSON_IsNull(delivery_timestamp) ? strdup(delivery_timestamp->valuestring) : NULL,
        expected_shipping_date && !cJSON_IsNull(expected_shipping_date) ? strdup(expected_shipping_date->valuestring) : NULL,
        expected_delivery_date && !cJSON_IsNull(expected_delivery_date) ? strdup(expected_delivery_date->valuestring) : NULL,
        shipping_terms ? shipping_termsVariable : shipmentsservice_shipment_dto_SHIPPINGTERMS_NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        business_id && !cJSON_IsNull(business_id) ? strdup(business_id->valuestring) : NULL
        );

    return shipment_dto_local_var;
end:
    return NULL;

}
