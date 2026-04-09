#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_update_dto.h"


char* order_update_dto_cost_calculation_method_ToString(ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e order_update_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* order_update_dto_tax_calculation_method_ToString(ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e order_update_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
    ) {
    order_update_dto_t *order_update_dto_local_var = malloc(sizeof(order_update_dto_t));
    if (!order_update_dto_local_var) {
        return NULL;
    }
    order_update_dto_local_var->tenant_id = tenant_id;
    order_update_dto_local_var->first_name = first_name;
    order_update_dto_local_var->last_name = last_name;
    order_update_dto_local_var->company_name = company_name;
    order_update_dto_local_var->billing_email = billing_email;
    order_update_dto_local_var->address_line1 = address_line1;
    order_update_dto_local_var->address_line2 = address_line2;
    order_update_dto_local_var->postal_code = postal_code;
    order_update_dto_local_var->country_id = country_id;
    order_update_dto_local_var->state_id = state_id;
    order_update_dto_local_var->city_id = city_id;
    order_update_dto_local_var->billing_location_id = billing_location_id;
    order_update_dto_local_var->shipping_location_id = shipping_location_id;
    order_update_dto_local_var->shipping_method_id = shipping_method_id;
    order_update_dto_local_var->total_detail = total_detail;
    order_update_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    order_update_dto_local_var->total_profit = total_profit;
    order_update_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    order_update_dto_local_var->total_discounts = total_discounts;
    order_update_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    order_update_dto_local_var->total_surcharges = total_surcharges;
    order_update_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    order_update_dto_local_var->total_shipping_tax = total_shipping_tax;
    order_update_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    order_update_dto_local_var->total_shipping_cost = total_shipping_cost;
    order_update_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    order_update_dto_local_var->total_global_discounts = total_global_discounts;
    order_update_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    order_update_dto_local_var->total_global_surcharges = total_global_surcharges;
    order_update_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    order_update_dto_local_var->total_withheld_tax = total_withheld_tax;
    order_update_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    order_update_dto_local_var->total_tax_base = total_tax_base;
    order_update_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    order_update_dto_local_var->total_taxes = total_taxes;
    order_update_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    order_update_dto_local_var->total = total;
    order_update_dto_local_var->total_currency_id = total_currency_id;
    order_update_dto_local_var->cost_calculation_method = cost_calculation_method;
    order_update_dto_local_var->tax_calculation_method = tax_calculation_method;
    order_update_dto_local_var->cart_id = cart_id;
    order_update_dto_local_var->user_id = user_id;
    order_update_dto_local_var->forex_rate = forex_rate;
    order_update_dto_local_var->currency_id = currency_id;
    order_update_dto_local_var->enrollment_id = enrollment_id;
    order_update_dto_local_var->individual_id = individual_id;
    order_update_dto_local_var->organization_id = organization_id;
    order_update_dto_local_var->total_amount_in_usd = total_amount_in_usd;
    order_update_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    order_update_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    order_update_dto_local_var->closed = closed;
    order_update_dto_local_var->price_list_id = price_list_id;
    order_update_dto_local_var->payment_term_id = payment_term_id;
    order_update_dto_local_var->quote_status = quote_status;
    order_update_dto_local_var->effective_to = effective_to;
    order_update_dto_local_var->effective_from = effective_from;
    order_update_dto_local_var->description = description;
    order_update_dto_local_var->title = title;

    return order_update_dto_local_var;
}


void order_update_dto_free(order_update_dto_t *order_update_dto) {
    if(NULL == order_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (order_update_dto->tenant_id) {
        free(order_update_dto->tenant_id);
        order_update_dto->tenant_id = NULL;
    }
    if (order_update_dto->first_name) {
        free(order_update_dto->first_name);
        order_update_dto->first_name = NULL;
    }
    if (order_update_dto->last_name) {
        free(order_update_dto->last_name);
        order_update_dto->last_name = NULL;
    }
    if (order_update_dto->company_name) {
        free(order_update_dto->company_name);
        order_update_dto->company_name = NULL;
    }
    if (order_update_dto->billing_email) {
        free(order_update_dto->billing_email);
        order_update_dto->billing_email = NULL;
    }
    if (order_update_dto->address_line1) {
        free(order_update_dto->address_line1);
        order_update_dto->address_line1 = NULL;
    }
    if (order_update_dto->address_line2) {
        free(order_update_dto->address_line2);
        order_update_dto->address_line2 = NULL;
    }
    if (order_update_dto->postal_code) {
        free(order_update_dto->postal_code);
        order_update_dto->postal_code = NULL;
    }
    if (order_update_dto->country_id) {
        free(order_update_dto->country_id);
        order_update_dto->country_id = NULL;
    }
    if (order_update_dto->state_id) {
        free(order_update_dto->state_id);
        order_update_dto->state_id = NULL;
    }
    if (order_update_dto->city_id) {
        free(order_update_dto->city_id);
        order_update_dto->city_id = NULL;
    }
    if (order_update_dto->billing_location_id) {
        free(order_update_dto->billing_location_id);
        order_update_dto->billing_location_id = NULL;
    }
    if (order_update_dto->shipping_location_id) {
        free(order_update_dto->shipping_location_id);
        order_update_dto->shipping_location_id = NULL;
    }
    if (order_update_dto->shipping_method_id) {
        free(order_update_dto->shipping_method_id);
        order_update_dto->shipping_method_id = NULL;
    }
    if (order_update_dto->total_detail_currency_id) {
        free(order_update_dto->total_detail_currency_id);
        order_update_dto->total_detail_currency_id = NULL;
    }
    if (order_update_dto->total_profit_currency_id) {
        free(order_update_dto->total_profit_currency_id);
        order_update_dto->total_profit_currency_id = NULL;
    }
    if (order_update_dto->total_discounts_currency_id) {
        free(order_update_dto->total_discounts_currency_id);
        order_update_dto->total_discounts_currency_id = NULL;
    }
    if (order_update_dto->total_surcharges_currency_id) {
        free(order_update_dto->total_surcharges_currency_id);
        order_update_dto->total_surcharges_currency_id = NULL;
    }
    if (order_update_dto->total_shipping_tax_currency_id) {
        free(order_update_dto->total_shipping_tax_currency_id);
        order_update_dto->total_shipping_tax_currency_id = NULL;
    }
    if (order_update_dto->total_shipping_cost_currency_id) {
        free(order_update_dto->total_shipping_cost_currency_id);
        order_update_dto->total_shipping_cost_currency_id = NULL;
    }
    if (order_update_dto->total_global_discounts_currency_id) {
        free(order_update_dto->total_global_discounts_currency_id);
        order_update_dto->total_global_discounts_currency_id = NULL;
    }
    if (order_update_dto->total_global_surcharges_currency_id) {
        free(order_update_dto->total_global_surcharges_currency_id);
        order_update_dto->total_global_surcharges_currency_id = NULL;
    }
    if (order_update_dto->total_withheld_tax_currency_id) {
        free(order_update_dto->total_withheld_tax_currency_id);
        order_update_dto->total_withheld_tax_currency_id = NULL;
    }
    if (order_update_dto->total_tax_base_currency_id) {
        free(order_update_dto->total_tax_base_currency_id);
        order_update_dto->total_tax_base_currency_id = NULL;
    }
    if (order_update_dto->total_taxes_currency_id) {
        free(order_update_dto->total_taxes_currency_id);
        order_update_dto->total_taxes_currency_id = NULL;
    }
    if (order_update_dto->total_currency_id) {
        free(order_update_dto->total_currency_id);
        order_update_dto->total_currency_id = NULL;
    }
    if (order_update_dto->cart_id) {
        free(order_update_dto->cart_id);
        order_update_dto->cart_id = NULL;
    }
    if (order_update_dto->user_id) {
        free(order_update_dto->user_id);
        order_update_dto->user_id = NULL;
    }
    if (order_update_dto->currency_id) {
        free(order_update_dto->currency_id);
        order_update_dto->currency_id = NULL;
    }
    if (order_update_dto->enrollment_id) {
        free(order_update_dto->enrollment_id);
        order_update_dto->enrollment_id = NULL;
    }
    if (order_update_dto->individual_id) {
        free(order_update_dto->individual_id);
        order_update_dto->individual_id = NULL;
    }
    if (order_update_dto->organization_id) {
        free(order_update_dto->organization_id);
        order_update_dto->organization_id = NULL;
    }
    if (order_update_dto->receiver_tenant_id) {
        free(order_update_dto->receiver_tenant_id);
        order_update_dto->receiver_tenant_id = NULL;
    }
    if (order_update_dto->price_list_id) {
        free(order_update_dto->price_list_id);
        order_update_dto->price_list_id = NULL;
    }
    if (order_update_dto->payment_term_id) {
        free(order_update_dto->payment_term_id);
        order_update_dto->payment_term_id = NULL;
    }
    if (order_update_dto->quote_status) {
        free(order_update_dto->quote_status);
        order_update_dto->quote_status = NULL;
    }
    if (order_update_dto->effective_to) {
        free(order_update_dto->effective_to);
        order_update_dto->effective_to = NULL;
    }
    if (order_update_dto->effective_from) {
        free(order_update_dto->effective_from);
        order_update_dto->effective_from = NULL;
    }
    if (order_update_dto->description) {
        free(order_update_dto->description);
        order_update_dto->description = NULL;
    }
    if (order_update_dto->title) {
        free(order_update_dto->title);
        order_update_dto->title = NULL;
    }
    free(order_update_dto);
}

cJSON *order_update_dto_convertToJSON(order_update_dto_t *order_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // order_update_dto->tenant_id
    if(order_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", order_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->first_name
    if(order_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", order_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->last_name
    if(order_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", order_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->company_name
    if(order_update_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", order_update_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->billing_email
    if(order_update_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", order_update_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->address_line1
    if(order_update_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", order_update_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->address_line2
    if(order_update_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", order_update_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->postal_code
    if(order_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", order_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->country_id
    if(order_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", order_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->state_id
    if(order_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", order_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->city_id
    if(order_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", order_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->billing_location_id
    if(order_update_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", order_update_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->shipping_location_id
    if(order_update_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", order_update_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->shipping_method_id
    if(order_update_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", order_update_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_detail
    if(order_update_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", order_update_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_detail_currency_id
    if(order_update_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", order_update_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_profit
    if(order_update_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", order_update_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_profit_currency_id
    if(order_update_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", order_update_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_discounts
    if(order_update_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", order_update_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_discounts_currency_id
    if(order_update_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", order_update_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_surcharges
    if(order_update_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", order_update_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_surcharges_currency_id
    if(order_update_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", order_update_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_shipping_tax
    if(order_update_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", order_update_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_shipping_tax_currency_id
    if(order_update_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", order_update_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_shipping_cost
    if(order_update_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", order_update_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_shipping_cost_currency_id
    if(order_update_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", order_update_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_global_discounts
    if(order_update_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", order_update_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_global_discounts_currency_id
    if(order_update_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", order_update_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_global_surcharges
    if(order_update_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", order_update_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_global_surcharges_currency_id
    if(order_update_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", order_update_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_withheld_tax
    if(order_update_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", order_update_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_withheld_tax_currency_id
    if(order_update_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", order_update_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_tax_base
    if(order_update_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", order_update_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_tax_base_currency_id
    if(order_update_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", order_update_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_taxes
    if(order_update_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", order_update_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_taxes_currency_id
    if(order_update_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", order_update_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total
    if(order_update_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", order_update_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_currency_id
    if(order_update_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", order_update_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->cost_calculation_method
    if(order_update_dto->cost_calculation_method != ordersservice_order_update_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodorder_update_dto_ToString(order_update_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // order_update_dto->tax_calculation_method
    if(order_update_dto->tax_calculation_method != ordersservice_order_update_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodorder_update_dto_ToString(order_update_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // order_update_dto->cart_id
    if(order_update_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", order_update_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->user_id
    if(order_update_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", order_update_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->forex_rate
    if(order_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", order_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->currency_id
    if(order_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", order_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->enrollment_id
    if(order_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", order_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->individual_id
    if(order_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", order_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->organization_id
    if(order_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", order_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->total_amount_in_usd
    if(order_update_dto->total_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalAmountInUsd", order_update_dto->total_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->total_taxes_in_usd
    if(order_update_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", order_update_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // order_update_dto->receiver_tenant_id
    if(order_update_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", order_update_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->closed
    if(order_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", order_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // order_update_dto->price_list_id
    if(order_update_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", order_update_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->payment_term_id
    if(order_update_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", order_update_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->quote_status
    if(order_update_dto->quote_status) {
    if(cJSON_AddStringToObject(item, "quoteStatus", order_update_dto->quote_status) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->effective_to
    if(order_update_dto->effective_to) {
    if(cJSON_AddStringToObject(item, "effectiveTo", order_update_dto->effective_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // order_update_dto->effective_from
    if(order_update_dto->effective_from) {
    if(cJSON_AddStringToObject(item, "effectiveFrom", order_update_dto->effective_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // order_update_dto->description
    if(order_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", order_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // order_update_dto->title
    if(order_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", order_update_dto->title) == NULL) {
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

order_update_dto_t *order_update_dto_parseFromJSON(cJSON *order_update_dtoJSON){

    order_update_dto_t *order_update_dto_local_var = NULL;

    // order_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // order_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // order_update_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // order_update_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // order_update_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // order_update_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // order_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // order_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "costCalculationMethod");
    ordersservice_order_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = order_update_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // order_update_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "taxCalculationMethod");
    ordersservice_order_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = order_update_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // order_update_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->total_amount_in_usd
    cJSON *total_amount_in_usd = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalAmountInUsd");
    if (total_amount_in_usd) { 
    if(!cJSON_IsNumber(total_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // order_update_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // order_update_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // order_update_dto->quote_status
    cJSON *quote_status = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "quoteStatus");
    if (quote_status) { 
    if(!cJSON_IsString(quote_status) && !cJSON_IsNull(quote_status))
    {
    goto end; //String
    }
    }

    // order_update_dto->effective_to
    cJSON *effective_to = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "effectiveTo");
    if (effective_to) { 
    if(!cJSON_IsString(effective_to) && !cJSON_IsNull(effective_to))
    {
    goto end; //DateTime
    }
    }

    // order_update_dto->effective_from
    cJSON *effective_from = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "effectiveFrom");
    if (effective_from) { 
    if(!cJSON_IsString(effective_from) && !cJSON_IsNull(effective_from))
    {
    goto end; //DateTime
    }
    }

    // order_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // order_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(order_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }


    order_update_dto_local_var = order_update_dto_create (
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
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
        billing_location_id && !cJSON_IsNull(billing_location_id) ? strdup(billing_location_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        shipping_method_id && !cJSON_IsNull(shipping_method_id) ? strdup(shipping_method_id->valuestring) : NULL,
        total_detail ? total_detail->valuedouble : 0,
        total_detail_currency_id && !cJSON_IsNull(total_detail_currency_id) ? strdup(total_detail_currency_id->valuestring) : NULL,
        total_profit ? total_profit->valuedouble : 0,
        total_profit_currency_id && !cJSON_IsNull(total_profit_currency_id) ? strdup(total_profit_currency_id->valuestring) : NULL,
        total_discounts ? total_discounts->valuedouble : 0,
        total_discounts_currency_id && !cJSON_IsNull(total_discounts_currency_id) ? strdup(total_discounts_currency_id->valuestring) : NULL,
        total_surcharges ? total_surcharges->valuedouble : 0,
        total_surcharges_currency_id && !cJSON_IsNull(total_surcharges_currency_id) ? strdup(total_surcharges_currency_id->valuestring) : NULL,
        total_shipping_tax ? total_shipping_tax->valuedouble : 0,
        total_shipping_tax_currency_id && !cJSON_IsNull(total_shipping_tax_currency_id) ? strdup(total_shipping_tax_currency_id->valuestring) : NULL,
        total_shipping_cost ? total_shipping_cost->valuedouble : 0,
        total_shipping_cost_currency_id && !cJSON_IsNull(total_shipping_cost_currency_id) ? strdup(total_shipping_cost_currency_id->valuestring) : NULL,
        total_global_discounts ? total_global_discounts->valuedouble : 0,
        total_global_discounts_currency_id && !cJSON_IsNull(total_global_discounts_currency_id) ? strdup(total_global_discounts_currency_id->valuestring) : NULL,
        total_global_surcharges ? total_global_surcharges->valuedouble : 0,
        total_global_surcharges_currency_id && !cJSON_IsNull(total_global_surcharges_currency_id) ? strdup(total_global_surcharges_currency_id->valuestring) : NULL,
        total_withheld_tax ? total_withheld_tax->valuedouble : 0,
        total_withheld_tax_currency_id && !cJSON_IsNull(total_withheld_tax_currency_id) ? strdup(total_withheld_tax_currency_id->valuestring) : NULL,
        total_tax_base ? total_tax_base->valuedouble : 0,
        total_tax_base_currency_id && !cJSON_IsNull(total_tax_base_currency_id) ? strdup(total_tax_base_currency_id->valuestring) : NULL,
        total_taxes ? total_taxes->valuedouble : 0,
        total_taxes_currency_id && !cJSON_IsNull(total_taxes_currency_id) ? strdup(total_taxes_currency_id->valuestring) : NULL,
        total ? total->valuedouble : 0,
        total_currency_id && !cJSON_IsNull(total_currency_id) ? strdup(total_currency_id->valuestring) : NULL,
        cost_calculation_method ? cost_calculation_methodVariable : ordersservice_order_update_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : ordersservice_order_update_dto_TAXCALCULATIONMETHOD_NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        total_amount_in_usd ? total_amount_in_usd->valuedouble : 0,
        total_taxes_in_usd ? total_taxes_in_usd->valuedouble : 0,
        receiver_tenant_id && !cJSON_IsNull(receiver_tenant_id) ? strdup(receiver_tenant_id->valuestring) : NULL,
        closed ? closed->valueint : 0,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        payment_term_id && !cJSON_IsNull(payment_term_id) ? strdup(payment_term_id->valuestring) : NULL,
        quote_status && !cJSON_IsNull(quote_status) ? strdup(quote_status->valuestring) : NULL,
        effective_to && !cJSON_IsNull(effective_to) ? strdup(effective_to->valuestring) : NULL,
        effective_from && !cJSON_IsNull(effective_from) ? strdup(effective_from->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL
        );

    return order_update_dto_local_var;
end:
    return NULL;

}
