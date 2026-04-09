/*
 * order_update_dto.h
 *
 * 
 */

#ifndef _order_update_dto_H_
#define _order_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct order_update_dto_t order_update_dto_t;


// Enum COSTCALCULATIONMETHOD for order_update_dto

typedef enum  { ordersservice_order_update_dto_COSTCALCULATIONMETHOD_NULL = 0, ordersservice_order_update_dto_COSTCALCULATIONMETHOD_Automatic, ordersservice_order_update_dto_COSTCALCULATIONMETHOD_Custom } ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e;

char* order_update_dto_cost_calculation_method_ToString(ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e order_update_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for order_update_dto

typedef enum  { ordersservice_order_update_dto_TAXCALCULATIONMETHOD_NULL = 0, ordersservice_order_update_dto_TAXCALCULATIONMETHOD_Included, ordersservice_order_update_dto_TAXCALCULATIONMETHOD_Excluded } ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e;

char* order_update_dto_tax_calculation_method_ToString(ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e order_update_dto_tax_calculation_method_FromString(char* tax_calculation_method);



typedef struct order_update_dto_t {
    char *tenant_id; // string
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
    char *billing_location_id; // string
    char *shipping_location_id; // string
    char *shipping_method_id; // string
    double total_detail; //numeric
    char *total_detail_currency_id; // string
    double total_profit; //numeric
    char *total_profit_currency_id; // string
    double total_discounts; //numeric
    char *total_discounts_currency_id; // string
    double total_surcharges; //numeric
    char *total_surcharges_currency_id; // string
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    double total; //numeric
    char *total_currency_id; // string
    ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    char *cart_id; // string
    char *user_id; // string
    double forex_rate; //numeric
    char *currency_id; // string
    char *enrollment_id; // string
    char *individual_id; // string
    char *organization_id; // string
    double total_amount_in_usd; //numeric
    double total_taxes_in_usd; //numeric
    char *receiver_tenant_id; // string
    int closed; //boolean
    char *price_list_id; // string
    char *payment_term_id; // string
    char *quote_status; // string
    char *effective_to; //date time
    char *effective_from; //date time
    char *description; // string
    char *title; // string

} order_update_dto_t;

order_update_dto_t *order_update_dto_create(
    char *tenant_id,
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
    char *billing_location_id,
    char *shipping_location_id,
    char *shipping_method_id,
    double total_detail,
    char *total_detail_currency_id,
    double total_profit,
    char *total_profit_currency_id,
    double total_discounts,
    char *total_discounts_currency_id,
    double total_surcharges,
    char *total_surcharges_currency_id,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    double total_tax_base,
    char *total_tax_base_currency_id,
    double total_taxes,
    char *total_taxes_currency_id,
    double total,
    char *total_currency_id,
    ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    char *cart_id,
    char *user_id,
    double forex_rate,
    char *currency_id,
    char *enrollment_id,
    char *individual_id,
    char *organization_id,
    double total_amount_in_usd,
    double total_taxes_in_usd,
    char *receiver_tenant_id,
    int closed,
    char *price_list_id,
    char *payment_term_id,
    char *quote_status,
    char *effective_to,
    char *effective_from,
    char *description,
    char *title
);

void order_update_dto_free(order_update_dto_t *order_update_dto);

order_update_dto_t *order_update_dto_parseFromJSON(cJSON *order_update_dtoJSON);

cJSON *order_update_dto_convertToJSON(order_update_dto_t *order_update_dto);

#endif /* _order_update_dto_H_ */

