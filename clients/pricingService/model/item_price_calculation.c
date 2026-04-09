#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_price_calculation.h"



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
    ) {
    item_price_calculation_t *item_price_calculation_local_var = malloc(sizeof(item_price_calculation_t));
    if (!item_price_calculation_local_var) {
        return NULL;
    }
    item_price_calculation_local_var->quantity = quantity;
    item_price_calculation_local_var->item_id = item_id;
    item_price_calculation_local_var->item = item;
    item_price_calculation_local_var->unit_id = unit_id;
    item_price_calculation_local_var->unit_group_id = unit_group_id;
    item_price_calculation_local_var->price_id = price_id;
    item_price_calculation_local_var->price_list_id = price_list_id;
    item_price_calculation_local_var->discount_id = discount_id;
    item_price_calculation_local_var->discount_list_id = discount_list_id;
    item_price_calculation_local_var->tenant_id = tenant_id;
    item_price_calculation_local_var->enrollment_id = enrollment_id;
    item_price_calculation_local_var->rounding_policy_id = rounding_policy_id;
    item_price_calculation_local_var->timestamp = timestamp;
    item_price_calculation_local_var->effective_discount_percent = effective_discount_percent;
    item_price_calculation_local_var->effective_tax_percent = effective_tax_percent;
    item_price_calculation_local_var->currency_id = currency_id;
    item_price_calculation_local_var->currency = currency;
    item_price_calculation_local_var->total_base_amount = total_base_amount;
    item_price_calculation_local_var->total_profit_amount = total_profit_amount;
    item_price_calculation_local_var->total_detail_amount = total_detail_amount;
    item_price_calculation_local_var->total_discounts_amount = total_discounts_amount;
    item_price_calculation_local_var->total_surcharges_amount = total_surcharges_amount;
    item_price_calculation_local_var->total_tax_base_amount = total_tax_base_amount;
    item_price_calculation_local_var->total_tax_amount = total_tax_amount;
    item_price_calculation_local_var->total_w_tax_amount = total_w_tax_amount;
    item_price_calculation_local_var->total_shipping_cost_amount = total_shipping_cost_amount;
    item_price_calculation_local_var->total_shipping_tax_amount = total_shipping_tax_amount;
    item_price_calculation_local_var->total_amount = total_amount;

    return item_price_calculation_local_var;
}


void item_price_calculation_free(item_price_calculation_t *item_price_calculation) {
    if(NULL == item_price_calculation){
        return ;
    }
    listEntry_t *listEntry;
    if (item_price_calculation->item_id) {
        free(item_price_calculation->item_id);
        item_price_calculation->item_id = NULL;
    }
    if (item_price_calculation->item) {
        free(item_price_calculation->item);
        item_price_calculation->item = NULL;
    }
    if (item_price_calculation->unit_id) {
        free(item_price_calculation->unit_id);
        item_price_calculation->unit_id = NULL;
    }
    if (item_price_calculation->unit_group_id) {
        free(item_price_calculation->unit_group_id);
        item_price_calculation->unit_group_id = NULL;
    }
    if (item_price_calculation->price_id) {
        free(item_price_calculation->price_id);
        item_price_calculation->price_id = NULL;
    }
    if (item_price_calculation->price_list_id) {
        free(item_price_calculation->price_list_id);
        item_price_calculation->price_list_id = NULL;
    }
    if (item_price_calculation->discount_id) {
        free(item_price_calculation->discount_id);
        item_price_calculation->discount_id = NULL;
    }
    if (item_price_calculation->discount_list_id) {
        free(item_price_calculation->discount_list_id);
        item_price_calculation->discount_list_id = NULL;
    }
    if (item_price_calculation->tenant_id) {
        free(item_price_calculation->tenant_id);
        item_price_calculation->tenant_id = NULL;
    }
    if (item_price_calculation->enrollment_id) {
        free(item_price_calculation->enrollment_id);
        item_price_calculation->enrollment_id = NULL;
    }
    if (item_price_calculation->rounding_policy_id) {
        free(item_price_calculation->rounding_policy_id);
        item_price_calculation->rounding_policy_id = NULL;
    }
    if (item_price_calculation->timestamp) {
        free(item_price_calculation->timestamp);
        item_price_calculation->timestamp = NULL;
    }
    if (item_price_calculation->currency_id) {
        free(item_price_calculation->currency_id);
        item_price_calculation->currency_id = NULL;
    }
    if (item_price_calculation->currency) {
        currency_id_free(item_price_calculation->currency);
        item_price_calculation->currency = NULL;
    }
    if (item_price_calculation->total_base_amount) {
        money_free(item_price_calculation->total_base_amount);
        item_price_calculation->total_base_amount = NULL;
    }
    if (item_price_calculation->total_profit_amount) {
        money_free(item_price_calculation->total_profit_amount);
        item_price_calculation->total_profit_amount = NULL;
    }
    if (item_price_calculation->total_detail_amount) {
        money_free(item_price_calculation->total_detail_amount);
        item_price_calculation->total_detail_amount = NULL;
    }
    if (item_price_calculation->total_discounts_amount) {
        money_free(item_price_calculation->total_discounts_amount);
        item_price_calculation->total_discounts_amount = NULL;
    }
    if (item_price_calculation->total_surcharges_amount) {
        money_free(item_price_calculation->total_surcharges_amount);
        item_price_calculation->total_surcharges_amount = NULL;
    }
    if (item_price_calculation->total_tax_base_amount) {
        money_free(item_price_calculation->total_tax_base_amount);
        item_price_calculation->total_tax_base_amount = NULL;
    }
    if (item_price_calculation->total_tax_amount) {
        money_free(item_price_calculation->total_tax_amount);
        item_price_calculation->total_tax_amount = NULL;
    }
    if (item_price_calculation->total_w_tax_amount) {
        money_free(item_price_calculation->total_w_tax_amount);
        item_price_calculation->total_w_tax_amount = NULL;
    }
    if (item_price_calculation->total_shipping_cost_amount) {
        money_free(item_price_calculation->total_shipping_cost_amount);
        item_price_calculation->total_shipping_cost_amount = NULL;
    }
    if (item_price_calculation->total_shipping_tax_amount) {
        money_free(item_price_calculation->total_shipping_tax_amount);
        item_price_calculation->total_shipping_tax_amount = NULL;
    }
    if (item_price_calculation->total_amount) {
        money_free(item_price_calculation->total_amount);
        item_price_calculation->total_amount = NULL;
    }
    free(item_price_calculation);
}

cJSON *item_price_calculation_convertToJSON(item_price_calculation_t *item_price_calculation) {
    cJSON *item = cJSON_CreateObject();

    // item_price_calculation->quantity
    if(item_price_calculation->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_price_calculation->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_calculation->item_id
    if(item_price_calculation->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_price_calculation->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->item
    if(item_price_calculation->item) {
    if(cJSON_AddStringToObject(item, "item", item_price_calculation->item) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->unit_id
    if(item_price_calculation->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", item_price_calculation->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->unit_group_id
    if(item_price_calculation->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", item_price_calculation->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->price_id
    if(item_price_calculation->price_id) {
    if(cJSON_AddStringToObject(item, "priceId", item_price_calculation->price_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->price_list_id
    if(item_price_calculation->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", item_price_calculation->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->discount_id
    if(item_price_calculation->discount_id) {
    if(cJSON_AddStringToObject(item, "discountId", item_price_calculation->discount_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->discount_list_id
    if(item_price_calculation->discount_list_id) {
    if(cJSON_AddStringToObject(item, "discountListId", item_price_calculation->discount_list_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->tenant_id
    if(item_price_calculation->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_price_calculation->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->enrollment_id
    if(item_price_calculation->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", item_price_calculation->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->rounding_policy_id
    if(item_price_calculation->rounding_policy_id) {
    if(cJSON_AddStringToObject(item, "roundingPolicyId", item_price_calculation->rounding_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->timestamp
    if(item_price_calculation->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_price_calculation->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_price_calculation->effective_discount_percent
    if(item_price_calculation->effective_discount_percent) {
    if(cJSON_AddNumberToObject(item, "effectiveDiscountPercent", item_price_calculation->effective_discount_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_calculation->effective_tax_percent
    if(item_price_calculation->effective_tax_percent) {
    if(cJSON_AddNumberToObject(item, "effectiveTaxPercent", item_price_calculation->effective_tax_percent) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_price_calculation->currency_id
    if(item_price_calculation->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", item_price_calculation->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_price_calculation->currency
    if(item_price_calculation->currency) {
    cJSON *currency_local_JSON = currency_id_convertToJSON(item_price_calculation->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_base_amount
    if(item_price_calculation->total_base_amount) {
    cJSON *total_base_amount_local_JSON = money_convertToJSON(item_price_calculation->total_base_amount);
    if(total_base_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalBaseAmount", total_base_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_profit_amount
    if(item_price_calculation->total_profit_amount) {
    cJSON *total_profit_amount_local_JSON = money_convertToJSON(item_price_calculation->total_profit_amount);
    if(total_profit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalProfitAmount", total_profit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_detail_amount
    if(item_price_calculation->total_detail_amount) {
    cJSON *total_detail_amount_local_JSON = money_convertToJSON(item_price_calculation->total_detail_amount);
    if(total_detail_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalDetailAmount", total_detail_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_discounts_amount
    if(item_price_calculation->total_discounts_amount) {
    cJSON *total_discounts_amount_local_JSON = money_convertToJSON(item_price_calculation->total_discounts_amount);
    if(total_discounts_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalDiscountsAmount", total_discounts_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_surcharges_amount
    if(item_price_calculation->total_surcharges_amount) {
    cJSON *total_surcharges_amount_local_JSON = money_convertToJSON(item_price_calculation->total_surcharges_amount);
    if(total_surcharges_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalSurchargesAmount", total_surcharges_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_tax_base_amount
    if(item_price_calculation->total_tax_base_amount) {
    cJSON *total_tax_base_amount_local_JSON = money_convertToJSON(item_price_calculation->total_tax_base_amount);
    if(total_tax_base_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalTaxBaseAmount", total_tax_base_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_tax_amount
    if(item_price_calculation->total_tax_amount) {
    cJSON *total_tax_amount_local_JSON = money_convertToJSON(item_price_calculation->total_tax_amount);
    if(total_tax_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalTaxAmount", total_tax_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_w_tax_amount
    if(item_price_calculation->total_w_tax_amount) {
    cJSON *total_w_tax_amount_local_JSON = money_convertToJSON(item_price_calculation->total_w_tax_amount);
    if(total_w_tax_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalWTaxAmount", total_w_tax_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_shipping_cost_amount
    if(item_price_calculation->total_shipping_cost_amount) {
    cJSON *total_shipping_cost_amount_local_JSON = money_convertToJSON(item_price_calculation->total_shipping_cost_amount);
    if(total_shipping_cost_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalShippingCostAmount", total_shipping_cost_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_shipping_tax_amount
    if(item_price_calculation->total_shipping_tax_amount) {
    cJSON *total_shipping_tax_amount_local_JSON = money_convertToJSON(item_price_calculation->total_shipping_tax_amount);
    if(total_shipping_tax_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalShippingTaxAmount", total_shipping_tax_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_price_calculation->total_amount
    if(item_price_calculation->total_amount) {
    cJSON *total_amount_local_JSON = money_convertToJSON(item_price_calculation->total_amount);
    if(total_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalAmount", total_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_price_calculation_t *item_price_calculation_parseFromJSON(cJSON *item_price_calculationJSON){

    item_price_calculation_t *item_price_calculation_local_var = NULL;

    // define the local variable for item_price_calculation->currency
    currency_id_t *currency_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_base_amount
    money_t *total_base_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_profit_amount
    money_t *total_profit_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_detail_amount
    money_t *total_detail_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_discounts_amount
    money_t *total_discounts_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_surcharges_amount
    money_t *total_surcharges_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_tax_base_amount
    money_t *total_tax_base_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_tax_amount
    money_t *total_tax_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_w_tax_amount
    money_t *total_w_tax_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_shipping_cost_amount
    money_t *total_shipping_cost_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_shipping_tax_amount
    money_t *total_shipping_tax_amount_local_nonprim = NULL;

    // define the local variable for item_price_calculation->total_amount
    money_t *total_amount_local_nonprim = NULL;

    // item_price_calculation->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // item_price_calculation->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->item
    cJSON *item = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "item");
    if (item) { 
    if(!cJSON_IsString(item) && !cJSON_IsNull(item))
    {
    goto end; //String
    }
    }

    // item_price_calculation->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->price_id
    cJSON *price_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "priceId");
    if (price_id) { 
    if(!cJSON_IsString(price_id) && !cJSON_IsNull(price_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->discount_id
    cJSON *discount_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "discountId");
    if (discount_id) { 
    if(!cJSON_IsString(discount_id) && !cJSON_IsNull(discount_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->discount_list_id
    cJSON *discount_list_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "discountListId");
    if (discount_list_id) { 
    if(!cJSON_IsString(discount_list_id) && !cJSON_IsNull(discount_list_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->rounding_policy_id
    cJSON *rounding_policy_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "roundingPolicyId");
    if (rounding_policy_id) { 
    if(!cJSON_IsString(rounding_policy_id) && !cJSON_IsNull(rounding_policy_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_price_calculation->effective_discount_percent
    cJSON *effective_discount_percent = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "effectiveDiscountPercent");
    if (effective_discount_percent) { 
    if(!cJSON_IsNumber(effective_discount_percent))
    {
    goto end; //Numeric
    }
    }

    // item_price_calculation->effective_tax_percent
    cJSON *effective_tax_percent = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "effectiveTaxPercent");
    if (effective_tax_percent) { 
    if(!cJSON_IsNumber(effective_tax_percent))
    {
    goto end; //Numeric
    }
    }

    // item_price_calculation->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // item_price_calculation->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "currency");
    if (currency) { 
    currency_local_nonprim = currency_id_parseFromJSON(currency); //nonprimitive
    }

    // item_price_calculation->total_base_amount
    cJSON *total_base_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalBaseAmount");
    if (total_base_amount) { 
    total_base_amount_local_nonprim = money_parseFromJSON(total_base_amount); //nonprimitive
    }

    // item_price_calculation->total_profit_amount
    cJSON *total_profit_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalProfitAmount");
    if (total_profit_amount) { 
    total_profit_amount_local_nonprim = money_parseFromJSON(total_profit_amount); //nonprimitive
    }

    // item_price_calculation->total_detail_amount
    cJSON *total_detail_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalDetailAmount");
    if (total_detail_amount) { 
    total_detail_amount_local_nonprim = money_parseFromJSON(total_detail_amount); //nonprimitive
    }

    // item_price_calculation->total_discounts_amount
    cJSON *total_discounts_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalDiscountsAmount");
    if (total_discounts_amount) { 
    total_discounts_amount_local_nonprim = money_parseFromJSON(total_discounts_amount); //nonprimitive
    }

    // item_price_calculation->total_surcharges_amount
    cJSON *total_surcharges_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalSurchargesAmount");
    if (total_surcharges_amount) { 
    total_surcharges_amount_local_nonprim = money_parseFromJSON(total_surcharges_amount); //nonprimitive
    }

    // item_price_calculation->total_tax_base_amount
    cJSON *total_tax_base_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalTaxBaseAmount");
    if (total_tax_base_amount) { 
    total_tax_base_amount_local_nonprim = money_parseFromJSON(total_tax_base_amount); //nonprimitive
    }

    // item_price_calculation->total_tax_amount
    cJSON *total_tax_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalTaxAmount");
    if (total_tax_amount) { 
    total_tax_amount_local_nonprim = money_parseFromJSON(total_tax_amount); //nonprimitive
    }

    // item_price_calculation->total_w_tax_amount
    cJSON *total_w_tax_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalWTaxAmount");
    if (total_w_tax_amount) { 
    total_w_tax_amount_local_nonprim = money_parseFromJSON(total_w_tax_amount); //nonprimitive
    }

    // item_price_calculation->total_shipping_cost_amount
    cJSON *total_shipping_cost_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalShippingCostAmount");
    if (total_shipping_cost_amount) { 
    total_shipping_cost_amount_local_nonprim = money_parseFromJSON(total_shipping_cost_amount); //nonprimitive
    }

    // item_price_calculation->total_shipping_tax_amount
    cJSON *total_shipping_tax_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalShippingTaxAmount");
    if (total_shipping_tax_amount) { 
    total_shipping_tax_amount_local_nonprim = money_parseFromJSON(total_shipping_tax_amount); //nonprimitive
    }

    // item_price_calculation->total_amount
    cJSON *total_amount = cJSON_GetObjectItemCaseSensitive(item_price_calculationJSON, "totalAmount");
    if (total_amount) { 
    total_amount_local_nonprim = money_parseFromJSON(total_amount); //nonprimitive
    }


    item_price_calculation_local_var = item_price_calculation_create (
        quantity ? quantity->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item && !cJSON_IsNull(item) ? strdup(item->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        price_id && !cJSON_IsNull(price_id) ? strdup(price_id->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        discount_id && !cJSON_IsNull(discount_id) ? strdup(discount_id->valuestring) : NULL,
        discount_list_id && !cJSON_IsNull(discount_list_id) ? strdup(discount_list_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        rounding_policy_id && !cJSON_IsNull(rounding_policy_id) ? strdup(rounding_policy_id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        effective_discount_percent ? effective_discount_percent->valuedouble : 0,
        effective_tax_percent ? effective_tax_percent->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        currency ? currency_local_nonprim : NULL,
        total_base_amount ? total_base_amount_local_nonprim : NULL,
        total_profit_amount ? total_profit_amount_local_nonprim : NULL,
        total_detail_amount ? total_detail_amount_local_nonprim : NULL,
        total_discounts_amount ? total_discounts_amount_local_nonprim : NULL,
        total_surcharges_amount ? total_surcharges_amount_local_nonprim : NULL,
        total_tax_base_amount ? total_tax_base_amount_local_nonprim : NULL,
        total_tax_amount ? total_tax_amount_local_nonprim : NULL,
        total_w_tax_amount ? total_w_tax_amount_local_nonprim : NULL,
        total_shipping_cost_amount ? total_shipping_cost_amount_local_nonprim : NULL,
        total_shipping_tax_amount ? total_shipping_tax_amount_local_nonprim : NULL,
        total_amount ? total_amount_local_nonprim : NULL
        );

    return item_price_calculation_local_var;
end:
    if (currency_local_nonprim) {
        currency_id_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (total_base_amount_local_nonprim) {
        money_free(total_base_amount_local_nonprim);
        total_base_amount_local_nonprim = NULL;
    }
    if (total_profit_amount_local_nonprim) {
        money_free(total_profit_amount_local_nonprim);
        total_profit_amount_local_nonprim = NULL;
    }
    if (total_detail_amount_local_nonprim) {
        money_free(total_detail_amount_local_nonprim);
        total_detail_amount_local_nonprim = NULL;
    }
    if (total_discounts_amount_local_nonprim) {
        money_free(total_discounts_amount_local_nonprim);
        total_discounts_amount_local_nonprim = NULL;
    }
    if (total_surcharges_amount_local_nonprim) {
        money_free(total_surcharges_amount_local_nonprim);
        total_surcharges_amount_local_nonprim = NULL;
    }
    if (total_tax_base_amount_local_nonprim) {
        money_free(total_tax_base_amount_local_nonprim);
        total_tax_base_amount_local_nonprim = NULL;
    }
    if (total_tax_amount_local_nonprim) {
        money_free(total_tax_amount_local_nonprim);
        total_tax_amount_local_nonprim = NULL;
    }
    if (total_w_tax_amount_local_nonprim) {
        money_free(total_w_tax_amount_local_nonprim);
        total_w_tax_amount_local_nonprim = NULL;
    }
    if (total_shipping_cost_amount_local_nonprim) {
        money_free(total_shipping_cost_amount_local_nonprim);
        total_shipping_cost_amount_local_nonprim = NULL;
    }
    if (total_shipping_tax_amount_local_nonprim) {
        money_free(total_shipping_tax_amount_local_nonprim);
        total_shipping_tax_amount_local_nonprim = NULL;
    }
    if (total_amount_local_nonprim) {
        money_free(total_amount_local_nonprim);
        total_amount_local_nonprim = NULL;
    }
    return NULL;

}
