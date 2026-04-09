/*
 * quote_create_dto.h
 *
 * 
 */

#ifndef _quote_create_dto_H_
#define _quote_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quote_create_dto_t quote_create_dto_t;

#include "quote_line_create_dto.h"

// Enum COSTCALCULATIONMETHOD for quote_create_dto

typedef enum  { quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_NULL = 0, quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_Automatic, quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_Custom } quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_e;

char* quote_create_dto_cost_calculation_method_ToString(quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_e quote_create_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for quote_create_dto

typedef enum  { quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_NULL = 0, quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_Included, quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_Excluded } quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_e;

char* quote_create_dto_tax_calculation_method_ToString(quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_e quote_create_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum QUOTESTATUS for quote_create_dto

typedef enum  { quotesservice_quote_create_dto_QUOTESTATUS_NULL = 0, quotesservice_quote_create_dto_QUOTESTATUS_Draft, quotesservice_quote_create_dto_QUOTESTATUS__New, quotesservice_quote_create_dto_QUOTESTATUS_Accepted, quotesservice_quote_create_dto_QUOTESTATUS_Declined, quotesservice_quote_create_dto_QUOTESTATUS_Expired } quotesservice_quote_create_dto_QUOTESTATUS_e;

char* quote_create_dto_quote_status_ToString(quotesservice_quote_create_dto_QUOTESTATUS_e quote_status);

quotesservice_quote_create_dto_QUOTESTATUS_e quote_create_dto_quote_status_FromString(char* quote_status);



typedef struct quote_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *title; // string
    char *price_list_id; // string
    char *description; // string
    char *individual_id; // string
    char *payment_term_id; // string
    char *organization_id; // string
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
    quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    char *cart_id; // string
    char *deal_unit_id; // string
    char *receiver_tenant_id; // string
    char *effective_to; //date time
    char *effective_from; //date time
    quotesservice_quote_create_dto_QUOTESTATUS_e quote_status; //enum
    list_t *quote_lines; //nonprimitive container

} quote_create_dto_t;

quote_create_dto_t *quote_create_dto_create(
    char *id,
    char *timestamp,
    int closed,
    char *title,
    char *price_list_id,
    char *description,
    char *individual_id,
    char *payment_term_id,
    char *organization_id,
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
    quotesservice_quote_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    quotesservice_quote_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    char *cart_id,
    char *deal_unit_id,
    char *receiver_tenant_id,
    char *effective_to,
    char *effective_from,
    quotesservice_quote_create_dto_QUOTESTATUS_e quote_status,
    list_t *quote_lines
);

void quote_create_dto_free(quote_create_dto_t *quote_create_dto);

quote_create_dto_t *quote_create_dto_parseFromJSON(cJSON *quote_create_dtoJSON);

cJSON *quote_create_dto_convertToJSON(quote_create_dto_t *quote_create_dto);

#endif /* _quote_create_dto_H_ */

