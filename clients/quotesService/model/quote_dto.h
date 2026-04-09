/*
 * quote_dto.h
 *
 * 
 */

#ifndef _quote_dto_H_
#define _quote_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quote_dto_t quote_dto_t;


// Enum TAXCALCULATIONMETHOD for quote_dto

typedef enum  { quotesservice_quote_dto_TAXCALCULATIONMETHOD_NULL = 0, quotesservice_quote_dto_TAXCALCULATIONMETHOD_Included, quotesservice_quote_dto_TAXCALCULATIONMETHOD_Excluded } quotesservice_quote_dto_TAXCALCULATIONMETHOD_e;

char* quote_dto_tax_calculation_method_ToString(quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

quotesservice_quote_dto_TAXCALCULATIONMETHOD_e quote_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum COSTCALCULATIONMETHOD for quote_dto

typedef enum  { quotesservice_quote_dto_COSTCALCULATIONMETHOD_NULL = 0, quotesservice_quote_dto_COSTCALCULATIONMETHOD_Automatic, quotesservice_quote_dto_COSTCALCULATIONMETHOD_Custom } quotesservice_quote_dto_COSTCALCULATIONMETHOD_e;

char* quote_dto_cost_calculation_method_ToString(quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

quotesservice_quote_dto_COSTCALCULATIONMETHOD_e quote_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum QUOTESTATUS for quote_dto

typedef enum  { quotesservice_quote_dto_QUOTESTATUS_NULL = 0, quotesservice_quote_dto_QUOTESTATUS_Draft, quotesservice_quote_dto_QUOTESTATUS__New, quotesservice_quote_dto_QUOTESTATUS_Accepted, quotesservice_quote_dto_QUOTESTATUS_Declined, quotesservice_quote_dto_QUOTESTATUS_Expired } quotesservice_quote_dto_QUOTESTATUS_e;

char* quote_dto_quote_status_ToString(quotesservice_quote_dto_QUOTESTATUS_e quote_status);

quotesservice_quote_dto_QUOTESTATUS_e quote_dto_quote_status_FromString(char* quote_status);

// Enum FREIGHTTERMS for quote_dto

typedef enum  { quotesservice_quote_dto_FREIGHTTERMS_NULL = 0, quotesservice_quote_dto_FREIGHTTERMS_FOB, quotesservice_quote_dto_FREIGHTTERMS_NoCharge } quotesservice_quote_dto_FREIGHTTERMS_e;

char* quote_dto_freight_terms_ToString(quotesservice_quote_dto_FREIGHTTERMS_e freight_terms);

quotesservice_quote_dto_FREIGHTTERMS_e quote_dto_freight_terms_FromString(char* freight_terms);



typedef struct quote_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *type; // string
    char *title; // string
    char *user_id; // string
    char *tenant_id; // string
    char *description; // string
    char *price_list_id; // string
    char *enrollment_id; // string
    char *individual_id; // string
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
    char *customer_notes; // string
    quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
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
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    double total; //numeric
    char *total_currency_id; // string
    double total_detail_in_usd; //numeric
    double total_profit_in_usd; //numeric
    double total_discounts_in_usd; //numeric
    double total_surcharges_in_usd; //numeric
    double total_tax_base_in_usd; //numeric
    double total_taxes_in_usd; //numeric
    double total_withheld_taxes_in_usd; //numeric
    double total_shipping_cost_in_usd; //numeric
    double total_shipping_taxes_in_usd; //numeric
    double total_global_discounts_in_usd; //numeric
    double total_global_surcharges_in_usd; //numeric
    double total_in_usd; //numeric
    char *cart_id; // string
    char *deal_unit_id; // string
    char *effective_to; //date time
    char *effective_from; //date time
    quotesservice_quote_dto_QUOTESTATUS_e quote_status; //enum
    quotesservice_quote_dto_FREIGHTTERMS_e freight_terms; //enum
    double custom_discounts_amount; //numeric

} quote_dto_t;

quote_dto_t *quote_dto_create(
    char *id,
    char *timestamp,
    int closed,
    char *type,
    char *title,
    char *user_id,
    char *tenant_id,
    char *description,
    char *price_list_id,
    char *enrollment_id,
    char *individual_id,
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
    char *customer_notes,
    quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    double total_tax_base,
    char *total_tax_base_currency_id,
    double total_taxes,
    char *total_taxes_currency_id,
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    double total,
    char *total_currency_id,
    double total_detail_in_usd,
    double total_profit_in_usd,
    double total_discounts_in_usd,
    double total_surcharges_in_usd,
    double total_tax_base_in_usd,
    double total_taxes_in_usd,
    double total_withheld_taxes_in_usd,
    double total_shipping_cost_in_usd,
    double total_shipping_taxes_in_usd,
    double total_global_discounts_in_usd,
    double total_global_surcharges_in_usd,
    double total_in_usd,
    char *cart_id,
    char *deal_unit_id,
    char *effective_to,
    char *effective_from,
    quotesservice_quote_dto_QUOTESTATUS_e quote_status,
    quotesservice_quote_dto_FREIGHTTERMS_e freight_terms,
    double custom_discounts_amount
);

void quote_dto_free(quote_dto_t *quote_dto);

quote_dto_t *quote_dto_parseFromJSON(cJSON *quote_dtoJSON);

cJSON *quote_dto_convertToJSON(quote_dto_t *quote_dto);

#endif /* _quote_dto_H_ */

