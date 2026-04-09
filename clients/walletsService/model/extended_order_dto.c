#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_order_dto.h"


char* extended_order_dto_tax_calculation_method_ToString(walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_e extended_order_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* extended_order_dto_cost_calculation_method_ToString(walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_e extended_order_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* extended_order_dto_freight_terms_ToString(walletsservice_extended_order_dto_FREIGHTTERMS_e freight_terms) {
    char* freight_termsArray[] =  { "NULL", "FOB", "NoCharge" };
    return freight_termsArray[freight_terms];
}

walletsservice_extended_order_dto_FREIGHTTERMS_e extended_order_dto_freight_terms_FromString(char* freight_terms){
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
char* extended_order_dto_order_status_ToString(walletsservice_extended_order_dto_ORDERSTATUS_e order_status) {
    char* order_statusArray[] =  { "NULL", "New", "Processing", "Accepted", "Declined", "Shipped", "Delivered", "OnHold", "Failed", "Fulfilled", "Cancelled" };
    return order_statusArray[order_status];
}

walletsservice_extended_order_dto_ORDERSTATUS_e extended_order_dto_order_status_FromString(char* order_status){
    int stringToReturn = 0;
    char *order_statusArray[] =  { "NULL", "New", "Processing", "Accepted", "Declined", "Shipped", "Delivered", "OnHold", "Failed", "Fulfilled", "Cancelled" };
    size_t sizeofArray = sizeof(order_statusArray) / sizeof(order_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(order_status, order_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

extended_order_dto_t *extended_order_dto_create(
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
    walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
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
    int order_lines_count,
    char *quote_id,
    char *wallet_id,
    char *payment_term_id,
    char *parent_order_id,
    char *shipping_method_id,
    char *billing_location_id,
    char *shipping_location_id,
    char *qualified_identifier,
    walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    walletsservice_extended_order_dto_FREIGHTTERMS_e freight_terms,
    walletsservice_extended_order_dto_ORDERSTATUS_e order_status,
    char *requested_delivery_date,
    double custom_tax_amount,
    double custom_total_amount,
    double custom_detail_amount,
    double custom_profit_amount,
    double custom_discounts_amount,
    double custom_surcharges_amount,
    double custom_shipping_tax_amount,
    double custom_shipping_cost_amount,
    double custom_withholding_tax_amount,
    user_dto_t *user,
    tenant_dto_t *tenant,
    contact_dto_t *individual,
    contact_dto_t *organization,
    tenant_dto_t *receiver_tenant,
    tenant_enrollment_dto_t *enrollment
    ) {
    extended_order_dto_t *extended_order_dto_local_var = malloc(sizeof(extended_order_dto_t));
    if (!extended_order_dto_local_var) {
        return NULL;
    }
    extended_order_dto_local_var->id = id;
    extended_order_dto_local_var->timestamp = timestamp;
    extended_order_dto_local_var->closed = closed;
    extended_order_dto_local_var->type = type;
    extended_order_dto_local_var->title = title;
    extended_order_dto_local_var->user_id = user_id;
    extended_order_dto_local_var->tenant_id = tenant_id;
    extended_order_dto_local_var->description = description;
    extended_order_dto_local_var->price_list_id = price_list_id;
    extended_order_dto_local_var->enrollment_id = enrollment_id;
    extended_order_dto_local_var->individual_id = individual_id;
    extended_order_dto_local_var->organization_id = organization_id;
    extended_order_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    extended_order_dto_local_var->first_name = first_name;
    extended_order_dto_local_var->last_name = last_name;
    extended_order_dto_local_var->company_name = company_name;
    extended_order_dto_local_var->billing_email = billing_email;
    extended_order_dto_local_var->address_line1 = address_line1;
    extended_order_dto_local_var->address_line2 = address_line2;
    extended_order_dto_local_var->postal_code = postal_code;
    extended_order_dto_local_var->country_id = country_id;
    extended_order_dto_local_var->state_id = state_id;
    extended_order_dto_local_var->city_id = city_id;
    extended_order_dto_local_var->customer_notes = customer_notes;
    extended_order_dto_local_var->tax_calculation_method = tax_calculation_method;
    extended_order_dto_local_var->forex_rate = forex_rate;
    extended_order_dto_local_var->currency_id = currency_id;
    extended_order_dto_local_var->total_detail = total_detail;
    extended_order_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    extended_order_dto_local_var->total_profit = total_profit;
    extended_order_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    extended_order_dto_local_var->total_discounts = total_discounts;
    extended_order_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    extended_order_dto_local_var->total_surcharges = total_surcharges;
    extended_order_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    extended_order_dto_local_var->total_tax_base = total_tax_base;
    extended_order_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    extended_order_dto_local_var->total_taxes = total_taxes;
    extended_order_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    extended_order_dto_local_var->total_shipping_cost = total_shipping_cost;
    extended_order_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    extended_order_dto_local_var->total_shipping_tax = total_shipping_tax;
    extended_order_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    extended_order_dto_local_var->total_withheld_tax = total_withheld_tax;
    extended_order_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    extended_order_dto_local_var->total_global_discounts = total_global_discounts;
    extended_order_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    extended_order_dto_local_var->total_global_surcharges = total_global_surcharges;
    extended_order_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    extended_order_dto_local_var->total = total;
    extended_order_dto_local_var->total_currency_id = total_currency_id;
    extended_order_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    extended_order_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    extended_order_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    extended_order_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    extended_order_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    extended_order_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    extended_order_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    extended_order_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    extended_order_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    extended_order_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    extended_order_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    extended_order_dto_local_var->total_in_usd = total_in_usd;
    extended_order_dto_local_var->order_lines_count = order_lines_count;
    extended_order_dto_local_var->quote_id = quote_id;
    extended_order_dto_local_var->wallet_id = wallet_id;
    extended_order_dto_local_var->payment_term_id = payment_term_id;
    extended_order_dto_local_var->parent_order_id = parent_order_id;
    extended_order_dto_local_var->shipping_method_id = shipping_method_id;
    extended_order_dto_local_var->billing_location_id = billing_location_id;
    extended_order_dto_local_var->shipping_location_id = shipping_location_id;
    extended_order_dto_local_var->qualified_identifier = qualified_identifier;
    extended_order_dto_local_var->cost_calculation_method = cost_calculation_method;
    extended_order_dto_local_var->freight_terms = freight_terms;
    extended_order_dto_local_var->order_status = order_status;
    extended_order_dto_local_var->requested_delivery_date = requested_delivery_date;
    extended_order_dto_local_var->custom_tax_amount = custom_tax_amount;
    extended_order_dto_local_var->custom_total_amount = custom_total_amount;
    extended_order_dto_local_var->custom_detail_amount = custom_detail_amount;
    extended_order_dto_local_var->custom_profit_amount = custom_profit_amount;
    extended_order_dto_local_var->custom_discounts_amount = custom_discounts_amount;
    extended_order_dto_local_var->custom_surcharges_amount = custom_surcharges_amount;
    extended_order_dto_local_var->custom_shipping_tax_amount = custom_shipping_tax_amount;
    extended_order_dto_local_var->custom_shipping_cost_amount = custom_shipping_cost_amount;
    extended_order_dto_local_var->custom_withholding_tax_amount = custom_withholding_tax_amount;
    extended_order_dto_local_var->user = user;
    extended_order_dto_local_var->tenant = tenant;
    extended_order_dto_local_var->individual = individual;
    extended_order_dto_local_var->organization = organization;
    extended_order_dto_local_var->receiver_tenant = receiver_tenant;
    extended_order_dto_local_var->enrollment = enrollment;

    return extended_order_dto_local_var;
}


void extended_order_dto_free(extended_order_dto_t *extended_order_dto) {
    if(NULL == extended_order_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_order_dto->id) {
        free(extended_order_dto->id);
        extended_order_dto->id = NULL;
    }
    if (extended_order_dto->timestamp) {
        free(extended_order_dto->timestamp);
        extended_order_dto->timestamp = NULL;
    }
    if (extended_order_dto->type) {
        free(extended_order_dto->type);
        extended_order_dto->type = NULL;
    }
    if (extended_order_dto->title) {
        free(extended_order_dto->title);
        extended_order_dto->title = NULL;
    }
    if (extended_order_dto->user_id) {
        free(extended_order_dto->user_id);
        extended_order_dto->user_id = NULL;
    }
    if (extended_order_dto->tenant_id) {
        free(extended_order_dto->tenant_id);
        extended_order_dto->tenant_id = NULL;
    }
    if (extended_order_dto->description) {
        free(extended_order_dto->description);
        extended_order_dto->description = NULL;
    }
    if (extended_order_dto->price_list_id) {
        free(extended_order_dto->price_list_id);
        extended_order_dto->price_list_id = NULL;
    }
    if (extended_order_dto->enrollment_id) {
        free(extended_order_dto->enrollment_id);
        extended_order_dto->enrollment_id = NULL;
    }
    if (extended_order_dto->individual_id) {
        free(extended_order_dto->individual_id);
        extended_order_dto->individual_id = NULL;
    }
    if (extended_order_dto->organization_id) {
        free(extended_order_dto->organization_id);
        extended_order_dto->organization_id = NULL;
    }
    if (extended_order_dto->receiver_tenant_id) {
        free(extended_order_dto->receiver_tenant_id);
        extended_order_dto->receiver_tenant_id = NULL;
    }
    if (extended_order_dto->first_name) {
        free(extended_order_dto->first_name);
        extended_order_dto->first_name = NULL;
    }
    if (extended_order_dto->last_name) {
        free(extended_order_dto->last_name);
        extended_order_dto->last_name = NULL;
    }
    if (extended_order_dto->company_name) {
        free(extended_order_dto->company_name);
        extended_order_dto->company_name = NULL;
    }
    if (extended_order_dto->billing_email) {
        free(extended_order_dto->billing_email);
        extended_order_dto->billing_email = NULL;
    }
    if (extended_order_dto->address_line1) {
        free(extended_order_dto->address_line1);
        extended_order_dto->address_line1 = NULL;
    }
    if (extended_order_dto->address_line2) {
        free(extended_order_dto->address_line2);
        extended_order_dto->address_line2 = NULL;
    }
    if (extended_order_dto->postal_code) {
        free(extended_order_dto->postal_code);
        extended_order_dto->postal_code = NULL;
    }
    if (extended_order_dto->country_id) {
        free(extended_order_dto->country_id);
        extended_order_dto->country_id = NULL;
    }
    if (extended_order_dto->state_id) {
        free(extended_order_dto->state_id);
        extended_order_dto->state_id = NULL;
    }
    if (extended_order_dto->city_id) {
        free(extended_order_dto->city_id);
        extended_order_dto->city_id = NULL;
    }
    if (extended_order_dto->customer_notes) {
        free(extended_order_dto->customer_notes);
        extended_order_dto->customer_notes = NULL;
    }
    if (extended_order_dto->currency_id) {
        free(extended_order_dto->currency_id);
        extended_order_dto->currency_id = NULL;
    }
    if (extended_order_dto->total_detail_currency_id) {
        free(extended_order_dto->total_detail_currency_id);
        extended_order_dto->total_detail_currency_id = NULL;
    }
    if (extended_order_dto->total_profit_currency_id) {
        free(extended_order_dto->total_profit_currency_id);
        extended_order_dto->total_profit_currency_id = NULL;
    }
    if (extended_order_dto->total_discounts_currency_id) {
        free(extended_order_dto->total_discounts_currency_id);
        extended_order_dto->total_discounts_currency_id = NULL;
    }
    if (extended_order_dto->total_surcharges_currency_id) {
        free(extended_order_dto->total_surcharges_currency_id);
        extended_order_dto->total_surcharges_currency_id = NULL;
    }
    if (extended_order_dto->total_tax_base_currency_id) {
        free(extended_order_dto->total_tax_base_currency_id);
        extended_order_dto->total_tax_base_currency_id = NULL;
    }
    if (extended_order_dto->total_taxes_currency_id) {
        free(extended_order_dto->total_taxes_currency_id);
        extended_order_dto->total_taxes_currency_id = NULL;
    }
    if (extended_order_dto->total_shipping_cost_currency_id) {
        free(extended_order_dto->total_shipping_cost_currency_id);
        extended_order_dto->total_shipping_cost_currency_id = NULL;
    }
    if (extended_order_dto->total_shipping_tax_currency_id) {
        free(extended_order_dto->total_shipping_tax_currency_id);
        extended_order_dto->total_shipping_tax_currency_id = NULL;
    }
    if (extended_order_dto->total_withheld_tax_currency_id) {
        free(extended_order_dto->total_withheld_tax_currency_id);
        extended_order_dto->total_withheld_tax_currency_id = NULL;
    }
    if (extended_order_dto->total_global_discounts_currency_id) {
        free(extended_order_dto->total_global_discounts_currency_id);
        extended_order_dto->total_global_discounts_currency_id = NULL;
    }
    if (extended_order_dto->total_global_surcharges_currency_id) {
        free(extended_order_dto->total_global_surcharges_currency_id);
        extended_order_dto->total_global_surcharges_currency_id = NULL;
    }
    if (extended_order_dto->total_currency_id) {
        free(extended_order_dto->total_currency_id);
        extended_order_dto->total_currency_id = NULL;
    }
    if (extended_order_dto->quote_id) {
        free(extended_order_dto->quote_id);
        extended_order_dto->quote_id = NULL;
    }
    if (extended_order_dto->wallet_id) {
        free(extended_order_dto->wallet_id);
        extended_order_dto->wallet_id = NULL;
    }
    if (extended_order_dto->payment_term_id) {
        free(extended_order_dto->payment_term_id);
        extended_order_dto->payment_term_id = NULL;
    }
    if (extended_order_dto->parent_order_id) {
        free(extended_order_dto->parent_order_id);
        extended_order_dto->parent_order_id = NULL;
    }
    if (extended_order_dto->shipping_method_id) {
        free(extended_order_dto->shipping_method_id);
        extended_order_dto->shipping_method_id = NULL;
    }
    if (extended_order_dto->billing_location_id) {
        free(extended_order_dto->billing_location_id);
        extended_order_dto->billing_location_id = NULL;
    }
    if (extended_order_dto->shipping_location_id) {
        free(extended_order_dto->shipping_location_id);
        extended_order_dto->shipping_location_id = NULL;
    }
    if (extended_order_dto->qualified_identifier) {
        free(extended_order_dto->qualified_identifier);
        extended_order_dto->qualified_identifier = NULL;
    }
    if (extended_order_dto->requested_delivery_date) {
        free(extended_order_dto->requested_delivery_date);
        extended_order_dto->requested_delivery_date = NULL;
    }
    if (extended_order_dto->user) {
        user_dto_free(extended_order_dto->user);
        extended_order_dto->user = NULL;
    }
    if (extended_order_dto->tenant) {
        tenant_dto_free(extended_order_dto->tenant);
        extended_order_dto->tenant = NULL;
    }
    if (extended_order_dto->individual) {
        contact_dto_free(extended_order_dto->individual);
        extended_order_dto->individual = NULL;
    }
    if (extended_order_dto->organization) {
        contact_dto_free(extended_order_dto->organization);
        extended_order_dto->organization = NULL;
    }
    if (extended_order_dto->receiver_tenant) {
        tenant_dto_free(extended_order_dto->receiver_tenant);
        extended_order_dto->receiver_tenant = NULL;
    }
    if (extended_order_dto->enrollment) {
        tenant_enrollment_dto_free(extended_order_dto->enrollment);
        extended_order_dto->enrollment = NULL;
    }
    free(extended_order_dto);
}

cJSON *extended_order_dto_convertToJSON(extended_order_dto_t *extended_order_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_order_dto->id
    if(extended_order_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_order_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->timestamp
    if(extended_order_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_order_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_order_dto->closed
    if(extended_order_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", extended_order_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_order_dto->type
    if(extended_order_dto->type) {
    if(cJSON_AddStringToObject(item, "type", extended_order_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->title
    if(extended_order_dto->title) {
    if(cJSON_AddStringToObject(item, "title", extended_order_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->user_id
    if(extended_order_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", extended_order_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->tenant_id
    if(extended_order_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_order_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->description
    if(extended_order_dto->description) {
    if(cJSON_AddStringToObject(item, "description", extended_order_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->price_list_id
    if(extended_order_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", extended_order_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->enrollment_id
    if(extended_order_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_order_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->individual_id
    if(extended_order_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", extended_order_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->organization_id
    if(extended_order_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", extended_order_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->receiver_tenant_id
    if(extended_order_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", extended_order_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->first_name
    if(extended_order_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_order_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->last_name
    if(extended_order_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_order_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->company_name
    if(extended_order_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", extended_order_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->billing_email
    if(extended_order_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", extended_order_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->address_line1
    if(extended_order_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", extended_order_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->address_line2
    if(extended_order_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", extended_order_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->postal_code
    if(extended_order_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", extended_order_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->country_id
    if(extended_order_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_order_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->state_id
    if(extended_order_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_order_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->city_id
    if(extended_order_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_order_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->customer_notes
    if(extended_order_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", extended_order_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->tax_calculation_method
    if(extended_order_dto->tax_calculation_method != walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodextended_order_dto_ToString(extended_order_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_order_dto->forex_rate
    if(extended_order_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", extended_order_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->currency_id
    if(extended_order_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_order_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_detail
    if(extended_order_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", extended_order_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_detail_currency_id
    if(extended_order_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", extended_order_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_profit
    if(extended_order_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", extended_order_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_profit_currency_id
    if(extended_order_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", extended_order_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_discounts
    if(extended_order_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", extended_order_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_discounts_currency_id
    if(extended_order_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", extended_order_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_surcharges
    if(extended_order_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", extended_order_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_surcharges_currency_id
    if(extended_order_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", extended_order_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_tax_base
    if(extended_order_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", extended_order_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_tax_base_currency_id
    if(extended_order_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", extended_order_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_taxes
    if(extended_order_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", extended_order_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_taxes_currency_id
    if(extended_order_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", extended_order_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_shipping_cost
    if(extended_order_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", extended_order_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_shipping_cost_currency_id
    if(extended_order_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", extended_order_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_shipping_tax
    if(extended_order_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", extended_order_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_shipping_tax_currency_id
    if(extended_order_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", extended_order_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_withheld_tax
    if(extended_order_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", extended_order_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_withheld_tax_currency_id
    if(extended_order_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", extended_order_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_global_discounts
    if(extended_order_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", extended_order_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_global_discounts_currency_id
    if(extended_order_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", extended_order_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_global_surcharges
    if(extended_order_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", extended_order_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_global_surcharges_currency_id
    if(extended_order_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", extended_order_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total
    if(extended_order_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", extended_order_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_currency_id
    if(extended_order_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", extended_order_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->total_detail_in_usd
    if(extended_order_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", extended_order_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_profit_in_usd
    if(extended_order_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", extended_order_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_discounts_in_usd
    if(extended_order_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", extended_order_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_surcharges_in_usd
    if(extended_order_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", extended_order_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_tax_base_in_usd
    if(extended_order_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", extended_order_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_taxes_in_usd
    if(extended_order_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", extended_order_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_withheld_taxes_in_usd
    if(extended_order_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", extended_order_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_shipping_cost_in_usd
    if(extended_order_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", extended_order_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_shipping_taxes_in_usd
    if(extended_order_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", extended_order_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_global_discounts_in_usd
    if(extended_order_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", extended_order_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_global_surcharges_in_usd
    if(extended_order_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", extended_order_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->total_in_usd
    if(extended_order_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", extended_order_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->order_lines_count
    if(extended_order_dto->order_lines_count) {
    if(cJSON_AddNumberToObject(item, "orderLinesCount", extended_order_dto->order_lines_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->quote_id
    if(extended_order_dto->quote_id) {
    if(cJSON_AddStringToObject(item, "quoteId", extended_order_dto->quote_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->wallet_id
    if(extended_order_dto->wallet_id) {
    if(cJSON_AddStringToObject(item, "walletId", extended_order_dto->wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->payment_term_id
    if(extended_order_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", extended_order_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->parent_order_id
    if(extended_order_dto->parent_order_id) {
    if(cJSON_AddStringToObject(item, "parentOrderId", extended_order_dto->parent_order_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->shipping_method_id
    if(extended_order_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", extended_order_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->billing_location_id
    if(extended_order_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", extended_order_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->shipping_location_id
    if(extended_order_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", extended_order_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->qualified_identifier
    if(extended_order_dto->qualified_identifier) {
    if(cJSON_AddStringToObject(item, "qualifiedIdentifier", extended_order_dto->qualified_identifier) == NULL) {
    goto fail; //String
    }
    }


    // extended_order_dto->cost_calculation_method
    if(extended_order_dto->cost_calculation_method != walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodextended_order_dto_ToString(extended_order_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_order_dto->freight_terms
    if(extended_order_dto->freight_terms != walletsservice_extended_order_dto_FREIGHTTERMS_NULL) {
    if(cJSON_AddStringToObject(item, "freightTerms", freight_termsextended_order_dto_ToString(extended_order_dto->freight_terms)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_order_dto->order_status
    if(extended_order_dto->order_status != walletsservice_extended_order_dto_ORDERSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "orderStatus", order_statusextended_order_dto_ToString(extended_order_dto->order_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_order_dto->requested_delivery_date
    if(extended_order_dto->requested_delivery_date) {
    if(cJSON_AddStringToObject(item, "requestedDeliveryDate", extended_order_dto->requested_delivery_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_order_dto->custom_tax_amount
    if(extended_order_dto->custom_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customTaxAmount", extended_order_dto->custom_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_total_amount
    if(extended_order_dto->custom_total_amount) {
    if(cJSON_AddNumberToObject(item, "customTotalAmount", extended_order_dto->custom_total_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_detail_amount
    if(extended_order_dto->custom_detail_amount) {
    if(cJSON_AddNumberToObject(item, "customDetailAmount", extended_order_dto->custom_detail_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_profit_amount
    if(extended_order_dto->custom_profit_amount) {
    if(cJSON_AddNumberToObject(item, "customProfitAmount", extended_order_dto->custom_profit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_discounts_amount
    if(extended_order_dto->custom_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customDiscountsAmount", extended_order_dto->custom_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_surcharges_amount
    if(extended_order_dto->custom_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customSurchargesAmount", extended_order_dto->custom_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_shipping_tax_amount
    if(extended_order_dto->custom_shipping_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingTaxAmount", extended_order_dto->custom_shipping_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_shipping_cost_amount
    if(extended_order_dto->custom_shipping_cost_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingCostAmount", extended_order_dto->custom_shipping_cost_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->custom_withholding_tax_amount
    if(extended_order_dto->custom_withholding_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customWithholdingTaxAmount", extended_order_dto->custom_withholding_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_order_dto->user
    if(extended_order_dto->user) {
    cJSON *user_local_JSON = user_dto_convertToJSON(extended_order_dto->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_order_dto->tenant
    if(extended_order_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_order_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_order_dto->individual
    if(extended_order_dto->individual) {
    cJSON *individual_local_JSON = contact_dto_convertToJSON(extended_order_dto->individual);
    if(individual_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "individual", individual_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_order_dto->organization
    if(extended_order_dto->organization) {
    cJSON *organization_local_JSON = contact_dto_convertToJSON(extended_order_dto->organization);
    if(organization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "organization", organization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_order_dto->receiver_tenant
    if(extended_order_dto->receiver_tenant) {
    cJSON *receiver_tenant_local_JSON = tenant_dto_convertToJSON(extended_order_dto->receiver_tenant);
    if(receiver_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "receiverTenant", receiver_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_order_dto->enrollment
    if(extended_order_dto->enrollment) {
    cJSON *enrollment_local_JSON = tenant_enrollment_dto_convertToJSON(extended_order_dto->enrollment);
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

extended_order_dto_t *extended_order_dto_parseFromJSON(cJSON *extended_order_dtoJSON){

    extended_order_dto_t *extended_order_dto_local_var = NULL;

    // define the local variable for extended_order_dto->user
    user_dto_t *user_local_nonprim = NULL;

    // define the local variable for extended_order_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // define the local variable for extended_order_dto->individual
    contact_dto_t *individual_local_nonprim = NULL;

    // define the local variable for extended_order_dto->organization
    contact_dto_t *organization_local_nonprim = NULL;

    // define the local variable for extended_order_dto->receiver_tenant
    tenant_dto_t *receiver_tenant_local_nonprim = NULL;

    // define the local variable for extended_order_dto->enrollment
    tenant_enrollment_dto_t *enrollment_local_nonprim = NULL;

    // extended_order_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_order_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // extended_order_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // extended_order_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // extended_order_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // extended_order_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_order_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_order_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // extended_order_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // extended_order_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // extended_order_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // extended_order_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // extended_order_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // extended_order_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "taxCalculationMethod");
    walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = extended_order_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // extended_order_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->order_lines_count
    cJSON *order_lines_count = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "orderLinesCount");
    if (order_lines_count) { 
    if(!cJSON_IsNumber(order_lines_count))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->quote_id
    cJSON *quote_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "quoteId");
    if (quote_id) { 
    if(!cJSON_IsString(quote_id) && !cJSON_IsNull(quote_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->wallet_id
    cJSON *wallet_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "walletId");
    if (wallet_id) { 
    if(!cJSON_IsString(wallet_id) && !cJSON_IsNull(wallet_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->parent_order_id
    cJSON *parent_order_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "parentOrderId");
    if (parent_order_id) { 
    if(!cJSON_IsString(parent_order_id) && !cJSON_IsNull(parent_order_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // extended_order_dto->qualified_identifier
    cJSON *qualified_identifier = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "qualifiedIdentifier");
    if (qualified_identifier) { 
    if(!cJSON_IsString(qualified_identifier) && !cJSON_IsNull(qualified_identifier))
    {
    goto end; //String
    }
    }

    // extended_order_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "costCalculationMethod");
    walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = extended_order_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // extended_order_dto->freight_terms
    cJSON *freight_terms = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "freightTerms");
    walletsservice_extended_order_dto_FREIGHTTERMS_e freight_termsVariable;
    if (freight_terms) { 
    if(!cJSON_IsString(freight_terms))
    {
    goto end; //Enum
    }
    freight_termsVariable = extended_order_dto_freight_terms_FromString(freight_terms->valuestring);
    }

    // extended_order_dto->order_status
    cJSON *order_status = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "orderStatus");
    walletsservice_extended_order_dto_ORDERSTATUS_e order_statusVariable;
    if (order_status) { 
    if(!cJSON_IsString(order_status))
    {
    goto end; //Enum
    }
    order_statusVariable = extended_order_dto_order_status_FromString(order_status->valuestring);
    }

    // extended_order_dto->requested_delivery_date
    cJSON *requested_delivery_date = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "requestedDeliveryDate");
    if (requested_delivery_date) { 
    if(!cJSON_IsString(requested_delivery_date) && !cJSON_IsNull(requested_delivery_date))
    {
    goto end; //DateTime
    }
    }

    // extended_order_dto->custom_tax_amount
    cJSON *custom_tax_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customTaxAmount");
    if (custom_tax_amount) { 
    if(!cJSON_IsNumber(custom_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_total_amount
    cJSON *custom_total_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customTotalAmount");
    if (custom_total_amount) { 
    if(!cJSON_IsNumber(custom_total_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_detail_amount
    cJSON *custom_detail_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customDetailAmount");
    if (custom_detail_amount) { 
    if(!cJSON_IsNumber(custom_detail_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_profit_amount
    cJSON *custom_profit_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customProfitAmount");
    if (custom_profit_amount) { 
    if(!cJSON_IsNumber(custom_profit_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_discounts_amount
    cJSON *custom_discounts_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customDiscountsAmount");
    if (custom_discounts_amount) { 
    if(!cJSON_IsNumber(custom_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_surcharges_amount
    cJSON *custom_surcharges_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customSurchargesAmount");
    if (custom_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_shipping_tax_amount
    cJSON *custom_shipping_tax_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customShippingTaxAmount");
    if (custom_shipping_tax_amount) { 
    if(!cJSON_IsNumber(custom_shipping_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_shipping_cost_amount
    cJSON *custom_shipping_cost_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customShippingCostAmount");
    if (custom_shipping_cost_amount) { 
    if(!cJSON_IsNumber(custom_shipping_cost_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->custom_withholding_tax_amount
    cJSON *custom_withholding_tax_amount = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "customWithholdingTaxAmount");
    if (custom_withholding_tax_amount) { 
    if(!cJSON_IsNumber(custom_withholding_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_order_dto->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "user");
    if (user) { 
    user_local_nonprim = user_dto_parseFromJSON(user); //nonprimitive
    }

    // extended_order_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }

    // extended_order_dto->individual
    cJSON *individual = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "individual");
    if (individual) { 
    individual_local_nonprim = contact_dto_parseFromJSON(individual); //nonprimitive
    }

    // extended_order_dto->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "organization");
    if (organization) { 
    organization_local_nonprim = contact_dto_parseFromJSON(organization); //nonprimitive
    }

    // extended_order_dto->receiver_tenant
    cJSON *receiver_tenant = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "receiverTenant");
    if (receiver_tenant) { 
    receiver_tenant_local_nonprim = tenant_dto_parseFromJSON(receiver_tenant); //nonprimitive
    }

    // extended_order_dto->enrollment
    cJSON *enrollment = cJSON_GetObjectItemCaseSensitive(extended_order_dtoJSON, "enrollment");
    if (enrollment) { 
    enrollment_local_nonprim = tenant_enrollment_dto_parseFromJSON(enrollment); //nonprimitive
    }


    extended_order_dto_local_var = extended_order_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : walletsservice_extended_order_dto_TAXCALCULATIONMETHOD_NULL,
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
        order_lines_count ? order_lines_count->valuedouble : 0,
        quote_id && !cJSON_IsNull(quote_id) ? strdup(quote_id->valuestring) : NULL,
        wallet_id && !cJSON_IsNull(wallet_id) ? strdup(wallet_id->valuestring) : NULL,
        payment_term_id && !cJSON_IsNull(payment_term_id) ? strdup(payment_term_id->valuestring) : NULL,
        parent_order_id && !cJSON_IsNull(parent_order_id) ? strdup(parent_order_id->valuestring) : NULL,
        shipping_method_id && !cJSON_IsNull(shipping_method_id) ? strdup(shipping_method_id->valuestring) : NULL,
        billing_location_id && !cJSON_IsNull(billing_location_id) ? strdup(billing_location_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        qualified_identifier && !cJSON_IsNull(qualified_identifier) ? strdup(qualified_identifier->valuestring) : NULL,
        cost_calculation_method ? cost_calculation_methodVariable : walletsservice_extended_order_dto_COSTCALCULATIONMETHOD_NULL,
        freight_terms ? freight_termsVariable : walletsservice_extended_order_dto_FREIGHTTERMS_NULL,
        order_status ? order_statusVariable : walletsservice_extended_order_dto_ORDERSTATUS_NULL,
        requested_delivery_date && !cJSON_IsNull(requested_delivery_date) ? strdup(requested_delivery_date->valuestring) : NULL,
        custom_tax_amount ? custom_tax_amount->valuedouble : 0,
        custom_total_amount ? custom_total_amount->valuedouble : 0,
        custom_detail_amount ? custom_detail_amount->valuedouble : 0,
        custom_profit_amount ? custom_profit_amount->valuedouble : 0,
        custom_discounts_amount ? custom_discounts_amount->valuedouble : 0,
        custom_surcharges_amount ? custom_surcharges_amount->valuedouble : 0,
        custom_shipping_tax_amount ? custom_shipping_tax_amount->valuedouble : 0,
        custom_shipping_cost_amount ? custom_shipping_cost_amount->valuedouble : 0,
        custom_withholding_tax_amount ? custom_withholding_tax_amount->valuedouble : 0,
        user ? user_local_nonprim : NULL,
        tenant ? tenant_local_nonprim : NULL,
        individual ? individual_local_nonprim : NULL,
        organization ? organization_local_nonprim : NULL,
        receiver_tenant ? receiver_tenant_local_nonprim : NULL,
        enrollment ? enrollment_local_nonprim : NULL
        );

    return extended_order_dto_local_var;
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
