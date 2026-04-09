#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_invoice_dto.h"


char* extended_invoice_dto_tax_calculation_method_ToString(invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_e extended_invoice_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* extended_invoice_dto_cost_calculation_method_ToString(invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_e extended_invoice_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* extended_invoice_dto_invoice_type_ToString(invoicingservice_extended_invoice_dto_INVOICETYPE_e invoice_type) {
    char* invoice_typeArray[] =  { "NULL", "PurchaseInvoice", "SalesInvoice", "CreditNote", "DebitNote" };
    return invoice_typeArray[invoice_type];
}

invoicingservice_extended_invoice_dto_INVOICETYPE_e extended_invoice_dto_invoice_type_FromString(char* invoice_type){
    int stringToReturn = 0;
    char *invoice_typeArray[] =  { "NULL", "PurchaseInvoice", "SalesInvoice", "CreditNote", "DebitNote" };
    size_t sizeofArray = sizeof(invoice_typeArray) / sizeof(invoice_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(invoice_type, invoice_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* extended_invoice_dto_document_type_ToString(invoicingservice_extended_invoice_dto_DOCUMENTTYPE_e document_type) {
    char* document_typeArray[] =  { "NULL", "Standard", "DebitNote", "CreditNote" };
    return document_typeArray[document_type];
}

invoicingservice_extended_invoice_dto_DOCUMENTTYPE_e extended_invoice_dto_document_type_FromString(char* document_type){
    int stringToReturn = 0;
    char *document_typeArray[] =  { "NULL", "Standard", "DebitNote", "CreditNote" };
    size_t sizeofArray = sizeof(document_typeArray) / sizeof(document_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(document_type, document_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* extended_invoice_dto_invoice_status_ToString(invoicingservice_extended_invoice_dto_INVOICESTATUS_e invoice_status) {
    char* invoice_statusArray[] =  { "NULL", "Draft", "Closed", "Signed", "Expired", "Paid" };
    return invoice_statusArray[invoice_status];
}

invoicingservice_extended_invoice_dto_INVOICESTATUS_e extended_invoice_dto_invoice_status_FromString(char* invoice_status){
    int stringToReturn = 0;
    char *invoice_statusArray[] =  { "NULL", "Draft", "Closed", "Signed", "Expired", "Paid" };
    size_t sizeofArray = sizeof(invoice_statusArray) / sizeof(invoice_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(invoice_status, invoice_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

extended_invoice_dto_t *extended_invoice_dto_create(
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
    invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    int paid,
    long number,
    char *notes,
    char *order_id,
    char *enumeration,
    char *payment_mode_id,
    char *enumeration_range_id,
    char *emisor_billing_profile_id,
    char *receiver_billing_profile_id,
    char *emisor_wallet_account_id,
    char *receiver_wallet_account_id,
    char *payment_due,
    invoicingservice_extended_invoice_dto_INVOICETYPE_e invoice_type,
    invoicingservice_extended_invoice_dto_DOCUMENTTYPE_e document_type,
    invoicingservice_extended_invoice_dto_INVOICESTATUS_e invoice_status,
    tenant_dto_t *tenant,
    simple_user_dto_t *user,
    tenant_dto_t *receiver_tenant,
    simple_contact_dto_t *individual,
    simple_contact_dto_t *organization,
    simple_tenant_enrollment_dto_t *enrollment,
    list_t *invoice_lines
    ) {
    extended_invoice_dto_t *extended_invoice_dto_local_var = malloc(sizeof(extended_invoice_dto_t));
    if (!extended_invoice_dto_local_var) {
        return NULL;
    }
    extended_invoice_dto_local_var->id = id;
    extended_invoice_dto_local_var->timestamp = timestamp;
    extended_invoice_dto_local_var->closed = closed;
    extended_invoice_dto_local_var->type = type;
    extended_invoice_dto_local_var->title = title;
    extended_invoice_dto_local_var->user_id = user_id;
    extended_invoice_dto_local_var->tenant_id = tenant_id;
    extended_invoice_dto_local_var->description = description;
    extended_invoice_dto_local_var->price_list_id = price_list_id;
    extended_invoice_dto_local_var->enrollment_id = enrollment_id;
    extended_invoice_dto_local_var->individual_id = individual_id;
    extended_invoice_dto_local_var->organization_id = organization_id;
    extended_invoice_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    extended_invoice_dto_local_var->first_name = first_name;
    extended_invoice_dto_local_var->last_name = last_name;
    extended_invoice_dto_local_var->company_name = company_name;
    extended_invoice_dto_local_var->billing_email = billing_email;
    extended_invoice_dto_local_var->address_line1 = address_line1;
    extended_invoice_dto_local_var->address_line2 = address_line2;
    extended_invoice_dto_local_var->postal_code = postal_code;
    extended_invoice_dto_local_var->country_id = country_id;
    extended_invoice_dto_local_var->state_id = state_id;
    extended_invoice_dto_local_var->city_id = city_id;
    extended_invoice_dto_local_var->customer_notes = customer_notes;
    extended_invoice_dto_local_var->tax_calculation_method = tax_calculation_method;
    extended_invoice_dto_local_var->cost_calculation_method = cost_calculation_method;
    extended_invoice_dto_local_var->forex_rate = forex_rate;
    extended_invoice_dto_local_var->currency_id = currency_id;
    extended_invoice_dto_local_var->total_detail = total_detail;
    extended_invoice_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    extended_invoice_dto_local_var->total_profit = total_profit;
    extended_invoice_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    extended_invoice_dto_local_var->total_discounts = total_discounts;
    extended_invoice_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    extended_invoice_dto_local_var->total_surcharges = total_surcharges;
    extended_invoice_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    extended_invoice_dto_local_var->total_tax_base = total_tax_base;
    extended_invoice_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    extended_invoice_dto_local_var->total_taxes = total_taxes;
    extended_invoice_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    extended_invoice_dto_local_var->total_shipping_cost = total_shipping_cost;
    extended_invoice_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    extended_invoice_dto_local_var->total_shipping_tax = total_shipping_tax;
    extended_invoice_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    extended_invoice_dto_local_var->total_withheld_tax = total_withheld_tax;
    extended_invoice_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    extended_invoice_dto_local_var->total_global_discounts = total_global_discounts;
    extended_invoice_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    extended_invoice_dto_local_var->total_global_surcharges = total_global_surcharges;
    extended_invoice_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    extended_invoice_dto_local_var->total = total;
    extended_invoice_dto_local_var->total_currency_id = total_currency_id;
    extended_invoice_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    extended_invoice_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    extended_invoice_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    extended_invoice_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    extended_invoice_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    extended_invoice_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    extended_invoice_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    extended_invoice_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    extended_invoice_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    extended_invoice_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    extended_invoice_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    extended_invoice_dto_local_var->total_in_usd = total_in_usd;
    extended_invoice_dto_local_var->paid = paid;
    extended_invoice_dto_local_var->number = number;
    extended_invoice_dto_local_var->notes = notes;
    extended_invoice_dto_local_var->order_id = order_id;
    extended_invoice_dto_local_var->enumeration = enumeration;
    extended_invoice_dto_local_var->payment_mode_id = payment_mode_id;
    extended_invoice_dto_local_var->enumeration_range_id = enumeration_range_id;
    extended_invoice_dto_local_var->emisor_billing_profile_id = emisor_billing_profile_id;
    extended_invoice_dto_local_var->receiver_billing_profile_id = receiver_billing_profile_id;
    extended_invoice_dto_local_var->emisor_wallet_account_id = emisor_wallet_account_id;
    extended_invoice_dto_local_var->receiver_wallet_account_id = receiver_wallet_account_id;
    extended_invoice_dto_local_var->payment_due = payment_due;
    extended_invoice_dto_local_var->invoice_type = invoice_type;
    extended_invoice_dto_local_var->document_type = document_type;
    extended_invoice_dto_local_var->invoice_status = invoice_status;
    extended_invoice_dto_local_var->tenant = tenant;
    extended_invoice_dto_local_var->user = user;
    extended_invoice_dto_local_var->receiver_tenant = receiver_tenant;
    extended_invoice_dto_local_var->individual = individual;
    extended_invoice_dto_local_var->organization = organization;
    extended_invoice_dto_local_var->enrollment = enrollment;
    extended_invoice_dto_local_var->invoice_lines = invoice_lines;

    return extended_invoice_dto_local_var;
}


void extended_invoice_dto_free(extended_invoice_dto_t *extended_invoice_dto) {
    if(NULL == extended_invoice_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_invoice_dto->id) {
        free(extended_invoice_dto->id);
        extended_invoice_dto->id = NULL;
    }
    if (extended_invoice_dto->timestamp) {
        free(extended_invoice_dto->timestamp);
        extended_invoice_dto->timestamp = NULL;
    }
    if (extended_invoice_dto->type) {
        free(extended_invoice_dto->type);
        extended_invoice_dto->type = NULL;
    }
    if (extended_invoice_dto->title) {
        free(extended_invoice_dto->title);
        extended_invoice_dto->title = NULL;
    }
    if (extended_invoice_dto->user_id) {
        free(extended_invoice_dto->user_id);
        extended_invoice_dto->user_id = NULL;
    }
    if (extended_invoice_dto->tenant_id) {
        free(extended_invoice_dto->tenant_id);
        extended_invoice_dto->tenant_id = NULL;
    }
    if (extended_invoice_dto->description) {
        free(extended_invoice_dto->description);
        extended_invoice_dto->description = NULL;
    }
    if (extended_invoice_dto->price_list_id) {
        free(extended_invoice_dto->price_list_id);
        extended_invoice_dto->price_list_id = NULL;
    }
    if (extended_invoice_dto->enrollment_id) {
        free(extended_invoice_dto->enrollment_id);
        extended_invoice_dto->enrollment_id = NULL;
    }
    if (extended_invoice_dto->individual_id) {
        free(extended_invoice_dto->individual_id);
        extended_invoice_dto->individual_id = NULL;
    }
    if (extended_invoice_dto->organization_id) {
        free(extended_invoice_dto->organization_id);
        extended_invoice_dto->organization_id = NULL;
    }
    if (extended_invoice_dto->receiver_tenant_id) {
        free(extended_invoice_dto->receiver_tenant_id);
        extended_invoice_dto->receiver_tenant_id = NULL;
    }
    if (extended_invoice_dto->first_name) {
        free(extended_invoice_dto->first_name);
        extended_invoice_dto->first_name = NULL;
    }
    if (extended_invoice_dto->last_name) {
        free(extended_invoice_dto->last_name);
        extended_invoice_dto->last_name = NULL;
    }
    if (extended_invoice_dto->company_name) {
        free(extended_invoice_dto->company_name);
        extended_invoice_dto->company_name = NULL;
    }
    if (extended_invoice_dto->billing_email) {
        free(extended_invoice_dto->billing_email);
        extended_invoice_dto->billing_email = NULL;
    }
    if (extended_invoice_dto->address_line1) {
        free(extended_invoice_dto->address_line1);
        extended_invoice_dto->address_line1 = NULL;
    }
    if (extended_invoice_dto->address_line2) {
        free(extended_invoice_dto->address_line2);
        extended_invoice_dto->address_line2 = NULL;
    }
    if (extended_invoice_dto->postal_code) {
        free(extended_invoice_dto->postal_code);
        extended_invoice_dto->postal_code = NULL;
    }
    if (extended_invoice_dto->country_id) {
        free(extended_invoice_dto->country_id);
        extended_invoice_dto->country_id = NULL;
    }
    if (extended_invoice_dto->state_id) {
        free(extended_invoice_dto->state_id);
        extended_invoice_dto->state_id = NULL;
    }
    if (extended_invoice_dto->city_id) {
        free(extended_invoice_dto->city_id);
        extended_invoice_dto->city_id = NULL;
    }
    if (extended_invoice_dto->customer_notes) {
        free(extended_invoice_dto->customer_notes);
        extended_invoice_dto->customer_notes = NULL;
    }
    if (extended_invoice_dto->currency_id) {
        free(extended_invoice_dto->currency_id);
        extended_invoice_dto->currency_id = NULL;
    }
    if (extended_invoice_dto->total_detail_currency_id) {
        free(extended_invoice_dto->total_detail_currency_id);
        extended_invoice_dto->total_detail_currency_id = NULL;
    }
    if (extended_invoice_dto->total_profit_currency_id) {
        free(extended_invoice_dto->total_profit_currency_id);
        extended_invoice_dto->total_profit_currency_id = NULL;
    }
    if (extended_invoice_dto->total_discounts_currency_id) {
        free(extended_invoice_dto->total_discounts_currency_id);
        extended_invoice_dto->total_discounts_currency_id = NULL;
    }
    if (extended_invoice_dto->total_surcharges_currency_id) {
        free(extended_invoice_dto->total_surcharges_currency_id);
        extended_invoice_dto->total_surcharges_currency_id = NULL;
    }
    if (extended_invoice_dto->total_tax_base_currency_id) {
        free(extended_invoice_dto->total_tax_base_currency_id);
        extended_invoice_dto->total_tax_base_currency_id = NULL;
    }
    if (extended_invoice_dto->total_taxes_currency_id) {
        free(extended_invoice_dto->total_taxes_currency_id);
        extended_invoice_dto->total_taxes_currency_id = NULL;
    }
    if (extended_invoice_dto->total_shipping_cost_currency_id) {
        free(extended_invoice_dto->total_shipping_cost_currency_id);
        extended_invoice_dto->total_shipping_cost_currency_id = NULL;
    }
    if (extended_invoice_dto->total_shipping_tax_currency_id) {
        free(extended_invoice_dto->total_shipping_tax_currency_id);
        extended_invoice_dto->total_shipping_tax_currency_id = NULL;
    }
    if (extended_invoice_dto->total_withheld_tax_currency_id) {
        free(extended_invoice_dto->total_withheld_tax_currency_id);
        extended_invoice_dto->total_withheld_tax_currency_id = NULL;
    }
    if (extended_invoice_dto->total_global_discounts_currency_id) {
        free(extended_invoice_dto->total_global_discounts_currency_id);
        extended_invoice_dto->total_global_discounts_currency_id = NULL;
    }
    if (extended_invoice_dto->total_global_surcharges_currency_id) {
        free(extended_invoice_dto->total_global_surcharges_currency_id);
        extended_invoice_dto->total_global_surcharges_currency_id = NULL;
    }
    if (extended_invoice_dto->total_currency_id) {
        free(extended_invoice_dto->total_currency_id);
        extended_invoice_dto->total_currency_id = NULL;
    }
    if (extended_invoice_dto->notes) {
        free(extended_invoice_dto->notes);
        extended_invoice_dto->notes = NULL;
    }
    if (extended_invoice_dto->order_id) {
        free(extended_invoice_dto->order_id);
        extended_invoice_dto->order_id = NULL;
    }
    if (extended_invoice_dto->enumeration) {
        free(extended_invoice_dto->enumeration);
        extended_invoice_dto->enumeration = NULL;
    }
    if (extended_invoice_dto->payment_mode_id) {
        free(extended_invoice_dto->payment_mode_id);
        extended_invoice_dto->payment_mode_id = NULL;
    }
    if (extended_invoice_dto->enumeration_range_id) {
        free(extended_invoice_dto->enumeration_range_id);
        extended_invoice_dto->enumeration_range_id = NULL;
    }
    if (extended_invoice_dto->emisor_billing_profile_id) {
        free(extended_invoice_dto->emisor_billing_profile_id);
        extended_invoice_dto->emisor_billing_profile_id = NULL;
    }
    if (extended_invoice_dto->receiver_billing_profile_id) {
        free(extended_invoice_dto->receiver_billing_profile_id);
        extended_invoice_dto->receiver_billing_profile_id = NULL;
    }
    if (extended_invoice_dto->emisor_wallet_account_id) {
        free(extended_invoice_dto->emisor_wallet_account_id);
        extended_invoice_dto->emisor_wallet_account_id = NULL;
    }
    if (extended_invoice_dto->receiver_wallet_account_id) {
        free(extended_invoice_dto->receiver_wallet_account_id);
        extended_invoice_dto->receiver_wallet_account_id = NULL;
    }
    if (extended_invoice_dto->payment_due) {
        free(extended_invoice_dto->payment_due);
        extended_invoice_dto->payment_due = NULL;
    }
    if (extended_invoice_dto->tenant) {
        tenant_dto_free(extended_invoice_dto->tenant);
        extended_invoice_dto->tenant = NULL;
    }
    if (extended_invoice_dto->user) {
        simple_user_dto_free(extended_invoice_dto->user);
        extended_invoice_dto->user = NULL;
    }
    if (extended_invoice_dto->receiver_tenant) {
        tenant_dto_free(extended_invoice_dto->receiver_tenant);
        extended_invoice_dto->receiver_tenant = NULL;
    }
    if (extended_invoice_dto->individual) {
        simple_contact_dto_free(extended_invoice_dto->individual);
        extended_invoice_dto->individual = NULL;
    }
    if (extended_invoice_dto->organization) {
        simple_contact_dto_free(extended_invoice_dto->organization);
        extended_invoice_dto->organization = NULL;
    }
    if (extended_invoice_dto->enrollment) {
        simple_tenant_enrollment_dto_free(extended_invoice_dto->enrollment);
        extended_invoice_dto->enrollment = NULL;
    }
    if (extended_invoice_dto->invoice_lines) {
        list_ForEach(listEntry, extended_invoice_dto->invoice_lines) {
            invoice_line_dto_free(listEntry->data);
        }
        list_freeList(extended_invoice_dto->invoice_lines);
        extended_invoice_dto->invoice_lines = NULL;
    }
    free(extended_invoice_dto);
}

cJSON *extended_invoice_dto_convertToJSON(extended_invoice_dto_t *extended_invoice_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_invoice_dto->id
    if(extended_invoice_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_invoice_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->timestamp
    if(extended_invoice_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_invoice_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_invoice_dto->closed
    if(extended_invoice_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", extended_invoice_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_invoice_dto->type
    if(extended_invoice_dto->type) {
    if(cJSON_AddStringToObject(item, "type", extended_invoice_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->title
    if(extended_invoice_dto->title) {
    if(cJSON_AddStringToObject(item, "title", extended_invoice_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->user_id
    if(extended_invoice_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", extended_invoice_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->tenant_id
    if(extended_invoice_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_invoice_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->description
    if(extended_invoice_dto->description) {
    if(cJSON_AddStringToObject(item, "description", extended_invoice_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->price_list_id
    if(extended_invoice_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", extended_invoice_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->enrollment_id
    if(extended_invoice_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_invoice_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->individual_id
    if(extended_invoice_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", extended_invoice_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->organization_id
    if(extended_invoice_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", extended_invoice_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->receiver_tenant_id
    if(extended_invoice_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", extended_invoice_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->first_name
    if(extended_invoice_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_invoice_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->last_name
    if(extended_invoice_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_invoice_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->company_name
    if(extended_invoice_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", extended_invoice_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->billing_email
    if(extended_invoice_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", extended_invoice_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->address_line1
    if(extended_invoice_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", extended_invoice_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->address_line2
    if(extended_invoice_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", extended_invoice_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->postal_code
    if(extended_invoice_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", extended_invoice_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->country_id
    if(extended_invoice_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_invoice_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->state_id
    if(extended_invoice_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_invoice_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->city_id
    if(extended_invoice_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_invoice_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->customer_notes
    if(extended_invoice_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", extended_invoice_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->tax_calculation_method
    if(extended_invoice_dto->tax_calculation_method != invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodextended_invoice_dto_ToString(extended_invoice_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_invoice_dto->cost_calculation_method
    if(extended_invoice_dto->cost_calculation_method != invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodextended_invoice_dto_ToString(extended_invoice_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_invoice_dto->forex_rate
    if(extended_invoice_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", extended_invoice_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->currency_id
    if(extended_invoice_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_invoice_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_detail
    if(extended_invoice_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", extended_invoice_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_detail_currency_id
    if(extended_invoice_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", extended_invoice_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_profit
    if(extended_invoice_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", extended_invoice_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_profit_currency_id
    if(extended_invoice_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", extended_invoice_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_discounts
    if(extended_invoice_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", extended_invoice_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_discounts_currency_id
    if(extended_invoice_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", extended_invoice_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_surcharges
    if(extended_invoice_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", extended_invoice_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_surcharges_currency_id
    if(extended_invoice_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", extended_invoice_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_tax_base
    if(extended_invoice_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", extended_invoice_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_tax_base_currency_id
    if(extended_invoice_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", extended_invoice_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_taxes
    if(extended_invoice_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", extended_invoice_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_taxes_currency_id
    if(extended_invoice_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", extended_invoice_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_shipping_cost
    if(extended_invoice_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", extended_invoice_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_shipping_cost_currency_id
    if(extended_invoice_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", extended_invoice_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_shipping_tax
    if(extended_invoice_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", extended_invoice_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_shipping_tax_currency_id
    if(extended_invoice_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", extended_invoice_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_withheld_tax
    if(extended_invoice_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", extended_invoice_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_withheld_tax_currency_id
    if(extended_invoice_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", extended_invoice_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_global_discounts
    if(extended_invoice_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", extended_invoice_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_global_discounts_currency_id
    if(extended_invoice_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", extended_invoice_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_global_surcharges
    if(extended_invoice_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", extended_invoice_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_global_surcharges_currency_id
    if(extended_invoice_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", extended_invoice_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total
    if(extended_invoice_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", extended_invoice_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_currency_id
    if(extended_invoice_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", extended_invoice_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->total_detail_in_usd
    if(extended_invoice_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", extended_invoice_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_profit_in_usd
    if(extended_invoice_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", extended_invoice_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_discounts_in_usd
    if(extended_invoice_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", extended_invoice_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_surcharges_in_usd
    if(extended_invoice_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", extended_invoice_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_tax_base_in_usd
    if(extended_invoice_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", extended_invoice_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_taxes_in_usd
    if(extended_invoice_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", extended_invoice_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_withheld_taxes_in_usd
    if(extended_invoice_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", extended_invoice_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_shipping_cost_in_usd
    if(extended_invoice_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", extended_invoice_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_shipping_taxes_in_usd
    if(extended_invoice_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", extended_invoice_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_global_discounts_in_usd
    if(extended_invoice_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", extended_invoice_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_global_surcharges_in_usd
    if(extended_invoice_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", extended_invoice_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->total_in_usd
    if(extended_invoice_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", extended_invoice_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->paid
    if(extended_invoice_dto->paid) {
    if(cJSON_AddBoolToObject(item, "paid", extended_invoice_dto->paid) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_invoice_dto->number
    if(extended_invoice_dto->number) {
    if(cJSON_AddNumberToObject(item, "number", extended_invoice_dto->number) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_invoice_dto->notes
    if(extended_invoice_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", extended_invoice_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->order_id
    if(extended_invoice_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", extended_invoice_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->enumeration
    if(extended_invoice_dto->enumeration) {
    if(cJSON_AddStringToObject(item, "enumeration", extended_invoice_dto->enumeration) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->payment_mode_id
    if(extended_invoice_dto->payment_mode_id) {
    if(cJSON_AddStringToObject(item, "paymentModeId", extended_invoice_dto->payment_mode_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->enumeration_range_id
    if(extended_invoice_dto->enumeration_range_id) {
    if(cJSON_AddStringToObject(item, "enumerationRangeId", extended_invoice_dto->enumeration_range_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->emisor_billing_profile_id
    if(extended_invoice_dto->emisor_billing_profile_id) {
    if(cJSON_AddStringToObject(item, "emisorBillingProfileId", extended_invoice_dto->emisor_billing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->receiver_billing_profile_id
    if(extended_invoice_dto->receiver_billing_profile_id) {
    if(cJSON_AddStringToObject(item, "receiverBillingProfileId", extended_invoice_dto->receiver_billing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->emisor_wallet_account_id
    if(extended_invoice_dto->emisor_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "emisorWalletAccountId", extended_invoice_dto->emisor_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->receiver_wallet_account_id
    if(extended_invoice_dto->receiver_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "receiverWalletAccountId", extended_invoice_dto->receiver_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_invoice_dto->payment_due
    if(extended_invoice_dto->payment_due) {
    if(cJSON_AddStringToObject(item, "paymentDue", extended_invoice_dto->payment_due) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_invoice_dto->invoice_type
    if(extended_invoice_dto->invoice_type != invoicingservice_extended_invoice_dto_INVOICETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "invoiceType", invoice_typeextended_invoice_dto_ToString(extended_invoice_dto->invoice_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_invoice_dto->document_type
    if(extended_invoice_dto->document_type != invoicingservice_extended_invoice_dto_DOCUMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "documentType", document_typeextended_invoice_dto_ToString(extended_invoice_dto->document_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_invoice_dto->invoice_status
    if(extended_invoice_dto->invoice_status != invoicingservice_extended_invoice_dto_INVOICESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "invoiceStatus", invoice_statusextended_invoice_dto_ToString(extended_invoice_dto->invoice_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_invoice_dto->tenant
    if(extended_invoice_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_invoice_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->user
    if(extended_invoice_dto->user) {
    cJSON *user_local_JSON = simple_user_dto_convertToJSON(extended_invoice_dto->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->receiver_tenant
    if(extended_invoice_dto->receiver_tenant) {
    cJSON *receiver_tenant_local_JSON = tenant_dto_convertToJSON(extended_invoice_dto->receiver_tenant);
    if(receiver_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "receiverTenant", receiver_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->individual
    if(extended_invoice_dto->individual) {
    cJSON *individual_local_JSON = simple_contact_dto_convertToJSON(extended_invoice_dto->individual);
    if(individual_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "individual", individual_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->organization
    if(extended_invoice_dto->organization) {
    cJSON *organization_local_JSON = simple_contact_dto_convertToJSON(extended_invoice_dto->organization);
    if(organization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "organization", organization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->enrollment
    if(extended_invoice_dto->enrollment) {
    cJSON *enrollment_local_JSON = simple_tenant_enrollment_dto_convertToJSON(extended_invoice_dto->enrollment);
    if(enrollment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "enrollment", enrollment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_invoice_dto->invoice_lines
    if(extended_invoice_dto->invoice_lines) {
    cJSON *invoice_lines = cJSON_AddArrayToObject(item, "invoiceLines");
    if(invoice_lines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *invoice_linesListEntry;
    if (extended_invoice_dto->invoice_lines) {
    list_ForEach(invoice_linesListEntry, extended_invoice_dto->invoice_lines) {
    cJSON *itemLocal = invoice_line_dto_convertToJSON(invoice_linesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(invoice_lines, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

extended_invoice_dto_t *extended_invoice_dto_parseFromJSON(cJSON *extended_invoice_dtoJSON){

    extended_invoice_dto_t *extended_invoice_dto_local_var = NULL;

    // define the local variable for extended_invoice_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // define the local variable for extended_invoice_dto->user
    simple_user_dto_t *user_local_nonprim = NULL;

    // define the local variable for extended_invoice_dto->receiver_tenant
    tenant_dto_t *receiver_tenant_local_nonprim = NULL;

    // define the local variable for extended_invoice_dto->individual
    simple_contact_dto_t *individual_local_nonprim = NULL;

    // define the local variable for extended_invoice_dto->organization
    simple_contact_dto_t *organization_local_nonprim = NULL;

    // define the local variable for extended_invoice_dto->enrollment
    simple_tenant_enrollment_dto_t *enrollment_local_nonprim = NULL;

    // define the local list for extended_invoice_dto->invoice_lines
    list_t *invoice_linesList = NULL;

    // extended_invoice_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_invoice_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // extended_invoice_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "taxCalculationMethod");
    invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = extended_invoice_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // extended_invoice_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "costCalculationMethod");
    invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = extended_invoice_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // extended_invoice_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->paid
    cJSON *paid = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "paid");
    if (paid) { 
    if(!cJSON_IsBool(paid))
    {
    goto end; //Bool
    }
    }

    // extended_invoice_dto->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "number");
    if (number) { 
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }
    }

    // extended_invoice_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->enumeration
    cJSON *enumeration = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "enumeration");
    if (enumeration) { 
    if(!cJSON_IsString(enumeration) && !cJSON_IsNull(enumeration))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->payment_mode_id
    cJSON *payment_mode_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "paymentModeId");
    if (payment_mode_id) { 
    if(!cJSON_IsString(payment_mode_id) && !cJSON_IsNull(payment_mode_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->enumeration_range_id
    cJSON *enumeration_range_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "enumerationRangeId");
    if (enumeration_range_id) { 
    if(!cJSON_IsString(enumeration_range_id) && !cJSON_IsNull(enumeration_range_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->emisor_billing_profile_id
    cJSON *emisor_billing_profile_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "emisorBillingProfileId");
    if (emisor_billing_profile_id) { 
    if(!cJSON_IsString(emisor_billing_profile_id) && !cJSON_IsNull(emisor_billing_profile_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->receiver_billing_profile_id
    cJSON *receiver_billing_profile_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "receiverBillingProfileId");
    if (receiver_billing_profile_id) { 
    if(!cJSON_IsString(receiver_billing_profile_id) && !cJSON_IsNull(receiver_billing_profile_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->emisor_wallet_account_id
    cJSON *emisor_wallet_account_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "emisorWalletAccountId");
    if (emisor_wallet_account_id) { 
    if(!cJSON_IsString(emisor_wallet_account_id) && !cJSON_IsNull(emisor_wallet_account_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->receiver_wallet_account_id
    cJSON *receiver_wallet_account_id = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "receiverWalletAccountId");
    if (receiver_wallet_account_id) { 
    if(!cJSON_IsString(receiver_wallet_account_id) && !cJSON_IsNull(receiver_wallet_account_id))
    {
    goto end; //String
    }
    }

    // extended_invoice_dto->payment_due
    cJSON *payment_due = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "paymentDue");
    if (payment_due) { 
    if(!cJSON_IsString(payment_due) && !cJSON_IsNull(payment_due))
    {
    goto end; //DateTime
    }
    }

    // extended_invoice_dto->invoice_type
    cJSON *invoice_type = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "invoiceType");
    invoicingservice_extended_invoice_dto_INVOICETYPE_e invoice_typeVariable;
    if (invoice_type) { 
    if(!cJSON_IsString(invoice_type))
    {
    goto end; //Enum
    }
    invoice_typeVariable = extended_invoice_dto_invoice_type_FromString(invoice_type->valuestring);
    }

    // extended_invoice_dto->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "documentType");
    invoicingservice_extended_invoice_dto_DOCUMENTTYPE_e document_typeVariable;
    if (document_type) { 
    if(!cJSON_IsString(document_type))
    {
    goto end; //Enum
    }
    document_typeVariable = extended_invoice_dto_document_type_FromString(document_type->valuestring);
    }

    // extended_invoice_dto->invoice_status
    cJSON *invoice_status = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "invoiceStatus");
    invoicingservice_extended_invoice_dto_INVOICESTATUS_e invoice_statusVariable;
    if (invoice_status) { 
    if(!cJSON_IsString(invoice_status))
    {
    goto end; //Enum
    }
    invoice_statusVariable = extended_invoice_dto_invoice_status_FromString(invoice_status->valuestring);
    }

    // extended_invoice_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }

    // extended_invoice_dto->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "user");
    if (user) { 
    user_local_nonprim = simple_user_dto_parseFromJSON(user); //nonprimitive
    }

    // extended_invoice_dto->receiver_tenant
    cJSON *receiver_tenant = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "receiverTenant");
    if (receiver_tenant) { 
    receiver_tenant_local_nonprim = tenant_dto_parseFromJSON(receiver_tenant); //nonprimitive
    }

    // extended_invoice_dto->individual
    cJSON *individual = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "individual");
    if (individual) { 
    individual_local_nonprim = simple_contact_dto_parseFromJSON(individual); //nonprimitive
    }

    // extended_invoice_dto->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "organization");
    if (organization) { 
    organization_local_nonprim = simple_contact_dto_parseFromJSON(organization); //nonprimitive
    }

    // extended_invoice_dto->enrollment
    cJSON *enrollment = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "enrollment");
    if (enrollment) { 
    enrollment_local_nonprim = simple_tenant_enrollment_dto_parseFromJSON(enrollment); //nonprimitive
    }

    // extended_invoice_dto->invoice_lines
    cJSON *invoice_lines = cJSON_GetObjectItemCaseSensitive(extended_invoice_dtoJSON, "invoiceLines");
    if (invoice_lines) { 
    cJSON *invoice_lines_local_nonprimitive = NULL;
    if(!cJSON_IsArray(invoice_lines)){
        goto end; //nonprimitive container
    }

    invoice_linesList = list_createList();

    cJSON_ArrayForEach(invoice_lines_local_nonprimitive,invoice_lines )
    {
        if(!cJSON_IsObject(invoice_lines_local_nonprimitive)){
            goto end;
        }
        invoice_line_dto_t *invoice_linesItem = invoice_line_dto_parseFromJSON(invoice_lines_local_nonprimitive);

        list_addElement(invoice_linesList, invoice_linesItem);
    }
    }


    extended_invoice_dto_local_var = extended_invoice_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : invoicingservice_extended_invoice_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : invoicingservice_extended_invoice_dto_COSTCALCULATIONMETHOD_NULL,
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
        paid ? paid->valueint : 0,
        number ? number->valuedouble : 0,
        notes && !cJSON_IsNull(notes) ? strdup(notes->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        enumeration && !cJSON_IsNull(enumeration) ? strdup(enumeration->valuestring) : NULL,
        payment_mode_id && !cJSON_IsNull(payment_mode_id) ? strdup(payment_mode_id->valuestring) : NULL,
        enumeration_range_id && !cJSON_IsNull(enumeration_range_id) ? strdup(enumeration_range_id->valuestring) : NULL,
        emisor_billing_profile_id && !cJSON_IsNull(emisor_billing_profile_id) ? strdup(emisor_billing_profile_id->valuestring) : NULL,
        receiver_billing_profile_id && !cJSON_IsNull(receiver_billing_profile_id) ? strdup(receiver_billing_profile_id->valuestring) : NULL,
        emisor_wallet_account_id && !cJSON_IsNull(emisor_wallet_account_id) ? strdup(emisor_wallet_account_id->valuestring) : NULL,
        receiver_wallet_account_id && !cJSON_IsNull(receiver_wallet_account_id) ? strdup(receiver_wallet_account_id->valuestring) : NULL,
        payment_due && !cJSON_IsNull(payment_due) ? strdup(payment_due->valuestring) : NULL,
        invoice_type ? invoice_typeVariable : invoicingservice_extended_invoice_dto_INVOICETYPE_NULL,
        document_type ? document_typeVariable : invoicingservice_extended_invoice_dto_DOCUMENTTYPE_NULL,
        invoice_status ? invoice_statusVariable : invoicingservice_extended_invoice_dto_INVOICESTATUS_NULL,
        tenant ? tenant_local_nonprim : NULL,
        user ? user_local_nonprim : NULL,
        receiver_tenant ? receiver_tenant_local_nonprim : NULL,
        individual ? individual_local_nonprim : NULL,
        organization ? organization_local_nonprim : NULL,
        enrollment ? enrollment_local_nonprim : NULL,
        invoice_lines ? invoice_linesList : NULL
        );

    return extended_invoice_dto_local_var;
end:
    if (tenant_local_nonprim) {
        tenant_dto_free(tenant_local_nonprim);
        tenant_local_nonprim = NULL;
    }
    if (user_local_nonprim) {
        simple_user_dto_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    if (receiver_tenant_local_nonprim) {
        tenant_dto_free(receiver_tenant_local_nonprim);
        receiver_tenant_local_nonprim = NULL;
    }
    if (individual_local_nonprim) {
        simple_contact_dto_free(individual_local_nonprim);
        individual_local_nonprim = NULL;
    }
    if (organization_local_nonprim) {
        simple_contact_dto_free(organization_local_nonprim);
        organization_local_nonprim = NULL;
    }
    if (enrollment_local_nonprim) {
        simple_tenant_enrollment_dto_free(enrollment_local_nonprim);
        enrollment_local_nonprim = NULL;
    }
    if (invoice_linesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, invoice_linesList) {
            invoice_line_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(invoice_linesList);
        invoice_linesList = NULL;
    }
    return NULL;

}
