/*
 * shipment_create_dto.h
 *
 * 
 */

#ifndef _shipment_create_dto_H_
#define _shipment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipment_create_dto_t shipment_create_dto_t;


// Enum SHIPPINGTERMS for shipment_create_dto

typedef enum  { shipmentsservice_shipment_create_dto_SHIPPINGTERMS_NULL = 0, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_NC, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_EXW, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_FCA, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_FOB, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_FAS, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_CFR, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_CIF, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_CPT, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_CIP, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_DDP, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_DAP, shipmentsservice_shipment_create_dto_SHIPPINGTERMS_DPU } shipmentsservice_shipment_create_dto_SHIPPINGTERMS_e;

char* shipment_create_dto_shipping_terms_ToString(shipmentsservice_shipment_create_dto_SHIPPINGTERMS_e shipping_terms);

shipmentsservice_shipment_create_dto_SHIPPINGTERMS_e shipment_create_dto_shipping_terms_FromString(char* shipping_terms);



typedef struct shipment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tracking_code; // string
    int is_international; //boolean
    char *expected_shipping_date; //date time
    char *expected_delivery_date; //date time
    shipmentsservice_shipment_create_dto_SHIPPINGTERMS_e shipping_terms; //enum
    char *order_id; // string

} shipment_create_dto_t;

shipment_create_dto_t *shipment_create_dto_create(
    char *id,
    char *timestamp,
    char *tracking_code,
    int is_international,
    char *expected_shipping_date,
    char *expected_delivery_date,
    shipmentsservice_shipment_create_dto_SHIPPINGTERMS_e shipping_terms,
    char *order_id
);

void shipment_create_dto_free(shipment_create_dto_t *shipment_create_dto);

shipment_create_dto_t *shipment_create_dto_parseFromJSON(cJSON *shipment_create_dtoJSON);

cJSON *shipment_create_dto_convertToJSON(shipment_create_dto_t *shipment_create_dto);

#endif /* _shipment_create_dto_H_ */

