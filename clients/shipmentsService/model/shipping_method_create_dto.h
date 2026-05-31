/*
 * shipping_method_create_dto.h
 *
 * 
 */

#ifndef _shipping_method_create_dto_H_
#define _shipping_method_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct shipping_method_create_dto_t shipping_method_create_dto_t;


// Enum SHIPPINGCLASSCALCULATIONTYPE for shipping_method_create_dto

typedef enum  { shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_NULL = 0, shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_PerClass, shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_PerOrder } shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_e;

char* shipping_method_create_dto_shipping_class_calculation_type_ToString(shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_type);

shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_method_create_dto_shipping_class_calculation_type_FromString(char* shipping_class_calculation_type);



typedef struct shipping_method_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    double cost; //numeric
    int taxable; //boolean
    int tax_included; //boolean
    char *currency_id; // string
    shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_type; //enum

} shipping_method_create_dto_t;

shipping_method_create_dto_t *shipping_method_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    double cost,
    int taxable,
    int tax_included,
    char *currency_id,
    shipmentsservice_shipping_method_create_dto_SHIPPINGCLASSCALCULATIONTYPE_e shipping_class_calculation_type
);

void shipping_method_create_dto_free(shipping_method_create_dto_t *shipping_method_create_dto);

shipping_method_create_dto_t *shipping_method_create_dto_parseFromJSON(cJSON *shipping_method_create_dtoJSON);

cJSON *shipping_method_create_dto_convertToJSON(shipping_method_create_dto_t *shipping_method_create_dto);

#endif /* _shipping_method_create_dto_H_ */

