#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_quote_dto.h"


char* extended_quote_dto_tax_calculation_method_ToString(quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_e extended_quote_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* extended_quote_dto_cost_calculation_method_ToString(quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_e extended_quote_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* extended_quote_dto_quote_status_ToString(quotesservice_extended_quote_dto_QUOTESTATUS_e quote_status) {
    char* quote_statusArray[] =  { "NULL", "Draft", "New", "Accepted", "Declined", "Expired" };
    return quote_statusArray[quote_status];
}

quotesservice_extended_quote_dto_QUOTESTATUS_e extended_quote_dto_quote_status_FromString(char* quote_status){
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
char* extended_quote_dto_freight_terms_ToString(quotesservice_extended_quote_dto_FREIGHTTERMS_e freight_terms) {
    char* freight_termsArray[] =  { "NULL", "FOB", "NoCharge" };
    return freight_termsArray[freight_terms];
}

quotesservice_extended_quote_dto_FREIGHTTERMS_e extended_quote_dto_freight_terms_FromString(char* freight_terms){
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

extended_quote_dto_t *extended_quote_dto_create(
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
    quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    quotesservice_extended_quote_dto_QUOTESTATUS_e quote_status,
    quotesservice_extended_quote_dto_FREIGHTTERMS_e freight_terms,
    double custom_discounts_amount,
    user_dto_t *user,
    tenant_dto_t *tenant,
    contact_dto_t *individual,
    contact_dto_t *organization,
    tenant_dto_t *receiver_tenant,
    tenant_enrollment_dto_t *enrollment
    ) {
    extended_quote_dto_t *extended_quote_dto_local_var = malloc(sizeof(extended_quote_dto_t));
    if (!extended_quote_dto_local_var) {
        return NULL;
    }
    extended_quote_dto_local_var->id = id;
    extended_quote_dto_local_var->timestamp = timestamp;
    extended_quote_dto_local_var->closed = closed;
    extended_quote_dto_local_var->type = type;
    extended_quote_dto_local_var->title = title;
    extended_quote_dto_local_var->user_id = user_id;
    extended_quote_dto_local_var->tenant_id = tenant_id;
    extended_quote_dto_local_var->description = description;
    extended_quote_dto_local_var->price_list_id = price_list_id;
    extended_quote_dto_local_var->enrollment_id = enrollment_id;
    extended_quote_dto_local_var->individual_id = individual_id;
    extended_quote_dto_local_var->organization_id = organization_id;
    extended_quote_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    extended_quote_dto_local_var->first_name = first_name;
    extended_quote_dto_local_var->last_name = last_name;
    extended_quote_dto_local_var->company_name = company_name;
    extended_quote_dto_local_var->billing_email = billing_email;
    extended_quote_dto_local_var->address_line1 = address_line1;
    extended_quote_dto_local_var->address_line2 = address_line2;
    extended_quote_dto_local_var->postal_code = postal_code;
    extended_quote_dto_local_var->country_id = country_id;
    extended_quote_dto_local_var->state_id = state_id;
    extended_quote_dto_local_var->city_id = city_id;
    extended_quote_dto_local_var->customer_notes = customer_notes;
    extended_quote_dto_local_var->tax_calculation_method = tax_calculation_method;
    extended_quote_dto_local_var->cost_calculation_method = cost_calculation_method;
    extended_quote_dto_local_var->forex_rate = forex_rate;
    extended_quote_dto_local_var->currency_id = currency_id;
    extended_quote_dto_local_var->total_detail = total_detail;
    extended_quote_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    extended_quote_dto_local_var->total_profit = total_profit;
    extended_quote_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    extended_quote_dto_local_var->total_discounts = total_discounts;
    extended_quote_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    extended_quote_dto_local_var->total_surcharges = total_surcharges;
    extended_quote_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    extended_quote_dto_local_var->total_tax_base = total_tax_base;
    extended_quote_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    extended_quote_dto_local_var->total_taxes = total_taxes;
    extended_quote_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    extended_quote_dto_local_var->total_shipping_cost = total_shipping_cost;
    extended_quote_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    extended_quote_dto_local_var->total_shipping_tax = total_shipping_tax;
    extended_quote_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    extended_quote_dto_local_var->total_withheld_tax = total_withheld_tax;
    extended_quote_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    extended_quote_dto_local_var->total_global_discounts = total_global_discounts;
    extended_quote_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    extended_quote_dto_local_var->total_global_surcharges = total_global_surcharges;
    extended_quote_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    extended_quote_dto_local_var->total = total;
    extended_quote_dto_local_var->total_currency_id = total_currency_id;
    extended_quote_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    extended_quote_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    extended_quote_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    extended_quote_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    extended_quote_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    extended_quote_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    extended_quote_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    extended_quote_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    extended_quote_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    extended_quote_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    extended_quote_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    extended_quote_dto_local_var->total_in_usd = total_in_usd;
    extended_quote_dto_local_var->cart_id = cart_id;
    extended_quote_dto_local_var->deal_unit_id = deal_unit_id;
    extended_quote_dto_local_var->effective_to = effective_to;
    extended_quote_dto_local_var->effective_from = effective_from;
    extended_quote_dto_local_var->quote_status = quote_status;
    extended_quote_dto_local_var->freight_terms = freight_terms;
    extended_quote_dto_local_var->custom_discounts_amount = custom_discounts_amount;
    extended_quote_dto_local_var->user = user;
    extended_quote_dto_local_var->tenant = tenant;
    extended_quote_dto_local_var->individual = individual;
    extended_quote_dto_local_var->organization = organization;
    extended_quote_dto_local_var->receiver_tenant = receiver_tenant;
    extended_quote_dto_local_var->enrollment = enrollment;

    return extended_quote_dto_local_var;
}


void extended_quote_dto_free(extended_quote_dto_t *extended_quote_dto) {
    if(NULL == extended_quote_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_quote_dto->id) {
        free(extended_quote_dto->id);
        extended_quote_dto->id = NULL;
    }
    if (extended_quote_dto->timestamp) {
        free(extended_quote_dto->timestamp);
        extended_quote_dto->timestamp = NULL;
    }
    if (extended_quote_dto->type) {
        free(extended_quote_dto->type);
        extended_quote_dto->type = NULL;
    }
    if (extended_quote_dto->title) {
        free(extended_quote_dto->title);
        extended_quote_dto->title = NULL;
    }
    if (extended_quote_dto->user_id) {
        free(extended_quote_dto->user_id);
        extended_quote_dto->user_id = NULL;
    }
    if (extended_quote_dto->tenant_id) {
        free(extended_quote_dto->tenant_id);
        extended_quote_dto->tenant_id = NULL;
    }
    if (extended_quote_dto->description) {
        free(extended_quote_dto->description);
        extended_quote_dto->description = NULL;
    }
    if (extended_quote_dto->price_list_id) {
        free(extended_quote_dto->price_list_id);
        extended_quote_dto->price_list_id = NULL;
    }
    if (extended_quote_dto->enrollment_id) {
        free(extended_quote_dto->enrollment_id);
        extended_quote_dto->enrollment_id = NULL;
    }
    if (extended_quote_dto->individual_id) {
        free(extended_quote_dto->individual_id);
        extended_quote_dto->individual_id = NULL;
    }
    if (extended_quote_dto->organization_id) {
        free(extended_quote_dto->organization_id);
        extended_quote_dto->organization_id = NULL;
    }
    if (extended_quote_dto->receiver_tenant_id) {
        free(extended_quote_dto->receiver_tenant_id);
        extended_quote_dto->receiver_tenant_id = NULL;
    }
    if (extended_quote_dto->first_name) {
        free(extended_quote_dto->first_name);
        extended_quote_dto->first_name = NULL;
    }
    if (extended_quote_dto->last_name) {
        free(extended_quote_dto->last_name);
        extended_quote_dto->last_name = NULL;
    }
    if (extended_quote_dto->company_name) {
        free(extended_quote_dto->company_name);
        extended_quote_dto->company_name = NULL;
    }
    if (extended_quote_dto->billing_email) {
        free(extended_quote_dto->billing_email);
        extended_quote_dto->billing_email = NULL;
    }
    if (extended_quote_dto->address_line1) {
        free(extended_quote_dto->address_line1);
        extended_quote_dto->address_line1 = NULL;
    }
    if (extended_quote_dto->address_line2) {
        free(extended_quote_dto->address_line2);
        extended_quote_dto->address_line2 = NULL;
    }
    if (extended_quote_dto->postal_code) {
        free(extended_quote_dto->postal_code);
        extended_quote_dto->postal_code = NULL;
    }
    if (extended_quote_dto->country_id) {
        free(extended_quote_dto->country_id);
        extended_quote_dto->country_id = NULL;
    }
    if (extended_quote_dto->state_id) {
        free(extended_quote_dto->state_id);
        extended_quote_dto->state_id = NULL;
    }
    if (extended_quote_dto->city_id) {
        free(extended_quote_dto->city_id);
        extended_quote_dto->city_id = NULL;
    }
    if (extended_quote_dto->customer_notes) {
        free(extended_quote_dto->customer_notes);
        extended_quote_dto->customer_notes = NULL;
    }
    if (extended_quote_dto->currency_id) {
        free(extended_quote_dto->currency_id);
        extended_quote_dto->currency_id = NULL;
    }
    if (extended_quote_dto->total_detail_currency_id) {
        free(extended_quote_dto->total_detail_currency_id);
        extended_quote_dto->total_detail_currency_id = NULL;
    }
    if (extended_quote_dto->total_profit_currency_id) {
        free(extended_quote_dto->total_profit_currency_id);
        extended_quote_dto->total_profit_currency_id = NULL;
    }
    if (extended_quote_dto->total_discounts_currency_id) {
        free(extended_quote_dto->total_discounts_currency_id);
        extended_quote_dto->total_discounts_currency_id = NULL;
    }
    if (extended_quote_dto->total_surcharges_currency_id) {
        free(extended_quote_dto->total_surcharges_currency_id);
        extended_quote_dto->total_surcharges_currency_id = NULL;
    }
    if (extended_quote_dto->total_tax_base_currency_id) {
        free(extended_quote_dto->total_tax_base_currency_id);
        extended_quote_dto->total_tax_base_currency_id = NULL;
    }
    if (extended_quote_dto->total_taxes_currency_id) {
        free(extended_quote_dto->total_taxes_currency_id);
        extended_quote_dto->total_taxes_currency_id = NULL;
    }
    if (extended_quote_dto->total_shipping_cost_currency_id) {
        free(extended_quote_dto->total_shipping_cost_currency_id);
        extended_quote_dto->total_shipping_cost_currency_id = NULL;
    }
    if (extended_quote_dto->total_shipping_tax_currency_id) {
        free(extended_quote_dto->total_shipping_tax_currency_id);
        extended_quote_dto->total_shipping_tax_currency_id = NULL;
    }
    if (extended_quote_dto->total_withheld_tax_currency_id) {
        free(extended_quote_dto->total_withheld_tax_currency_id);
        extended_quote_dto->total_withheld_tax_currency_id = NULL;
    }
    if (extended_quote_dto->total_global_discounts_currency_id) {
        free(extended_quote_dto->total_global_discounts_currency_id);
        extended_quote_dto->total_global_discounts_currency_id = NULL;
    }
    if (extended_quote_dto->total_global_surcharges_currency_id) {
        free(extended_quote_dto->total_global_surcharges_currency_id);
        extended_quote_dto->total_global_surcharges_currency_id = NULL;
    }
    if (extended_quote_dto->total_currency_id) {
        free(extended_quote_dto->total_currency_id);
        extended_quote_dto->total_currency_id = NULL;
    }
    if (extended_quote_dto->cart_id) {
        free(extended_quote_dto->cart_id);
        extended_quote_dto->cart_id = NULL;
    }
    if (extended_quote_dto->deal_unit_id) {
        free(extended_quote_dto->deal_unit_id);
        extended_quote_dto->deal_unit_id = NULL;
    }
    if (extended_quote_dto->effective_to) {
        free(extended_quote_dto->effective_to);
        extended_quote_dto->effective_to = NULL;
    }
    if (extended_quote_dto->effective_from) {
        free(extended_quote_dto->effective_from);
        extended_quote_dto->effective_from = NULL;
    }
    if (extended_quote_dto->user) {
        user_dto_free(extended_quote_dto->user);
        extended_quote_dto->user = NULL;
    }
    if (extended_quote_dto->tenant) {
        tenant_dto_free(extended_quote_dto->tenant);
        extended_quote_dto->tenant = NULL;
    }
    if (extended_quote_dto->individual) {
        contact_dto_free(extended_quote_dto->individual);
        extended_quote_dto->individual = NULL;
    }
    if (extended_quote_dto->organization) {
        contact_dto_free(extended_quote_dto->organization);
        extended_quote_dto->organization = NULL;
    }
    if (extended_quote_dto->receiver_tenant) {
        tenant_dto_free(extended_quote_dto->receiver_tenant);
        extended_quote_dto->receiver_tenant = NULL;
    }
    if (extended_quote_dto->enrollment) {
        tenant_enrollment_dto_free(extended_quote_dto->enrollment);
        extended_quote_dto->enrollment = NULL;
    }
    free(extended_quote_dto);
}

cJSON *extended_quote_dto_convertToJSON(extended_quote_dto_t *extended_quote_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_quote_dto->id
    if(extended_quote_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_quote_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->timestamp
    if(extended_quote_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_quote_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_quote_dto->closed
    if(extended_quote_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", extended_quote_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_quote_dto->type
    if(extended_quote_dto->type) {
    if(cJSON_AddStringToObject(item, "type", extended_quote_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->title
    if(extended_quote_dto->title) {
    if(cJSON_AddStringToObject(item, "title", extended_quote_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->user_id
    if(extended_quote_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", extended_quote_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->tenant_id
    if(extended_quote_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_quote_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->description
    if(extended_quote_dto->description) {
    if(cJSON_AddStringToObject(item, "description", extended_quote_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->price_list_id
    if(extended_quote_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", extended_quote_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->enrollment_id
    if(extended_quote_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_quote_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->individual_id
    if(extended_quote_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", extended_quote_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->organization_id
    if(extended_quote_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", extended_quote_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->receiver_tenant_id
    if(extended_quote_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", extended_quote_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->first_name
    if(extended_quote_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_quote_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->last_name
    if(extended_quote_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_quote_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->company_name
    if(extended_quote_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", extended_quote_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->billing_email
    if(extended_quote_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", extended_quote_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->address_line1
    if(extended_quote_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", extended_quote_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->address_line2
    if(extended_quote_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", extended_quote_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->postal_code
    if(extended_quote_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", extended_quote_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->country_id
    if(extended_quote_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_quote_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->state_id
    if(extended_quote_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_quote_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->city_id
    if(extended_quote_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_quote_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->customer_notes
    if(extended_quote_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", extended_quote_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->tax_calculation_method
    if(extended_quote_dto->tax_calculation_method != quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodextended_quote_dto_ToString(extended_quote_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_quote_dto->cost_calculation_method
    if(extended_quote_dto->cost_calculation_method != quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodextended_quote_dto_ToString(extended_quote_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_quote_dto->forex_rate
    if(extended_quote_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", extended_quote_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->currency_id
    if(extended_quote_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_quote_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_detail
    if(extended_quote_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", extended_quote_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_detail_currency_id
    if(extended_quote_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", extended_quote_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_profit
    if(extended_quote_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", extended_quote_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_profit_currency_id
    if(extended_quote_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", extended_quote_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_discounts
    if(extended_quote_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", extended_quote_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_discounts_currency_id
    if(extended_quote_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", extended_quote_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_surcharges
    if(extended_quote_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", extended_quote_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_surcharges_currency_id
    if(extended_quote_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", extended_quote_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_tax_base
    if(extended_quote_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", extended_quote_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_tax_base_currency_id
    if(extended_quote_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", extended_quote_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_taxes
    if(extended_quote_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", extended_quote_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_taxes_currency_id
    if(extended_quote_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", extended_quote_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_shipping_cost
    if(extended_quote_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", extended_quote_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_shipping_cost_currency_id
    if(extended_quote_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", extended_quote_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_shipping_tax
    if(extended_quote_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", extended_quote_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_shipping_tax_currency_id
    if(extended_quote_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", extended_quote_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_withheld_tax
    if(extended_quote_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", extended_quote_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_withheld_tax_currency_id
    if(extended_quote_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", extended_quote_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_global_discounts
    if(extended_quote_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", extended_quote_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_global_discounts_currency_id
    if(extended_quote_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", extended_quote_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_global_surcharges
    if(extended_quote_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", extended_quote_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_global_surcharges_currency_id
    if(extended_quote_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", extended_quote_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total
    if(extended_quote_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", extended_quote_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_currency_id
    if(extended_quote_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", extended_quote_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->total_detail_in_usd
    if(extended_quote_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", extended_quote_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_profit_in_usd
    if(extended_quote_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", extended_quote_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_discounts_in_usd
    if(extended_quote_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", extended_quote_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_surcharges_in_usd
    if(extended_quote_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", extended_quote_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_tax_base_in_usd
    if(extended_quote_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", extended_quote_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_taxes_in_usd
    if(extended_quote_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", extended_quote_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_withheld_taxes_in_usd
    if(extended_quote_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", extended_quote_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_shipping_cost_in_usd
    if(extended_quote_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", extended_quote_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_shipping_taxes_in_usd
    if(extended_quote_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", extended_quote_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_global_discounts_in_usd
    if(extended_quote_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", extended_quote_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_global_surcharges_in_usd
    if(extended_quote_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", extended_quote_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->total_in_usd
    if(extended_quote_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", extended_quote_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->cart_id
    if(extended_quote_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", extended_quote_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->deal_unit_id
    if(extended_quote_dto->deal_unit_id) {
    if(cJSON_AddStringToObject(item, "dealUnitId", extended_quote_dto->deal_unit_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_quote_dto->effective_to
    if(extended_quote_dto->effective_to) {
    if(cJSON_AddStringToObject(item, "effectiveTo", extended_quote_dto->effective_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_quote_dto->effective_from
    if(extended_quote_dto->effective_from) {
    if(cJSON_AddStringToObject(item, "effectiveFrom", extended_quote_dto->effective_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_quote_dto->quote_status
    if(extended_quote_dto->quote_status != quotesservice_extended_quote_dto_QUOTESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "quoteStatus", quote_statusextended_quote_dto_ToString(extended_quote_dto->quote_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_quote_dto->freight_terms
    if(extended_quote_dto->freight_terms != quotesservice_extended_quote_dto_FREIGHTTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "freightTerms", freight_termsextended_quote_dto_ToString(extended_quote_dto->freight_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_quote_dto->custom_discounts_amount
    if(extended_quote_dto->custom_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customDiscountsAmount", extended_quote_dto->custom_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_quote_dto->user
    if(extended_quote_dto->user) {
    cJSON *user_local_JSON = user_dto_convertToJSON(extended_quote_dto->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_quote_dto->tenant
    if(extended_quote_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_quote_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_quote_dto->individual
    if(extended_quote_dto->individual) {
    cJSON *individual_local_JSON = contact_dto_convertToJSON(extended_quote_dto->individual);
    if(individual_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "individual", individual_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_quote_dto->organization
    if(extended_quote_dto->organization) {
    cJSON *organization_local_JSON = contact_dto_convertToJSON(extended_quote_dto->organization);
    if(organization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "organization", organization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_quote_dto->receiver_tenant
    if(extended_quote_dto->receiver_tenant) {
    cJSON *receiver_tenant_local_JSON = tenant_dto_convertToJSON(extended_quote_dto->receiver_tenant);
    if(receiver_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "receiverTenant", receiver_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_quote_dto->enrollment
    if(extended_quote_dto->enrollment) {
    cJSON *enrollment_local_JSON = tenant_enrollment_dto_convertToJSON(extended_quote_dto->enrollment);
    if(enrollment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollment", enrollment_local_JSON);
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

extended_quote_dto_t *extended_quote_dto_parseFromJSON(cJSON *extended_quote_dtoJSON){

    extended_quote_dto_t *extended_quote_dto_local_var = NULL;

    // define the local variable for extended_quote_dto->user
    user_dto_t *user_local_nonprim = NULL;

    // define the local variable for extended_quote_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // define the local variable for extended_quote_dto->individual
    contact_dto_t *individual_local_nonprim = NULL;

    // define the local variable for extended_quote_dto->organization
    contact_dto_t *organization_local_nonprim = NULL;

    // define the local variable for extended_quote_dto->receiver_tenant
    tenant_dto_t *receiver_tenant_local_nonprim = NULL;

    // define the local variable for extended_quote_dto->enrollment
    tenant_enrollment_dto_t *enrollment_local_nonprim = NULL;

    // extended_quote_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_quote_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // extended_quote_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "taxCalculationMethod");
    quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = extended_quote_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // extended_quote_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "costCalculationMethod");
    quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = extended_quote_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // extended_quote_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->deal_unit_id
    cJSON *deal_unit_id = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "dealUnitId");
    if (deal_unit_id) { 
    if(!cJSON_IsString(deal_unit_id) && !cJSON_IsNull(deal_unit_id))
    {
    goto end; //String
    }
    }

    // extended_quote_dto->effective_to
    cJSON *effective_to = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "effectiveTo");
    if (effective_to) { 
    if(!cJSON_IsString(effective_to) && !cJSON_IsNull(effective_to))
    {
    goto end; //DateTime
    }
    }

    // extended_quote_dto->effective_from
    cJSON *effective_from = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "effectiveFrom");
    if (effective_from) { 
    if(!cJSON_IsString(effective_from) && !cJSON_IsNull(effective_from))
    {
    goto end; //DateTime
    }
    }

    // extended_quote_dto->quote_status
    cJSON *quote_status = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "quoteStatus");
    quotesservice_extended_quote_dto_QUOTESTATUS_e quote_statusVariable;
    if (quote_status) { 
    if(!cJSON_IsString(quote_status))
    {
    goto end; //Enum
    }
    quote_statusVariable = extended_quote_dto_quote_status_FromString(quote_status->valuestring);
    }

    // extended_quote_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "freightTerms");
    quotesservice_extended_quote_dto_FREIGHTTERMS_e freight_termsVariable;
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms))
    {
    goto end; //Enum
    }
    freight_termsVariable = extended_quote_dto_freight_terms_FromString(freight_terms->valuestring);
    }

    // extended_quote_dto->custom_discounts_amount
    cJSON *custom_discounts_amount = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "customDiscountsAmount");
    if (custom_discounts_amount) { 
    if(!cJSON_IsNumber(custom_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_quote_dto->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "user");
    if (user) { 
    user_local_nonprim = user_dto_parseFromJSON(user); //nonprimitive
    }

    // extended_quote_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }

    // extended_quote_dto->individual
    cJSON *individual = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "individual");
    if (individual) { 
    individual_local_nonprim = contact_dto_parseFromJSON(individual); //nonprimitive
    }

    // extended_quote_dto->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "organization");
    if (organization) { 
    organization_local_nonprim = contact_dto_parseFromJSON(organization); //nonprimitive
    }

    // extended_quote_dto->receiver_tenant
    cJSON *receiver_tenant = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "receiverTenant");
    if (receiver_tenant) { 
    receiver_tenant_local_nonprim = tenant_dto_parseFromJSON(receiver_tenant); //nonprimitive
    }

    // extended_quote_dto->enrollment
    cJSON *enrollment = cJSON_GetObjectItemCaseSensitive(extended_quote_dtoJSON, "enrollment");
    if (enrollment) { 
    enrollment_local_nonprim = tenant_enrollment_dto_parseFromJSON(enrollment); //nonprimitive
    }


    extended_quote_dto_local_var = extended_quote_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : quotesservice_extended_quote_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : quotesservice_extended_quote_dto_COSTCALCULATIONMETHOD_NULL,
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
        quote_status ? quote_statusVariable : quotesservice_extended_quote_dto_QUOTESTATUS_NULL,
        freight_terms ? freight_termsVariable : quotesservice_extended_quote_dto_FREIGHTTERMS_NULL,
        custom_discounts_amount ? custom_discounts_amount->valuedouble : 0,
        user ? user_local_nonprim : NULL,
        tenant ? tenant_local_nonprim : NULL,
        individual ? individual_local_nonprim : NULL,
        organization ? organization_local_nonprim : NULL,
        receiver_tenant ? receiver_tenant_local_nonprim : NULL,
        enrollment ? enrollment_local_nonprim : NULL
        );

    return extended_quote_dto_local_var;
end:
    if (user_local_nonprim) {
        user_dto_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (tenant_local_nonprim) {
        tenant_dto_free(tenant_local_nonprim);
        tenant_local_nonprim = NULL;
    }
    if (individual_local_nonprim) {
        contact_dto_free(individual_local_nonprim);
        individual_local_nonprim = NULL;
    }
    if (organization_local_nonprim) {
        contact_dto_free(organization_local_nonprim);
        organization_local_nonprim = NULL;
    }
    if (receiver_tenant_local_nonprim) {
        tenant_dto_free(receiver_tenant_local_nonprim);
        receiver_tenant_local_nonprim = NULL;
    }
    if (enrollment_local_nonprim) {
        tenant_enrollment_dto_free(enrollment_local_nonprim);
        enrollment_local_nonprim = NULL;
    }
    return NULL;

}
