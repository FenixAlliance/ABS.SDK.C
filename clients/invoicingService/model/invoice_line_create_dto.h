/*
 * invoice_line_create_dto.h
 *
 * 
 */

#ifndef _invoice_line_create_dto_H_
#define _invoice_line_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_line_create_dto_t invoice_line_create_dto_t;


// Enum COSTCALCULATIONMETHOD for invoice_line_create_dto

typedef enum  { invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_NULL = 0, invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_Automatic, invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_Custom } invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e;

char* invoice_line_create_dto_cost_calculation_method_ToString(invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e invoice_line_create_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for invoice_line_create_dto

typedef enum  { invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_NULL = 0, invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_Included, invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_Excluded } invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e;

char* invoice_line_create_dto_tax_calculation_method_ToString(invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e invoice_line_create_dto_tax_calculation_method_FromString(char* tax_calculation_method);



typedef struct invoice_line_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *title; // string
    char *price_list_id; // string
    char *description; // string
    char *individual_id; // string
    char *payment_term_id; // string
    char *organization_id; // string
    char *receiver_tenant_id; // string
    char *first_name; // string
    char *last_name; // string
    char *company_name; // string
    char *billing_email; // string
    char *address_line1; // string
    char *address_line2; // string
    char *postal_code; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    double forex_rate; //numeric
    char *currency_id; // string
    double total_detail; //numeric
    char *total_detail_currency_id; // string
    double total_profit; //numeric
    char *total_profit_currency_id; // string
    double total_discounts; //numeric
    char *total_discounts_currency_id; // string
    double total_surcharges; //numeric
    char *total_surcharges_currency_id; // string
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    double total; //numeric
    char *total_currency_id; // string
    invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    int quantity; //numeric
    char *item_id; // string
    char *invoice_id; // string
    char *item_price_id; // string

} invoice_line_create_dto_t;

invoice_line_create_dto_t *invoice_line_create_dto_create(
    char *id,
    char *timestamp,
    int closed,
    char *title,
    char *price_list_id,
    char *description,
    char *individual_id,
    char *payment_term_id,
    char *organization_id,
    char *receiver_tenant_id,
    char *first_name,
    char *last_name,
    char *company_name,
    char *billing_email,
    char *address_line1,
    char *address_line2,
    char *postal_code,
    char *country_id,
    char *state_id,
    char *city_id,
    double forex_rate,
    char *currency_id,
    double total_detail,
    char *total_detail_currency_id,
    double total_profit,
    char *total_profit_currency_id,
    double total_discounts,
    char *total_discounts_currency_id,
    double total_surcharges,
    char *total_surcharges_currency_id,
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    double total_tax_base,
    char *total_tax_base_currency_id,
    double total_taxes,
    char *total_taxes_currency_id,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    double total,
    char *total_currency_id,
    invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    int quantity,
    char *item_id,
    char *invoice_id,
    char *item_price_id
);

void invoice_line_create_dto_free(invoice_line_create_dto_t *invoice_line_create_dto);

invoice_line_create_dto_t *invoice_line_create_dto_parseFromJSON(cJSON *invoice_line_create_dtoJSON);

cJSON *invoice_line_create_dto_convertToJSON(invoice_line_create_dto_t *invoice_line_create_dto);

#endif /* _invoice_line_create_dto_H_ */

