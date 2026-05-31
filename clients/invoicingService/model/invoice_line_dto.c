#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_dto.h"


char* invoice_line_dto_tax_calculation_method_ToString(invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_e invoice_line_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* invoice_line_dto_cost_calculation_method_ToString(invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_e invoice_line_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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

invoice_line_dto_t *invoice_line_dto_create(
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
    invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    double forex_rate,
    char *forex_rates_snapshot,
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
    char *item_id,
    char *item_title,
    char *item_short_description,
    char *item_primary_image_url,
    char *shipping_policy_id,
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
    double total_warranty_cost_in_usd,
    double total_return_cost_in_usd,
    double total_refund_cost_in_usd,
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
    char *invoice_id
    ) {
    invoice_line_dto_t *invoice_line_dto_local_var = malloc(sizeof(invoice_line_dto_t));
    if (!invoice_line_dto_local_var) {
        return NULL;
    }
    invoice_line_dto_local_var->id = id;
    invoice_line_dto_local_var->timestamp = timestamp;
    invoice_line_dto_local_var->closed = closed;
    invoice_line_dto_local_var->type = type;
    invoice_line_dto_local_var->title = title;
    invoice_line_dto_local_var->user_id = user_id;
    invoice_line_dto_local_var->tenant_id = tenant_id;
    invoice_line_dto_local_var->description = description;
    invoice_line_dto_local_var->price_list_id = price_list_id;
    invoice_line_dto_local_var->enrollment_id = enrollment_id;
    invoice_line_dto_local_var->individual_id = individual_id;
    invoice_line_dto_local_var->organization_id = organization_id;
    invoice_line_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    invoice_line_dto_local_var->first_name = first_name;
    invoice_line_dto_local_var->last_name = last_name;
    invoice_line_dto_local_var->company_name = company_name;
    invoice_line_dto_local_var->billing_email = billing_email;
    invoice_line_dto_local_var->address_line1 = address_line1;
    invoice_line_dto_local_var->address_line2 = address_line2;
    invoice_line_dto_local_var->postal_code = postal_code;
    invoice_line_dto_local_var->country_id = country_id;
    invoice_line_dto_local_var->state_id = state_id;
    invoice_line_dto_local_var->city_id = city_id;
    invoice_line_dto_local_var->customer_notes = customer_notes;
    invoice_line_dto_local_var->tax_calculation_method = tax_calculation_method;
    invoice_line_dto_local_var->cost_calculation_method = cost_calculation_method;
    invoice_line_dto_local_var->forex_rate = forex_rate;
    invoice_line_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    invoice_line_dto_local_var->currency_id = currency_id;
    invoice_line_dto_local_var->total_detail = total_detail;
    invoice_line_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    invoice_line_dto_local_var->total_profit = total_profit;
    invoice_line_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    invoice_line_dto_local_var->total_discounts = total_discounts;
    invoice_line_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    invoice_line_dto_local_var->total_surcharges = total_surcharges;
    invoice_line_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    invoice_line_dto_local_var->total_tax_base = total_tax_base;
    invoice_line_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    invoice_line_dto_local_var->total_taxes = total_taxes;
    invoice_line_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    invoice_line_dto_local_var->total_shipping_cost = total_shipping_cost;
    invoice_line_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    invoice_line_dto_local_var->total_shipping_tax = total_shipping_tax;
    invoice_line_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    invoice_line_dto_local_var->total_withheld_tax = total_withheld_tax;
    invoice_line_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    invoice_line_dto_local_var->total_global_discounts = total_global_discounts;
    invoice_line_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    invoice_line_dto_local_var->total_global_surcharges = total_global_surcharges;
    invoice_line_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    invoice_line_dto_local_var->total = total;
    invoice_line_dto_local_var->total_currency_id = total_currency_id;
    invoice_line_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    invoice_line_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    invoice_line_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    invoice_line_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    invoice_line_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    invoice_line_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    invoice_line_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    invoice_line_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    invoice_line_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    invoice_line_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    invoice_line_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    invoice_line_dto_local_var->total_in_usd = total_in_usd;
    invoice_line_dto_local_var->item_id = item_id;
    invoice_line_dto_local_var->item_title = item_title;
    invoice_line_dto_local_var->item_short_description = item_short_description;
    invoice_line_dto_local_var->item_primary_image_url = item_primary_image_url;
    invoice_line_dto_local_var->shipping_policy_id = shipping_policy_id;
    invoice_line_dto_local_var->quantity = quantity;
    invoice_line_dto_local_var->free = free;
    invoice_line_dto_local_var->free_reason = free_reason;
    invoice_line_dto_local_var->free_reason_code = free_reason_code;
    invoice_line_dto_local_var->data = data;
    invoice_line_dto_local_var->data_label = data_label;
    invoice_line_dto_local_var->data1 = data1;
    invoice_line_dto_local_var->data1_label = data1_label;
    invoice_line_dto_local_var->data2 = data2;
    invoice_line_dto_local_var->data2_label = data2_label;
    invoice_line_dto_local_var->data3 = data3;
    invoice_line_dto_local_var->data3_label = data3_label;
    invoice_line_dto_local_var->data4 = data4;
    invoice_line_dto_local_var->data4_label = data4_label;
    invoice_line_dto_local_var->data5 = data5;
    invoice_line_dto_local_var->data5_label = data5_label;
    invoice_line_dto_local_var->data6 = data6;
    invoice_line_dto_local_var->data6_label = data6_label;
    invoice_line_dto_local_var->data7 = data7;
    invoice_line_dto_local_var->data7_label = data7_label;
    invoice_line_dto_local_var->data8 = data8;
    invoice_line_dto_local_var->data8_label = data8_label;
    invoice_line_dto_local_var->data9 = data9;
    invoice_line_dto_local_var->data9_label = data9_label;
    invoice_line_dto_local_var->item_price_id = item_price_id;
    invoice_line_dto_local_var->price_list_item_id = price_list_item_id;
    invoice_line_dto_local_var->unit_id = unit_id;
    invoice_line_dto_local_var->unit_group_id = unit_group_id;
    invoice_line_dto_local_var->total_warranty_cost_in_usd = total_warranty_cost_in_usd;
    invoice_line_dto_local_var->total_return_cost_in_usd = total_return_cost_in_usd;
    invoice_line_dto_local_var->total_refund_cost_in_usd = total_refund_cost_in_usd;
    invoice_line_dto_local_var->custom_global_surcharges_amount = custom_global_surcharges_amount;
    invoice_line_dto_local_var->custom_global_discounts_amount = custom_global_discounts_amount;
    invoice_line_dto_local_var->return_policy_id = return_policy_id;
    invoice_line_dto_local_var->refund_policy_id = refund_policy_id;
    invoice_line_dto_local_var->warranty_policy_id = warranty_policy_id;
    invoice_line_dto_local_var->shipment_policy_id = shipment_policy_id;
    invoice_line_dto_local_var->shipping_location_id = shipping_location_id;
    invoice_line_dto_local_var->location_id = location_id;
    invoice_line_dto_local_var->quote_item_record_id = quote_item_record_id;
    invoice_line_dto_local_var->business_profile_record_id = business_profile_record_id;
    invoice_line_dto_local_var->parent_billing_item_record_id = parent_billing_item_record_id;
    invoice_line_dto_local_var->invoice_id = invoice_id;

    return invoice_line_dto_local_var;
}


void invoice_line_dto_free(invoice_line_dto_t *invoice_line_dto) {
    if(NULL == invoice_line_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_dto->id) {
        free(invoice_line_dto->id);
        invoice_line_dto->id = NULL;
    }
    if (invoice_line_dto->timestamp) {
        free(invoice_line_dto->timestamp);
        invoice_line_dto->timestamp = NULL;
    }
    if (invoice_line_dto->type) {
        free(invoice_line_dto->type);
        invoice_line_dto->type = NULL;
    }
    if (invoice_line_dto->title) {
        free(invoice_line_dto->title);
        invoice_line_dto->title = NULL;
    }
    if (invoice_line_dto->user_id) {
        free(invoice_line_dto->user_id);
        invoice_line_dto->user_id = NULL;
    }
    if (invoice_line_dto->tenant_id) {
        free(invoice_line_dto->tenant_id);
        invoice_line_dto->tenant_id = NULL;
    }
    if (invoice_line_dto->description) {
        free(invoice_line_dto->description);
        invoice_line_dto->description = NULL;
    }
    if (invoice_line_dto->price_list_id) {
        free(invoice_line_dto->price_list_id);
        invoice_line_dto->price_list_id = NULL;
    }
    if (invoice_line_dto->enrollment_id) {
        free(invoice_line_dto->enrollment_id);
        invoice_line_dto->enrollment_id = NULL;
    }
    if (invoice_line_dto->individual_id) {
        free(invoice_line_dto->individual_id);
        invoice_line_dto->individual_id = NULL;
    }
    if (invoice_line_dto->organization_id) {
        free(invoice_line_dto->organization_id);
        invoice_line_dto->organization_id = NULL;
    }
    if (invoice_line_dto->receiver_tenant_id) {
        free(invoice_line_dto->receiver_tenant_id);
        invoice_line_dto->receiver_tenant_id = NULL;
    }
    if (invoice_line_dto->first_name) {
        free(invoice_line_dto->first_name);
        invoice_line_dto->first_name = NULL;
    }
    if (invoice_line_dto->last_name) {
        free(invoice_line_dto->last_name);
        invoice_line_dto->last_name = NULL;
    }
    if (invoice_line_dto->company_name) {
        free(invoice_line_dto->company_name);
        invoice_line_dto->company_name = NULL;
    }
    if (invoice_line_dto->billing_email) {
        free(invoice_line_dto->billing_email);
        invoice_line_dto->billing_email = NULL;
    }
    if (invoice_line_dto->address_line1) {
        free(invoice_line_dto->address_line1);
        invoice_line_dto->address_line1 = NULL;
    }
    if (invoice_line_dto->address_line2) {
        free(invoice_line_dto->address_line2);
        invoice_line_dto->address_line2 = NULL;
    }
    if (invoice_line_dto->postal_code) {
        free(invoice_line_dto->postal_code);
        invoice_line_dto->postal_code = NULL;
    }
    if (invoice_line_dto->country_id) {
        free(invoice_line_dto->country_id);
        invoice_line_dto->country_id = NULL;
    }
    if (invoice_line_dto->state_id) {
        free(invoice_line_dto->state_id);
        invoice_line_dto->state_id = NULL;
    }
    if (invoice_line_dto->city_id) {
        free(invoice_line_dto->city_id);
        invoice_line_dto->city_id = NULL;
    }
    if (invoice_line_dto->customer_notes) {
        free(invoice_line_dto->customer_notes);
        invoice_line_dto->customer_notes = NULL;
    }
    if (invoice_line_dto->forex_rates_snapshot) {
        free(invoice_line_dto->forex_rates_snapshot);
        invoice_line_dto->forex_rates_snapshot = NULL;
    }
    if (invoice_line_dto->currency_id) {
        free(invoice_line_dto->currency_id);
        invoice_line_dto->currency_id = NULL;
    }
    if (invoice_line_dto->total_detail_currency_id) {
        free(invoice_line_dto->total_detail_currency_id);
        invoice_line_dto->total_detail_currency_id = NULL;
    }
    if (invoice_line_dto->total_profit_currency_id) {
        free(invoice_line_dto->total_profit_currency_id);
        invoice_line_dto->total_profit_currency_id = NULL;
    }
    if (invoice_line_dto->total_discounts_currency_id) {
        free(invoice_line_dto->total_discounts_currency_id);
        invoice_line_dto->total_discounts_currency_id = NULL;
    }
    if (invoice_line_dto->total_surcharges_currency_id) {
        free(invoice_line_dto->total_surcharges_currency_id);
        invoice_line_dto->total_surcharges_currency_id = NULL;
    }
    if (invoice_line_dto->total_tax_base_currency_id) {
        free(invoice_line_dto->total_tax_base_currency_id);
        invoice_line_dto->total_tax_base_currency_id = NULL;
    }
    if (invoice_line_dto->total_taxes_currency_id) {
        free(invoice_line_dto->total_taxes_currency_id);
        invoice_line_dto->total_taxes_currency_id = NULL;
    }
    if (invoice_line_dto->total_shipping_cost_currency_id) {
        free(invoice_line_dto->total_shipping_cost_currency_id);
        invoice_line_dto->total_shipping_cost_currency_id = NULL;
    }
    if (invoice_line_dto->total_shipping_tax_currency_id) {
        free(invoice_line_dto->total_shipping_tax_currency_id);
        invoice_line_dto->total_shipping_tax_currency_id = NULL;
    }
    if (invoice_line_dto->total_withheld_tax_currency_id) {
        free(invoice_line_dto->total_withheld_tax_currency_id);
        invoice_line_dto->total_withheld_tax_currency_id = NULL;
    }
    if (invoice_line_dto->total_global_discounts_currency_id) {
        free(invoice_line_dto->total_global_discounts_currency_id);
        invoice_line_dto->total_global_discounts_currency_id = NULL;
    }
    if (invoice_line_dto->total_global_surcharges_currency_id) {
        free(invoice_line_dto->total_global_surcharges_currency_id);
        invoice_line_dto->total_global_surcharges_currency_id = NULL;
    }
    if (invoice_line_dto->total_currency_id) {
        free(invoice_line_dto->total_currency_id);
        invoice_line_dto->total_currency_id = NULL;
    }
    if (invoice_line_dto->item_id) {
        free(invoice_line_dto->item_id);
        invoice_line_dto->item_id = NULL;
    }
    if (invoice_line_dto->item_title) {
        free(invoice_line_dto->item_title);
        invoice_line_dto->item_title = NULL;
    }
    if (invoice_line_dto->item_short_description) {
        free(invoice_line_dto->item_short_description);
        invoice_line_dto->item_short_description = NULL;
    }
    if (invoice_line_dto->item_primary_image_url) {
        free(invoice_line_dto->item_primary_image_url);
        invoice_line_dto->item_primary_image_url = NULL;
    }
    if (invoice_line_dto->shipping_policy_id) {
        free(invoice_line_dto->shipping_policy_id);
        invoice_line_dto->shipping_policy_id = NULL;
    }
    if (invoice_line_dto->free_reason) {
        free(invoice_line_dto->free_reason);
        invoice_line_dto->free_reason = NULL;
    }
    if (invoice_line_dto->free_reason_code) {
        free(invoice_line_dto->free_reason_code);
        invoice_line_dto->free_reason_code = NULL;
    }
    if (invoice_line_dto->data) {
        free(invoice_line_dto->data);
        invoice_line_dto->data = NULL;
    }
    if (invoice_line_dto->data_label) {
        free(invoice_line_dto->data_label);
        invoice_line_dto->data_label = NULL;
    }
    if (invoice_line_dto->data1) {
        free(invoice_line_dto->data1);
        invoice_line_dto->data1 = NULL;
    }
    if (invoice_line_dto->data1_label) {
        free(invoice_line_dto->data1_label);
        invoice_line_dto->data1_label = NULL;
    }
    if (invoice_line_dto->data2) {
        free(invoice_line_dto->data2);
        invoice_line_dto->data2 = NULL;
    }
    if (invoice_line_dto->data2_label) {
        free(invoice_line_dto->data2_label);
        invoice_line_dto->data2_label = NULL;
    }
    if (invoice_line_dto->data3) {
        free(invoice_line_dto->data3);
        invoice_line_dto->data3 = NULL;
    }
    if (invoice_line_dto->data3_label) {
        free(invoice_line_dto->data3_label);
        invoice_line_dto->data3_label = NULL;
    }
    if (invoice_line_dto->data4) {
        free(invoice_line_dto->data4);
        invoice_line_dto->data4 = NULL;
    }
    if (invoice_line_dto->data4_label) {
        free(invoice_line_dto->data4_label);
        invoice_line_dto->data4_label = NULL;
    }
    if (invoice_line_dto->data5) {
        free(invoice_line_dto->data5);
        invoice_line_dto->data5 = NULL;
    }
    if (invoice_line_dto->data5_label) {
        free(invoice_line_dto->data5_label);
        invoice_line_dto->data5_label = NULL;
    }
    if (invoice_line_dto->data6) {
        free(invoice_line_dto->data6);
        invoice_line_dto->data6 = NULL;
    }
    if (invoice_line_dto->data6_label) {
        free(invoice_line_dto->data6_label);
        invoice_line_dto->data6_label = NULL;
    }
    if (invoice_line_dto->data7) {
        free(invoice_line_dto->data7);
        invoice_line_dto->data7 = NULL;
    }
    if (invoice_line_dto->data7_label) {
        free(invoice_line_dto->data7_label);
        invoice_line_dto->data7_label = NULL;
    }
    if (invoice_line_dto->data8) {
        free(invoice_line_dto->data8);
        invoice_line_dto->data8 = NULL;
    }
    if (invoice_line_dto->data8_label) {
        free(invoice_line_dto->data8_label);
        invoice_line_dto->data8_label = NULL;
    }
    if (invoice_line_dto->data9) {
        free(invoice_line_dto->data9);
        invoice_line_dto->data9 = NULL;
    }
    if (invoice_line_dto->data9_label) {
        free(invoice_line_dto->data9_label);
        invoice_line_dto->data9_label = NULL;
    }
    if (invoice_line_dto->item_price_id) {
        free(invoice_line_dto->item_price_id);
        invoice_line_dto->item_price_id = NULL;
    }
    if (invoice_line_dto->price_list_item_id) {
        free(invoice_line_dto->price_list_item_id);
        invoice_line_dto->price_list_item_id = NULL;
    }
    if (invoice_line_dto->unit_id) {
        free(invoice_line_dto->unit_id);
        invoice_line_dto->unit_id = NULL;
    }
    if (invoice_line_dto->unit_group_id) {
        free(invoice_line_dto->unit_group_id);
        invoice_line_dto->unit_group_id = NULL;
    }
    if (invoice_line_dto->return_policy_id) {
        free(invoice_line_dto->return_policy_id);
        invoice_line_dto->return_policy_id = NULL;
    }
    if (invoice_line_dto->refund_policy_id) {
        free(invoice_line_dto->refund_policy_id);
        invoice_line_dto->refund_policy_id = NULL;
    }
    if (invoice_line_dto->warranty_policy_id) {
        free(invoice_line_dto->warranty_policy_id);
        invoice_line_dto->warranty_policy_id = NULL;
    }
    if (invoice_line_dto->shipment_policy_id) {
        free(invoice_line_dto->shipment_policy_id);
        invoice_line_dto->shipment_policy_id = NULL;
    }
    if (invoice_line_dto->shipping_location_id) {
        free(invoice_line_dto->shipping_location_id);
        invoice_line_dto->shipping_location_id = NULL;
    }
    if (invoice_line_dto->location_id) {
        free(invoice_line_dto->location_id);
        invoice_line_dto->location_id = NULL;
    }
    if (invoice_line_dto->quote_item_record_id) {
        free(invoice_line_dto->quote_item_record_id);
        invoice_line_dto->quote_item_record_id = NULL;
    }
    if (invoice_line_dto->business_profile_record_id) {
        free(invoice_line_dto->business_profile_record_id);
        invoice_line_dto->business_profile_record_id = NULL;
    }
    if (invoice_line_dto->parent_billing_item_record_id) {
        free(invoice_line_dto->parent_billing_item_record_id);
        invoice_line_dto->parent_billing_item_record_id = NULL;
    }
    if (invoice_line_dto->invoice_id) {
        free(invoice_line_dto->invoice_id);
        invoice_line_dto->invoice_id = NULL;
    }
    free(invoice_line_dto);
}

cJSON *invoice_line_dto_convertToJSON(invoice_line_dto_t *invoice_line_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_dto->id
    if(invoice_line_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_line_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->timestamp
    if(invoice_line_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_line_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_line_dto->closed
    if(invoice_line_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", invoice_line_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_line_dto->type
    if(invoice_line_dto->type) {
    if(cJSON_AddStringToObject(item, "type", invoice_line_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->title
    if(invoice_line_dto->title) {
    if(cJSON_AddStringToObject(item, "title", invoice_line_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->user_id
    if(invoice_line_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", invoice_line_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->tenant_id
    if(invoice_line_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_line_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->description
    if(invoice_line_dto->description) {
    if(cJSON_AddStringToObject(item, "description", invoice_line_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->price_list_id
    if(invoice_line_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", invoice_line_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->enrollment_id
    if(invoice_line_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_line_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->individual_id
    if(invoice_line_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", invoice_line_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->organization_id
    if(invoice_line_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", invoice_line_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->receiver_tenant_id
    if(invoice_line_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", invoice_line_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->first_name
    if(invoice_line_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", invoice_line_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->last_name
    if(invoice_line_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", invoice_line_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->company_name
    if(invoice_line_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", invoice_line_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->billing_email
    if(invoice_line_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", invoice_line_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->address_line1
    if(invoice_line_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", invoice_line_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->address_line2
    if(invoice_line_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", invoice_line_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->postal_code
    if(invoice_line_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", invoice_line_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->country_id
    if(invoice_line_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", invoice_line_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->state_id
    if(invoice_line_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", invoice_line_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->city_id
    if(invoice_line_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", invoice_line_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->customer_notes
    if(invoice_line_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", invoice_line_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->tax_calculation_method
    if(invoice_line_dto->tax_calculation_method != invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodinvoice_line_dto_ToString(invoice_line_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_line_dto->cost_calculation_method
    if(invoice_line_dto->cost_calculation_method != invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodinvoice_line_dto_ToString(invoice_line_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_line_dto->forex_rate
    if(invoice_line_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", invoice_line_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->forex_rates_snapshot
    if(invoice_line_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", invoice_line_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->currency_id
    if(invoice_line_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_line_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_detail
    if(invoice_line_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", invoice_line_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_detail_currency_id
    if(invoice_line_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", invoice_line_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_profit
    if(invoice_line_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", invoice_line_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_profit_currency_id
    if(invoice_line_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", invoice_line_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_discounts
    if(invoice_line_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", invoice_line_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_discounts_currency_id
    if(invoice_line_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", invoice_line_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_surcharges
    if(invoice_line_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", invoice_line_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_surcharges_currency_id
    if(invoice_line_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", invoice_line_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_tax_base
    if(invoice_line_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", invoice_line_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_tax_base_currency_id
    if(invoice_line_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", invoice_line_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_taxes
    if(invoice_line_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", invoice_line_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_taxes_currency_id
    if(invoice_line_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", invoice_line_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_shipping_cost
    if(invoice_line_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", invoice_line_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_shipping_cost_currency_id
    if(invoice_line_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", invoice_line_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_shipping_tax
    if(invoice_line_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", invoice_line_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_shipping_tax_currency_id
    if(invoice_line_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", invoice_line_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_withheld_tax
    if(invoice_line_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", invoice_line_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_withheld_tax_currency_id
    if(invoice_line_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", invoice_line_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_global_discounts
    if(invoice_line_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", invoice_line_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_global_discounts_currency_id
    if(invoice_line_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", invoice_line_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_global_surcharges
    if(invoice_line_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", invoice_line_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_global_surcharges_currency_id
    if(invoice_line_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", invoice_line_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total
    if(invoice_line_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", invoice_line_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_currency_id
    if(invoice_line_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", invoice_line_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_detail_in_usd
    if(invoice_line_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", invoice_line_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_profit_in_usd
    if(invoice_line_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", invoice_line_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_discounts_in_usd
    if(invoice_line_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", invoice_line_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_surcharges_in_usd
    if(invoice_line_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", invoice_line_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_tax_base_in_usd
    if(invoice_line_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", invoice_line_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_taxes_in_usd
    if(invoice_line_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", invoice_line_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_withheld_taxes_in_usd
    if(invoice_line_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", invoice_line_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_shipping_cost_in_usd
    if(invoice_line_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", invoice_line_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_shipping_taxes_in_usd
    if(invoice_line_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", invoice_line_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_global_discounts_in_usd
    if(invoice_line_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", invoice_line_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_global_surcharges_in_usd
    if(invoice_line_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", invoice_line_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_in_usd
    if(invoice_line_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", invoice_line_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->item_id
    if(invoice_line_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", invoice_line_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->item_title
    if(invoice_line_dto->item_title) {
    if(cJSON_AddStringToObject(item, "itemTitle", invoice_line_dto->item_title) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->item_short_description
    if(invoice_line_dto->item_short_description) {
    if(cJSON_AddStringToObject(item, "itemShortDescription", invoice_line_dto->item_short_description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->item_primary_image_url
    if(invoice_line_dto->item_primary_image_url) {
    if(cJSON_AddStringToObject(item, "itemPrimaryImageUrl", invoice_line_dto->item_primary_image_url) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->shipping_policy_id
    if(invoice_line_dto->shipping_policy_id) {
    if(cJSON_AddStringToObject(item, "shippingPolicyId", invoice_line_dto->shipping_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->quantity
    if(invoice_line_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", invoice_line_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->free
    if(invoice_line_dto->free) {
    if(cJSON_AddBoolToObject(item, "free", invoice_line_dto->free) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_line_dto->free_reason
    if(invoice_line_dto->free_reason) {
    if(cJSON_AddStringToObject(item, "freeReason", invoice_line_dto->free_reason) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->free_reason_code
    if(invoice_line_dto->free_reason_code) {
    if(cJSON_AddStringToObject(item, "freeReasonCode", invoice_line_dto->free_reason_code) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data
    if(invoice_line_dto->data) {
    if(cJSON_AddStringToObject(item, "data", invoice_line_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data_label
    if(invoice_line_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", invoice_line_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data1
    if(invoice_line_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", invoice_line_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data1_label
    if(invoice_line_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", invoice_line_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data2
    if(invoice_line_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", invoice_line_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data2_label
    if(invoice_line_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", invoice_line_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data3
    if(invoice_line_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", invoice_line_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data3_label
    if(invoice_line_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", invoice_line_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data4
    if(invoice_line_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", invoice_line_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data4_label
    if(invoice_line_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", invoice_line_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data5
    if(invoice_line_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", invoice_line_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data5_label
    if(invoice_line_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", invoice_line_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data6
    if(invoice_line_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", invoice_line_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data6_label
    if(invoice_line_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", invoice_line_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data7
    if(invoice_line_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", invoice_line_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data7_label
    if(invoice_line_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", invoice_line_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data8
    if(invoice_line_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", invoice_line_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data8_label
    if(invoice_line_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", invoice_line_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data9
    if(invoice_line_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", invoice_line_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->data9_label
    if(invoice_line_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", invoice_line_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->item_price_id
    if(invoice_line_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", invoice_line_dto->item_price_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->price_list_item_id
    if(invoice_line_dto->price_list_item_id) {
    if(cJSON_AddStringToObject(item, "priceListItemId", invoice_line_dto->price_list_item_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->unit_id
    if(invoice_line_dto->unit_id) {
    if(cJSON_AddStringToObject(item, "unitId", invoice_line_dto->unit_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->unit_group_id
    if(invoice_line_dto->unit_group_id) {
    if(cJSON_AddStringToObject(item, "unitGroupId", invoice_line_dto->unit_group_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->total_warranty_cost_in_usd
    if(invoice_line_dto->total_warranty_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWarrantyCostInUsd", invoice_line_dto->total_warranty_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_return_cost_in_usd
    if(invoice_line_dto->total_return_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalReturnCostInUsd", invoice_line_dto->total_return_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->total_refund_cost_in_usd
    if(invoice_line_dto->total_refund_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalRefundCostInUsd", invoice_line_dto->total_refund_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->custom_global_surcharges_amount
    if(invoice_line_dto->custom_global_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalSurchargesAmount", invoice_line_dto->custom_global_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->custom_global_discounts_amount
    if(invoice_line_dto->custom_global_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customGlobalDiscountsAmount", invoice_line_dto->custom_global_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_dto->return_policy_id
    if(invoice_line_dto->return_policy_id) {
    if(cJSON_AddStringToObject(item, "returnPolicyId", invoice_line_dto->return_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->refund_policy_id
    if(invoice_line_dto->refund_policy_id) {
    if(cJSON_AddStringToObject(item, "refundPolicyId", invoice_line_dto->refund_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->warranty_policy_id
    if(invoice_line_dto->warranty_policy_id) {
    if(cJSON_AddStringToObject(item, "warrantyPolicyId", invoice_line_dto->warranty_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->shipment_policy_id
    if(invoice_line_dto->shipment_policy_id) {
    if(cJSON_AddStringToObject(item, "shipmentPolicyId", invoice_line_dto->shipment_policy_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->shipping_location_id
    if(invoice_line_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", invoice_line_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->location_id
    if(invoice_line_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", invoice_line_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->quote_item_record_id
    if(invoice_line_dto->quote_item_record_id) {
    if(cJSON_AddStringToObject(item, "quoteItemRecordId", invoice_line_dto->quote_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->business_profile_record_id
    if(invoice_line_dto->business_profile_record_id) {
    if(cJSON_AddStringToObject(item, "businessProfileRecordId", invoice_line_dto->business_profile_record_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->parent_billing_item_record_id
    if(invoice_line_dto->parent_billing_item_record_id) {
    if(cJSON_AddStringToObject(item, "parentBillingItemRecordId", invoice_line_dto->parent_billing_item_record_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_dto->invoice_id
    if(invoice_line_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", invoice_line_dto->invoice_id) == NULL) {
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

invoice_line_dto_t *invoice_line_dto_parseFromJSON(cJSON *invoice_line_dtoJSON){

    invoice_line_dto_t *invoice_line_dto_local_var = NULL;

    // invoice_line_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_line_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // invoice_line_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "taxCalculationMethod");
    invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = invoice_line_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // invoice_line_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "costCalculationMethod");
    invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = invoice_line_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // invoice_line_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->forex_rates_snapshot
    cJSON *forex_rates_snapshot = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "forexRatesSnapshot");
    if (forex_rates_snapshot) { 
    if(!cJSON_IsString(forex_rates_snapshot) && !cJSON_IsNull(forex_rates_snapshot))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->item_title
    cJSON *item_title = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "itemTitle");
    if (item_title) { 
    if(!cJSON_IsString(item_title) && !cJSON_IsNull(item_title))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->item_short_description
    cJSON *item_short_description = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "itemShortDescription");
    if (item_short_description) { 
    if(!cJSON_IsString(item_short_description) && !cJSON_IsNull(item_short_description))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->item_primary_image_url
    cJSON *item_primary_image_url = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "itemPrimaryImageUrl");
    if (item_primary_image_url) { 
    if(!cJSON_IsString(item_primary_image_url) && !cJSON_IsNull(item_primary_image_url))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->shipping_policy_id
    cJSON *shipping_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "shippingPolicyId");
    if (shipping_policy_id) { 
    if(!cJSON_IsString(shipping_policy_id) && !cJSON_IsNull(shipping_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "free");
    if (free) { 
    if(!cJSON_IsBool(free))
    {
    goto end; //Bool
    }
    }

    // invoice_line_dto->free_reason
    cJSON *free_reason = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "freeReason");
    if (free_reason) { 
    if(!cJSON_IsString(free_reason) && !cJSON_IsNull(free_reason))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->free_reason_code
    cJSON *free_reason_code = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "freeReasonCode");
    if (free_reason_code) { 
    if(!cJSON_IsString(free_reason_code) && !cJSON_IsNull(free_reason_code))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->price_list_item_id
    cJSON *price_list_item_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "priceListItemId");
    if (price_list_item_id) { 
    if(!cJSON_IsString(price_list_item_id) && !cJSON_IsNull(price_list_item_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->unit_id
    cJSON *unit_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "unitId");
    if (unit_id) { 
    if(!cJSON_IsString(unit_id) && !cJSON_IsNull(unit_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->unit_group_id
    cJSON *unit_group_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "unitGroupId");
    if (unit_group_id) { 
    if(!cJSON_IsString(unit_group_id) && !cJSON_IsNull(unit_group_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->total_warranty_cost_in_usd
    cJSON *total_warranty_cost_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalWarrantyCostInUsd");
    if (total_warranty_cost_in_usd) { 
    if(!cJSON_IsNumber(total_warranty_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_return_cost_in_usd
    cJSON *total_return_cost_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalReturnCostInUsd");
    if (total_return_cost_in_usd) { 
    if(!cJSON_IsNumber(total_return_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->total_refund_cost_in_usd
    cJSON *total_refund_cost_in_usd = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "totalRefundCostInUsd");
    if (total_refund_cost_in_usd) { 
    if(!cJSON_IsNumber(total_refund_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->custom_global_surcharges_amount
    cJSON *custom_global_surcharges_amount = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "customGlobalSurchargesAmount");
    if (custom_global_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_global_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->custom_global_discounts_amount
    cJSON *custom_global_discounts_amount = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "customGlobalDiscountsAmount");
    if (custom_global_discounts_amount) { 
    if(!cJSON_IsNumber(custom_global_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_dto->return_policy_id
    cJSON *return_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "returnPolicyId");
    if (return_policy_id) { 
    if(!cJSON_IsString(return_policy_id) && !cJSON_IsNull(return_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->refund_policy_id
    cJSON *refund_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "refundPolicyId");
    if (refund_policy_id) { 
    if(!cJSON_IsString(refund_policy_id) && !cJSON_IsNull(refund_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->warranty_policy_id
    cJSON *warranty_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "warrantyPolicyId");
    if (warranty_policy_id) { 
    if(!cJSON_IsString(warranty_policy_id) && !cJSON_IsNull(warranty_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->shipment_policy_id
    cJSON *shipment_policy_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "shipmentPolicyId");
    if (shipment_policy_id) { 
    if(!cJSON_IsString(shipment_policy_id) && !cJSON_IsNull(shipment_policy_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->quote_item_record_id
    cJSON *quote_item_record_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "quoteItemRecordId");
    if (quote_item_record_id) { 
    if(!cJSON_IsString(quote_item_record_id) && !cJSON_IsNull(quote_item_record_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->business_profile_record_id
    cJSON *business_profile_record_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "businessProfileRecordId");
    if (business_profile_record_id) { 
    if(!cJSON_IsString(business_profile_record_id) && !cJSON_IsNull(business_profile_record_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->parent_billing_item_record_id
    cJSON *parent_billing_item_record_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "parentBillingItemRecordId");
    if (parent_billing_item_record_id) { 
    if(!cJSON_IsString(parent_billing_item_record_id) && !cJSON_IsNull(parent_billing_item_record_id))
    {
    goto end; //String
    }
    }

    // invoice_line_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_line_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }


    invoice_line_dto_local_var = invoice_line_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        closed ? closed->valueint : 0,
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        receiver_tenant_id && !cJSON_IsNull(receiver_tenant_id) ? strdup(receiver_tenant_id->valuestring) : NULL,
        first_name && !cJSON_IsNull(first_name) ? strdup(first_name->valuestring) : NULL,
        last_name && !cJSON_IsNull(last_name) ? strdup(last_name->valuestring) : NULL,
        company_name && !cJSON_IsNull(company_name) ? strdup(company_name->valuestring) : NULL,
        billing_email && !cJSON_IsNull(billing_email) ? strdup(billing_email->valuestring) : NULL,
        address_line1 && !cJSON_IsNull(address_line1) ? strdup(address_line1->valuestring) : NULL,
        address_line2 && !cJSON_IsNull(address_line2) ? strdup(address_line2->valuestring) : NULL,
        postal_code && !cJSON_IsNull(postal_code) ? strdup(postal_code->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        state_id && !cJSON_IsNull(state_id) ? strdup(state_id->valuestring) : NULL,
        city_id && !cJSON_IsNull(city_id) ? strdup(city_id->valuestring) : NULL,
        customer_notes && !cJSON_IsNull(customer_notes) ? strdup(customer_notes->valuestring) : NULL,
        tax_calculation_method ? tax_calculation_methodVariable : invoicingservice_invoice_line_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : invoicingservice_invoice_line_dto_COSTCALCULATIONMETHOD_NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
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
        total_taxes ? total_taxes->valuedouble : 0,
        total_taxes_currency_id && !cJSON_IsNull(total_taxes_currency_id) ? strdup(total_taxes_currency_id->valuestring) : NULL,
        total_shipping_cost ? total_shipping_cost->valuedouble : 0,
        total_shipping_cost_currency_id && !cJSON_IsNull(total_shipping_cost_currency_id) ? strdup(total_shipping_cost_currency_id->valuestring) : NULL,
        total_shipping_tax ? total_shipping_tax->valuedouble : 0,
        total_shipping_tax_currency_id && !cJSON_IsNull(total_shipping_tax_currency_id) ? strdup(total_shipping_tax_currency_id->valuestring) : NULL,
        total_withheld_tax ? total_withheld_tax->valuedouble : 0,
        total_withheld_tax_currency_id && !cJSON_IsNull(total_withheld_tax_currency_id) ? strdup(total_withheld_tax_currency_id->valuestring) : NULL,
        total_global_discounts ? total_global_discounts->valuedouble : 0,
        total_global_discounts_currency_id && !cJSON_IsNull(total_global_discounts_currency_id) ? strdup(total_global_discounts_currency_id->valuestring) : NULL,
        total_global_surcharges ? total_global_surcharges->valuedouble : 0,
        total_global_surcharges_currency_id && !cJSON_IsNull(total_global_surcharges_currency_id) ? strdup(total_global_surcharges_currency_id->valuestring) : NULL,
        total ? total->valuedouble : 0,
        total_currency_id && !cJSON_IsNull(total_currency_id) ? strdup(total_currency_id->valuestring) : NULL,
        total_detail_in_usd ? total_detail_in_usd->valuedouble : 0,
        total_profit_in_usd ? total_profit_in_usd->valuedouble : 0,
        total_discounts_in_usd ? total_discounts_in_usd->valuedouble : 0,
        total_surcharges_in_usd ? total_surcharges_in_usd->valuedouble : 0,
        total_tax_base_in_usd ? total_tax_base_in_usd->valuedouble : 0,
        total_taxes_in_usd ? total_taxes_in_usd->valuedouble : 0,
        total_withheld_taxes_in_usd ? total_withheld_taxes_in_usd->valuedouble : 0,
        total_shipping_cost_in_usd ? total_shipping_cost_in_usd->valuedouble : 0,
        total_shipping_taxes_in_usd ? total_shipping_taxes_in_usd->valuedouble : 0,
        total_global_discounts_in_usd ? total_global_discounts_in_usd->valuedouble : 0,
        total_global_surcharges_in_usd ? total_global_surcharges_in_usd->valuedouble : 0,
        total_in_usd ? total_in_usd->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        item_title && !cJSON_IsNull(item_title) ? strdup(item_title->valuestring) : NULL,
        item_short_description && !cJSON_IsNull(item_short_description) ? strdup(item_short_description->valuestring) : NULL,
        item_primary_image_url && !cJSON_IsNull(item_primary_image_url) ? strdup(item_primary_image_url->valuestring) : NULL,
        shipping_policy_id && !cJSON_IsNull(shipping_policy_id) ? strdup(shipping_policy_id->valuestring) : NULL,
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
        total_warranty_cost_in_usd ? total_warranty_cost_in_usd->valuedouble : 0,
        total_return_cost_in_usd ? total_return_cost_in_usd->valuedouble : 0,
        total_refund_cost_in_usd ? total_refund_cost_in_usd->valuedouble : 0,
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
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL
        );

    return invoice_line_dto_local_var;
end:
    return NULL;

}
