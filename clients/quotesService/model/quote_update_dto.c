#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quote_update_dto.h"


char* quote_update_dto_cost_calculation_method_ToString(quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_e quote_update_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* quote_update_dto_tax_calculation_method_ToString(quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_e quote_update_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* quote_update_dto_quote_status_ToString(quotesservice_quote_update_dto_QUOTESTATUS_e quote_status) {
    char* quote_statusArray[] =  { "NULL", "Draft", "New", "Accepted", "Declined", "Expired" };
    return quote_statusArray[quote_status];
}

quotesservice_quote_update_dto_QUOTESTATUS_e quote_update_dto_quote_status_FromString(char* quote_status){
    int stringToReturn = 0;
    char *quote_statusArray[] =  { "NULL", "Draft", "New", "Accepted", "Declined", "Expired" };
    size_t sizeofArray = sizeof(quote_statusArray) / sizeof(quote_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(quote_status, quote_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* quote_update_dto_freight_terms_ToString(quotesservice_quote_update_dto_FREIGHTTERMS_e freight_terms) {
    char* freight_termsArray[] =  { "NULL", "FOB", "NoCharge" };
    return freight_termsArray[freight_terms];
}

quotesservice_quote_update_dto_FREIGHTTERMS_e quote_update_dto_freight_terms_FromString(char* freight_terms){
    int stringToReturn = 0;
    char *freight_termsArray[] =  { "NULL", "FOB", "NoCharge" };
    size_t sizeofArray = sizeof(freight_termsArray) / sizeof(freight_termsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(freight_terms, freight_termsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

quote_update_dto_t *quote_update_dto_create(
    int closed,
    char *title,
    char *user_id,
    char *tenant_id,
    char *price_list_id,
    char *description,
    char *enrollment_id,
    char *individual_id,
    char *payment_term_id,
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
    char *billing_location_id,
    char *shipping_location_id,
    char *shipping_method_id,
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
    quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    char *cart_id,
    quotesservice_quote_update_dto_QUOTESTATUS_e quote_status,
    quotesservice_quote_update_dto_FREIGHTTERMS_e freight_terms,
    char *effective_to,
    char *effective_from,
    double custom_tax_amount,
    double custom_total_amount,
    double custom_detail_amount,
    double custom_profit_amount,
    double custom_discounts_amount,
    double custom_surcharges_amount,
    double custom_shipping_cost_amount,
    double custom_shipping_tax_amount,
    double custom_withholding_tax_amount
    ) {
    quote_update_dto_t *quote_update_dto_local_var = malloc(sizeof(quote_update_dto_t));
    if (!quote_update_dto_local_var) {
        return NULL;
    }
    quote_update_dto_local_var->closed = closed;
    quote_update_dto_local_var->title = title;
    quote_update_dto_local_var->user_id = user_id;
    quote_update_dto_local_var->tenant_id = tenant_id;
    quote_update_dto_local_var->price_list_id = price_list_id;
    quote_update_dto_local_var->description = description;
    quote_update_dto_local_var->enrollment_id = enrollment_id;
    quote_update_dto_local_var->individual_id = individual_id;
    quote_update_dto_local_var->payment_term_id = payment_term_id;
    quote_update_dto_local_var->organization_id = organization_id;
    quote_update_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    quote_update_dto_local_var->first_name = first_name;
    quote_update_dto_local_var->last_name = last_name;
    quote_update_dto_local_var->company_name = company_name;
    quote_update_dto_local_var->billing_email = billing_email;
    quote_update_dto_local_var->address_line1 = address_line1;
    quote_update_dto_local_var->address_line2 = address_line2;
    quote_update_dto_local_var->postal_code = postal_code;
    quote_update_dto_local_var->country_id = country_id;
    quote_update_dto_local_var->state_id = state_id;
    quote_update_dto_local_var->city_id = city_id;
    quote_update_dto_local_var->billing_location_id = billing_location_id;
    quote_update_dto_local_var->shipping_location_id = shipping_location_id;
    quote_update_dto_local_var->shipping_method_id = shipping_method_id;
    quote_update_dto_local_var->forex_rate = forex_rate;
    quote_update_dto_local_var->currency_id = currency_id;
    quote_update_dto_local_var->total_detail = total_detail;
    quote_update_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    quote_update_dto_local_var->total_profit = total_profit;
    quote_update_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    quote_update_dto_local_var->total_discounts = total_discounts;
    quote_update_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    quote_update_dto_local_var->total_surcharges = total_surcharges;
    quote_update_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    quote_update_dto_local_var->total_shipping_tax = total_shipping_tax;
    quote_update_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    quote_update_dto_local_var->total_shipping_cost = total_shipping_cost;
    quote_update_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    quote_update_dto_local_var->total_global_discounts = total_global_discounts;
    quote_update_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    quote_update_dto_local_var->total_global_surcharges = total_global_surcharges;
    quote_update_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    quote_update_dto_local_var->total_withheld_tax = total_withheld_tax;
    quote_update_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    quote_update_dto_local_var->total_tax_base = total_tax_base;
    quote_update_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    quote_update_dto_local_var->total_taxes = total_taxes;
    quote_update_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    quote_update_dto_local_var->total = total;
    quote_update_dto_local_var->total_currency_id = total_currency_id;
    quote_update_dto_local_var->cost_calculation_method = cost_calculation_method;
    quote_update_dto_local_var->tax_calculation_method = tax_calculation_method;
    quote_update_dto_local_var->cart_id = cart_id;
    quote_update_dto_local_var->quote_status = quote_status;
    quote_update_dto_local_var->freight_terms = freight_terms;
    quote_update_dto_local_var->effective_to = effective_to;
    quote_update_dto_local_var->effective_from = effective_from;
    quote_update_dto_local_var->custom_tax_amount = custom_tax_amount;
    quote_update_dto_local_var->custom_total_amount = custom_total_amount;
    quote_update_dto_local_var->custom_detail_amount = custom_detail_amount;
    quote_update_dto_local_var->custom_profit_amount = custom_profit_amount;
    quote_update_dto_local_var->custom_discounts_amount = custom_discounts_amount;
    quote_update_dto_local_var->custom_surcharges_amount = custom_surcharges_amount;
    quote_update_dto_local_var->custom_shipping_cost_amount = custom_shipping_cost_amount;
    quote_update_dto_local_var->custom_shipping_tax_amount = custom_shipping_tax_amount;
    quote_update_dto_local_var->custom_withholding_tax_amount = custom_withholding_tax_amount;

    return quote_update_dto_local_var;
}


void quote_update_dto_free(quote_update_dto_t *quote_update_dto) {
    if(NULL == quote_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (quote_update_dto->title) {
        free(quote_update_dto->title);
        quote_update_dto->title = NULL;
    }
    if (quote_update_dto->user_id) {
        free(quote_update_dto->user_id);
        quote_update_dto->user_id = NULL;
    }
    if (quote_update_dto->tenant_id) {
        free(quote_update_dto->tenant_id);
        quote_update_dto->tenant_id = NULL;
    }
    if (quote_update_dto->price_list_id) {
        free(quote_update_dto->price_list_id);
        quote_update_dto->price_list_id = NULL;
    }
    if (quote_update_dto->description) {
        free(quote_update_dto->description);
        quote_update_dto->description = NULL;
    }
    if (quote_update_dto->enrollment_id) {
        free(quote_update_dto->enrollment_id);
        quote_update_dto->enrollment_id = NULL;
    }
    if (quote_update_dto->individual_id) {
        free(quote_update_dto->individual_id);
        quote_update_dto->individual_id = NULL;
    }
    if (quote_update_dto->payment_term_id) {
        free(quote_update_dto->payment_term_id);
        quote_update_dto->payment_term_id = NULL;
    }
    if (quote_update_dto->organization_id) {
        free(quote_update_dto->organization_id);
        quote_update_dto->organization_id = NULL;
    }
    if (quote_update_dto->receiver_tenant_id) {
        free(quote_update_dto->receiver_tenant_id);
        quote_update_dto->receiver_tenant_id = NULL;
    }
    if (quote_update_dto->first_name) {
        free(quote_update_dto->first_name);
        quote_update_dto->first_name = NULL;
    }
    if (quote_update_dto->last_name) {
        free(quote_update_dto->last_name);
        quote_update_dto->last_name = NULL;
    }
    if (quote_update_dto->company_name) {
        free(quote_update_dto->company_name);
        quote_update_dto->company_name = NULL;
    }
    if (quote_update_dto->billing_email) {
        free(quote_update_dto->billing_email);
        quote_update_dto->billing_email = NULL;
    }
    if (quote_update_dto->address_line1) {
        free(quote_update_dto->address_line1);
        quote_update_dto->address_line1 = NULL;
    }
    if (quote_update_dto->address_line2) {
        free(quote_update_dto->address_line2);
        quote_update_dto->address_line2 = NULL;
    }
    if (quote_update_dto->postal_code) {
        free(quote_update_dto->postal_code);
        quote_update_dto->postal_code = NULL;
    }
    if (quote_update_dto->country_id) {
        free(quote_update_dto->country_id);
        quote_update_dto->country_id = NULL;
    }
    if (quote_update_dto->state_id) {
        free(quote_update_dto->state_id);
        quote_update_dto->state_id = NULL;
    }
    if (quote_update_dto->city_id) {
        free(quote_update_dto->city_id);
        quote_update_dto->city_id = NULL;
    }
    if (quote_update_dto->billing_location_id) {
        free(quote_update_dto->billing_location_id);
        quote_update_dto->billing_location_id = NULL;
    }
    if (quote_update_dto->shipping_location_id) {
        free(quote_update_dto->shipping_location_id);
        quote_update_dto->shipping_location_id = NULL;
    }
    if (quote_update_dto->shipping_method_id) {
        free(quote_update_dto->shipping_method_id);
        quote_update_dto->shipping_method_id = NULL;
    }
    if (quote_update_dto->currency_id) {
        free(quote_update_dto->currency_id);
        quote_update_dto->currency_id = NULL;
    }
    if (quote_update_dto->total_detail_currency_id) {
        free(quote_update_dto->total_detail_currency_id);
        quote_update_dto->total_detail_currency_id = NULL;
    }
    if (quote_update_dto->total_profit_currency_id) {
        free(quote_update_dto->total_profit_currency_id);
        quote_update_dto->total_profit_currency_id = NULL;
    }
    if (quote_update_dto->total_discounts_currency_id) {
        free(quote_update_dto->total_discounts_currency_id);
        quote_update_dto->total_discounts_currency_id = NULL;
    }
    if (quote_update_dto->total_surcharges_currency_id) {
        free(quote_update_dto->total_surcharges_currency_id);
        quote_update_dto->total_surcharges_currency_id = NULL;
    }
    if (quote_update_dto->total_shipping_tax_currency_id) {
        free(quote_update_dto->total_shipping_tax_currency_id);
        quote_update_dto->total_shipping_tax_currency_id = NULL;
    }
    if (quote_update_dto->total_shipping_cost_currency_id) {
        free(quote_update_dto->total_shipping_cost_currency_id);
        quote_update_dto->total_shipping_cost_currency_id = NULL;
    }
    if (quote_update_dto->total_global_discounts_currency_id) {
        free(quote_update_dto->total_global_discounts_currency_id);
        quote_update_dto->total_global_discounts_currency_id = NULL;
    }
    if (quote_update_dto->total_global_surcharges_currency_id) {
        free(quote_update_dto->total_global_surcharges_currency_id);
        quote_update_dto->total_global_surcharges_currency_id = NULL;
    }
    if (quote_update_dto->total_withheld_tax_currency_id) {
        free(quote_update_dto->total_withheld_tax_currency_id);
        quote_update_dto->total_withheld_tax_currency_id = NULL;
    }
    if (quote_update_dto->total_tax_base_currency_id) {
        free(quote_update_dto->total_tax_base_currency_id);
        quote_update_dto->total_tax_base_currency_id = NULL;
    }
    if (quote_update_dto->total_taxes_currency_id) {
        free(quote_update_dto->total_taxes_currency_id);
        quote_update_dto->total_taxes_currency_id = NULL;
    }
    if (quote_update_dto->total_currency_id) {
        free(quote_update_dto->total_currency_id);
        quote_update_dto->total_currency_id = NULL;
    }
    if (quote_update_dto->cart_id) {
        free(quote_update_dto->cart_id);
        quote_update_dto->cart_id = NULL;
    }
    if (quote_update_dto->effective_to) {
        free(quote_update_dto->effective_to);
        quote_update_dto->effective_to = NULL;
    }
    if (quote_update_dto->effective_from) {
        free(quote_update_dto->effective_from);
        quote_update_dto->effective_from = NULL;
    }
    free(quote_update_dto);
}

cJSON *quote_update_dto_convertToJSON(quote_update_dto_t *quote_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // quote_update_dto->closed
    if(quote_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", quote_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // quote_update_dto->title
    if(quote_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", quote_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->user_id
    if(quote_update_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", quote_update_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->tenant_id
    if(quote_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", quote_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->price_list_id
    if(quote_update_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", quote_update_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->description
    if(quote_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", quote_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->enrollment_id
    if(quote_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", quote_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->individual_id
    if(quote_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", quote_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->payment_term_id
    if(quote_update_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", quote_update_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->organization_id
    if(quote_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", quote_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->receiver_tenant_id
    if(quote_update_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", quote_update_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->first_name
    if(quote_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", quote_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->last_name
    if(quote_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", quote_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->company_name
    if(quote_update_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", quote_update_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->billing_email
    if(quote_update_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", quote_update_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->address_line1
    if(quote_update_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", quote_update_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->address_line2
    if(quote_update_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", quote_update_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->postal_code
    if(quote_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", quote_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->country_id
    if(quote_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", quote_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->state_id
    if(quote_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", quote_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->city_id
    if(quote_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", quote_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->billing_location_id
    if(quote_update_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", quote_update_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->shipping_location_id
    if(quote_update_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", quote_update_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->shipping_method_id
    if(quote_update_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", quote_update_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->forex_rate
    if(quote_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", quote_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->currency_id
    if(quote_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", quote_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_detail
    if(quote_update_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", quote_update_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_detail_currency_id
    if(quote_update_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", quote_update_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_profit
    if(quote_update_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", quote_update_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_profit_currency_id
    if(quote_update_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", quote_update_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_discounts
    if(quote_update_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", quote_update_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_discounts_currency_id
    if(quote_update_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", quote_update_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_surcharges
    if(quote_update_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", quote_update_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_surcharges_currency_id
    if(quote_update_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", quote_update_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_shipping_tax
    if(quote_update_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", quote_update_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_shipping_tax_currency_id
    if(quote_update_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", quote_update_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_shipping_cost
    if(quote_update_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", quote_update_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_shipping_cost_currency_id
    if(quote_update_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", quote_update_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_global_discounts
    if(quote_update_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", quote_update_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_global_discounts_currency_id
    if(quote_update_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", quote_update_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_global_surcharges
    if(quote_update_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", quote_update_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_global_surcharges_currency_id
    if(quote_update_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", quote_update_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_withheld_tax
    if(quote_update_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", quote_update_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_withheld_tax_currency_id
    if(quote_update_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", quote_update_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_tax_base
    if(quote_update_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", quote_update_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_tax_base_currency_id
    if(quote_update_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", quote_update_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total_taxes
    if(quote_update_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", quote_update_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_taxes_currency_id
    if(quote_update_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", quote_update_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->total
    if(quote_update_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", quote_update_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->total_currency_id
    if(quote_update_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", quote_update_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->cost_calculation_method
    if(quote_update_dto->cost_calculation_method != quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodquote_update_dto_ToString(quote_update_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_update_dto->tax_calculation_method
    if(quote_update_dto->tax_calculation_method != quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodquote_update_dto_ToString(quote_update_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_update_dto->cart_id
    if(quote_update_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", quote_update_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_update_dto->quote_status
    if(quote_update_dto->quote_status != quotesservice_quote_update_dto_QUOTESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "quoteStatus", quote_statusquote_update_dto_ToString(quote_update_dto->quote_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_update_dto->freight_terms
    if(quote_update_dto->freight_terms != quotesservice_quote_update_dto_FREIGHTTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "freightTerms", freight_termsquote_update_dto_ToString(quote_update_dto->freight_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_update_dto->effective_to
    if(quote_update_dto->effective_to) {
    if(cJSON_AddStringToObject(item, "effectiveTo", quote_update_dto->effective_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_update_dto->effective_from
    if(quote_update_dto->effective_from) {
    if(cJSON_AddStringToObject(item, "effectiveFrom", quote_update_dto->effective_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_update_dto->custom_tax_amount
    if(quote_update_dto->custom_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customTaxAmount", quote_update_dto->custom_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_total_amount
    if(quote_update_dto->custom_total_amount) {
    if(cJSON_AddNumberToObject(item, "customTotalAmount", quote_update_dto->custom_total_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_detail_amount
    if(quote_update_dto->custom_detail_amount) {
    if(cJSON_AddNumberToObject(item, "customDetailAmount", quote_update_dto->custom_detail_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_profit_amount
    if(quote_update_dto->custom_profit_amount) {
    if(cJSON_AddNumberToObject(item, "customProfitAmount", quote_update_dto->custom_profit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_discounts_amount
    if(quote_update_dto->custom_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customDiscountsAmount", quote_update_dto->custom_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_surcharges_amount
    if(quote_update_dto->custom_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customSurchargesAmount", quote_update_dto->custom_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_shipping_cost_amount
    if(quote_update_dto->custom_shipping_cost_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingCostAmount", quote_update_dto->custom_shipping_cost_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_shipping_tax_amount
    if(quote_update_dto->custom_shipping_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingTaxAmount", quote_update_dto->custom_shipping_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_update_dto->custom_withholding_tax_amount
    if(quote_update_dto->custom_withholding_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customWithholdingTaxAmount", quote_update_dto->custom_withholding_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

quote_update_dto_t *quote_update_dto_parseFromJSON(cJSON *quote_update_dtoJSON){

    quote_update_dto_t *quote_update_dto_local_var = NULL;

    // quote_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // quote_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // quote_update_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // quote_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // quote_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // quote_update_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // quote_update_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // quote_update_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // quote_update_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // quote_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // quote_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "costCalculationMethod");
    quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = quote_update_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // quote_update_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "taxCalculationMethod");
    quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = quote_update_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // quote_update_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // quote_update_dto->quote_status
    cJSON *quote_status = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "quoteStatus");
    quotesservice_quote_update_dto_QUOTESTATUS_e quote_statusVariable;
    if (quote_status) { 
    if(!cJSON_IsString(quote_status))
    {
    goto end; //Enum
    }
    quote_statusVariable = quote_update_dto_quote_status_FromString(quote_status->valuestring);
    }

    // quote_update_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "freightTerms");
    quotesservice_quote_update_dto_FREIGHTTERMS_e freight_termsVariable;
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms))
    {
    goto end; //Enum
    }
    freight_termsVariable = quote_update_dto_freight_terms_FromString(freight_terms->valuestring);
    }

    // quote_update_dto->effective_to
    cJSON *effective_to = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "effectiveTo");
    if (effective_to) { 
    if(!cJSON_IsString(effective_to) && !cJSON_IsNull(effective_to))
    {
    goto end; //DateTime
    }
    }

    // quote_update_dto->effective_from
    cJSON *effective_from = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "effectiveFrom");
    if (effective_from) { 
    if(!cJSON_IsString(effective_from) && !cJSON_IsNull(effective_from))
    {
    goto end; //DateTime
    }
    }

    // quote_update_dto->custom_tax_amount
    cJSON *custom_tax_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customTaxAmount");
    if (custom_tax_amount) { 
    if(!cJSON_IsNumber(custom_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_total_amount
    cJSON *custom_total_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customTotalAmount");
    if (custom_total_amount) { 
    if(!cJSON_IsNumber(custom_total_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_detail_amount
    cJSON *custom_detail_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customDetailAmount");
    if (custom_detail_amount) { 
    if(!cJSON_IsNumber(custom_detail_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_profit_amount
    cJSON *custom_profit_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customProfitAmount");
    if (custom_profit_amount) { 
    if(!cJSON_IsNumber(custom_profit_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_discounts_amount
    cJSON *custom_discounts_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customDiscountsAmount");
    if (custom_discounts_amount) { 
    if(!cJSON_IsNumber(custom_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_surcharges_amount
    cJSON *custom_surcharges_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customSurchargesAmount");
    if (custom_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_shipping_cost_amount
    cJSON *custom_shipping_cost_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customShippingCostAmount");
    if (custom_shipping_cost_amount) { 
    if(!cJSON_IsNumber(custom_shipping_cost_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_shipping_tax_amount
    cJSON *custom_shipping_tax_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customShippingTaxAmount");
    if (custom_shipping_tax_amount) { 
    if(!cJSON_IsNumber(custom_shipping_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // quote_update_dto->custom_withholding_tax_amount
    cJSON *custom_withholding_tax_amount = cJSON_GetObjectItemCaseSensitive(quote_update_dtoJSON, "customWithholdingTaxAmount");
    if (custom_withholding_tax_amount) { 
    if(!cJSON_IsNumber(custom_withholding_tax_amount))
    {
    goto end; //Numeric
    }
    }


    quote_update_dto_local_var = quote_update_dto_create (
        closed ? closed->valueint : 0,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        payment_term_id && !cJSON_IsNull(payment_term_id) ? strdup(payment_term_id->valuestring) : NULL,
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
        billing_location_id && !cJSON_IsNull(billing_location_id) ? strdup(billing_location_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        shipping_method_id && !cJSON_IsNull(shipping_method_id) ? strdup(shipping_method_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
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
        cost_calculation_method ? cost_calculation_methodVariable : quotesservice_quote_update_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : quotesservice_quote_update_dto_TAXCALCULATIONMETHOD_NULL,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        quote_status ? quote_statusVariable : quotesservice_quote_update_dto_QUOTESTATUS_NULL,
        freight_terms ? freight_termsVariable : quotesservice_quote_update_dto_FREIGHTTERMS_NULL,
        effective_to && !cJSON_IsNull(effective_to) ? strdup(effective_to->valuestring) : NULL,
        effective_from && !cJSON_IsNull(effective_from) ? strdup(effective_from->valuestring) : NULL,
        custom_tax_amount ? custom_tax_amount->valuedouble : 0,
        custom_total_amount ? custom_total_amount->valuedouble : 0,
        custom_detail_amount ? custom_detail_amount->valuedouble : 0,
        custom_profit_amount ? custom_profit_amount->valuedouble : 0,
        custom_discounts_amount ? custom_discounts_amount->valuedouble : 0,
        custom_surcharges_amount ? custom_surcharges_amount->valuedouble : 0,
        custom_shipping_cost_amount ? custom_shipping_cost_amount->valuedouble : 0,
        custom_shipping_tax_amount ? custom_shipping_tax_amount->valuedouble : 0,
        custom_withholding_tax_amount ? custom_withholding_tax_amount->valuedouble : 0
        );

    return quote_update_dto_local_var;
end:
    return NULL;

}
