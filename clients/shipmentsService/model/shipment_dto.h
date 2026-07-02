/*
 * shipment_dto.h
 *
 * 
 */

#ifndef _shipment_dto_H_
#define _shipment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_dto_t shipment_dto_t;


// Enum SHIPPINGTERMS for shipment_dto

typedef enum  { shipmentsservice_shipment_dto_SHIPPINGTERMS_NULL = 0, shipmentsservice_shipment_dto_SHIPPINGTERMS_NC, shipmentsservice_shipment_dto_SHIPPINGTERMS_EXW, shipmentsservice_shipment_dto_SHIPPINGTERMS_FCA, shipmentsservice_shipment_dto_SHIPPINGTERMS_FOB, shipmentsservice_shipment_dto_SHIPPINGTERMS_FAS, shipmentsservice_shipment_dto_SHIPPINGTERMS_CFR, shipmentsservice_shipment_dto_SHIPPINGTERMS_CIF, shipmentsservice_shipment_dto_SHIPPINGTERMS_CPT, shipmentsservice_shipment_dto_SHIPPINGTERMS_CIP, shipmentsservice_shipment_dto_SHIPPINGTERMS_DDP, shipmentsservice_shipment_dto_SHIPPINGTERMS_DAP, shipmentsservice_shipment_dto_SHIPPINGTERMS_DPU } shipmentsservice_shipment_dto_SHIPPINGTERMS_e;

char* shipment_dto_shipping_terms_ToString(shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipping_terms);

shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipment_dto_shipping_terms_FromString(char* shipping_terms);



typedef struct shipment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tracking_code; // string
    int is_international; //boolean
    int shipped; //boolean
    int delivered; //boolean
    char *shipment_timestamp; //date time
    char *delivery_timestamp; //date time
    char *expected_shipping_date; //date time
    char *expected_delivery_date; //date time
    shipmentsservice_shipment_dto_SHIPPINGTERMS_e shipping_terms; //enum
    char *order_id; // string
    char *tenant_id; // string
    char *seller_billing_profile_id; // string
    char *buyer_billing_profile_id; // string

} shipment_dto_t;

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
    char *tenant_id,
    char *seller_billing_profile_id,
    char *buyer_billing_profile_id
);

void shipment_dto_free(shipment_dto_t *shipment_dto);

shipment_dto_t *shipment_dto_parseFromJSON(cJSON *shipment_dtoJSON);

cJSON *shipment_dto_convertToJSON(shipment_dto_t *shipment_dto);

#endif /* _shipment_dto_H_ */

