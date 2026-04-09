#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_line_update_dto.h"


char* deal_unit_line_update_dto_tax_calculation_method_ToString(dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_e deal_unit_line_update_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* deal_unit_line_update_dto_cost_calculation_method_ToString(dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_e deal_unit_line_update_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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

deal_unit_line_update_dto_t *deal_unit_line_update_dto_create(
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
    dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    char *forex_rates_snapshot,
    double forex_rate,
    double total_base_amount_in_usd,
    double total_profit_in_usd,
    double total_detail_amount_in_usd,
    double total_tax_base_in_usd,
    double total_discounts_in_usd,
    double total_taxes_in_usd,
    double total_withheld_taxes_in_usd,
    double total_shipping_cost_in_usd,
    double total_shipping_taxes_in_usd,
    double total_warranty_cost_in_usd,
    double total_return_cost_in_usd,
    double total_refund_cost_in_usd,
    double total_surcharges_in_usd,
    double total_amount_in_usd,
    double total_global_discounts_in_usd,
    double total_global_surcharges_in_usd,
    double custom_global_surcharges_amount,
    char *custom_global_surcharges_amount_currency_id,
    double custom_global_discounts_amount,
    char *custom_global_discounts_amount_currency_id,
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
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    double total_taxes,
    char *total_taxes_currency_id,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    double total,
    char *total_currency_id,
    char *return_policy_id,
    char *refund_policy_id,
    char *warranty_policy_id,
    char *shipment_policy_id,
    char *shipping_location_id,
    char *location_id,
    char *quote_item_record_id,
    char *business_profile_record_id,
    char *parent_billing_item_record_id
    ) {
    deal_unit_line_update_dto_t *deal_unit_line_update_dto_local_var = malloc(sizeof(deal_unit_line_update_dto_t));
    if (!deal_unit_line_update_dto_local_var) {
        return NULL;
    }
    deal_unit_line_update_dto_local_var->closed = closed;
    deal_unit_line_update_dto_local_var->item_id = item_id;
    deal_unit_line_update_dto_local_var->item_title = item_title;
    deal_unit_line_update_dto_local_var->item_short_description = item_short_description;
    deal_unit_line_update_dto_local_var->item_primary_image_url = item_primary_image_url;
    deal_unit_line_update_dto_local_var->shipping_policy_id = shipping_policy_id;
    deal_unit_line_update_dto_local_var->tenant_id = tenant_id;
    deal_unit_line_update_dto_local_var->enrollment_id = enrollment_id;
    deal_unit_line_update_dto_local_var->currency_id = currency_id;
    deal_unit_line_update_dto_local_var->description = description;
    deal_unit_line_update_dto_local_var->quantity = quantity;
    deal_unit_line_update_dto_local_var->free = free;
    deal_unit_line_update_dto_local_var->free_reason = free_reason;
    deal_unit_line_update_dto_local_var->free_reason_code = free_reason_code;
    deal_unit_line_update_dto_local_var->data = data;
    deal_unit_line_update_dto_local_var->data_label = data_label;
    deal_unit_line_update_dto_local_var->data1 = data1;
    deal_unit_line_update_dto_local_var->data1_label = data1_label;
    deal_unit_line_update_dto_local_var->data2 = data2;
    deal_unit_line_update_dto_local_var->data2_label = data2_label;
    deal_unit_line_update_dto_local_var->data3 = data3;
    deal_unit_line_update_dto_local_var->data3_label = data3_label;
    deal_unit_line_update_dto_local_var->data4 = data4;
    deal_unit_line_update_dto_local_var->data4_label = data4_label;
    deal_unit_line_update_dto_local_var->data5 = data5;
    deal_unit_line_update_dto_local_var->data5_label = data5_label;
    deal_unit_line_update_dto_local_var->data6 = data6;
    deal_unit_line_update_dto_local_var->data6_label = data6_label;
    deal_unit_line_update_dto_local_var->data7 = data7;
    deal_unit_line_update_dto_local_var->data7_label = data7_label;
    deal_unit_line_update_dto_local_var->data8 = data8;
    deal_unit_line_update_dto_local_var->data8_label = data8_label;
    deal_unit_line_update_dto_local_var->data9 = data9;
    deal_unit_line_update_dto_local_var->data9_label = data9_label;
    deal_unit_line_update_dto_local_var->item_price_id = item_price_id;
    deal_unit_line_update_dto_local_var->price_list_item_id = price_list_item_id;
    deal_unit_line_update_dto_local_var->unit_id = unit_id;
    deal_unit_line_update_dto_local_var->unit_group_id = unit_group_id;
    deal_unit_line_update_dto_local_var->tax_calculation_method = tax_calculation_method;
    deal_unit_line_update_dto_local_var->cost_calculation_method = cost_calculation_method;
    deal_unit_line_update_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    deal_unit_line_update_dto_local_var->forex_rate = forex_rate;
    deal_unit_line_update_dto_local_var->total_base_amount_in_usd = total_base_amount_in_usd;
    deal_unit_line_update_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    deal_unit_line_update_dto_local_var->total_detail_amount_in_usd = total_detail_amount_in_usd;
    deal_unit_line_update_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    deal_unit_line_update_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    deal_unit_line_update_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    deal_unit_line_update_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    deal_unit_line_update_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    deal_unit_line_update_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    deal_unit_line_update_dto_local_var->total_warranty_cost_in_usd = total_warranty_cost_in_usd;
    deal_unit_line_update_dto_local_var->total_return_cost_in_usd = total_return_cost_in_usd;
    deal_unit_line_update_dto_local_var->total_refund_cost_in_usd = total_refund_cost_in_usd;
    deal_unit_line_update_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    deal_unit_line_update_dto_local_var->total_amount_in_usd = total_amount_in_usd;
    deal_unit_line_update_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    deal_unit_line_update_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    deal_unit_line_update_dto_local_var->custom_global_surcharges_amount = custom_global_surcharges_amount;
    deal_unit_line_update_dto_local_var->custom_global_surcharges_amount_currency_id = custom_global_surcharges_amount_currency_id;
    deal_unit_line_update_dto_local_var->custom_global_discounts_amount = custom_global_discounts_amount;
    deal_unit_line_update_dto_local_var->custom_global_discounts_amount_currency_id = custom_global_discounts_amount_currency_id;
    deal_unit_line_update_dto_local_var->total_detail = total_detail;
    deal_unit_line_update_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    deal_unit_line_update_dto_local_var->total_profit = total_profit;
    deal_unit_line_update_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    deal_unit_line_update_dto_local_var->total_discounts = total_discounts;
    deal_unit_line_update_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    deal_unit_line_update_dto_local_var->total_surcharges = total_surcharges;
    deal_unit_line_update_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    deal_unit_line_update_dto_local_var->total_tax_base = total_tax_base;
    deal_unit_line_update_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    deal_unit_line_update_dto_local_var->total_shipping_cost = total_shipping_cost;
    deal_unit_line_update_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    deal_unit_line_update_dto_local_var->total_shipping_tax = total_shipping_tax;
    deal_unit_line_update_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    deal_unit_line_update_dto_local_var->total_taxes = total_taxes;
    deal_unit_line_update_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    deal_unit_line_update_dto_local_var->total_withheld_tax = total_withheld_tax;
    deal_unit_line_update_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    deal_unit_line_update_dto_local_var->total_global_discounts = total_global_discounts;
    deal_unit_line_update_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    deal_unit_line_update_dto_local_var->total_global_surcharges = total_global_surcharges;
    deal_unit_line_update_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    deal_unit_line_update_dto_local_var->total = total;
    deal_unit_line_update_dto_local_var->total_currency_id = total_currency_id;
    deal_unit_line_update_dto_local_var->return_policy_id = return_policy_id;
    deal_unit_line_update_dto_local_var->refund_policy_id = refund_policy_id;
    deal_unit_line_update_dto_local_var->warranty_policy_id = warranty_policy_id;
    deal_unit_line_update_dto_local_var->shipment_policy_id = shipment_policy_id;
    deal_unit_line_update_dto_local_var->shipping_location_id = shipping_location_id;
    deal_unit_line_update_dto_local_var->location_id = location_id;
    deal_unit_line_update_dto_local_var->quote_item_record_id = quote_item_record_id;
    deal_unit_line_update_dto_local_var->business_profile_record_id = business_profile_record_id;
    deal_unit_line_update_dto_local_var->parent_billing_item_record_id = parent_billing_item_record_id;

    return deal_unit_line_update_dto_local_var;
}


void deal_unit_line_update_dto_free(deal_unit_line_update_dto_t *deal_unit_line_update_dto) {
    if(NULL == deal_unit_line_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_line_update_dto->item_id) {
        free(deal_unit_line_update_dto->item_id);
        deal_unit_line_update_dto->item_id = NULL;
    }
    if (deal_unit_line_update_dto->item_title) {
        free(deal_unit_line_update_dto->item_title);
        deal_unit_line_update_dto->item_title = NULL;
    }
    if (deal_unit_line_update_dto->item_short_description) {
        free(deal_unit_line_update_dto->item_short_description);
        deal_unit_line_update_dto->item_short_description = NULL;
    }
    if (deal_unit_line_update_dto->item_primary_image_url) {
        free(deal_unit_line_update_dto->item_primary_image_url);
        deal_unit_line_update_dto->item_primary_image_url = NULL;
    }
    if (deal_unit_line_update_dto->shipping_policy_id) {
        free(deal_unit_line_update_dto->shipping_policy_id);
        deal_unit_line_update_dto->shipping_policy_id = NULL;
    }
    if (deal_unit_line_update_dto->tenant_id) {
        free(deal_unit_line_update_dto->tenant_id);
        deal_unit_line_update_dto->tenant_id = NULL;
    }
    if (deal_unit_line_update_dto->enrollment_id) {
        free(deal_unit_line_update_dto->enrollment_id);
        deal_unit_line_update_dto->enrollment_id = NULL;
    }
    if (deal_unit_line_update_dto->currency_id) {
        free(deal_unit_line_update_dto->currency_id);
        deal_unit_line_update_dto->currency_id = NULL;
    }
    if (deal_unit_line_update_dto->description) {
        free(deal_unit_line_update_dto->description);
        deal_unit_line_update_dto->description = NULL;
    }
    if (deal_unit_line_update_dto->free_reason) {
        free(deal_unit_line_update_dto->free_reason);
        deal_unit_line_update_dto->free_reason = NULL;
    }
    if (deal_unit_line_update_dto->free_reason_code) {
        free(deal_unit_line_update_dto->free_reason_code);
        deal_unit_line_update_dto->free_reason_code = NULL;
    }
    if (deal_unit_line_update_dto->data) {
        free(deal_unit_line_update_dto->data);
        deal_unit_line_update_dto->data = NULL;
    }
    if (deal_unit_line_update_dto->data_label) {
        free(deal_unit_line_update_dto->data_label);
        deal_unit_line_update_dto->data_label = NULL;
    }
    if (deal_unit_line_update_dto->data1) {
        free(deal_unit_line_update_dto->data1);
        deal_unit_line_update_dto->data1 = NULL;
    }
    if (deal_unit_line_update_dto->data1_label) {
        free(deal_unit_line_update_dto->data1_label);
        deal_unit_line_update_dto->data1_label = NULL;
    }
    if (deal_unit_line_update_dto->data2) {
        free(deal_unit_line_update_dto->data2);
        deal_unit_line_update_dto->data2 = NULL;
    }
    if (deal_unit_line_update_dto->data2_label) {
        free(deal_unit_line_update_dto->data2_label);
        deal_unit_line_update_dto->data2_label = NULL;
    }
    if (deal_unit_line_update_dto->data3) {
        free(deal_unit_line_update_dto->data3);
        deal_unit_line_update_dto->data3 = NULL;
    }
    if (deal_unit_line_update_dto->data3_label) {
        free(deal_unit_line_update_dto->data3_label);
        deal_unit_line_update_dto->data3_label = NULL;
    }
    if (deal_unit_line_update_dto->data4) {
        free(deal_unit_line_update_dto->data4);
        deal_unit_line_update_dto->data4 = NULL;
    }
    if (deal_unit_line_update_dto->data4_label) {
        free(deal_unit_line_update_dto->data4_label);
        deal_unit_line_update_dto->data4_label = NULL;
    }
    if (deal_unit_line_update_dto->data5) {
        free(deal_unit_line_update_dto->data5);
        deal_unit_line_update_dto->data5 = NULL;
    }
    if (deal_unit_line_update_dto->data5_label) {
        free(deal_unit_line_update_dto->data5_label);
        deal_unit_line_update_dto->data5_label = NULL;
    }
    if (deal_unit_line_update_dto->data6) {
        free(deal_unit_line_update_dto->data6);
        deal_unit_line_update_dto->data6 = NULL;
    }
    if (deal_unit_line_update_dto->data6_label) {
        free(deal_unit_line_update_dto->data6_label);
        deal_unit_line_update_dto->data6_label = NULL;
    }
    if (deal_unit_line_update_dto->data7) {
        free(deal_unit_line_update_dto->data7);
        deal_unit_line_update_dto->data7 = NULL;
    }
    if (deal_unit_line_update_dto->data7_label) {
        free(deal_unit_line_update_dto->data7_label);
        deal_unit_line_update_dto->data7_label = NULL;
    }
    if (deal_unit_line_update_dto->data8) {
        free(deal_unit_line_update_dto->data8);
        deal_unit_line_update_dto->data8 = NULL;
    }
    if (deal_unit_line_update_dto->data8_label) {
        free(deal_unit_line_update_dto->data8_label);
        deal_unit_line_update_dto->data8_label = NULL;
    }
    if (deal_unit_line_update_dto->data9) {
        free(deal_unit_line_update_dto->data9);
        deal_unit_line_update_dto->data9 = NULL;
    }
    if (deal_unit_line_update_dto->data9_label) {
        free(deal_unit_line_update_dto->data9_label);
        deal_unit_line_update_dto->data9_label = NULL;
    }
    if (deal_unit_line_update_dto->item_price_id) {
        free(deal_unit_line_update_dto->item_price_id);
        deal_unit_line_update_dto->item_price_id = NULL;
    }
    if (deal_unit_line_update_dto->price_list_item_id) {
        free(deal_unit_line_update_dto->price_list_item_id);
        deal_unit_line_update_dto->price_list_item_id = NULL;
    }
    if (deal_unit_line_update_dto->unit_id) {
        free(deal_unit_line_update_dto->unit_id);
        deal_unit_line_update_dto->unit_id = NULL;
    }
    if (deal_unit_line_update_dto->unit_group_id) {
        free(deal_unit_line_update_dto->unit_group_id);
        deal_unit_line_update_dto->unit_group_id = NULL;
    }
    if (deal_unit_line_update_dto->forex_rates_snapshot) {
        free(deal_unit_line_update_dto->forex_rates_snapshot);
        deal_unit_line_update_dto->forex_rates_snapshot = NULL;
    }
    if (deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id) {
        free(deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id);
        deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->custom_global_discounts_amount_currency_id) {
        free(deal_unit_line_update_dto->custom_global_discounts_amount_currency_id);
        deal_unit_line_update_dto->custom_global_discounts_amount_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_detail_currency_id) {
        free(deal_unit_line_update_dto->total_detail_currency_id);
        deal_unit_line_update_dto->total_detail_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_profit_currency_id) {
        free(deal_unit_line_update_dto->total_profit_currency_id);
        deal_unit_line_update_dto->total_profit_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_discounts_currency_id) {
        free(deal_unit_line_update_dto->total_discounts_currency_id);
        deal_unit_line_update_dto->total_discounts_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_surcharges_currency_id) {
        free(deal_unit_line_update_dto->total_surcharges_currency_id);
        deal_unit_line_update_dto->total_surcharges_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_tax_base_currency_id) {
        free(deal_unit_line_update_dto->total_tax_base_currency_id);
        deal_unit_line_update_dto->total_tax_base_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_shipping_cost_currency_id) {
        free(deal_unit_line_update_dto->total_shipping_cost_currency_id);
        deal_unit_line_update_dto->total_shipping_cost_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_shipping_tax_currency_id) {
        free(deal_unit_line_update_dto->total_shipping_tax_currency_id);
        deal_unit_line_update_dto->total_shipping_tax_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_taxes_currency_id) {
        free(deal_unit_line_update_dto->total_taxes_currency_id);
        deal_unit_line_update_dto->total_taxes_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_withheld_tax_currency_id) {
        free(deal_unit_line_update_dto->total_withheld_tax_currency_id);
        deal_unit_line_update_dto->total_withheld_tax_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_global_discounts_currency_id) {
        free(deal_unit_line_update_dto->total_global_discounts_currency_id);
        deal_unit_line_update_dto->total_global_discounts_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_global_surcharges_currency_id) {
        free(deal_unit_line_update_dto->total_global_surcharges_currency_id);
        deal_unit_line_update_dto->total_global_surcharges_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->total_currency_id) {
        free(deal_unit_line_update_dto->total_currency_id);
        deal_unit_line_update_dto->total_currency_id = NULL;
    }
    if (deal_unit_line_update_dto->return_policy_id) {
        free(deal_unit_line_update_dto->return_policy_id);
        deal_unit_line_update_dto->return_policy_id = NULL;
    }
    if (deal_unit_line_update_dto->refund_policy_id) {
        free(deal_unit_line_update_dto->refund_policy_id);
        deal_unit_line_update_dto->refund_policy_id = NULL;
    }
    if (deal_unit_line_update_dto->warranty_policy_id) {
        free(deal_unit_line_update_dto->warranty_policy_id);
        deal_unit_line_update_dto->warranty_policy_id = NULL;
    }
    if (deal_unit_line_update_dto->shipment_policy_id) {
        free(deal_unit_line_update_dto->shipment_policy_id);
        deal_unit_line_update_dto->shipment_policy_id = NULL;
    }
    if (deal_unit_line_update_dto->shipping_location_id) {
        free(deal_unit_line_update_dto->shipping_location_id);
        deal_unit_line_update_dto->shipping_location_id = NULL;
    }
    if (deal_unit_line_update_dto->location_id) {
        free(deal_unit_line_update_dto->location_id);
        deal_unit_line_update_dto->location_id = NULL;
    }
    if (deal_unit_line_update_dto->quote_item_record_id) {
        free(deal_unit_line_update_dto->quote_item_record_id);
        deal_unit_line_update_dto->quote_item_record_id = NULL;
    }
    if (deal_unit_line_update_dto->business_profile_record_id) {
        free(deal_unit_line_update_dto->business_profile_record_id);
        deal_unit_line_update_dto->business_profile_record_id = NULL;
    }
    if (deal_unit_line_update_dto->parent_billing_item_record_id) {
        free(deal_unit_line_update_dto->parent_billing_item_record_id);
        deal_unit_line_update_dto->parent_billing_item_record_id = NULL;
    }
    free(deal_unit_line_update_dto);
}

cJSON *deal_unit_line_update_dto_convertToJSON(deal_unit_line_update_dto_t *deal_unit_line_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_line_update_dto->closed
    if(deal_unit_line_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", deal_unit_line_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_line_update_dto->item_id
    if(deal_unit_line_update_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", deal_unit_line_update_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->item_title
    if(deal_unit_line_update_dto->item_title) {
    if(cJSON_AddStringToObject(item, "itemTitle", deal_unit_line_update_dto->item_title) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->item_short_description
    if(deal_unit_line_update_dto->item_short_description) {
    if(cJSON_AddStringToObject(item, "itemShortDescription", deal_unit_line_update_dto->item_short_description) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->item_primary_image_url
    if(deal_unit_line_update_dto->item_primary_image_url) {
    if(cJSON_AddStringToObject(item, "itemPrimaryImageUrl", deal_unit_line_update_dto->item_primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->shipping_policy_id
    if(deal_unit_line_update_dto->shipping_policy_id) {
    if(cJSON_AddStringToObject(item, "shippingPolicyId", deal_unit_line_update_dto->shipping_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->tenant_id
    if(deal_unit_line_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", deal_unit_line_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->enrollment_id
    if(deal_unit_line_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", deal_unit_line_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->currency_id
    if(deal_unit_line_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", deal_unit_line_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->description
    if(deal_unit_line_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", deal_unit_line_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->quantity
    if(deal_unit_line_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", deal_unit_line_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->free
    if(deal_unit_line_update_dto->free) {
    if(cJSON_AddBoolToObject(item, "free", deal_unit_line_update_dto->free) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_line_update_dto->free_reason
    if(deal_unit_line_update_dto->free_reason) {
    if(cJSON_AddStringToObject(item, "freeReason", deal_unit_line_update_dto->free_reason) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->free_reason_code
    if(deal_unit_line_update_dto->free_reason_code) {
    if(cJSON_AddStringToObject(item, "freeReasonCode", deal_unit_line_update_dto->free_reason_code) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data
    if(deal_unit_line_update_dto->data) {
    if(cJSON_AddStringToObject(item, "data", deal_unit_line_update_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data_label
    if(deal_unit_line_update_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", deal_unit_line_update_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data1
    if(deal_unit_line_update_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", deal_unit_line_update_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data1_label
    if(deal_unit_line_update_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", deal_unit_line_update_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data2
    if(deal_unit_line_update_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", deal_unit_line_update_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data2_label
    if(deal_unit_line_update_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", deal_unit_line_update_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data3
    if(deal_unit_line_update_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", deal_unit_line_update_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data3_label
    if(deal_unit_line_update_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", deal_unit_line_update_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data4
    if(deal_unit_line_update_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", deal_unit_line_update_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data4_label
    if(deal_unit_line_update_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", deal_unit_line_update_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data5
    if(deal_unit_line_update_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", deal_unit_line_update_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data5_label
    if(deal_unit_line_update_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", deal_unit_line_update_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data6
    if(deal_unit_line_update_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", deal_unit_line_update_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data6_label
    if(deal_unit_line_update_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", deal_unit_line_update_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data7
    if(deal_unit_line_update_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", deal_unit_line_update_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data7_label
    if(deal_unit_line_update_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", deal_unit_line_update_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data8
    if(deal_unit_line_update_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", deal_unit_line_update_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data8_label
    if(deal_unit_line_update_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", deal_unit_line_update_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data9
    if(deal_unit_line_update_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", deal_unit_line_update_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->data9_label
    if(deal_unit_line_update_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", deal_unit_line_update_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->item_price_id
    if(deal_unit_line_update_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", deal_unit_line_update_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->price_list_item_id
    if(deal_unit_line_update_dto->price_list_item_id) {
    if(cJSON_AddStringToObject(item, "priceListItemId", deal_unit_line_update_dto->price_list_item_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->unit_id
    if(deal_unit_line_update_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", deal_unit_line_update_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->unit_group_id
    if(deal_unit_line_update_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", deal_unit_line_update_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->tax_calculation_method
    if(deal_unit_line_update_dto->tax_calculation_method != dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methoddeal_unit_line_update_dto_ToString(deal_unit_line_update_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_line_update_dto->cost_calculation_method
    if(deal_unit_line_update_dto->cost_calculation_method != dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methoddeal_unit_line_update_dto_ToString(deal_unit_line_update_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_line_update_dto->forex_rates_snapshot
    if(deal_unit_line_update_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", deal_unit_line_update_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->forex_rate
    if(deal_unit_line_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", deal_unit_line_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_base_amount_in_usd
    if(deal_unit_line_update_dto->total_base_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalBaseAmountInUsd", deal_unit_line_update_dto->total_base_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_profit_in_usd
    if(deal_unit_line_update_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", deal_unit_line_update_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_detail_amount_in_usd
    if(deal_unit_line_update_dto->total_detail_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailAmountInUsd", deal_unit_line_update_dto->total_detail_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_tax_base_in_usd
    if(deal_unit_line_update_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", deal_unit_line_update_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_discounts_in_usd
    if(deal_unit_line_update_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", deal_unit_line_update_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_taxes_in_usd
    if(deal_unit_line_update_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", deal_unit_line_update_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_withheld_taxes_in_usd
    if(deal_unit_line_update_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", deal_unit_line_update_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_shipping_cost_in_usd
    if(deal_unit_line_update_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", deal_unit_line_update_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_shipping_taxes_in_usd
    if(deal_unit_line_update_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", deal_unit_line_update_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_warranty_cost_in_usd
    if(deal_unit_line_update_dto->total_warranty_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWarrantyCostInUsd", deal_unit_line_update_dto->total_warranty_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_return_cost_in_usd
    if(deal_unit_line_update_dto->total_return_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalReturnCostInUsd", deal_unit_line_update_dto->total_return_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_refund_cost_in_usd
    if(deal_unit_line_update_dto->total_refund_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalRefundCostInUsd", deal_unit_line_update_dto->total_refund_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_surcharges_in_usd
    if(deal_unit_line_update_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", deal_unit_line_update_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_amount_in_usd
    if(deal_unit_line_update_dto->total_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalAmountInUsd", deal_unit_line_update_dto->total_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_global_discounts_in_usd
    if(deal_unit_line_update_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", deal_unit_line_update_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_global_surcharges_in_usd
    if(deal_unit_line_update_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", deal_unit_line_update_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->custom_global_surcharges_amount
    if(deal_unit_line_update_dto->custom_global_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalSurchargesAmount", deal_unit_line_update_dto->custom_global_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id
    if(deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id) {
    if(cJSON_AddStringToObject(item, "customGlobalSurchargesAmountCurrencyId", deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->custom_global_discounts_amount
    if(deal_unit_line_update_dto->custom_global_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalDiscountsAmount", deal_unit_line_update_dto->custom_global_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->custom_global_discounts_amount_currency_id
    if(deal_unit_line_update_dto->custom_global_discounts_amount_currency_id) {
    if(cJSON_AddStringToObject(item, "customGlobalDiscountsAmountCurrencyId", deal_unit_line_update_dto->custom_global_discounts_amount_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_detail
    if(deal_unit_line_update_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", deal_unit_line_update_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_detail_currency_id
    if(deal_unit_line_update_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", deal_unit_line_update_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_profit
    if(deal_unit_line_update_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", deal_unit_line_update_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_profit_currency_id
    if(deal_unit_line_update_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", deal_unit_line_update_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_discounts
    if(deal_unit_line_update_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", deal_unit_line_update_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_discounts_currency_id
    if(deal_unit_line_update_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", deal_unit_line_update_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_surcharges
    if(deal_unit_line_update_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", deal_unit_line_update_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_surcharges_currency_id
    if(deal_unit_line_update_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", deal_unit_line_update_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_tax_base
    if(deal_unit_line_update_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", deal_unit_line_update_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_tax_base_currency_id
    if(deal_unit_line_update_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", deal_unit_line_update_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_shipping_cost
    if(deal_unit_line_update_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", deal_unit_line_update_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_shipping_cost_currency_id
    if(deal_unit_line_update_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", deal_unit_line_update_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_shipping_tax
    if(deal_unit_line_update_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", deal_unit_line_update_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_shipping_tax_currency_id
    if(deal_unit_line_update_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", deal_unit_line_update_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_taxes
    if(deal_unit_line_update_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", deal_unit_line_update_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_taxes_currency_id
    if(deal_unit_line_update_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", deal_unit_line_update_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_withheld_tax
    if(deal_unit_line_update_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", deal_unit_line_update_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_withheld_tax_currency_id
    if(deal_unit_line_update_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", deal_unit_line_update_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_global_discounts
    if(deal_unit_line_update_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", deal_unit_line_update_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_global_discounts_currency_id
    if(deal_unit_line_update_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", deal_unit_line_update_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total_global_surcharges
    if(deal_unit_line_update_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", deal_unit_line_update_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_global_surcharges_currency_id
    if(deal_unit_line_update_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", deal_unit_line_update_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->total
    if(deal_unit_line_update_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", deal_unit_line_update_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_line_update_dto->total_currency_id
    if(deal_unit_line_update_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", deal_unit_line_update_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->return_policy_id
    if(deal_unit_line_update_dto->return_policy_id) {
    if(cJSON_AddStringToObject(item, "returnPolicyId", deal_unit_line_update_dto->return_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->refund_policy_id
    if(deal_unit_line_update_dto->refund_policy_id) {
    if(cJSON_AddStringToObject(item, "refundPolicyId", deal_unit_line_update_dto->refund_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->warranty_policy_id
    if(deal_unit_line_update_dto->warranty_policy_id) {
    if(cJSON_AddStringToObject(item, "warrantyPolicyId", deal_unit_line_update_dto->warranty_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->shipment_policy_id
    if(deal_unit_line_update_dto->shipment_policy_id) {
    if(cJSON_AddStringToObject(item, "shipmentPolicyId", deal_unit_line_update_dto->shipment_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->shipping_location_id
    if(deal_unit_line_update_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", deal_unit_line_update_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->location_id
    if(deal_unit_line_update_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", deal_unit_line_update_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->quote_item_record_id
    if(deal_unit_line_update_dto->quote_item_record_id) {
    if(cJSON_AddStringToObject(item, "quoteItemRecordId", deal_unit_line_update_dto->quote_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->business_profile_record_id
    if(deal_unit_line_update_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", deal_unit_line_update_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_line_update_dto->parent_billing_item_record_id
    if(deal_unit_line_update_dto->parent_billing_item_record_id) {
    if(cJSON_AddStringToObject(item, "parentBillingItemRecordId", deal_unit_line_update_dto->parent_billing_item_record_id) == NULL) {
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

deal_unit_line_update_dto_t *deal_unit_line_update_dto_parseFromJSON(cJSON *deal_unit_line_update_dtoJSON){

    deal_unit_line_update_dto_t *deal_unit_line_update_dto_local_var = NULL;

    // deal_unit_line_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // deal_unit_line_update_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->item_title
    cJSON *item_title = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "itemTitle");
    if (item_title) { 
    if(!cJSON_IsString(item_title) && !cJSON_IsNull(item_title))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->item_short_description
    cJSON *item_short_description = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "itemShortDescription");
    if (item_short_description) { 
    if(!cJSON_IsString(item_short_description) && !cJSON_IsNull(item_short_description))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->item_primary_image_url
    cJSON *item_primary_image_url = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "itemPrimaryImageUrl");
    if (item_primary_image_url) { 
    if(!cJSON_IsString(item_primary_image_url) && !cJSON_IsNull(item_primary_image_url))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->shipping_policy_id
    cJSON *shipping_policy_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "shippingPolicyId");
    if (shipping_policy_id) { 
    if(!cJSON_IsString(shipping_policy_id) && !cJSON_IsNull(shipping_policy_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "free");
    if (free) { 
    if(!cJSON_IsBool(free))
    {
    goto end; //Bool
    }
    }

    // deal_unit_line_update_dto->free_reason
    cJSON *free_reason = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "freeReason");
    if (free_reason) { 
    if(!cJSON_IsString(free_reason) && !cJSON_IsNull(free_reason))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->free_reason_code
    cJSON *free_reason_code = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "freeReasonCode");
    if (free_reason_code) { 
    if(!cJSON_IsString(free_reason_code) && !cJSON_IsNull(free_reason_code))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->price_list_item_id
    cJSON *price_list_item_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "priceListItemId");
    if (price_list_item_id) { 
    if(!cJSON_IsString(price_list_item_id) && !cJSON_IsNull(price_list_item_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "taxCalculationMethod");
    dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = deal_unit_line_update_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // deal_unit_line_update_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "costCalculationMethod");
    dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = deal_unit_line_update_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // deal_unit_line_update_dto->forex_rates_snapshot
    cJSON *forex_rates_snapshot = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "forexRatesSnapshot");
    if (forex_rates_snapshot) { 
    if(!cJSON_IsString(forex_rates_snapshot) && !cJSON_IsNull(forex_rates_snapshot))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_base_amount_in_usd
    cJSON *total_base_amount_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalBaseAmountInUsd");
    if (total_base_amount_in_usd) { 
    if(!cJSON_IsNumber(total_base_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_detail_amount_in_usd
    cJSON *total_detail_amount_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDetailAmountInUsd");
    if (total_detail_amount_in_usd) { 
    if(!cJSON_IsNumber(total_detail_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_warranty_cost_in_usd
    cJSON *total_warranty_cost_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalWarrantyCostInUsd");
    if (total_warranty_cost_in_usd) { 
    if(!cJSON_IsNumber(total_warranty_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_return_cost_in_usd
    cJSON *total_return_cost_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalReturnCostInUsd");
    if (total_return_cost_in_usd) { 
    if(!cJSON_IsNumber(total_return_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_refund_cost_in_usd
    cJSON *total_refund_cost_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalRefundCostInUsd");
    if (total_refund_cost_in_usd) { 
    if(!cJSON_IsNumber(total_refund_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_amount_in_usd
    cJSON *total_amount_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalAmountInUsd");
    if (total_amount_in_usd) { 
    if(!cJSON_IsNumber(total_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->custom_global_surcharges_amount
    cJSON *custom_global_surcharges_amount = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "customGlobalSurchargesAmount");
    if (custom_global_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_global_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->custom_global_surcharges_amount_currency_id
    cJSON *custom_global_surcharges_amount_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "customGlobalSurchargesAmountCurrencyId");
    if (custom_global_surcharges_amount_currency_id) { 
    if(!cJSON_IsString(custom_global_surcharges_amount_currency_id) && !cJSON_IsNull(custom_global_surcharges_amount_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->custom_global_discounts_amount
    cJSON *custom_global_discounts_amount = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "customGlobalDiscountsAmount");
    if (custom_global_discounts_amount) { 
    if(!cJSON_IsNumber(custom_global_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->custom_global_discounts_amount_currency_id
    cJSON *custom_global_discounts_amount_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "customGlobalDiscountsAmountCurrencyId");
    if (custom_global_discounts_amount_currency_id) { 
    if(!cJSON_IsString(custom_global_discounts_amount_currency_id) && !cJSON_IsNull(custom_global_discounts_amount_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_line_update_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "returnPolicyId");
    if (return_policy_id) { 
    if(!cJSON_IsString(return_policy_id) && !cJSON_IsNull(return_policy_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->refund_policy_id
    cJSON *refund_policy_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "refundPolicyId");
    if (refund_policy_id) { 
    if(!cJSON_IsString(refund_policy_id) && !cJSON_IsNull(refund_policy_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->warranty_policy_id
    cJSON *warranty_policy_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "warrantyPolicyId");
    if (warranty_policy_id) { 
    if(!cJSON_IsString(warranty_policy_id) && !cJSON_IsNull(warranty_policy_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->shipment_policy_id
    cJSON *shipment_policy_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "shipmentPolicyId");
    if (shipment_policy_id) { 
    if(!cJSON_IsString(shipment_policy_id) && !cJSON_IsNull(shipment_policy_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->quote_item_record_id
    cJSON *quote_item_record_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "quoteItemRecordId");
    if (quote_item_record_id) { 
    if(!cJSON_IsString(quote_item_record_id) && !cJSON_IsNull(quote_item_record_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // deal_unit_line_update_dto->parent_billing_item_record_id
    cJSON *parent_billing_item_record_id = cJSON_GetObjectItemCaseSensitive(deal_unit_line_update_dtoJSON, "parentBillingItemRecordId");
    if (parent_billing_item_record_id) { 
    if(!cJSON_IsString(parent_billing_item_record_id) && !cJSON_IsNull(parent_billing_item_record_id))
    {
    goto end; //String
    }
    }


    deal_unit_line_update_dto_local_var = deal_unit_line_update_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : dealsservice_deal_unit_line_update_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : dealsservice_deal_unit_line_update_dto_COSTCALCULATIONMETHOD_NULL,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        total_base_amount_in_usd ? total_base_amount_in_usd->valuedouble : 0,
        total_profit_in_usd ? total_profit_in_usd->valuedouble : 0,
        total_detail_amount_in_usd ? total_detail_amount_in_usd->valuedouble : 0,
        total_tax_base_in_usd ? total_tax_base_in_usd->valuedouble : 0,
        total_discounts_in_usd ? total_discounts_in_usd->valuedouble : 0,
        total_taxes_in_usd ? total_taxes_in_usd->valuedouble : 0,
        total_withheld_taxes_in_usd ? total_withheld_taxes_in_usd->valuedouble : 0,
        total_shipping_cost_in_usd ? total_shipping_cost_in_usd->valuedouble : 0,
        total_shipping_taxes_in_usd ? total_shipping_taxes_in_usd->valuedouble : 0,
        total_warranty_cost_in_usd ? total_warranty_cost_in_usd->valuedouble : 0,
        total_return_cost_in_usd ? total_return_cost_in_usd->valuedouble : 0,
        total_refund_cost_in_usd ? total_refund_cost_in_usd->valuedouble : 0,
        total_surcharges_in_usd ? total_surcharges_in_usd->valuedouble : 0,
        total_amount_in_usd ? total_amount_in_usd->valuedouble : 0,
        total_global_discounts_in_usd ? total_global_discounts_in_usd->valuedouble : 0,
        total_global_surcharges_in_usd ? total_global_surcharges_in_usd->valuedouble : 0,
        custom_global_surcharges_amount ? custom_global_surcharges_amount->valuedouble : 0,
        custom_global_surcharges_amount_currency_id && !cJSON_IsNull(custom_global_surcharges_amount_currency_id) ? strdup(custom_global_surcharges_amount_currency_id->valuestring) : NULL,
        custom_global_discounts_amount ? custom_global_discounts_amount->valuedouble : 0,
        custom_global_discounts_amount_currency_id && !cJSON_IsNull(custom_global_discounts_amount_currency_id) ? strdup(custom_global_discounts_amount_currency_id->valuestring) : NULL,
        total_detail ? total_detail->valuedouble : 0,
        total_detail_currency_id && !cJSON_IsNull(total_detail_currency_id) ? strdup(total_detail_currency_id->valuestring) : NULL,
        total_profit ? total_profit->valuedouble : 0,
        total_profit_currency_id && !cJSON_IsNull(total_profit_currency_id) ? strdup(total_profit_currency_id->valuestring) : NULL,
        total_discounts ? total_discounts->valuedouble : 0,
        total_discounts_currency_id && !cJSON_IsNull(total_discounts_currency_id) ? strdup(total_discounts_currency_id->valuestring) : NULL,
        total_surcharges ? total_surcharges->valuedouble : 0,
        total_surcharges_currency_id && !cJSON_IsNull(total_surcharges_currency_id) ? strdup(total_surcharges_currency_id->valuestring) : NULL,
        total_tax_base ? total_tax_base->valuedouble : 0,
        total_tax_base_currency_id && !cJSON_IsNull(total_tax_base_currency_id) ? strdup(total_tax_base_currency_id->valuestring) : NULL,
        total_shipping_cost ? total_shipping_cost->valuedouble : 0,
        total_shipping_cost_currency_id && !cJSON_IsNull(total_shipping_cost_currency_id) ? strdup(total_shipping_cost_currency_id->valuestring) : NULL,
        total_shipping_tax ? total_shipping_tax->valuedouble : 0,
        total_shipping_tax_currency_id && !cJSON_IsNull(total_shipping_tax_currency_id) ? strdup(total_shipping_tax_currency_id->valuestring) : NULL,
        total_taxes ? total_taxes->valuedouble : 0,
        total_taxes_currency_id && !cJSON_IsNull(total_taxes_currency_id) ? strdup(total_taxes_currency_id->valuestring) : NULL,
        total_withheld_tax ? total_withheld_tax->valuedouble : 0,
        total_withheld_tax_currency_id && !cJSON_IsNull(total_withheld_tax_currency_id) ? strdup(total_withheld_tax_currency_id->valuestring) : NULL,
        total_global_discounts ? total_global_discounts->valuedouble : 0,
        total_global_discounts_currency_id && !cJSON_IsNull(total_global_discounts_currency_id) ? strdup(total_global_discounts_currency_id->valuestring) : NULL,
        total_global_surcharges ? total_global_surcharges->valuedouble : 0,
        total_global_surcharges_currency_id && !cJSON_IsNull(total_global_surcharges_currency_id) ? strdup(total_global_surcharges_currency_id->valuestring) : NULL,
        total ? total->valuedouble : 0,
        total_currency_id && !cJSON_IsNull(total_currency_id) ? strdup(total_currency_id->valuestring) : NULL,
        return_policy_id && !cJSON_IsNull(return_policy_id) ? strdup(return_policy_id->valuestring) : NULL,
        refund_policy_id && !cJSON_IsNull(refund_policy_id) ? strdup(refund_policy_id->valuestring) : NULL,
        warranty_policy_id && !cJSON_IsNull(warranty_policy_id) ? strdup(warranty_policy_id->valuestring) : NULL,
        shipment_policy_id && !cJSON_IsNull(shipment_policy_id) ? strdup(shipment_policy_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        quote_item_record_id && !cJSON_IsNull(quote_item_record_id) ? strdup(quote_item_record_id->valuestring) : NULL,
        business_profile_record_id && !cJSON_IsNull(business_profile_record_id) ? strdup(business_profile_record_id->valuestring) : NULL,
        parent_billing_item_record_id && !cJSON_IsNull(parent_billing_item_record_id) ? strdup(parent_billing_item_record_id->valuestring) : NULL
        );

    return deal_unit_line_update_dto_local_var;
end:
    return NULL;

}
