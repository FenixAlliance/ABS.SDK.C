/*
 * item_cart_record_dto.h
 *
 * 
 */

#ifndef _item_cart_record_dto_H_
#define _item_cart_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_cart_record_dto_t item_cart_record_dto_t;

#include "currency_id.h"
#include "forex_rates.h"
#include "money.h"

// Enum TAXCALCULATIONMETHOD for item_cart_record_dto

typedef enum  { cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_NULL = 0, cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_Included, cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_Excluded } cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e;

char* item_cart_record_dto_tax_calculation_method_ToString(cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e item_cart_record_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum COSTCALCULATIONMETHOD for item_cart_record_dto

typedef enum  { cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_NULL = 0, cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_Automatic, cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_Custom } cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e;

char* item_cart_record_dto_cost_calculation_method_ToString(cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e item_cart_record_dto_cost_calculation_method_FromString(char* cost_calculation_method);



typedef struct item_cart_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *item_id; // string
    char *item_title; // string
    char *item_short_description; // string
    char *item_primary_image_url; // string
    char *shipping_policy_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *currency_id; // string
    char *description; // string
    double quantity; //numeric
    int free; //boolean
    char *free_reason; // string
    char *free_reason_code; // string
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *data2; // string
    char *data2_label; // string
    char *data3; // string
    char *data3_label; // string
    char *data4; // string
    char *data4_label; // string
    char *data5; // string
    char *data5_label; // string
    char *data6; // string
    char *data6_label; // string
    char *data7; // string
    char *data7_label; // string
    char *data8; // string
    char *data8_label; // string
    char *data9; // string
    char *data9_label; // string
    char *item_price_id; // string
    char *price_list_item_id; // string
    char *unit_id; // string
    char *unit_group_id; // string
    cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    struct forex_rates_t *forex_rates; //model
    double forex_rate; //numeric
    double total_detail_in_usd; //numeric
    double total_profit_in_usd; //numeric
    double total_discounts_in_usd; //numeric
    double total_surcharges_in_usd; //numeric
    double total_tax_base_in_usd; //numeric
    double total_taxes_in_usd; //numeric
    double total_withheld_taxes_in_usd; //numeric
    double total_shipping_cost_in_usd; //numeric
    double total_shipping_taxes_in_usd; //numeric
    double total_warranty_cost_in_usd; //numeric
    double total_return_cost_in_usd; //numeric
    double total_refund_cost_in_usd; //numeric
    double total_in_usd; //numeric
    double total_global_discounts_in_usd; //numeric
    double total_global_surcharges_in_usd; //numeric
    double custom_global_surcharges_amount; //numeric
    double custom_global_discounts_amount; //numeric
    char *return_policy_id; // string
    char *refund_policy_id; // string
    char *warranty_policy_id; // string
    char *shipment_policy_id; // string
    char *shipping_location_id; // string
    char *location_id; // string
    char *quote_item_record_id; // string
    char *business_profile_record_id; // string
    char *parent_billing_item_record_id; // string
    struct currency_id_t *currency; //model
    double total_detail; //numeric
    char *total_detail_currency_id; // string
    struct money_t *total_detail_amount; //model
    double total_profit; //numeric
    char *total_profit_currency_id; // string
    struct money_t *total_profit_amount; //model
    double total_discounts; //numeric
    char *total_discounts_currency_id; // string
    struct money_t *total_discounts_amount; //model
    double total_surcharges; //numeric
    char *total_surcharges_currency_id; // string
    struct money_t *total_surcharges_amount; //model
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    struct money_t *total_tax_base_amount; //model
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    struct money_t *total_taxes_amount; //model
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    struct money_t *total_shipping_cost_amount; //model
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    struct money_t *total_shipping_tax_amount; //model
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    struct money_t *total_withheld_tax_amount; //model
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    struct money_t *total_global_discounts_amount; //model
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    struct money_t *total_global_surcharges_amount; //model
    double total; //numeric
    char *total_currency_id; // string
    struct money_t *total_amount; //model
    char *cart_id; // string
    char *item_id; // string
    char *shipping_address_id; // string

} item_cart_record_dto_t;

item_cart_record_dto_t *item_cart_record_dto_create(
    char *id,
    char *timestamp,
    int closed,
    char *item_id,
    char *item_title,
    char *item_short_description,
    char *item_primary_image_url,
    char *shipping_policy_id,
    char *tenant_id,
    char *enrollment_id,
    char *currency_id,
    char *description,
    double quantity,
    int free,
    char *free_reason,
    char *free_reason_code,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    char *item_price_id,
    char *price_list_item_id,
    char *unit_id,
    char *unit_group_id,
    cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    forex_rates_t *forex_rates,
    double forex_rate,
    double total_detail_in_usd,
    double total_profit_in_usd,
    double total_discounts_in_usd,
    double total_surcharges_in_usd,
    double total_tax_base_in_usd,
    double total_taxes_in_usd,
    double total_withheld_taxes_in_usd,
    double total_shipping_cost_in_usd,
    double total_shipping_taxes_in_usd,
    double total_warranty_cost_in_usd,
    double total_return_cost_in_usd,
    double total_refund_cost_in_usd,
    double total_in_usd,
    double total_global_discounts_in_usd,
    double total_global_surcharges_in_usd,
    double custom_global_surcharges_amount,
    double custom_global_discounts_amount,
    char *return_policy_id,
    char *refund_policy_id,
    char *warranty_policy_id,
    char *shipment_policy_id,
    char *shipping_location_id,
    char *location_id,
    char *quote_item_record_id,
    char *business_profile_record_id,
    char *parent_billing_item_record_id,
    currency_id_t *currency,
    double total_detail,
    char *total_detail_currency_id,
    money_t *total_detail_amount,
    double total_profit,
    char *total_profit_currency_id,
    money_t *total_profit_amount,
    double total_discounts,
    char *total_discounts_currency_id,
    money_t *total_discounts_amount,
    double total_surcharges,
    char *total_surcharges_currency_id,
    money_t *total_surcharges_amount,
    double total_tax_base,
    char *total_tax_base_currency_id,
    money_t *total_tax_base_amount,
    double total_taxes,
    char *total_taxes_currency_id,
    money_t *total_taxes_amount,
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    money_t *total_shipping_cost_amount,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    money_t *total_shipping_tax_amount,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    money_t *total_withheld_tax_amount,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    money_t *total_global_discounts_amount,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    money_t *total_global_surcharges_amount,
    double total,
    char *total_currency_id,
    money_t *total_amount,
    char *cart_id,
    char *item_id,
    char *shipping_address_id
);

void item_cart_record_dto_free(item_cart_record_dto_t *item_cart_record_dto);

item_cart_record_dto_t *item_cart_record_dto_parseFromJSON(cJSON *item_cart_record_dtoJSON);

cJSON *item_cart_record_dto_convertToJSON(item_cart_record_dto_t *item_cart_record_dto);

#endif /* _item_cart_record_dto_H_ */

