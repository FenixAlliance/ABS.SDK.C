/*
 * item_price_calculation.h
 *
 * 
 */

#ifndef _item_price_calculation_H_
#define _item_price_calculation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_price_calculation_t item_price_calculation_t;

#include "currency_id.h"
#include "money.h"



typedef struct item_price_calculation_t {
    double quantity; //numeric
    char *item_id; // string
    char *item; // string
    char *unit_id; // string
    char *unit_group_id; // string
    char *price_id; // string
    char *price_list_id; // string
    char *discount_id; // string
    char *discount_list_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *rounding_policy_id; // string
    char *timestamp; //date time
    double effective_discount_percent; //numeric
    double effective_tax_percent; //numeric
    char *currency_id; // string
    struct currency_id_t *currency; //model
    struct money_t *total_base_amount; //model
    struct money_t *total_profit_amount; //model
    struct money_t *total_detail_amount; //model
    struct money_t *total_discounts_amount; //model
    struct money_t *total_surcharges_amount; //model
    struct money_t *total_tax_base_amount; //model
    struct money_t *total_tax_amount; //model
    struct money_t *total_w_tax_amount; //model
    struct money_t *total_shipping_cost_amount; //model
    struct money_t *total_shipping_tax_amount; //model
    struct money_t *total_amount; //model

} item_price_calculation_t;

item_price_calculation_t *item_price_calculation_create(
    double quantity,
    char *item_id,
    char *item,
    char *unit_id,
    char *unit_group_id,
    char *price_id,
    char *price_list_id,
    char *discount_id,
    char *discount_list_id,
    char *tenant_id,
    char *enrollment_id,
    char *rounding_policy_id,
    char *timestamp,
    double effective_discount_percent,
    double effective_tax_percent,
    char *currency_id,
    currency_id_t *currency,
    money_t *total_base_amount,
    money_t *total_profit_amount,
    money_t *total_detail_amount,
    money_t *total_discounts_amount,
    money_t *total_surcharges_amount,
    money_t *total_tax_base_amount,
    money_t *total_tax_amount,
    money_t *total_w_tax_amount,
    money_t *total_shipping_cost_amount,
    money_t *total_shipping_tax_amount,
    money_t *total_amount
);

void item_price_calculation_free(item_price_calculation_t *item_price_calculation);

item_price_calculation_t *item_price_calculation_parseFromJSON(cJSON *item_price_calculationJSON);

cJSON *item_price_calculation_convertToJSON(item_price_calculation_t *item_price_calculation);

#endif /* _item_price_calculation_H_ */

