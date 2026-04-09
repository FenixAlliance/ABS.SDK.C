/*
 * order_dto.h
 *
 * 
 */

#ifndef _order_dto_H_
#define _order_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_dto_t order_dto_t;


// Enum TAXCALCULATIONMETHOD for order_dto

typedef enum  { ordersservice_order_dto_TAXCALCULATIONMETHOD_NULL = 0, ordersservice_order_dto_TAXCALCULATIONMETHOD_Included, ordersservice_order_dto_TAXCALCULATIONMETHOD_Excluded } ordersservice_order_dto_TAXCALCULATIONMETHOD_e;

char* order_dto_tax_calculation_method_ToString(ordersservice_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

ordersservice_order_dto_TAXCALCULATIONMETHOD_e order_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum COSTCALCULATIONMETHOD for order_dto

typedef enum  { ordersservice_order_dto_COSTCALCULATIONMETHOD_NULL = 0, ordersservice_order_dto_COSTCALCULATIONMETHOD_Automatic, ordersservice_order_dto_COSTCALCULATIONMETHOD_Custom } ordersservice_order_dto_COSTCALCULATIONMETHOD_e;

char* order_dto_cost_calculation_method_ToString(ordersservice_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

ordersservice_order_dto_COSTCALCULATIONMETHOD_e order_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum FREIGHTTERMS for order_dto

typedef enum  { ordersservice_order_dto_FREIGHTTERMS_NULL = 0, ordersservice_order_dto_FREIGHTTERMS_FOB, ordersservice_order_dto_FREIGHTTERMS_NoCharge } ordersservice_order_dto_FREIGHTTERMS_e;

char* order_dto_freight_terms_ToString(ordersservice_order_dto_FREIGHTTERMS_e freight_terms);

ordersservice_order_dto_FREIGHTTERMS_e order_dto_freight_terms_FromString(char* freight_terms);

// Enum ORDERSTATUS for order_dto

typedef enum  { ordersservice_order_dto_ORDERSTATUS_NULL = 0, ordersservice_order_dto_ORDERSTATUS__New, ordersservice_order_dto_ORDERSTATUS_Processing, ordersservice_order_dto_ORDERSTATUS_Accepted, ordersservice_order_dto_ORDERSTATUS_Declined, ordersservice_order_dto_ORDERSTATUS_Shipped, ordersservice_order_dto_ORDERSTATUS_Delivered, ordersservice_order_dto_ORDERSTATUS_OnHold, ordersservice_order_dto_ORDERSTATUS_Failed, ordersservice_order_dto_ORDERSTATUS_Fulfilled, ordersservice_order_dto_ORDERSTATUS_Cancelled } ordersservice_order_dto_ORDERSTATUS_e;

char* order_dto_order_status_ToString(ordersservice_order_dto_ORDERSTATUS_e order_status);

ordersservice_order_dto_ORDERSTATUS_e order_dto_order_status_FromString(char* order_status);



typedef struct order_dto_t {
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
    ordersservice_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
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
    int order_lines_count; //numeric
    char *quote_id; // string
    char *wallet_id; // string
    char *payment_term_id; // string
    char *parent_order_id; // string
    char *shipping_method_id; // string
    char *billing_location_id; // string
    char *shipping_location_id; // string
    char *qualified_identifier; // string
    ordersservice_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    ordersservice_order_dto_FREIGHTTERMS_e freight_terms; //enum
    ordersservice_order_dto_ORDERSTATUS_e order_status; //enum
    char *requested_delivery_date; //date time
    double custom_tax_amount; //numeric
    double custom_total_amount; //numeric
    double custom_detail_amount; //numeric
    double custom_profit_amount; //numeric
    double custom_discounts_amount; //numeric
    double custom_surcharges_amount; //numeric
    double custom_shipping_tax_amount; //numeric
    double custom_shipping_cost_amount; //numeric
    double custom_withholding_tax_amount; //numeric

} order_dto_t;

order_dto_t *order_dto_create(
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
    ordersservice_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
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
    int order_lines_count,
    char *quote_id,
    char *wallet_id,
    char *payment_term_id,
    char *parent_order_id,
    char *shipping_method_id,
    char *billing_location_id,
    char *shipping_location_id,
    char *qualified_identifier,
    ordersservice_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    ordersservice_order_dto_FREIGHTTERMS_e freight_terms,
    ordersservice_order_dto_ORDERSTATUS_e order_status,
    char *requested_delivery_date,
    double custom_tax_amount,
    double custom_total_amount,
    double custom_detail_amount,
    double custom_profit_amount,
    double custom_discounts_amount,
    double custom_surcharges_amount,
    double custom_shipping_tax_amount,
    double custom_shipping_cost_amount,
    double custom_withholding_tax_amount
);

void order_dto_free(order_dto_t *order_dto);

order_dto_t *order_dto_parseFromJSON(cJSON *order_dtoJSON);

cJSON *order_dto_convertToJSON(order_dto_t *order_dto);

#endif /* _order_dto_H_ */

