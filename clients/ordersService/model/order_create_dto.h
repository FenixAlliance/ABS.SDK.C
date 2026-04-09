/*
 * order_create_dto.h
 *
 * 
 */

#ifndef _order_create_dto_H_
#define _order_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_create_dto_t order_create_dto_t;

#include "order_line_create_dto.h"

// Enum COSTCALCULATIONMETHOD for order_create_dto

typedef enum  { ordersservice_order_create_dto_COSTCALCULATIONMETHOD_NULL = 0, ordersservice_order_create_dto_COSTCALCULATIONMETHOD_Automatic, ordersservice_order_create_dto_COSTCALCULATIONMETHOD_Custom } ordersservice_order_create_dto_COSTCALCULATIONMETHOD_e;

char* order_create_dto_cost_calculation_method_ToString(ordersservice_order_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

ordersservice_order_create_dto_COSTCALCULATIONMETHOD_e order_create_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for order_create_dto

typedef enum  { ordersservice_order_create_dto_TAXCALCULATIONMETHOD_NULL = 0, ordersservice_order_create_dto_TAXCALCULATIONMETHOD_Included, ordersservice_order_create_dto_TAXCALCULATIONMETHOD_Excluded } ordersservice_order_create_dto_TAXCALCULATIONMETHOD_e;

char* order_create_dto_tax_calculation_method_ToString(ordersservice_order_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

ordersservice_order_create_dto_TAXCALCULATIONMETHOD_e order_create_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum ORDERSTATUS for order_create_dto

typedef enum  { ordersservice_order_create_dto_ORDERSTATUS_NULL = 0, ordersservice_order_create_dto_ORDERSTATUS__New, ordersservice_order_create_dto_ORDERSTATUS_Processing, ordersservice_order_create_dto_ORDERSTATUS_Accepted, ordersservice_order_create_dto_ORDERSTATUS_Declined, ordersservice_order_create_dto_ORDERSTATUS_Shipped, ordersservice_order_create_dto_ORDERSTATUS_Delivered, ordersservice_order_create_dto_ORDERSTATUS_OnHold, ordersservice_order_create_dto_ORDERSTATUS_Failed, ordersservice_order_create_dto_ORDERSTATUS_Fulfilled, ordersservice_order_create_dto_ORDERSTATUS_Cancelled } ordersservice_order_create_dto_ORDERSTATUS_e;

char* order_create_dto_order_status_ToString(ordersservice_order_create_dto_ORDERSTATUS_e order_status);

ordersservice_order_create_dto_ORDERSTATUS_e order_create_dto_order_status_FromString(char* order_status);

// Enum QUOTESTATUS for order_create_dto

typedef enum  { ordersservice_order_create_dto_QUOTESTATUS_NULL = 0, ordersservice_order_create_dto_QUOTESTATUS_Draft, ordersservice_order_create_dto_QUOTESTATUS__New, ordersservice_order_create_dto_QUOTESTATUS_Accepted, ordersservice_order_create_dto_QUOTESTATUS_Declined, ordersservice_order_create_dto_QUOTESTATUS_Expired } ordersservice_order_create_dto_QUOTESTATUS_e;

char* order_create_dto_quote_status_ToString(ordersservice_order_create_dto_QUOTESTATUS_e quote_status);

ordersservice_order_create_dto_QUOTESTATUS_e order_create_dto_quote_status_FromString(char* quote_status);

// Enum FREIGHTTERMS for order_create_dto

typedef enum  { ordersservice_order_create_dto_FREIGHTTERMS_NULL = 0, ordersservice_order_create_dto_FREIGHTTERMS_FOB, ordersservice_order_create_dto_FREIGHTTERMS_NoCharge } ordersservice_order_create_dto_FREIGHTTERMS_e;

char* order_create_dto_freight_terms_ToString(ordersservice_order_create_dto_FREIGHTTERMS_e freight_terms);

ordersservice_order_create_dto_FREIGHTTERMS_e order_create_dto_freight_terms_FromString(char* freight_terms);



typedef struct order_create_dto_t {
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
    ordersservice_order_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    ordersservice_order_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    char *cart_id; // string
    char *quote_id; // string
    char *wallet_id; // string
    char *parent_order_id; // string
    char *shipping_method_id; // string
    char *billing_location_id; // string
    char *customer_notes; // string
    ordersservice_order_create_dto_ORDERSTATUS_e order_status; //enum
    ordersservice_order_create_dto_QUOTESTATUS_e quote_status; //enum
    ordersservice_order_create_dto_FREIGHTTERMS_e freight_terms; //enum
    char *receiver_tenant_id; // string
    char *shipping_location_id; // string
    char *qualified_identifier; // string
    double total_taxes_in_usd; //numeric
    double total_discounts_in_usd; //numeric
    double total_surcharges_in_usd; //numeric
    double total_shipping_cost_in_usd; //numeric
    double total_shipping_tax_in_usd; //numeric
    double total_amount_in_usd; //numeric
    char *effective_to; //date time
    char *effective_from; //date time
    list_t *order_lines; //nonprimitive container

} order_create_dto_t;

order_create_dto_t *order_create_dto_create(
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
    ordersservice_order_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    ordersservice_order_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    char *cart_id,
    char *quote_id,
    char *wallet_id,
    char *parent_order_id,
    char *shipping_method_id,
    char *billing_location_id,
    char *customer_notes,
    ordersservice_order_create_dto_ORDERSTATUS_e order_status,
    ordersservice_order_create_dto_QUOTESTATUS_e quote_status,
    ordersservice_order_create_dto_FREIGHTTERMS_e freight_terms,
    char *receiver_tenant_id,
    char *shipping_location_id,
    char *qualified_identifier,
    double total_taxes_in_usd,
    double total_discounts_in_usd,
    double total_surcharges_in_usd,
    double total_shipping_cost_in_usd,
    double total_shipping_tax_in_usd,
    double total_amount_in_usd,
    char *effective_to,
    char *effective_from,
    list_t *order_lines
);

void order_create_dto_free(order_create_dto_t *order_create_dto);

order_create_dto_t *order_create_dto_parseFromJSON(cJSON *order_create_dtoJSON);

cJSON *order_create_dto_convertToJSON(order_create_dto_t *order_create_dto);

#endif /* _order_create_dto_H_ */

