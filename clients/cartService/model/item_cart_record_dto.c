#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "item_cart_record_dto.h"


char* item_cart_record_dto_tax_calculation_method_ToString(cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e item_cart_record_dto_tax_calculation_method_FromString(char* tax_calculation_method){
    int stringToReturn = 0;
    char *tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    size_t sizeofArray = sizeof(tax_calculation_methodArray) / sizeof(tax_calculation_methodArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(tax_calculation_method, tax_calculation_methodArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* item_cart_record_dto_cost_calculation_method_ToString(cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e item_cart_record_dto_cost_calculation_method_FromString(char* cost_calculation_method){
    int stringToReturn = 0;
    char *cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    size_t sizeofArray = sizeof(cost_calculation_methodArray) / sizeof(cost_calculation_methodArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(cost_calculation_method, cost_calculation_methodArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    item_cart_record_dto_t *item_cart_record_dto_local_var = malloc(sizeof(item_cart_record_dto_t));
    if (!item_cart_record_dto_local_var) {
        return NULL;
    }
    item_cart_record_dto_local_var->id = id;
    item_cart_record_dto_local_var->timestamp = timestamp;
    item_cart_record_dto_local_var->closed = closed;
    item_cart_record_dto_local_var->item_id = item_id;
    item_cart_record_dto_local_var->item_title = item_title;
    item_cart_record_dto_local_var->item_short_description = item_short_description;
    item_cart_record_dto_local_var->item_primary_image_url = item_primary_image_url;
    item_cart_record_dto_local_var->shipping_policy_id = shipping_policy_id;
    item_cart_record_dto_local_var->tenant_id = tenant_id;
    item_cart_record_dto_local_var->enrollment_id = enrollment_id;
    item_cart_record_dto_local_var->currency_id = currency_id;
    item_cart_record_dto_local_var->description = description;
    item_cart_record_dto_local_var->quantity = quantity;
    item_cart_record_dto_local_var->free = free;
    item_cart_record_dto_local_var->free_reason = free_reason;
    item_cart_record_dto_local_var->free_reason_code = free_reason_code;
    item_cart_record_dto_local_var->data = data;
    item_cart_record_dto_local_var->data_label = data_label;
    item_cart_record_dto_local_var->data1 = data1;
    item_cart_record_dto_local_var->data1_label = data1_label;
    item_cart_record_dto_local_var->data2 = data2;
    item_cart_record_dto_local_var->data2_label = data2_label;
    item_cart_record_dto_local_var->data3 = data3;
    item_cart_record_dto_local_var->data3_label = data3_label;
    item_cart_record_dto_local_var->data4 = data4;
    item_cart_record_dto_local_var->data4_label = data4_label;
    item_cart_record_dto_local_var->data5 = data5;
    item_cart_record_dto_local_var->data5_label = data5_label;
    item_cart_record_dto_local_var->data6 = data6;
    item_cart_record_dto_local_var->data6_label = data6_label;
    item_cart_record_dto_local_var->data7 = data7;
    item_cart_record_dto_local_var->data7_label = data7_label;
    item_cart_record_dto_local_var->data8 = data8;
    item_cart_record_dto_local_var->data8_label = data8_label;
    item_cart_record_dto_local_var->data9 = data9;
    item_cart_record_dto_local_var->data9_label = data9_label;
    item_cart_record_dto_local_var->item_price_id = item_price_id;
    item_cart_record_dto_local_var->price_list_item_id = price_list_item_id;
    item_cart_record_dto_local_var->unit_id = unit_id;
    item_cart_record_dto_local_var->unit_group_id = unit_group_id;
    item_cart_record_dto_local_var->tax_calculation_method = tax_calculation_method;
    item_cart_record_dto_local_var->cost_calculation_method = cost_calculation_method;
    item_cart_record_dto_local_var->forex_rates = forex_rates;
    item_cart_record_dto_local_var->forex_rate = forex_rate;
    item_cart_record_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    item_cart_record_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    item_cart_record_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    item_cart_record_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    item_cart_record_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    item_cart_record_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    item_cart_record_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    item_cart_record_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    item_cart_record_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    item_cart_record_dto_local_var->total_warranty_cost_in_usd = total_warranty_cost_in_usd;
    item_cart_record_dto_local_var->total_return_cost_in_usd = total_return_cost_in_usd;
    item_cart_record_dto_local_var->total_refund_cost_in_usd = total_refund_cost_in_usd;
    item_cart_record_dto_local_var->total_in_usd = total_in_usd;
    item_cart_record_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    item_cart_record_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    item_cart_record_dto_local_var->custom_global_surcharges_amount = custom_global_surcharges_amount;
    item_cart_record_dto_local_var->custom_global_discounts_amount = custom_global_discounts_amount;
    item_cart_record_dto_local_var->return_policy_id = return_policy_id;
    item_cart_record_dto_local_var->refund_policy_id = refund_policy_id;
    item_cart_record_dto_local_var->warranty_policy_id = warranty_policy_id;
    item_cart_record_dto_local_var->shipment_policy_id = shipment_policy_id;
    item_cart_record_dto_local_var->shipping_location_id = shipping_location_id;
    item_cart_record_dto_local_var->location_id = location_id;
    item_cart_record_dto_local_var->quote_item_record_id = quote_item_record_id;
    item_cart_record_dto_local_var->business_profile_record_id = business_profile_record_id;
    item_cart_record_dto_local_var->parent_billing_item_record_id = parent_billing_item_record_id;
    item_cart_record_dto_local_var->currency = currency;
    item_cart_record_dto_local_var->total_detail = total_detail;
    item_cart_record_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    item_cart_record_dto_local_var->total_detail_amount = total_detail_amount;
    item_cart_record_dto_local_var->total_profit = total_profit;
    item_cart_record_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    item_cart_record_dto_local_var->total_profit_amount = total_profit_amount;
    item_cart_record_dto_local_var->total_discounts = total_discounts;
    item_cart_record_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    item_cart_record_dto_local_var->total_discounts_amount = total_discounts_amount;
    item_cart_record_dto_local_var->total_surcharges = total_surcharges;
    item_cart_record_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    item_cart_record_dto_local_var->total_surcharges_amount = total_surcharges_amount;
    item_cart_record_dto_local_var->total_tax_base = total_tax_base;
    item_cart_record_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    item_cart_record_dto_local_var->total_tax_base_amount = total_tax_base_amount;
    item_cart_record_dto_local_var->total_taxes = total_taxes;
    item_cart_record_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    item_cart_record_dto_local_var->total_taxes_amount = total_taxes_amount;
    item_cart_record_dto_local_var->total_shipping_cost = total_shipping_cost;
    item_cart_record_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    item_cart_record_dto_local_var->total_shipping_cost_amount = total_shipping_cost_amount;
    item_cart_record_dto_local_var->total_shipping_tax = total_shipping_tax;
    item_cart_record_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    item_cart_record_dto_local_var->total_shipping_tax_amount = total_shipping_tax_amount;
    item_cart_record_dto_local_var->total_withheld_tax = total_withheld_tax;
    item_cart_record_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    item_cart_record_dto_local_var->total_withheld_tax_amount = total_withheld_tax_amount;
    item_cart_record_dto_local_var->total_global_discounts = total_global_discounts;
    item_cart_record_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    item_cart_record_dto_local_var->total_global_discounts_amount = total_global_discounts_amount;
    item_cart_record_dto_local_var->total_global_surcharges = total_global_surcharges;
    item_cart_record_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    item_cart_record_dto_local_var->total_global_surcharges_amount = total_global_surcharges_amount;
    item_cart_record_dto_local_var->total = total;
    item_cart_record_dto_local_var->total_currency_id = total_currency_id;
    item_cart_record_dto_local_var->total_amount = total_amount;
    item_cart_record_dto_local_var->cart_id = cart_id;
    item_cart_record_dto_local_var->item_id = item_id;
    item_cart_record_dto_local_var->shipping_address_id = shipping_address_id;

    return item_cart_record_dto_local_var;
}


void item_cart_record_dto_free(item_cart_record_dto_t *item_cart_record_dto) {
    if(NULL == item_cart_record_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (item_cart_record_dto->id) {
        free(item_cart_record_dto->id);
        item_cart_record_dto->id = NULL;
    }
    if (item_cart_record_dto->timestamp) {
        free(item_cart_record_dto->timestamp);
        item_cart_record_dto->timestamp = NULL;
    }
    if (item_cart_record_dto->item_id) {
        free(item_cart_record_dto->item_id);
        item_cart_record_dto->item_id = NULL;
    }
    if (item_cart_record_dto->item_title) {
        free(item_cart_record_dto->item_title);
        item_cart_record_dto->item_title = NULL;
    }
    if (item_cart_record_dto->item_short_description) {
        free(item_cart_record_dto->item_short_description);
        item_cart_record_dto->item_short_description = NULL;
    }
    if (item_cart_record_dto->item_primary_image_url) {
        free(item_cart_record_dto->item_primary_image_url);
        item_cart_record_dto->item_primary_image_url = NULL;
    }
    if (item_cart_record_dto->shipping_policy_id) {
        free(item_cart_record_dto->shipping_policy_id);
        item_cart_record_dto->shipping_policy_id = NULL;
    }
    if (item_cart_record_dto->tenant_id) {
        free(item_cart_record_dto->tenant_id);
        item_cart_record_dto->tenant_id = NULL;
    }
    if (item_cart_record_dto->enrollment_id) {
        free(item_cart_record_dto->enrollment_id);
        item_cart_record_dto->enrollment_id = NULL;
    }
    if (item_cart_record_dto->currency_id) {
        free(item_cart_record_dto->currency_id);
        item_cart_record_dto->currency_id = NULL;
    }
    if (item_cart_record_dto->description) {
        free(item_cart_record_dto->description);
        item_cart_record_dto->description = NULL;
    }
    if (item_cart_record_dto->free_reason) {
        free(item_cart_record_dto->free_reason);
        item_cart_record_dto->free_reason = NULL;
    }
    if (item_cart_record_dto->free_reason_code) {
        free(item_cart_record_dto->free_reason_code);
        item_cart_record_dto->free_reason_code = NULL;
    }
    if (item_cart_record_dto->data) {
        free(item_cart_record_dto->data);
        item_cart_record_dto->data = NULL;
    }
    if (item_cart_record_dto->data_label) {
        free(item_cart_record_dto->data_label);
        item_cart_record_dto->data_label = NULL;
    }
    if (item_cart_record_dto->data1) {
        free(item_cart_record_dto->data1);
        item_cart_record_dto->data1 = NULL;
    }
    if (item_cart_record_dto->data1_label) {
        free(item_cart_record_dto->data1_label);
        item_cart_record_dto->data1_label = NULL;
    }
    if (item_cart_record_dto->data2) {
        free(item_cart_record_dto->data2);
        item_cart_record_dto->data2 = NULL;
    }
    if (item_cart_record_dto->data2_label) {
        free(item_cart_record_dto->data2_label);
        item_cart_record_dto->data2_label = NULL;
    }
    if (item_cart_record_dto->data3) {
        free(item_cart_record_dto->data3);
        item_cart_record_dto->data3 = NULL;
    }
    if (item_cart_record_dto->data3_label) {
        free(item_cart_record_dto->data3_label);
        item_cart_record_dto->data3_label = NULL;
    }
    if (item_cart_record_dto->data4) {
        free(item_cart_record_dto->data4);
        item_cart_record_dto->data4 = NULL;
    }
    if (item_cart_record_dto->data4_label) {
        free(item_cart_record_dto->data4_label);
        item_cart_record_dto->data4_label = NULL;
    }
    if (item_cart_record_dto->data5) {
        free(item_cart_record_dto->data5);
        item_cart_record_dto->data5 = NULL;
    }
    if (item_cart_record_dto->data5_label) {
        free(item_cart_record_dto->data5_label);
        item_cart_record_dto->data5_label = NULL;
    }
    if (item_cart_record_dto->data6) {
        free(item_cart_record_dto->data6);
        item_cart_record_dto->data6 = NULL;
    }
    if (item_cart_record_dto->data6_label) {
        free(item_cart_record_dto->data6_label);
        item_cart_record_dto->data6_label = NULL;
    }
    if (item_cart_record_dto->data7) {
        free(item_cart_record_dto->data7);
        item_cart_record_dto->data7 = NULL;
    }
    if (item_cart_record_dto->data7_label) {
        free(item_cart_record_dto->data7_label);
        item_cart_record_dto->data7_label = NULL;
    }
    if (item_cart_record_dto->data8) {
        free(item_cart_record_dto->data8);
        item_cart_record_dto->data8 = NULL;
    }
    if (item_cart_record_dto->data8_label) {
        free(item_cart_record_dto->data8_label);
        item_cart_record_dto->data8_label = NULL;
    }
    if (item_cart_record_dto->data9) {
        free(item_cart_record_dto->data9);
        item_cart_record_dto->data9 = NULL;
    }
    if (item_cart_record_dto->data9_label) {
        free(item_cart_record_dto->data9_label);
        item_cart_record_dto->data9_label = NULL;
    }
    if (item_cart_record_dto->item_price_id) {
        free(item_cart_record_dto->item_price_id);
        item_cart_record_dto->item_price_id = NULL;
    }
    if (item_cart_record_dto->price_list_item_id) {
        free(item_cart_record_dto->price_list_item_id);
        item_cart_record_dto->price_list_item_id = NULL;
    }
    if (item_cart_record_dto->unit_id) {
        free(item_cart_record_dto->unit_id);
        item_cart_record_dto->unit_id = NULL;
    }
    if (item_cart_record_dto->unit_group_id) {
        free(item_cart_record_dto->unit_group_id);
        item_cart_record_dto->unit_group_id = NULL;
    }
    if (item_cart_record_dto->forex_rates) {
        forex_rates_free(item_cart_record_dto->forex_rates);
        item_cart_record_dto->forex_rates = NULL;
    }
    if (item_cart_record_dto->return_policy_id) {
        free(item_cart_record_dto->return_policy_id);
        item_cart_record_dto->return_policy_id = NULL;
    }
    if (item_cart_record_dto->refund_policy_id) {
        free(item_cart_record_dto->refund_policy_id);
        item_cart_record_dto->refund_policy_id = NULL;
    }
    if (item_cart_record_dto->warranty_policy_id) {
        free(item_cart_record_dto->warranty_policy_id);
        item_cart_record_dto->warranty_policy_id = NULL;
    }
    if (item_cart_record_dto->shipment_policy_id) {
        free(item_cart_record_dto->shipment_policy_id);
        item_cart_record_dto->shipment_policy_id = NULL;
    }
    if (item_cart_record_dto->shipping_location_id) {
        free(item_cart_record_dto->shipping_location_id);
        item_cart_record_dto->shipping_location_id = NULL;
    }
    if (item_cart_record_dto->location_id) {
        free(item_cart_record_dto->location_id);
        item_cart_record_dto->location_id = NULL;
    }
    if (item_cart_record_dto->quote_item_record_id) {
        free(item_cart_record_dto->quote_item_record_id);
        item_cart_record_dto->quote_item_record_id = NULL;
    }
    if (item_cart_record_dto->business_profile_record_id) {
        free(item_cart_record_dto->business_profile_record_id);
        item_cart_record_dto->business_profile_record_id = NULL;
    }
    if (item_cart_record_dto->parent_billing_item_record_id) {
        free(item_cart_record_dto->parent_billing_item_record_id);
        item_cart_record_dto->parent_billing_item_record_id = NULL;
    }
    if (item_cart_record_dto->currency) {
        currency_id_free(item_cart_record_dto->currency);
        item_cart_record_dto->currency = NULL;
    }
    if (item_cart_record_dto->total_detail_currency_id) {
        free(item_cart_record_dto->total_detail_currency_id);
        item_cart_record_dto->total_detail_currency_id = NULL;
    }
    if (item_cart_record_dto->total_detail_amount) {
        money_free(item_cart_record_dto->total_detail_amount);
        item_cart_record_dto->total_detail_amount = NULL;
    }
    if (item_cart_record_dto->total_profit_currency_id) {
        free(item_cart_record_dto->total_profit_currency_id);
        item_cart_record_dto->total_profit_currency_id = NULL;
    }
    if (item_cart_record_dto->total_profit_amount) {
        money_free(item_cart_record_dto->total_profit_amount);
        item_cart_record_dto->total_profit_amount = NULL;
    }
    if (item_cart_record_dto->total_discounts_currency_id) {
        free(item_cart_record_dto->total_discounts_currency_id);
        item_cart_record_dto->total_discounts_currency_id = NULL;
    }
    if (item_cart_record_dto->total_discounts_amount) {
        money_free(item_cart_record_dto->total_discounts_amount);
        item_cart_record_dto->total_discounts_amount = NULL;
    }
    if (item_cart_record_dto->total_surcharges_currency_id) {
        free(item_cart_record_dto->total_surcharges_currency_id);
        item_cart_record_dto->total_surcharges_currency_id = NULL;
    }
    if (item_cart_record_dto->total_surcharges_amount) {
        money_free(item_cart_record_dto->total_surcharges_amount);
        item_cart_record_dto->total_surcharges_amount = NULL;
    }
    if (item_cart_record_dto->total_tax_base_currency_id) {
        free(item_cart_record_dto->total_tax_base_currency_id);
        item_cart_record_dto->total_tax_base_currency_id = NULL;
    }
    if (item_cart_record_dto->total_tax_base_amount) {
        money_free(item_cart_record_dto->total_tax_base_amount);
        item_cart_record_dto->total_tax_base_amount = NULL;
    }
    if (item_cart_record_dto->total_taxes_currency_id) {
        free(item_cart_record_dto->total_taxes_currency_id);
        item_cart_record_dto->total_taxes_currency_id = NULL;
    }
    if (item_cart_record_dto->total_taxes_amount) {
        money_free(item_cart_record_dto->total_taxes_amount);
        item_cart_record_dto->total_taxes_amount = NULL;
    }
    if (item_cart_record_dto->total_shipping_cost_currency_id) {
        free(item_cart_record_dto->total_shipping_cost_currency_id);
        item_cart_record_dto->total_shipping_cost_currency_id = NULL;
    }
    if (item_cart_record_dto->total_shipping_cost_amount) {
        money_free(item_cart_record_dto->total_shipping_cost_amount);
        item_cart_record_dto->total_shipping_cost_amount = NULL;
    }
    if (item_cart_record_dto->total_shipping_tax_currency_id) {
        free(item_cart_record_dto->total_shipping_tax_currency_id);
        item_cart_record_dto->total_shipping_tax_currency_id = NULL;
    }
    if (item_cart_record_dto->total_shipping_tax_amount) {
        money_free(item_cart_record_dto->total_shipping_tax_amount);
        item_cart_record_dto->total_shipping_tax_amount = NULL;
    }
    if (item_cart_record_dto->total_withheld_tax_currency_id) {
        free(item_cart_record_dto->total_withheld_tax_currency_id);
        item_cart_record_dto->total_withheld_tax_currency_id = NULL;
    }
    if (item_cart_record_dto->total_withheld_tax_amount) {
        money_free(item_cart_record_dto->total_withheld_tax_amount);
        item_cart_record_dto->total_withheld_tax_amount = NULL;
    }
    if (item_cart_record_dto->total_global_discounts_currency_id) {
        free(item_cart_record_dto->total_global_discounts_currency_id);
        item_cart_record_dto->total_global_discounts_currency_id = NULL;
    }
    if (item_cart_record_dto->total_global_discounts_amount) {
        money_free(item_cart_record_dto->total_global_discounts_amount);
        item_cart_record_dto->total_global_discounts_amount = NULL;
    }
    if (item_cart_record_dto->total_global_surcharges_currency_id) {
        free(item_cart_record_dto->total_global_surcharges_currency_id);
        item_cart_record_dto->total_global_surcharges_currency_id = NULL;
    }
    if (item_cart_record_dto->total_global_surcharges_amount) {
        money_free(item_cart_record_dto->total_global_surcharges_amount);
        item_cart_record_dto->total_global_surcharges_amount = NULL;
    }
    if (item_cart_record_dto->total_currency_id) {
        free(item_cart_record_dto->total_currency_id);
        item_cart_record_dto->total_currency_id = NULL;
    }
    if (item_cart_record_dto->total_amount) {
        money_free(item_cart_record_dto->total_amount);
        item_cart_record_dto->total_amount = NULL;
    }
    if (item_cart_record_dto->cart_id) {
        free(item_cart_record_dto->cart_id);
        item_cart_record_dto->cart_id = NULL;
    }
    if (item_cart_record_dto->item_id) {
        free(item_cart_record_dto->item_id);
        item_cart_record_dto->item_id = NULL;
    }
    if (item_cart_record_dto->shipping_address_id) {
        free(item_cart_record_dto->shipping_address_id);
        item_cart_record_dto->shipping_address_id = NULL;
    }
    free(item_cart_record_dto);
}

cJSON *item_cart_record_dto_convertToJSON(item_cart_record_dto_t *item_cart_record_dto) {
    cJSON *item = cJSON_CreateObject();

    // item_cart_record_dto->id
    if(item_cart_record_dto->id) {
    if(cJSON_AddStringToObject(item, "id", item_cart_record_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->timestamp
    if(item_cart_record_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", item_cart_record_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // item_cart_record_dto->closed
    if(item_cart_record_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", item_cart_record_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // item_cart_record_dto->item_id
    if(item_cart_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", item_cart_record_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->item_title
    if(item_cart_record_dto->item_title) {
    if(cJSON_AddStringToObject(item, "itemTitle", item_cart_record_dto->item_title) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->item_short_description
    if(item_cart_record_dto->item_short_description) {
    if(cJSON_AddStringToObject(item, "itemShortDescription", item_cart_record_dto->item_short_description) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->item_primary_image_url
    if(item_cart_record_dto->item_primary_image_url) {
    if(cJSON_AddStringToObject(item, "itemPrimaryImageUrl", item_cart_record_dto->item_primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->shipping_policy_id
    if(item_cart_record_dto->shipping_policy_id) {
    if(cJSON_AddStringToObject(item, "shippingPolicyId", item_cart_record_dto->shipping_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->tenant_id
    if(item_cart_record_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", item_cart_record_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->enrollment_id
    if(item_cart_record_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", item_cart_record_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->currency_id
    if(item_cart_record_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", item_cart_record_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->description
    if(item_cart_record_dto->description) {
    if(cJSON_AddStringToObject(item, "description", item_cart_record_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->quantity
    if(item_cart_record_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", item_cart_record_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->free
    if(item_cart_record_dto->free) {
    if(cJSON_AddBoolToObject(item, "free", item_cart_record_dto->free) == NULL) {
    goto fail; //Bool
    }
    }


    // item_cart_record_dto->free_reason
    if(item_cart_record_dto->free_reason) {
    if(cJSON_AddStringToObject(item, "freeReason", item_cart_record_dto->free_reason) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->free_reason_code
    if(item_cart_record_dto->free_reason_code) {
    if(cJSON_AddStringToObject(item, "freeReasonCode", item_cart_record_dto->free_reason_code) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data
    if(item_cart_record_dto->data) {
    if(cJSON_AddStringToObject(item, "data", item_cart_record_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data_label
    if(item_cart_record_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", item_cart_record_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data1
    if(item_cart_record_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", item_cart_record_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data1_label
    if(item_cart_record_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", item_cart_record_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data2
    if(item_cart_record_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", item_cart_record_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data2_label
    if(item_cart_record_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", item_cart_record_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data3
    if(item_cart_record_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", item_cart_record_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data3_label
    if(item_cart_record_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", item_cart_record_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data4
    if(item_cart_record_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", item_cart_record_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data4_label
    if(item_cart_record_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", item_cart_record_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data5
    if(item_cart_record_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", item_cart_record_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data5_label
    if(item_cart_record_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", item_cart_record_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data6
    if(item_cart_record_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", item_cart_record_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data6_label
    if(item_cart_record_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", item_cart_record_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data7
    if(item_cart_record_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", item_cart_record_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data7_label
    if(item_cart_record_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", item_cart_record_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data8
    if(item_cart_record_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", item_cart_record_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data8_label
    if(item_cart_record_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", item_cart_record_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data9
    if(item_cart_record_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", item_cart_record_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->data9_label
    if(item_cart_record_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", item_cart_record_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->item_price_id
    if(item_cart_record_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", item_cart_record_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->price_list_item_id
    if(item_cart_record_dto->price_list_item_id) {
    if(cJSON_AddStringToObject(item, "priceListItemId", item_cart_record_dto->price_list_item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->unit_id
    if(item_cart_record_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", item_cart_record_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->unit_group_id
    if(item_cart_record_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", item_cart_record_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->tax_calculation_method
    if(item_cart_record_dto->tax_calculation_method != cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methoditem_cart_record_dto_ToString(item_cart_record_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // item_cart_record_dto->cost_calculation_method
    if(item_cart_record_dto->cost_calculation_method != cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methoditem_cart_record_dto_ToString(item_cart_record_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // item_cart_record_dto->forex_rates
    if(item_cart_record_dto->forex_rates) {
    cJSON *forex_rates_local_JSON = forex_rates_convertToJSON(item_cart_record_dto->forex_rates);
    if(forex_rates_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "forexRates", forex_rates_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->forex_rate
    if(item_cart_record_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", item_cart_record_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_detail_in_usd
    if(item_cart_record_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", item_cart_record_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_profit_in_usd
    if(item_cart_record_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", item_cart_record_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_discounts_in_usd
    if(item_cart_record_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", item_cart_record_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_surcharges_in_usd
    if(item_cart_record_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", item_cart_record_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_tax_base_in_usd
    if(item_cart_record_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", item_cart_record_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_taxes_in_usd
    if(item_cart_record_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", item_cart_record_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_withheld_taxes_in_usd
    if(item_cart_record_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", item_cart_record_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_shipping_cost_in_usd
    if(item_cart_record_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", item_cart_record_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_shipping_taxes_in_usd
    if(item_cart_record_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", item_cart_record_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_warranty_cost_in_usd
    if(item_cart_record_dto->total_warranty_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWarrantyCostInUsd", item_cart_record_dto->total_warranty_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_return_cost_in_usd
    if(item_cart_record_dto->total_return_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalReturnCostInUsd", item_cart_record_dto->total_return_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_refund_cost_in_usd
    if(item_cart_record_dto->total_refund_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalRefundCostInUsd", item_cart_record_dto->total_refund_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_in_usd
    if(item_cart_record_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", item_cart_record_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_global_discounts_in_usd
    if(item_cart_record_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", item_cart_record_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_global_surcharges_in_usd
    if(item_cart_record_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", item_cart_record_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->custom_global_surcharges_amount
    if(item_cart_record_dto->custom_global_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalSurchargesAmount", item_cart_record_dto->custom_global_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->custom_global_discounts_amount
    if(item_cart_record_dto->custom_global_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalDiscountsAmount", item_cart_record_dto->custom_global_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->return_policy_id
    if(item_cart_record_dto->return_policy_id) {
    if(cJSON_AddStringToObject(item, "returnPolicyId", item_cart_record_dto->return_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->refund_policy_id
    if(item_cart_record_dto->refund_policy_id) {
    if(cJSON_AddStringToObject(item, "refundPolicyId", item_cart_record_dto->refund_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->warranty_policy_id
    if(item_cart_record_dto->warranty_policy_id) {
    if(cJSON_AddStringToObject(item, "warrantyPolicyId", item_cart_record_dto->warranty_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->shipment_policy_id
    if(item_cart_record_dto->shipment_policy_id) {
    if(cJSON_AddStringToObject(item, "shipmentPolicyId", item_cart_record_dto->shipment_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->shipping_location_id
    if(item_cart_record_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", item_cart_record_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->location_id
    if(item_cart_record_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", item_cart_record_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->quote_item_record_id
    if(item_cart_record_dto->quote_item_record_id) {
    if(cJSON_AddStringToObject(item, "quoteItemRecordId", item_cart_record_dto->quote_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->business_profile_record_id
    if(item_cart_record_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", item_cart_record_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->parent_billing_item_record_id
    if(item_cart_record_dto->parent_billing_item_record_id) {
    if(cJSON_AddStringToObject(item, "parentBillingItemRecordId", item_cart_record_dto->parent_billing_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->currency
    if(item_cart_record_dto->currency) {
    cJSON *currency_local_JSON = currency_id_convertToJSON(item_cart_record_dto->currency);
    if(currency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "currency", currency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_detail
    if(item_cart_record_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", item_cart_record_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_detail_currency_id
    if(item_cart_record_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", item_cart_record_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_detail_amount
    if(item_cart_record_dto->total_detail_amount) {
    cJSON *total_detail_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_detail_amount);
    if(total_detail_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalDetailAmount", total_detail_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_profit
    if(item_cart_record_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", item_cart_record_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_profit_currency_id
    if(item_cart_record_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", item_cart_record_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_profit_amount
    if(item_cart_record_dto->total_profit_amount) {
    cJSON *total_profit_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_profit_amount);
    if(total_profit_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalProfitAmount", total_profit_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_discounts
    if(item_cart_record_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", item_cart_record_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_discounts_currency_id
    if(item_cart_record_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", item_cart_record_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_discounts_amount
    if(item_cart_record_dto->total_discounts_amount) {
    cJSON *total_discounts_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_discounts_amount);
    if(total_discounts_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalDiscountsAmount", total_discounts_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_surcharges
    if(item_cart_record_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", item_cart_record_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_surcharges_currency_id
    if(item_cart_record_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", item_cart_record_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_surcharges_amount
    if(item_cart_record_dto->total_surcharges_amount) {
    cJSON *total_surcharges_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_surcharges_amount);
    if(total_surcharges_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalSurchargesAmount", total_surcharges_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_tax_base
    if(item_cart_record_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", item_cart_record_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_tax_base_currency_id
    if(item_cart_record_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", item_cart_record_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_tax_base_amount
    if(item_cart_record_dto->total_tax_base_amount) {
    cJSON *total_tax_base_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_tax_base_amount);
    if(total_tax_base_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalTaxBaseAmount", total_tax_base_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_taxes
    if(item_cart_record_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", item_cart_record_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_taxes_currency_id
    if(item_cart_record_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", item_cart_record_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_taxes_amount
    if(item_cart_record_dto->total_taxes_amount) {
    cJSON *total_taxes_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_taxes_amount);
    if(total_taxes_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalTaxesAmount", total_taxes_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_shipping_cost
    if(item_cart_record_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", item_cart_record_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_shipping_cost_currency_id
    if(item_cart_record_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", item_cart_record_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_shipping_cost_amount
    if(item_cart_record_dto->total_shipping_cost_amount) {
    cJSON *total_shipping_cost_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_shipping_cost_amount);
    if(total_shipping_cost_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalShippingCostAmount", total_shipping_cost_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_shipping_tax
    if(item_cart_record_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", item_cart_record_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_shipping_tax_currency_id
    if(item_cart_record_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", item_cart_record_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_shipping_tax_amount
    if(item_cart_record_dto->total_shipping_tax_amount) {
    cJSON *total_shipping_tax_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_shipping_tax_amount);
    if(total_shipping_tax_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalShippingTaxAmount", total_shipping_tax_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_withheld_tax
    if(item_cart_record_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", item_cart_record_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_withheld_tax_currency_id
    if(item_cart_record_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", item_cart_record_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_withheld_tax_amount
    if(item_cart_record_dto->total_withheld_tax_amount) {
    cJSON *total_withheld_tax_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_withheld_tax_amount);
    if(total_withheld_tax_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalWithheldTaxAmount", total_withheld_tax_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_global_discounts
    if(item_cart_record_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", item_cart_record_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_global_discounts_currency_id
    if(item_cart_record_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", item_cart_record_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_global_discounts_amount
    if(item_cart_record_dto->total_global_discounts_amount) {
    cJSON *total_global_discounts_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_global_discounts_amount);
    if(total_global_discounts_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalGlobalDiscountsAmount", total_global_discounts_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total_global_surcharges
    if(item_cart_record_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", item_cart_record_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_global_surcharges_currency_id
    if(item_cart_record_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", item_cart_record_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_global_surcharges_amount
    if(item_cart_record_dto->total_global_surcharges_amount) {
    cJSON *total_global_surcharges_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_global_surcharges_amount);
    if(total_global_surcharges_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalGlobalSurchargesAmount", total_global_surcharges_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->total
    if(item_cart_record_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", item_cart_record_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // item_cart_record_dto->total_currency_id
    if(item_cart_record_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", item_cart_record_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->total_amount
    if(item_cart_record_dto->total_amount) {
    cJSON *total_amount_local_JSON = money_convertToJSON(item_cart_record_dto->total_amount);
    if(total_amount_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "totalAmount", total_amount_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // item_cart_record_dto->cart_id
    if(item_cart_record_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", item_cart_record_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->item_id
    if(item_cart_record_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemID", item_cart_record_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // item_cart_record_dto->shipping_address_id
    if(item_cart_record_dto->shipping_address_id) {
    if(cJSON_AddStringToObject(item, "shippingAddressID", item_cart_record_dto->shipping_address_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

item_cart_record_dto_t *item_cart_record_dto_parseFromJSON(cJSON *item_cart_record_dtoJSON){

    item_cart_record_dto_t *item_cart_record_dto_local_var = NULL;

    // define the local variable for item_cart_record_dto->forex_rates
    forex_rates_t *forex_rates_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->currency
    currency_id_t *currency_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_detail_amount
    money_t *total_detail_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_profit_amount
    money_t *total_profit_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_discounts_amount
    money_t *total_discounts_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_surcharges_amount
    money_t *total_surcharges_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_tax_base_amount
    money_t *total_tax_base_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_taxes_amount
    money_t *total_taxes_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_shipping_cost_amount
    money_t *total_shipping_cost_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_shipping_tax_amount
    money_t *total_shipping_tax_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_withheld_tax_amount
    money_t *total_withheld_tax_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_global_discounts_amount
    money_t *total_global_discounts_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_global_surcharges_amount
    money_t *total_global_surcharges_amount_local_nonprim = NULL;

    // define the local variable for item_cart_record_dto->total_amount
    money_t *total_amount_local_nonprim = NULL;

    // item_cart_record_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // item_cart_record_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // item_cart_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->item_title
    cJSON *item_title = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemTitle");
    if (item_title) { 
    if(!cJSON_IsString(item_title) && !cJSON_IsNull(item_title))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->item_short_description
    cJSON *item_short_description = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemShortDescription");
    if (item_short_description) { 
    if(!cJSON_IsString(item_short_description) && !cJSON_IsNull(item_short_description))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->item_primary_image_url
    cJSON *item_primary_image_url = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemPrimaryImageUrl");
    if (item_primary_image_url) { 
    if(!cJSON_IsString(item_primary_image_url) && !cJSON_IsNull(item_primary_image_url))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->shipping_policy_id
    cJSON *shipping_policy_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "shippingPolicyId");
    if (shipping_policy_id) { 
    if(!cJSON_IsString(shipping_policy_id) && !cJSON_IsNull(shipping_policy_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "free");
    if (free) { 
    if(!cJSON_IsBool(free))
    {
    goto end; //Bool
    }
    }

    // item_cart_record_dto->free_reason
    cJSON *free_reason = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "freeReason");
    if (free_reason) { 
    if(!cJSON_IsString(free_reason) && !cJSON_IsNull(free_reason))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->free_reason_code
    cJSON *free_reason_code = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "freeReasonCode");
    if (free_reason_code) { 
    if(!cJSON_IsString(free_reason_code) && !cJSON_IsNull(free_reason_code))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->price_list_item_id
    cJSON *price_list_item_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "priceListItemId");
    if (price_list_item_id) { 
    if(!cJSON_IsString(price_list_item_id) && !cJSON_IsNull(price_list_item_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "taxCalculationMethod");
    cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = item_cart_record_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // item_cart_record_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "costCalculationMethod");
    cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = item_cart_record_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // item_cart_record_dto->forex_rates
    cJSON *forex_rates = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "forexRates");
    if (forex_rates) { 
    forex_rates_local_nonprim = forex_rates_parseFromJSON(forex_rates); //nonprimitive
    }

    // item_cart_record_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_warranty_cost_in_usd
    cJSON *total_warranty_cost_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalWarrantyCostInUsd");
    if (total_warranty_cost_in_usd) { 
    if(!cJSON_IsNumber(total_warranty_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_return_cost_in_usd
    cJSON *total_return_cost_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalReturnCostInUsd");
    if (total_return_cost_in_usd) { 
    if(!cJSON_IsNumber(total_return_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_refund_cost_in_usd
    cJSON *total_refund_cost_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalRefundCostInUsd");
    if (total_refund_cost_in_usd) { 
    if(!cJSON_IsNumber(total_refund_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->custom_global_surcharges_amount
    cJSON *custom_global_surcharges_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "customGlobalSurchargesAmount");
    if (custom_global_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_global_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->custom_global_discounts_amount
    cJSON *custom_global_discounts_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "customGlobalDiscountsAmount");
    if (custom_global_discounts_amount) { 
    if(!cJSON_IsNumber(custom_global_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "returnPolicyId");
    if (return_policy_id) { 
    if(!cJSON_IsString(return_policy_id) && !cJSON_IsNull(return_policy_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->refund_policy_id
    cJSON *refund_policy_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "refundPolicyId");
    if (refund_policy_id) { 
    if(!cJSON_IsString(refund_policy_id) && !cJSON_IsNull(refund_policy_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->warranty_policy_id
    cJSON *warranty_policy_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "warrantyPolicyId");
    if (warranty_policy_id) { 
    if(!cJSON_IsString(warranty_policy_id) && !cJSON_IsNull(warranty_policy_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->shipment_policy_id
    cJSON *shipment_policy_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "shipmentPolicyId");
    if (shipment_policy_id) { 
    if(!cJSON_IsString(shipment_policy_id) && !cJSON_IsNull(shipment_policy_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->quote_item_record_id
    cJSON *quote_item_record_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "quoteItemRecordId");
    if (quote_item_record_id) { 
    if(!cJSON_IsString(quote_item_record_id) && !cJSON_IsNull(quote_item_record_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->parent_billing_item_record_id
    cJSON *parent_billing_item_record_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "parentBillingItemRecordId");
    if (parent_billing_item_record_id) { 
    if(!cJSON_IsString(parent_billing_item_record_id) && !cJSON_IsNull(parent_billing_item_record_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->currency
    cJSON *currency = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "currency");
    if (currency) { 
    currency_local_nonprim = currency_id_parseFromJSON(currency); //nonprimitive
    }

    // item_cart_record_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_detail_amount
    cJSON *total_detail_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDetailAmount");
    if (total_detail_amount) { 
    total_detail_amount_local_nonprim = money_parseFromJSON(total_detail_amount); //nonprimitive
    }

    // item_cart_record_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_profit_amount
    cJSON *total_profit_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalProfitAmount");
    if (total_profit_amount) { 
    total_profit_amount_local_nonprim = money_parseFromJSON(total_profit_amount); //nonprimitive
    }

    // item_cart_record_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_discounts_amount
    cJSON *total_discounts_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalDiscountsAmount");
    if (total_discounts_amount) { 
    total_discounts_amount_local_nonprim = money_parseFromJSON(total_discounts_amount); //nonprimitive
    }

    // item_cart_record_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_surcharges_amount
    cJSON *total_surcharges_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalSurchargesAmount");
    if (total_surcharges_amount) { 
    total_surcharges_amount_local_nonprim = money_parseFromJSON(total_surcharges_amount); //nonprimitive
    }

    // item_cart_record_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_tax_base_amount
    cJSON *total_tax_base_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxBaseAmount");
    if (total_tax_base_amount) { 
    total_tax_base_amount_local_nonprim = money_parseFromJSON(total_tax_base_amount); //nonprimitive
    }

    // item_cart_record_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_taxes_amount
    cJSON *total_taxes_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalTaxesAmount");
    if (total_taxes_amount) { 
    total_taxes_amount_local_nonprim = money_parseFromJSON(total_taxes_amount); //nonprimitive
    }

    // item_cart_record_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_shipping_cost_amount
    cJSON *total_shipping_cost_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingCostAmount");
    if (total_shipping_cost_amount) { 
    total_shipping_cost_amount_local_nonprim = money_parseFromJSON(total_shipping_cost_amount); //nonprimitive
    }

    // item_cart_record_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_shipping_tax_amount
    cJSON *total_shipping_tax_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalShippingTaxAmount");
    if (total_shipping_tax_amount) { 
    total_shipping_tax_amount_local_nonprim = money_parseFromJSON(total_shipping_tax_amount); //nonprimitive
    }

    // item_cart_record_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_withheld_tax_amount
    cJSON *total_withheld_tax_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalWithheldTaxAmount");
    if (total_withheld_tax_amount) { 
    total_withheld_tax_amount_local_nonprim = money_parseFromJSON(total_withheld_tax_amount); //nonprimitive
    }

    // item_cart_record_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_global_discounts_amount
    cJSON *total_global_discounts_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalDiscountsAmount");
    if (total_global_discounts_amount) { 
    total_global_discounts_amount_local_nonprim = money_parseFromJSON(total_global_discounts_amount); //nonprimitive
    }

    // item_cart_record_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_global_surcharges_amount
    cJSON *total_global_surcharges_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalGlobalSurchargesAmount");
    if (total_global_surcharges_amount) { 
    total_global_surcharges_amount_local_nonprim = money_parseFromJSON(total_global_surcharges_amount); //nonprimitive
    }

    // item_cart_record_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // item_cart_record_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->total_amount
    cJSON *total_amount = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "totalAmount");
    if (total_amount) { 
    total_amount_local_nonprim = money_parseFromJSON(total_amount); //nonprimitive
    }

    // item_cart_record_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "itemID");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // item_cart_record_dto->shipping_address_id
    cJSON *shipping_address_id = cJSON_GetObjectItemCaseSensitive(item_cart_record_dtoJSON, "shippingAddressID");
    if (shipping_address_id) { 
    if(!cJSON_IsString(shipping_address_id) && !cJSON_IsNull(shipping_address_id))
    {
    goto end; //String
    }
    }


    item_cart_record_dto_local_var = item_cart_record_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        closed ? closed->valueint : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_title && !cJSON_IsNull(item_title) ? strdup(item_title->valuestring) : NULL,
        item_short_description && !cJSON_IsNull(item_short_description) ? strdup(item_short_description->valuestring) : NULL,
        item_primary_image_url && !cJSON_IsNull(item_primary_image_url) ? strdup(item_primary_image_url->valuestring) : NULL,
        shipping_policy_id && !cJSON_IsNull(shipping_policy_id) ? strdup(shipping_policy_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        free ? free->valueint : 0,
        free_reason && !cJSON_IsNull(free_reason) ? strdup(free_reason->valuestring) : NULL,
        free_reason_code && !cJSON_IsNull(free_reason_code) ? strdup(free_reason_code->valuestring) : NULL,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL,
        price_list_item_id && !cJSON_IsNull(price_list_item_id) ? strdup(price_list_item_id->valuestring) : NULL,
        unit_id && !cJSON_IsNull(unit_id) ? strdup(unit_id->valuestring) : NULL,
        unit_group_id && !cJSON_IsNull(unit_group_id) ? strdup(unit_group_id->valuestring) : NULL,
        tax_calculation_method ? tax_calculation_methodVariable : cartservice_item_cart_record_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : cartservice_item_cart_record_dto_COSTCALCULATIONMETHOD_NULL,
        forex_rates ? forex_rates_local_nonprim : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        total_detail_in_usd ? total_detail_in_usd->valuedouble : 0,
        total_profit_in_usd ? total_profit_in_usd->valuedouble : 0,
        total_discounts_in_usd ? total_discounts_in_usd->valuedouble : 0,
        total_surcharges_in_usd ? total_surcharges_in_usd->valuedouble : 0,
        total_tax_base_in_usd ? total_tax_base_in_usd->valuedouble : 0,
        total_taxes_in_usd ? total_taxes_in_usd->valuedouble : 0,
        total_withheld_taxes_in_usd ? total_withheld_taxes_in_usd->valuedouble : 0,
        total_shipping_cost_in_usd ? total_shipping_cost_in_usd->valuedouble : 0,
        total_shipping_taxes_in_usd ? total_shipping_taxes_in_usd->valuedouble : 0,
        total_warranty_cost_in_usd ? total_warranty_cost_in_usd->valuedouble : 0,
        total_return_cost_in_usd ? total_return_cost_in_usd->valuedouble : 0,
        total_refund_cost_in_usd ? total_refund_cost_in_usd->valuedouble : 0,
        total_in_usd ? total_in_usd->valuedouble : 0,
        total_global_discounts_in_usd ? total_global_discounts_in_usd->valuedouble : 0,
        total_global_surcharges_in_usd ? total_global_surcharges_in_usd->valuedouble : 0,
        custom_global_surcharges_amount ? custom_global_surcharges_amount->valuedouble : 0,
        custom_global_discounts_amount ? custom_global_discounts_amount->valuedouble : 0,
        return_policy_id && !cJSON_IsNull(return_policy_id) ? strdup(return_policy_id->valuestring) : NULL,
        refund_policy_id && !cJSON_IsNull(refund_policy_id) ? strdup(refund_policy_id->valuestring) : NULL,
        warranty_policy_id && !cJSON_IsNull(warranty_policy_id) ? strdup(warranty_policy_id->valuestring) : NULL,
        shipment_policy_id && !cJSON_IsNull(shipment_policy_id) ? strdup(shipment_policy_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        quote_item_record_id && !cJSON_IsNull(quote_item_record_id) ? strdup(quote_item_record_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        parent_billing_item_record_id && !cJSON_IsNull(parent_billing_item_record_id) ? strdup(parent_billing_item_record_id->valuestring) : NULL,
        currency ? currency_local_nonprim : NULL,
        total_detail ? total_detail->valuedouble : 0,
        total_detail_currency_id && !cJSON_IsNull(total_detail_currency_id) ? strdup(total_detail_currency_id->valuestring) : NULL,
        total_detail_amount ? total_detail_amount_local_nonprim : NULL,
        total_profit ? total_profit->valuedouble : 0,
        total_profit_currency_id && !cJSON_IsNull(total_profit_currency_id) ? strdup(total_profit_currency_id->valuestring) : NULL,
        total_profit_amount ? total_profit_amount_local_nonprim : NULL,
        total_discounts ? total_discounts->valuedouble : 0,
        total_discounts_currency_id && !cJSON_IsNull(total_discounts_currency_id) ? strdup(total_discounts_currency_id->valuestring) : NULL,
        total_discounts_amount ? total_discounts_amount_local_nonprim : NULL,
        total_surcharges ? total_surcharges->valuedouble : 0,
        total_surcharges_currency_id && !cJSON_IsNull(total_surcharges_currency_id) ? strdup(total_surcharges_currency_id->valuestring) : NULL,
        total_surcharges_amount ? total_surcharges_amount_local_nonprim : NULL,
        total_tax_base ? total_tax_base->valuedouble : 0,
        total_tax_base_currency_id && !cJSON_IsNull(total_tax_base_currency_id) ? strdup(total_tax_base_currency_id->valuestring) : NULL,
        total_tax_base_amount ? total_tax_base_amount_local_nonprim : NULL,
        total_taxes ? total_taxes->valuedouble : 0,
        total_taxes_currency_id && !cJSON_IsNull(total_taxes_currency_id) ? strdup(total_taxes_currency_id->valuestring) : NULL,
        total_taxes_amount ? total_taxes_amount_local_nonprim : NULL,
        total_shipping_cost ? total_shipping_cost->valuedouble : 0,
        total_shipping_cost_currency_id && !cJSON_IsNull(total_shipping_cost_currency_id) ? strdup(total_shipping_cost_currency_id->valuestring) : NULL,
        total_shipping_cost_amount ? total_shipping_cost_amount_local_nonprim : NULL,
        total_shipping_tax ? total_shipping_tax->valuedouble : 0,
        total_shipping_tax_currency_id && !cJSON_IsNull(total_shipping_tax_currency_id) ? strdup(total_shipping_tax_currency_id->valuestring) : NULL,
        total_shipping_tax_amount ? total_shipping_tax_amount_local_nonprim : NULL,
        total_withheld_tax ? total_withheld_tax->valuedouble : 0,
        total_withheld_tax_currency_id && !cJSON_IsNull(total_withheld_tax_currency_id) ? strdup(total_withheld_tax_currency_id->valuestring) : NULL,
        total_withheld_tax_amount ? total_withheld_tax_amount_local_nonprim : NULL,
        total_global_discounts ? total_global_discounts->valuedouble : 0,
        total_global_discounts_currency_id && !cJSON_IsNull(total_global_discounts_currency_id) ? strdup(total_global_discounts_currency_id->valuestring) : NULL,
        total_global_discounts_amount ? total_global_discounts_amount_local_nonprim : NULL,
        total_global_surcharges ? total_global_surcharges->valuedouble : 0,
        total_global_surcharges_currency_id && !cJSON_IsNull(total_global_surcharges_currency_id) ? strdup(total_global_surcharges_currency_id->valuestring) : NULL,
        total_global_surcharges_amount ? total_global_surcharges_amount_local_nonprim : NULL,
        total ? total->valuedouble : 0,
        total_currency_id && !cJSON_IsNull(total_currency_id) ? strdup(total_currency_id->valuestring) : NULL,
        total_amount ? total_amount_local_nonprim : NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        shipping_address_id && !cJSON_IsNull(shipping_address_id) ? strdup(shipping_address_id->valuestring) : NULL
        );

    return item_cart_record_dto_local_var;
end:
    if (forex_rates_local_nonprim) {
        forex_rates_free(forex_rates_local_nonprim);
        forex_rates_local_nonprim = NULL;
    }
    if (currency_local_nonprim) {
        currency_id_free(currency_local_nonprim);
        currency_local_nonprim = NULL;
    }
    if (total_detail_amount_local_nonprim) {
        money_free(total_detail_amount_local_nonprim);
        total_detail_amount_local_nonprim = NULL;
    }
    if (total_profit_amount_local_nonprim) {
        money_free(total_profit_amount_local_nonprim);
        total_profit_amount_local_nonprim = NULL;
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
    if (total_taxes_amount_local_nonprim) {
        money_free(total_taxes_amount_local_nonprim);
        total_taxes_amount_local_nonprim = NULL;
    }
    if (total_shipping_cost_amount_local_nonprim) {
        money_free(total_shipping_cost_amount_local_nonprim);
        total_shipping_cost_amount_local_nonprim = NULL;
    }
    if (total_shipping_tax_amount_local_nonprim) {
        money_free(total_shipping_tax_amount_local_nonprim);
        total_shipping_tax_amount_local_nonprim = NULL;
    }
    if (total_withheld_tax_amount_local_nonprim) {
        money_free(total_withheld_tax_amount_local_nonprim);
        total_withheld_tax_amount_local_nonprim = NULL;
    }
    if (total_global_discounts_amount_local_nonprim) {
        money_free(total_global_discounts_amount_local_nonprim);
        total_global_discounts_amount_local_nonprim = NULL;
    }
    if (total_global_surcharges_amount_local_nonprim) {
        money_free(total_global_surcharges_amount_local_nonprim);
        total_global_surcharges_amount_local_nonprim = NULL;
    }
    if (total_amount_local_nonprim) {
        money_free(total_amount_local_nonprim);
        total_amount_local_nonprim = NULL;
    }
    return NULL;

}
