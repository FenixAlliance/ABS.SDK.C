/*
 * invoice_adjustment_dto.h
 *
 * 
 */

#ifndef _invoice_adjustment_dto_H_
#define _invoice_adjustment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_adjustment_dto_t invoice_adjustment_dto_t;


// Enum TYPE for invoice_adjustment_dto

typedef enum  { invoicingservice_invoice_adjustment_dto_TYPE_NULL = 0, invoicingservice_invoice_adjustment_dto_TYPE_Discount, invoicingservice_invoice_adjustment_dto_TYPE_Surcharge } invoicingservice_invoice_adjustment_dto_TYPE_e;

char* invoice_adjustment_dto_type_ToString(invoicingservice_invoice_adjustment_dto_TYPE_e type);

invoicingservice_invoice_adjustment_dto_TYPE_e invoice_adjustment_dto_type_FromString(char* type);



typedef struct invoice_adjustment_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *invoice_id; // string
    char *currency_id; // string
    char *enrollment_id; // string
    char *description; // string
    double surcharge_percent; //numeric
    double surcharge_amount; //numeric
    double discount_percent; //numeric
    double discount_amount; //numeric
    double total_surcharge; //numeric
    double total_discount; //numeric
    invoicingservice_invoice_adjustment_dto_TYPE_e type; //enum

} invoice_adjustment_dto_t;

invoice_adjustment_dto_t *invoice_adjustment_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *invoice_id,
    char *currency_id,
    char *enrollment_id,
    char *description,
    double surcharge_percent,
    double surcharge_amount,
    double discount_percent,
    double discount_amount,
    double total_surcharge,
    double total_discount,
    invoicingservice_invoice_adjustment_dto_TYPE_e type
);

void invoice_adjustment_dto_free(invoice_adjustment_dto_t *invoice_adjustment_dto);

invoice_adjustment_dto_t *invoice_adjustment_dto_parseFromJSON(cJSON *invoice_adjustment_dtoJSON);

cJSON *invoice_adjustment_dto_convertToJSON(invoice_adjustment_dto_t *invoice_adjustment_dto);

#endif /* _invoice_adjustment_dto_H_ */

