#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quote_dto.h"


char* quote_dto_tax_calculation_method_ToString(quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

quotesservice_quote_dto_TAXCALCULATIONMETHOD_e quote_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* quote_dto_cost_calculation_method_ToString(quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

quotesservice_quote_dto_COSTCALCULATIONMETHOD_e quote_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* quote_dto_quote_status_ToString(quotesservice_quote_dto_QUOTESTATUS_e quote_status) {
    char* quote_statusArray[] =  { "NULL", "Draft", "New", "Accepted", "Declined", "Expired" };
    return quote_statusArray[quote_status];
}

quotesservice_quote_dto_QUOTESTATUS_e quote_dto_quote_status_FromString(char* quote_status){
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
char* quote_dto_freight_terms_ToString(quotesservice_quote_dto_FREIGHTTERMS_e freight_terms) {
    char* freight_termsArray[] =  { "NULL", "FOB", "NoCharge" };
    return freight_termsArray[freight_terms];
}

quotesservice_quote_dto_FREIGHTTERMS_e quote_dto_freight_terms_FromString(char* freight_terms){
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

quote_dto_t *quote_dto_create(
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
    quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    char *cart_id,
    char *deal_unit_id,
    char *effective_to,
    char *effective_from,
    quotesservice_quote_dto_QUOTESTATUS_e quote_status,
    quotesservice_quote_dto_FREIGHTTERMS_e freight_terms,
    double custom_discounts_amount
    ) {
    quote_dto_t *quote_dto_local_var = malloc(sizeof(quote_dto_t));
    if (!quote_dto_local_var) {
        return NULL;
    }
    quote_dto_local_var->id = id;
    quote_dto_local_var->timestamp = timestamp;
    quote_dto_local_var->closed = closed;
    quote_dto_local_var->type = type;
    quote_dto_local_var->title = title;
    quote_dto_local_var->user_id = user_id;
    quote_dto_local_var->tenant_id = tenant_id;
    quote_dto_local_var->description = description;
    quote_dto_local_var->price_list_id = price_list_id;
    quote_dto_local_var->enrollment_id = enrollment_id;
    quote_dto_local_var->individual_id = individual_id;
    quote_dto_local_var->organization_id = organization_id;
    quote_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    quote_dto_local_var->first_name = first_name;
    quote_dto_local_var->last_name = last_name;
    quote_dto_local_var->company_name = company_name;
    quote_dto_local_var->billing_email = billing_email;
    quote_dto_local_var->address_line1 = address_line1;
    quote_dto_local_var->address_line2 = address_line2;
    quote_dto_local_var->postal_code = postal_code;
    quote_dto_local_var->country_id = country_id;
    quote_dto_local_var->state_id = state_id;
    quote_dto_local_var->city_id = city_id;
    quote_dto_local_var->customer_notes = customer_notes;
    quote_dto_local_var->tax_calculation_method = tax_calculation_method;
    quote_dto_local_var->cost_calculation_method = cost_calculation_method;
    quote_dto_local_var->forex_rate = forex_rate;
    quote_dto_local_var->currency_id = currency_id;
    quote_dto_local_var->total_detail = total_detail;
    quote_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    quote_dto_local_var->total_profit = total_profit;
    quote_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    quote_dto_local_var->total_discounts = total_discounts;
    quote_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    quote_dto_local_var->total_surcharges = total_surcharges;
    quote_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    quote_dto_local_var->total_tax_base = total_tax_base;
    quote_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    quote_dto_local_var->total_taxes = total_taxes;
    quote_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    quote_dto_local_var->total_shipping_cost = total_shipping_cost;
    quote_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    quote_dto_local_var->total_shipping_tax = total_shipping_tax;
    quote_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    quote_dto_local_var->total_withheld_tax = total_withheld_tax;
    quote_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    quote_dto_local_var->total_global_discounts = total_global_discounts;
    quote_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    quote_dto_local_var->total_global_surcharges = total_global_surcharges;
    quote_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    quote_dto_local_var->total = total;
    quote_dto_local_var->total_currency_id = total_currency_id;
    quote_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    quote_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    quote_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    quote_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    quote_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    quote_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    quote_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    quote_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    quote_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    quote_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    quote_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    quote_dto_local_var->total_in_usd = total_in_usd;
    quote_dto_local_var->cart_id = cart_id;
    quote_dto_local_var->deal_unit_id = deal_unit_id;
    quote_dto_local_var->effective_to = effective_to;
    quote_dto_local_var->effective_from = effective_from;
    quote_dto_local_var->quote_status = quote_status;
    quote_dto_local_var->freight_terms = freight_terms;
    quote_dto_local_var->custom_discounts_amount = custom_discounts_amount;

    return quote_dto_local_var;
}


void quote_dto_free(quote_dto_t *quote_dto) {
    if(NULL == quote_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (quote_dto->id) {
        free(quote_dto->id);
        quote_dto->id = NULL;
    }
    if (quote_dto->timestamp) {
        free(quote_dto->timestamp);
        quote_dto->timestamp = NULL;
    }
    if (quote_dto->type) {
        free(quote_dto->type);
        quote_dto->type = NULL;
    }
    if (quote_dto->title) {
        free(quote_dto->title);
        quote_dto->title = NULL;
    }
    if (quote_dto->user_id) {
        free(quote_dto->user_id);
        quote_dto->user_id = NULL;
    }
    if (quote_dto->tenant_id) {
        free(quote_dto->tenant_id);
        quote_dto->tenant_id = NULL;
    }
    if (quote_dto->description) {
        free(quote_dto->description);
        quote_dto->description = NULL;
    }
    if (quote_dto->price_list_id) {
        free(quote_dto->price_list_id);
        quote_dto->price_list_id = NULL;
    }
    if (quote_dto->enrollment_id) {
        free(quote_dto->enrollment_id);
        quote_dto->enrollment_id = NULL;
    }
    if (quote_dto->individual_id) {
        free(quote_dto->individual_id);
        quote_dto->individual_id = NULL;
    }
    if (quote_dto->organization_id) {
        free(quote_dto->organization_id);
        quote_dto->organization_id = NULL;
    }
    if (quote_dto->receiver_tenant_id) {
        free(quote_dto->receiver_tenant_id);
        quote_dto->receiver_tenant_id = NULL;
    }
    if (quote_dto->first_name) {
        free(quote_dto->first_name);
        quote_dto->first_name = NULL;
    }
    if (quote_dto->last_name) {
        free(quote_dto->last_name);
        quote_dto->last_name = NULL;
    }
    if (quote_dto->company_name) {
        free(quote_dto->company_name);
        quote_dto->company_name = NULL;
    }
    if (quote_dto->billing_email) {
        free(quote_dto->billing_email);
        quote_dto->billing_email = NULL;
    }
    if (quote_dto->address_line1) {
        free(quote_dto->address_line1);
        quote_dto->address_line1 = NULL;
    }
    if (quote_dto->address_line2) {
        free(quote_dto->address_line2);
        quote_dto->address_line2 = NULL;
    }
    if (quote_dto->postal_code) {
        free(quote_dto->postal_code);
        quote_dto->postal_code = NULL;
    }
    if (quote_dto->country_id) {
        free(quote_dto->country_id);
        quote_dto->country_id = NULL;
    }
    if (quote_dto->state_id) {
        free(quote_dto->state_id);
        quote_dto->state_id = NULL;
    }
    if (quote_dto->city_id) {
        free(quote_dto->city_id);
        quote_dto->city_id = NULL;
    }
    if (quote_dto->customer_notes) {
        free(quote_dto->customer_notes);
        quote_dto->customer_notes = NULL;
    }
    if (quote_dto->currency_id) {
        free(quote_dto->currency_id);
        quote_dto->currency_id = NULL;
    }
    if (quote_dto->total_detail_currency_id) {
        free(quote_dto->total_detail_currency_id);
        quote_dto->total_detail_currency_id = NULL;
    }
    if (quote_dto->total_profit_currency_id) {
        free(quote_dto->total_profit_currency_id);
        quote_dto->total_profit_currency_id = NULL;
    }
    if (quote_dto->total_discounts_currency_id) {
        free(quote_dto->total_discounts_currency_id);
        quote_dto->total_discounts_currency_id = NULL;
    }
    if (quote_dto->total_surcharges_currency_id) {
        free(quote_dto->total_surcharges_currency_id);
        quote_dto->total_surcharges_currency_id = NULL;
    }
    if (quote_dto->total_tax_base_currency_id) {
        free(quote_dto->total_tax_base_currency_id);
        quote_dto->total_tax_base_currency_id = NULL;
    }
    if (quote_dto->total_taxes_currency_id) {
        free(quote_dto->total_taxes_currency_id);
        quote_dto->total_taxes_currency_id = NULL;
    }
    if (quote_dto->total_shipping_cost_currency_id) {
        free(quote_dto->total_shipping_cost_currency_id);
        quote_dto->total_shipping_cost_currency_id = NULL;
    }
    if (quote_dto->total_shipping_tax_currency_id) {
        free(quote_dto->total_shipping_tax_currency_id);
        quote_dto->total_shipping_tax_currency_id = NULL;
    }
    if (quote_dto->total_withheld_tax_currency_id) {
        free(quote_dto->total_withheld_tax_currency_id);
        quote_dto->total_withheld_tax_currency_id = NULL;
    }
    if (quote_dto->total_global_discounts_currency_id) {
        free(quote_dto->total_global_discounts_currency_id);
        quote_dto->total_global_discounts_currency_id = NULL;
    }
    if (quote_dto->total_global_surcharges_currency_id) {
        free(quote_dto->total_global_surcharges_currency_id);
        quote_dto->total_global_surcharges_currency_id = NULL;
    }
    if (quote_dto->total_currency_id) {
        free(quote_dto->total_currency_id);
        quote_dto->total_currency_id = NULL;
    }
    if (quote_dto->cart_id) {
        free(quote_dto->cart_id);
        quote_dto->cart_id = NULL;
    }
    if (quote_dto->deal_unit_id) {
        free(quote_dto->deal_unit_id);
        quote_dto->deal_unit_id = NULL;
    }
    if (quote_dto->effective_to) {
        free(quote_dto->effective_to);
        quote_dto->effective_to = NULL;
    }
    if (quote_dto->effective_from) {
        free(quote_dto->effective_from);
        quote_dto->effective_from = NULL;
    }
    free(quote_dto);
}

cJSON *quote_dto_convertToJSON(quote_dto_t *quote_dto) {
    cJSON *item = cJSON_CreateObject();

    // quote_dto->id
    if(quote_dto->id) {
    if(cJSON_AddStringToObject(item, "id", quote_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->timestamp
    if(quote_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", quote_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_dto->closed
    if(quote_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", quote_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // quote_dto->type
    if(quote_dto->type) {
    if(cJSON_AddStringToObject(item, "type", quote_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->title
    if(quote_dto->title) {
    if(cJSON_AddStringToObject(item, "title", quote_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->user_id
    if(quote_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", quote_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->tenant_id
    if(quote_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", quote_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->description
    if(quote_dto->description) {
    if(cJSON_AddStringToObject(item, "description", quote_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->price_list_id
    if(quote_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", quote_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->enrollment_id
    if(quote_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", quote_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->individual_id
    if(quote_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", quote_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->organization_id
    if(quote_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", quote_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->receiver_tenant_id
    if(quote_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", quote_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->first_name
    if(quote_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", quote_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->last_name
    if(quote_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", quote_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->company_name
    if(quote_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", quote_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->billing_email
    if(quote_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", quote_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->address_line1
    if(quote_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", quote_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->address_line2
    if(quote_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", quote_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->postal_code
    if(quote_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", quote_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->country_id
    if(quote_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", quote_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->state_id
    if(quote_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", quote_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->city_id
    if(quote_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", quote_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->customer_notes
    if(quote_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", quote_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->tax_calculation_method
    if(quote_dto->tax_calculation_method != quotesservice_quote_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodquote_dto_ToString(quote_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_dto->cost_calculation_method
    if(quote_dto->cost_calculation_method != quotesservice_quote_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodquote_dto_ToString(quote_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_dto->forex_rate
    if(quote_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", quote_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->currency_id
    if(quote_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", quote_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_detail
    if(quote_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", quote_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_detail_currency_id
    if(quote_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", quote_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_profit
    if(quote_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", quote_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_profit_currency_id
    if(quote_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", quote_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_discounts
    if(quote_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", quote_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_discounts_currency_id
    if(quote_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", quote_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_surcharges
    if(quote_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", quote_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_surcharges_currency_id
    if(quote_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", quote_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_tax_base
    if(quote_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", quote_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_tax_base_currency_id
    if(quote_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", quote_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_taxes
    if(quote_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", quote_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_taxes_currency_id
    if(quote_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", quote_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_shipping_cost
    if(quote_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", quote_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_shipping_cost_currency_id
    if(quote_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", quote_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_shipping_tax
    if(quote_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", quote_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_shipping_tax_currency_id
    if(quote_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", quote_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_withheld_tax
    if(quote_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", quote_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_withheld_tax_currency_id
    if(quote_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", quote_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_global_discounts
    if(quote_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", quote_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_global_discounts_currency_id
    if(quote_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", quote_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_global_surcharges
    if(quote_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", quote_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_global_surcharges_currency_id
    if(quote_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", quote_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total
    if(quote_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", quote_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_currency_id
    if(quote_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", quote_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->total_detail_in_usd
    if(quote_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", quote_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_profit_in_usd
    if(quote_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", quote_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_discounts_in_usd
    if(quote_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", quote_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_surcharges_in_usd
    if(quote_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", quote_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_tax_base_in_usd
    if(quote_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", quote_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_taxes_in_usd
    if(quote_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", quote_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_withheld_taxes_in_usd
    if(quote_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", quote_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_shipping_cost_in_usd
    if(quote_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", quote_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_shipping_taxes_in_usd
    if(quote_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", quote_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_global_discounts_in_usd
    if(quote_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", quote_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_global_surcharges_in_usd
    if(quote_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", quote_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->total_in_usd
    if(quote_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", quote_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // quote_dto->cart_id
    if(quote_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", quote_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->deal_unit_id
    if(quote_dto->deal_unit_id) {
    if(cJSON_AddStringToObject(item, "dealUnitId", quote_dto->deal_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // quote_dto->effective_to
    if(quote_dto->effective_to) {
    if(cJSON_AddStringToObject(item, "effectiveTo", quote_dto->effective_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_dto->effective_from
    if(quote_dto->effective_from) {
    if(cJSON_AddStringToObject(item, "effectiveFrom", quote_dto->effective_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // quote_dto->quote_status
    if(quote_dto->quote_status != quotesservice_quote_dto_QUOTESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "quoteStatus", quote_statusquote_dto_ToString(quote_dto->quote_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_dto->freight_terms
    if(quote_dto->freight_terms != quotesservice_quote_dto_FREIGHTTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "freightTerms", freight_termsquote_dto_ToString(quote_dto->freight_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // quote_dto->custom_discounts_amount
    if(quote_dto->custom_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customDiscountsAmount", quote_dto->custom_discounts_amount) == NULL) {
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

quote_dto_t *quote_dto_parseFromJSON(cJSON *quote_dtoJSON){

    quote_dto_t *quote_dto_local_var = NULL;

    // quote_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // quote_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // quote_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // quote_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // quote_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // quote_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // quote_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // quote_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // quote_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // quote_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // quote_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // quote_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // quote_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // quote_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // quote_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // quote_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // quote_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // quote_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // quote_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // quote_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // quote_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // quote_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // quote_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // quote_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // quote_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "taxCalculationMethod");
    quotesservice_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = quote_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // quote_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "costCalculationMethod");
    quotesservice_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = quote_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // quote_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // quote_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // quote_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // quote_dto->deal_unit_id
    cJSON *deal_unit_id = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "dealUnitId");
    if (deal_unit_id) { 
    if(!cJSON_IsString(deal_unit_id) && !cJSON_IsNull(deal_unit_id))
    {
    goto end; //String
    }
    }

    // quote_dto->effective_to
    cJSON *effective_to = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "effectiveTo");
    if (effective_to) { 
    if(!cJSON_IsString(effective_to) && !cJSON_IsNull(effective_to))
    {
    goto end; //DateTime
    }
    }

    // quote_dto->effective_from
    cJSON *effective_from = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "effectiveFrom");
    if (effective_from) { 
    if(!cJSON_IsString(effective_from) && !cJSON_IsNull(effective_from))
    {
    goto end; //DateTime
    }
    }

    // quote_dto->quote_status
    cJSON *quote_status = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "quoteStatus");
    quotesservice_quote_dto_QUOTESTATUS_e quote_statusVariable;
    if (quote_status) { 
    if(!cJSON_IsString(quote_status))
    {
    goto end; //Enum
    }
    quote_statusVariable = quote_dto_quote_status_FromString(quote_status->valuestring);
    }

    // quote_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "freightTerms");
    quotesservice_quote_dto_FREIGHTTERMS_e freight_termsVariable;
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms))
    {
    goto end; //Enum
    }
    freight_termsVariable = quote_dto_freight_terms_FromString(freight_terms->valuestring);
    }

    // quote_dto->custom_discounts_amount
    cJSON *custom_discounts_amount = cJSON_GetObjectItemCaseSensitive(quote_dtoJSON, "customDiscountsAmount");
    if (custom_discounts_amount) { 
    if(!cJSON_IsNumber(custom_discounts_amount))
    {
    goto end; //Numeric
    }
    }


    quote_dto_local_var = quote_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : quotesservice_quote_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : quotesservice_quote_dto_COSTCALCULATIONMETHOD_NULL,
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
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        deal_unit_id && !cJSON_IsNull(deal_unit_id) ? strdup(deal_unit_id->valuestring) : NULL,
        effective_to && !cJSON_IsNull(effective_to) ? strdup(effective_to->valuestring) : NULL,
        effective_from && !cJSON_IsNull(effective_from) ? strdup(effective_from->valuestring) : NULL,
        quote_status ? quote_statusVariable : quotesservice_quote_dto_QUOTESTATUS_NULL,
        freight_terms ? freight_termsVariable : quotesservice_quote_dto_FREIGHTTERMS_NULL,
        custom_discounts_amount ? custom_discounts_amount->valuedouble : 0
        );

    return quote_dto_local_var;
end:
    return NULL;

}
