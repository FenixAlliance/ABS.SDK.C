#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_update_dto.h"


char* invoice_update_dto_cost_calculation_method_ToString(invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_e invoice_update_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* invoice_update_dto_tax_calculation_method_ToString(invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_e invoice_update_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* invoice_update_dto_invoice_type_ToString(invoicingservice_invoice_update_dto_INVOICETYPE_e invoice_type) {
    char* invoice_typeArray[] =  { "NULL", "PurchaseInvoice", "SalesInvoice", "CreditNote", "DebitNote" };
    return invoice_typeArray[invoice_type];
}

invoicingservice_invoice_update_dto_INVOICETYPE_e invoice_update_dto_invoice_type_FromString(char* invoice_type){
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
char* invoice_update_dto_document_type_ToString(invoicingservice_invoice_update_dto_DOCUMENTTYPE_e document_type) {
    char* document_typeArray[] =  { "NULL", "Standard", "DebitNote", "CreditNote" };
    return document_typeArray[document_type];
}

invoicingservice_invoice_update_dto_DOCUMENTTYPE_e invoice_update_dto_document_type_FromString(char* document_type){
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
char* invoice_update_dto_invoice_status_ToString(invoicingservice_invoice_update_dto_INVOICESTATUS_e invoice_status) {
    char* invoice_statusArray[] =  { "NULL", "Draft", "Closed", "Signed", "Expired", "Paid" };
    return invoice_statusArray[invoice_status];
}

invoicingservice_invoice_update_dto_INVOICESTATUS_e invoice_update_dto_invoice_status_FromString(char* invoice_status){
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

invoice_update_dto_t *invoice_update_dto_create(
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
    invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    int paid,
    int number,
    char *notes,
    char *order_id,
    char *enumeration,
    char *payment_mode_id,
    char *enumeration_range_id,
    char *emisor_billing_profile_id,
    char *receiver_billing_profile_id,
    char *emisor_wallet_account_id,
    char *receiver_wallet_account_id,
    char *customer_notes,
    invoicingservice_invoice_update_dto_INVOICETYPE_e invoice_type,
    invoicingservice_invoice_update_dto_DOCUMENTTYPE_e document_type,
    invoicingservice_invoice_update_dto_INVOICESTATUS_e invoice_status,
    char *payment_due,
    char *valid_from,
    char *valid_to,
    list_t *invoice_lines,
    list_t *invoice_references,
    list_t *invoice_adjustments
    ) {
    invoice_update_dto_t *invoice_update_dto_local_var = malloc(sizeof(invoice_update_dto_t));
    if (!invoice_update_dto_local_var) {
        return NULL;
    }
    invoice_update_dto_local_var->closed = closed;
    invoice_update_dto_local_var->title = title;
    invoice_update_dto_local_var->user_id = user_id;
    invoice_update_dto_local_var->tenant_id = tenant_id;
    invoice_update_dto_local_var->price_list_id = price_list_id;
    invoice_update_dto_local_var->description = description;
    invoice_update_dto_local_var->enrollment_id = enrollment_id;
    invoice_update_dto_local_var->individual_id = individual_id;
    invoice_update_dto_local_var->payment_term_id = payment_term_id;
    invoice_update_dto_local_var->organization_id = organization_id;
    invoice_update_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    invoice_update_dto_local_var->first_name = first_name;
    invoice_update_dto_local_var->last_name = last_name;
    invoice_update_dto_local_var->company_name = company_name;
    invoice_update_dto_local_var->billing_email = billing_email;
    invoice_update_dto_local_var->address_line1 = address_line1;
    invoice_update_dto_local_var->address_line2 = address_line2;
    invoice_update_dto_local_var->postal_code = postal_code;
    invoice_update_dto_local_var->country_id = country_id;
    invoice_update_dto_local_var->state_id = state_id;
    invoice_update_dto_local_var->city_id = city_id;
    invoice_update_dto_local_var->billing_location_id = billing_location_id;
    invoice_update_dto_local_var->shipping_location_id = shipping_location_id;
    invoice_update_dto_local_var->shipping_method_id = shipping_method_id;
    invoice_update_dto_local_var->forex_rate = forex_rate;
    invoice_update_dto_local_var->currency_id = currency_id;
    invoice_update_dto_local_var->total_detail = total_detail;
    invoice_update_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    invoice_update_dto_local_var->total_profit = total_profit;
    invoice_update_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    invoice_update_dto_local_var->total_discounts = total_discounts;
    invoice_update_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    invoice_update_dto_local_var->total_surcharges = total_surcharges;
    invoice_update_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    invoice_update_dto_local_var->total_shipping_tax = total_shipping_tax;
    invoice_update_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    invoice_update_dto_local_var->total_shipping_cost = total_shipping_cost;
    invoice_update_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    invoice_update_dto_local_var->total_global_discounts = total_global_discounts;
    invoice_update_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    invoice_update_dto_local_var->total_global_surcharges = total_global_surcharges;
    invoice_update_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    invoice_update_dto_local_var->total_withheld_tax = total_withheld_tax;
    invoice_update_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    invoice_update_dto_local_var->total_tax_base = total_tax_base;
    invoice_update_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    invoice_update_dto_local_var->total_taxes = total_taxes;
    invoice_update_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    invoice_update_dto_local_var->total = total;
    invoice_update_dto_local_var->total_currency_id = total_currency_id;
    invoice_update_dto_local_var->cost_calculation_method = cost_calculation_method;
    invoice_update_dto_local_var->tax_calculation_method = tax_calculation_method;
    invoice_update_dto_local_var->paid = paid;
    invoice_update_dto_local_var->number = number;
    invoice_update_dto_local_var->notes = notes;
    invoice_update_dto_local_var->order_id = order_id;
    invoice_update_dto_local_var->enumeration = enumeration;
    invoice_update_dto_local_var->payment_mode_id = payment_mode_id;
    invoice_update_dto_local_var->enumeration_range_id = enumeration_range_id;
    invoice_update_dto_local_var->emisor_billing_profile_id = emisor_billing_profile_id;
    invoice_update_dto_local_var->receiver_billing_profile_id = receiver_billing_profile_id;
    invoice_update_dto_local_var->emisor_wallet_account_id = emisor_wallet_account_id;
    invoice_update_dto_local_var->receiver_wallet_account_id = receiver_wallet_account_id;
    invoice_update_dto_local_var->customer_notes = customer_notes;
    invoice_update_dto_local_var->invoice_type = invoice_type;
    invoice_update_dto_local_var->document_type = document_type;
    invoice_update_dto_local_var->invoice_status = invoice_status;
    invoice_update_dto_local_var->payment_due = payment_due;
    invoice_update_dto_local_var->valid_from = valid_from;
    invoice_update_dto_local_var->valid_to = valid_to;
    invoice_update_dto_local_var->invoice_lines = invoice_lines;
    invoice_update_dto_local_var->invoice_references = invoice_references;
    invoice_update_dto_local_var->invoice_adjustments = invoice_adjustments;

    return invoice_update_dto_local_var;
}


void invoice_update_dto_free(invoice_update_dto_t *invoice_update_dto) {
    if(NULL == invoice_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_update_dto->title) {
        free(invoice_update_dto->title);
        invoice_update_dto->title = NULL;
    }
    if (invoice_update_dto->user_id) {
        free(invoice_update_dto->user_id);
        invoice_update_dto->user_id = NULL;
    }
    if (invoice_update_dto->tenant_id) {
        free(invoice_update_dto->tenant_id);
        invoice_update_dto->tenant_id = NULL;
    }
    if (invoice_update_dto->price_list_id) {
        free(invoice_update_dto->price_list_id);
        invoice_update_dto->price_list_id = NULL;
    }
    if (invoice_update_dto->description) {
        free(invoice_update_dto->description);
        invoice_update_dto->description = NULL;
    }
    if (invoice_update_dto->enrollment_id) {
        free(invoice_update_dto->enrollment_id);
        invoice_update_dto->enrollment_id = NULL;
    }
    if (invoice_update_dto->individual_id) {
        free(invoice_update_dto->individual_id);
        invoice_update_dto->individual_id = NULL;
    }
    if (invoice_update_dto->payment_term_id) {
        free(invoice_update_dto->payment_term_id);
        invoice_update_dto->payment_term_id = NULL;
    }
    if (invoice_update_dto->organization_id) {
        free(invoice_update_dto->organization_id);
        invoice_update_dto->organization_id = NULL;
    }
    if (invoice_update_dto->receiver_tenant_id) {
        free(invoice_update_dto->receiver_tenant_id);
        invoice_update_dto->receiver_tenant_id = NULL;
    }
    if (invoice_update_dto->first_name) {
        free(invoice_update_dto->first_name);
        invoice_update_dto->first_name = NULL;
    }
    if (invoice_update_dto->last_name) {
        free(invoice_update_dto->last_name);
        invoice_update_dto->last_name = NULL;
    }
    if (invoice_update_dto->company_name) {
        free(invoice_update_dto->company_name);
        invoice_update_dto->company_name = NULL;
    }
    if (invoice_update_dto->billing_email) {
        free(invoice_update_dto->billing_email);
        invoice_update_dto->billing_email = NULL;
    }
    if (invoice_update_dto->address_line1) {
        free(invoice_update_dto->address_line1);
        invoice_update_dto->address_line1 = NULL;
    }
    if (invoice_update_dto->address_line2) {
        free(invoice_update_dto->address_line2);
        invoice_update_dto->address_line2 = NULL;
    }
    if (invoice_update_dto->postal_code) {
        free(invoice_update_dto->postal_code);
        invoice_update_dto->postal_code = NULL;
    }
    if (invoice_update_dto->country_id) {
        free(invoice_update_dto->country_id);
        invoice_update_dto->country_id = NULL;
    }
    if (invoice_update_dto->state_id) {
        free(invoice_update_dto->state_id);
        invoice_update_dto->state_id = NULL;
    }
    if (invoice_update_dto->city_id) {
        free(invoice_update_dto->city_id);
        invoice_update_dto->city_id = NULL;
    }
    if (invoice_update_dto->billing_location_id) {
        free(invoice_update_dto->billing_location_id);
        invoice_update_dto->billing_location_id = NULL;
    }
    if (invoice_update_dto->shipping_location_id) {
        free(invoice_update_dto->shipping_location_id);
        invoice_update_dto->shipping_location_id = NULL;
    }
    if (invoice_update_dto->shipping_method_id) {
        free(invoice_update_dto->shipping_method_id);
        invoice_update_dto->shipping_method_id = NULL;
    }
    if (invoice_update_dto->currency_id) {
        free(invoice_update_dto->currency_id);
        invoice_update_dto->currency_id = NULL;
    }
    if (invoice_update_dto->total_detail_currency_id) {
        free(invoice_update_dto->total_detail_currency_id);
        invoice_update_dto->total_detail_currency_id = NULL;
    }
    if (invoice_update_dto->total_profit_currency_id) {
        free(invoice_update_dto->total_profit_currency_id);
        invoice_update_dto->total_profit_currency_id = NULL;
    }
    if (invoice_update_dto->total_discounts_currency_id) {
        free(invoice_update_dto->total_discounts_currency_id);
        invoice_update_dto->total_discounts_currency_id = NULL;
    }
    if (invoice_update_dto->total_surcharges_currency_id) {
        free(invoice_update_dto->total_surcharges_currency_id);
        invoice_update_dto->total_surcharges_currency_id = NULL;
    }
    if (invoice_update_dto->total_shipping_tax_currency_id) {
        free(invoice_update_dto->total_shipping_tax_currency_id);
        invoice_update_dto->total_shipping_tax_currency_id = NULL;
    }
    if (invoice_update_dto->total_shipping_cost_currency_id) {
        free(invoice_update_dto->total_shipping_cost_currency_id);
        invoice_update_dto->total_shipping_cost_currency_id = NULL;
    }
    if (invoice_update_dto->total_global_discounts_currency_id) {
        free(invoice_update_dto->total_global_discounts_currency_id);
        invoice_update_dto->total_global_discounts_currency_id = NULL;
    }
    if (invoice_update_dto->total_global_surcharges_currency_id) {
        free(invoice_update_dto->total_global_surcharges_currency_id);
        invoice_update_dto->total_global_surcharges_currency_id = NULL;
    }
    if (invoice_update_dto->total_withheld_tax_currency_id) {
        free(invoice_update_dto->total_withheld_tax_currency_id);
        invoice_update_dto->total_withheld_tax_currency_id = NULL;
    }
    if (invoice_update_dto->total_tax_base_currency_id) {
        free(invoice_update_dto->total_tax_base_currency_id);
        invoice_update_dto->total_tax_base_currency_id = NULL;
    }
    if (invoice_update_dto->total_taxes_currency_id) {
        free(invoice_update_dto->total_taxes_currency_id);
        invoice_update_dto->total_taxes_currency_id = NULL;
    }
    if (invoice_update_dto->total_currency_id) {
        free(invoice_update_dto->total_currency_id);
        invoice_update_dto->total_currency_id = NULL;
    }
    if (invoice_update_dto->notes) {
        free(invoice_update_dto->notes);
        invoice_update_dto->notes = NULL;
    }
    if (invoice_update_dto->order_id) {
        free(invoice_update_dto->order_id);
        invoice_update_dto->order_id = NULL;
    }
    if (invoice_update_dto->enumeration) {
        free(invoice_update_dto->enumeration);
        invoice_update_dto->enumeration = NULL;
    }
    if (invoice_update_dto->payment_mode_id) {
        free(invoice_update_dto->payment_mode_id);
        invoice_update_dto->payment_mode_id = NULL;
    }
    if (invoice_update_dto->enumeration_range_id) {
        free(invoice_update_dto->enumeration_range_id);
        invoice_update_dto->enumeration_range_id = NULL;
    }
    if (invoice_update_dto->emisor_billing_profile_id) {
        free(invoice_update_dto->emisor_billing_profile_id);
        invoice_update_dto->emisor_billing_profile_id = NULL;
    }
    if (invoice_update_dto->receiver_billing_profile_id) {
        free(invoice_update_dto->receiver_billing_profile_id);
        invoice_update_dto->receiver_billing_profile_id = NULL;
    }
    if (invoice_update_dto->emisor_wallet_account_id) {
        free(invoice_update_dto->emisor_wallet_account_id);
        invoice_update_dto->emisor_wallet_account_id = NULL;
    }
    if (invoice_update_dto->receiver_wallet_account_id) {
        free(invoice_update_dto->receiver_wallet_account_id);
        invoice_update_dto->receiver_wallet_account_id = NULL;
    }
    if (invoice_update_dto->customer_notes) {
        free(invoice_update_dto->customer_notes);
        invoice_update_dto->customer_notes = NULL;
    }
    if (invoice_update_dto->payment_due) {
        free(invoice_update_dto->payment_due);
        invoice_update_dto->payment_due = NULL;
    }
    if (invoice_update_dto->valid_from) {
        free(invoice_update_dto->valid_from);
        invoice_update_dto->valid_from = NULL;
    }
    if (invoice_update_dto->valid_to) {
        free(invoice_update_dto->valid_to);
        invoice_update_dto->valid_to = NULL;
    }
    if (invoice_update_dto->invoice_lines) {
        list_ForEach(listEntry, invoice_update_dto->invoice_lines) {
            invoice_line_create_dto_free(listEntry->data);
        }
        list_freeList(invoice_update_dto->invoice_lines);
        invoice_update_dto->invoice_lines = NULL;
    }
    if (invoice_update_dto->invoice_references) {
        list_ForEach(listEntry, invoice_update_dto->invoice_references) {
            invoice_reference_create_dto_free(listEntry->data);
        }
        list_freeList(invoice_update_dto->invoice_references);
        invoice_update_dto->invoice_references = NULL;
    }
    if (invoice_update_dto->invoice_adjustments) {
        list_ForEach(listEntry, invoice_update_dto->invoice_adjustments) {
            invoice_adjustment_create_dto_free(listEntry->data);
        }
        list_freeList(invoice_update_dto->invoice_adjustments);
        invoice_update_dto->invoice_adjustments = NULL;
    }
    free(invoice_update_dto);
}

cJSON *invoice_update_dto_convertToJSON(invoice_update_dto_t *invoice_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_update_dto->closed
    if(invoice_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", invoice_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_update_dto->title
    if(invoice_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", invoice_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->user_id
    if(invoice_update_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", invoice_update_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->tenant_id
    if(invoice_update_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", invoice_update_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->price_list_id
    if(invoice_update_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", invoice_update_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->description
    if(invoice_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", invoice_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->enrollment_id
    if(invoice_update_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", invoice_update_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->individual_id
    if(invoice_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", invoice_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->payment_term_id
    if(invoice_update_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", invoice_update_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->organization_id
    if(invoice_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", invoice_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->receiver_tenant_id
    if(invoice_update_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", invoice_update_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->first_name
    if(invoice_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", invoice_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->last_name
    if(invoice_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", invoice_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->company_name
    if(invoice_update_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", invoice_update_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->billing_email
    if(invoice_update_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", invoice_update_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->address_line1
    if(invoice_update_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", invoice_update_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->address_line2
    if(invoice_update_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", invoice_update_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->postal_code
    if(invoice_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", invoice_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->country_id
    if(invoice_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", invoice_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->state_id
    if(invoice_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", invoice_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->city_id
    if(invoice_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", invoice_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->billing_location_id
    if(invoice_update_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", invoice_update_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->shipping_location_id
    if(invoice_update_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", invoice_update_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->shipping_method_id
    if(invoice_update_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", invoice_update_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->forex_rate
    if(invoice_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", invoice_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->currency_id
    if(invoice_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_detail
    if(invoice_update_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", invoice_update_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_detail_currency_id
    if(invoice_update_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", invoice_update_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_profit
    if(invoice_update_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", invoice_update_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_profit_currency_id
    if(invoice_update_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", invoice_update_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_discounts
    if(invoice_update_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", invoice_update_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_discounts_currency_id
    if(invoice_update_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", invoice_update_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_surcharges
    if(invoice_update_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", invoice_update_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_surcharges_currency_id
    if(invoice_update_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", invoice_update_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_shipping_tax
    if(invoice_update_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", invoice_update_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_shipping_tax_currency_id
    if(invoice_update_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", invoice_update_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_shipping_cost
    if(invoice_update_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", invoice_update_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_shipping_cost_currency_id
    if(invoice_update_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", invoice_update_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_global_discounts
    if(invoice_update_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", invoice_update_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_global_discounts_currency_id
    if(invoice_update_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", invoice_update_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_global_surcharges
    if(invoice_update_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", invoice_update_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_global_surcharges_currency_id
    if(invoice_update_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", invoice_update_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_withheld_tax
    if(invoice_update_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", invoice_update_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_withheld_tax_currency_id
    if(invoice_update_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", invoice_update_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_tax_base
    if(invoice_update_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", invoice_update_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_tax_base_currency_id
    if(invoice_update_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", invoice_update_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total_taxes
    if(invoice_update_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", invoice_update_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_taxes_currency_id
    if(invoice_update_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", invoice_update_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->total
    if(invoice_update_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", invoice_update_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->total_currency_id
    if(invoice_update_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", invoice_update_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->cost_calculation_method
    if(invoice_update_dto->cost_calculation_method != invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodinvoice_update_dto_ToString(invoice_update_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_update_dto->tax_calculation_method
    if(invoice_update_dto->tax_calculation_method != invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodinvoice_update_dto_ToString(invoice_update_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_update_dto->paid
    if(invoice_update_dto->paid) {
    if(cJSON_AddBoolToObject(item, "paid", invoice_update_dto->paid) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_update_dto->number
    if(invoice_update_dto->number) {
    if(cJSON_AddNumberToObject(item, "number", invoice_update_dto->number) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_update_dto->notes
    if(invoice_update_dto->notes) {
    if(cJSON_AddStringToObject(item, "notes", invoice_update_dto->notes) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->order_id
    if(invoice_update_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", invoice_update_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->enumeration
    if(invoice_update_dto->enumeration) {
    if(cJSON_AddStringToObject(item, "enumeration", invoice_update_dto->enumeration) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->payment_mode_id
    if(invoice_update_dto->payment_mode_id) {
    if(cJSON_AddStringToObject(item, "paymentModeId", invoice_update_dto->payment_mode_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->enumeration_range_id
    if(invoice_update_dto->enumeration_range_id) {
    if(cJSON_AddStringToObject(item, "enumerationRangeId", invoice_update_dto->enumeration_range_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->emisor_billing_profile_id
    if(invoice_update_dto->emisor_billing_profile_id) {
    if(cJSON_AddStringToObject(item, "emisorBillingProfileId", invoice_update_dto->emisor_billing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->receiver_billing_profile_id
    if(invoice_update_dto->receiver_billing_profile_id) {
    if(cJSON_AddStringToObject(item, "receiverBillingProfileId", invoice_update_dto->receiver_billing_profile_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->emisor_wallet_account_id
    if(invoice_update_dto->emisor_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "emisorWalletAccountId", invoice_update_dto->emisor_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->receiver_wallet_account_id
    if(invoice_update_dto->receiver_wallet_account_id) {
    if(cJSON_AddStringToObject(item, "receiverWalletAccountId", invoice_update_dto->receiver_wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->customer_notes
    if(invoice_update_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", invoice_update_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // invoice_update_dto->invoice_type
    if(invoice_update_dto->invoice_type != invoicingservice_invoice_update_dto_INVOICETYPE_NULL) {
    if(cJSON_AddStringToObject(item, "invoiceType", invoice_typeinvoice_update_dto_ToString(invoice_update_dto->invoice_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_update_dto->document_type
    if(invoice_update_dto->document_type != invoicingservice_invoice_update_dto_DOCUMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "documentType", document_typeinvoice_update_dto_ToString(invoice_update_dto->document_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_update_dto->invoice_status
    if(invoice_update_dto->invoice_status != invoicingservice_invoice_update_dto_INVOICESTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "invoiceStatus", invoice_statusinvoice_update_dto_ToString(invoice_update_dto->invoice_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_update_dto->payment_due
    if(invoice_update_dto->payment_due) {
    if(cJSON_AddStringToObject(item, "paymentDue", invoice_update_dto->payment_due) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_update_dto->valid_from
    if(invoice_update_dto->valid_from) {
    if(cJSON_AddStringToObject(item, "validFrom", invoice_update_dto->valid_from) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_update_dto->valid_to
    if(invoice_update_dto->valid_to) {
    if(cJSON_AddStringToObject(item, "validTo", invoice_update_dto->valid_to) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_update_dto->invoice_lines
    if(invoice_update_dto->invoice_lines) {
    cJSON *invoice_lines = cJSON_AddArrayToObject(item, "invoiceLines");
    if(invoice_lines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *invoice_linesListEntry;
    if (invoice_update_dto->invoice_lines) {
    list_ForEach(invoice_linesListEntry, invoice_update_dto->invoice_lines) {
    cJSON *itemLocal = invoice_line_create_dto_convertToJSON(invoice_linesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(invoice_lines, itemLocal);
    }
    }
    }


    // invoice_update_dto->invoice_references
    if(invoice_update_dto->invoice_references) {
    cJSON *invoice_references = cJSON_AddArrayToObject(item, "invoiceReferences");
    if(invoice_references == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *invoice_referencesListEntry;
    if (invoice_update_dto->invoice_references) {
    list_ForEach(invoice_referencesListEntry, invoice_update_dto->invoice_references) {
    cJSON *itemLocal = invoice_reference_create_dto_convertToJSON(invoice_referencesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(invoice_references, itemLocal);
    }
    }
    }


    // invoice_update_dto->invoice_adjustments
    if(invoice_update_dto->invoice_adjustments) {
    cJSON *invoice_adjustments = cJSON_AddArrayToObject(item, "invoiceAdjustments");
    if(invoice_adjustments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *invoice_adjustmentsListEntry;
    if (invoice_update_dto->invoice_adjustments) {
    list_ForEach(invoice_adjustmentsListEntry, invoice_update_dto->invoice_adjustments) {
    cJSON *itemLocal = invoice_adjustment_create_dto_convertToJSON(invoice_adjustmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(invoice_adjustments, itemLocal);
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

invoice_update_dto_t *invoice_update_dto_parseFromJSON(cJSON *invoice_update_dtoJSON){

    invoice_update_dto_t *invoice_update_dto_local_var = NULL;

    // define the local list for invoice_update_dto->invoice_lines
    list_t *invoice_linesList = NULL;

    // define the local list for invoice_update_dto->invoice_references
    list_t *invoice_referencesList = NULL;

    // define the local list for invoice_update_dto->invoice_adjustments
    list_t *invoice_adjustmentsList = NULL;

    // invoice_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // invoice_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "costCalculationMethod");
    invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = invoice_update_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // invoice_update_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "taxCalculationMethod");
    invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = invoice_update_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // invoice_update_dto->paid
    cJSON *paid = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "paid");
    if (paid) { 
    if(!cJSON_IsBool(paid))
    {
    goto end; //Bool
    }
    }

    // invoice_update_dto->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "number");
    if (number) { 
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }
    }

    // invoice_update_dto->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "notes");
    if (notes) { 
    if(!cJSON_IsString(notes) && !cJSON_IsNull(notes))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->enumeration
    cJSON *enumeration = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "enumeration");
    if (enumeration) { 
    if(!cJSON_IsString(enumeration) && !cJSON_IsNull(enumeration))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->payment_mode_id
    cJSON *payment_mode_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "paymentModeId");
    if (payment_mode_id) { 
    if(!cJSON_IsString(payment_mode_id) && !cJSON_IsNull(payment_mode_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->enumeration_range_id
    cJSON *enumeration_range_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "enumerationRangeId");
    if (enumeration_range_id) { 
    if(!cJSON_IsString(enumeration_range_id) && !cJSON_IsNull(enumeration_range_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->emisor_billing_profile_id
    cJSON *emisor_billing_profile_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "emisorBillingProfileId");
    if (emisor_billing_profile_id) { 
    if(!cJSON_IsString(emisor_billing_profile_id) && !cJSON_IsNull(emisor_billing_profile_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->receiver_billing_profile_id
    cJSON *receiver_billing_profile_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "receiverBillingProfileId");
    if (receiver_billing_profile_id) { 
    if(!cJSON_IsString(receiver_billing_profile_id) && !cJSON_IsNull(receiver_billing_profile_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->emisor_wallet_account_id
    cJSON *emisor_wallet_account_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "emisorWalletAccountId");
    if (emisor_wallet_account_id) { 
    if(!cJSON_IsString(emisor_wallet_account_id) && !cJSON_IsNull(emisor_wallet_account_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->receiver_wallet_account_id
    cJSON *receiver_wallet_account_id = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "receiverWalletAccountId");
    if (receiver_wallet_account_id) { 
    if(!cJSON_IsString(receiver_wallet_account_id) && !cJSON_IsNull(receiver_wallet_account_id))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // invoice_update_dto->invoice_type
    cJSON *invoice_type = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "invoiceType");
    invoicingservice_invoice_update_dto_INVOICETYPE_e invoice_typeVariable;
    if (invoice_type) { 
    if(!cJSON_IsString(invoice_type))
    {
    goto end; //Enum
    }
    invoice_typeVariable = invoice_update_dto_invoice_type_FromString(invoice_type->valuestring);
    }

    // invoice_update_dto->document_type
    cJSON *document_type = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "documentType");
    invoicingservice_invoice_update_dto_DOCUMENTTYPE_e document_typeVariable;
    if (document_type) { 
    if(!cJSON_IsString(document_type))
    {
    goto end; //Enum
    }
    document_typeVariable = invoice_update_dto_document_type_FromString(document_type->valuestring);
    }

    // invoice_update_dto->invoice_status
    cJSON *invoice_status = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "invoiceStatus");
    invoicingservice_invoice_update_dto_INVOICESTATUS_e invoice_statusVariable;
    if (invoice_status) { 
    if(!cJSON_IsString(invoice_status))
    {
    goto end; //Enum
    }
    invoice_statusVariable = invoice_update_dto_invoice_status_FromString(invoice_status->valuestring);
    }

    // invoice_update_dto->payment_due
    cJSON *payment_due = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "paymentDue");
    if (payment_due) { 
    if(!cJSON_IsString(payment_due) && !cJSON_IsNull(payment_due))
    {
    goto end; //DateTime
    }
    }

    // invoice_update_dto->valid_from
    cJSON *valid_from = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "validFrom");
    if (valid_from) { 
    if(!cJSON_IsString(valid_from) && !cJSON_IsNull(valid_from))
    {
    goto end; //DateTime
    }
    }

    // invoice_update_dto->valid_to
    cJSON *valid_to = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "validTo");
    if (valid_to) { 
    if(!cJSON_IsString(valid_to) && !cJSON_IsNull(valid_to))
    {
    goto end; //DateTime
    }
    }

    // invoice_update_dto->invoice_lines
    cJSON *invoice_lines = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "invoiceLines");
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
        invoice_line_create_dto_t *invoice_linesItem = invoice_line_create_dto_parseFromJSON(invoice_lines_local_nonprimitive);

        list_addElement(invoice_linesList, invoice_linesItem);
    }
    }

    // invoice_update_dto->invoice_references
    cJSON *invoice_references = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "invoiceReferences");
    if (invoice_references) { 
    cJSON *invoice_references_local_nonprimitive = NULL;
    if(!cJSON_IsArray(invoice_references)){
        goto end; //nonprimitive container
    }

    invoice_referencesList = list_createList();

    cJSON_ArrayForEach(invoice_references_local_nonprimitive,invoice_references )
    {
        if(!cJSON_IsObject(invoice_references_local_nonprimitive)){
            goto end;
        }
        invoice_reference_create_dto_t *invoice_referencesItem = invoice_reference_create_dto_parseFromJSON(invoice_references_local_nonprimitive);

        list_addElement(invoice_referencesList, invoice_referencesItem);
    }
    }

    // invoice_update_dto->invoice_adjustments
    cJSON *invoice_adjustments = cJSON_GetObjectItemCaseSensitive(invoice_update_dtoJSON, "invoiceAdjustments");
    if (invoice_adjustments) { 
    cJSON *invoice_adjustments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(invoice_adjustments)){
        goto end; //nonprimitive container
    }

    invoice_adjustmentsList = list_createList();

    cJSON_ArrayForEach(invoice_adjustments_local_nonprimitive,invoice_adjustments )
    {
        if(!cJSON_IsObject(invoice_adjustments_local_nonprimitive)){
            goto end;
        }
        invoice_adjustment_create_dto_t *invoice_adjustmentsItem = invoice_adjustment_create_dto_parseFromJSON(invoice_adjustments_local_nonprimitive);

        list_addElement(invoice_adjustmentsList, invoice_adjustmentsItem);
    }
    }


    invoice_update_dto_local_var = invoice_update_dto_create (
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
        cost_calculation_method ? cost_calculation_methodVariable : invoicingservice_invoice_update_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : invoicingservice_invoice_update_dto_TAXCALCULATIONMETHOD_NULL,
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
        customer_notes && !cJSON_IsNull(customer_notes) ? strdup(customer_notes->valuestring) : NULL,
        invoice_type ? invoice_typeVariable : invoicingservice_invoice_update_dto_INVOICETYPE_NULL,
        document_type ? document_typeVariable : invoicingservice_invoice_update_dto_DOCUMENTTYPE_NULL,
        invoice_status ? invoice_statusVariable : invoicingservice_invoice_update_dto_INVOICESTATUS_NULL,
        payment_due && !cJSON_IsNull(payment_due) ? strdup(payment_due->valuestring) : NULL,
        valid_from && !cJSON_IsNull(valid_from) ? strdup(valid_from->valuestring) : NULL,
        valid_to && !cJSON_IsNull(valid_to) ? strdup(valid_to->valuestring) : NULL,
        invoice_lines ? invoice_linesList : NULL,
        invoice_references ? invoice_referencesList : NULL,
        invoice_adjustments ? invoice_adjustmentsList : NULL
        );

    return invoice_update_dto_local_var;
end:
    if (invoice_linesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, invoice_linesList) {
            invoice_line_create_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(invoice_linesList);
        invoice_linesList = NULL;
    }
    if (invoice_referencesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, invoice_referencesList) {
            invoice_reference_create_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(invoice_referencesList);
        invoice_referencesList = NULL;
    }
    if (invoice_adjustmentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, invoice_adjustmentsList) {
            invoice_adjustment_create_dto_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(invoice_adjustmentsList);
        invoice_adjustmentsList = NULL;
    }
    return NULL;

}
