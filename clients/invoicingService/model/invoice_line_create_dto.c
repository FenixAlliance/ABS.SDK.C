#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_line_create_dto.h"


char* invoice_line_create_dto_cost_calculation_method_ToString(invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e invoice_line_create_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* invoice_line_create_dto_tax_calculation_method_ToString(invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e invoice_line_create_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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

invoice_line_create_dto_t *invoice_line_create_dto_create(
    char *id,
    char *timestamp,
    int closed,
    char *title,
    char *price_list_id,
    char *description,
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
    double total_shipping_cost,
    char *total_shipping_cost_currency_id,
    double total_shipping_tax,
    char *total_shipping_tax_currency_id,
    double total_withheld_tax,
    char *total_withheld_tax_currency_id,
    double total_tax_base,
    char *total_tax_base_currency_id,
    double total_taxes,
    char *total_taxes_currency_id,
    double total_global_surcharges,
    char *total_global_surcharges_currency_id,
    double total_global_discounts,
    char *total_global_discounts_currency_id,
    double total,
    char *total_currency_id,
    invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    int quantity,
    char *item_id,
    char *invoice_id,
    char *item_price_id
    ) {
    invoice_line_create_dto_t *invoice_line_create_dto_local_var = malloc(sizeof(invoice_line_create_dto_t));
    if (!invoice_line_create_dto_local_var) {
        return NULL;
    }
    invoice_line_create_dto_local_var->id = id;
    invoice_line_create_dto_local_var->timestamp = timestamp;
    invoice_line_create_dto_local_var->closed = closed;
    invoice_line_create_dto_local_var->title = title;
    invoice_line_create_dto_local_var->price_list_id = price_list_id;
    invoice_line_create_dto_local_var->description = description;
    invoice_line_create_dto_local_var->individual_id = individual_id;
    invoice_line_create_dto_local_var->payment_term_id = payment_term_id;
    invoice_line_create_dto_local_var->organization_id = organization_id;
    invoice_line_create_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    invoice_line_create_dto_local_var->first_name = first_name;
    invoice_line_create_dto_local_var->last_name = last_name;
    invoice_line_create_dto_local_var->company_name = company_name;
    invoice_line_create_dto_local_var->billing_email = billing_email;
    invoice_line_create_dto_local_var->address_line1 = address_line1;
    invoice_line_create_dto_local_var->address_line2 = address_line2;
    invoice_line_create_dto_local_var->postal_code = postal_code;
    invoice_line_create_dto_local_var->country_id = country_id;
    invoice_line_create_dto_local_var->state_id = state_id;
    invoice_line_create_dto_local_var->city_id = city_id;
    invoice_line_create_dto_local_var->forex_rate = forex_rate;
    invoice_line_create_dto_local_var->currency_id = currency_id;
    invoice_line_create_dto_local_var->total_detail = total_detail;
    invoice_line_create_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    invoice_line_create_dto_local_var->total_profit = total_profit;
    invoice_line_create_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    invoice_line_create_dto_local_var->total_discounts = total_discounts;
    invoice_line_create_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    invoice_line_create_dto_local_var->total_surcharges = total_surcharges;
    invoice_line_create_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    invoice_line_create_dto_local_var->total_shipping_cost = total_shipping_cost;
    invoice_line_create_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    invoice_line_create_dto_local_var->total_shipping_tax = total_shipping_tax;
    invoice_line_create_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    invoice_line_create_dto_local_var->total_withheld_tax = total_withheld_tax;
    invoice_line_create_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    invoice_line_create_dto_local_var->total_tax_base = total_tax_base;
    invoice_line_create_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    invoice_line_create_dto_local_var->total_taxes = total_taxes;
    invoice_line_create_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    invoice_line_create_dto_local_var->total_global_surcharges = total_global_surcharges;
    invoice_line_create_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    invoice_line_create_dto_local_var->total_global_discounts = total_global_discounts;
    invoice_line_create_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    invoice_line_create_dto_local_var->total = total;
    invoice_line_create_dto_local_var->total_currency_id = total_currency_id;
    invoice_line_create_dto_local_var->cost_calculation_method = cost_calculation_method;
    invoice_line_create_dto_local_var->tax_calculation_method = tax_calculation_method;
    invoice_line_create_dto_local_var->quantity = quantity;
    invoice_line_create_dto_local_var->item_id = item_id;
    invoice_line_create_dto_local_var->invoice_id = invoice_id;
    invoice_line_create_dto_local_var->item_price_id = item_price_id;

    return invoice_line_create_dto_local_var;
}


void invoice_line_create_dto_free(invoice_line_create_dto_t *invoice_line_create_dto) {
    if(NULL == invoice_line_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_line_create_dto->id) {
        free(invoice_line_create_dto->id);
        invoice_line_create_dto->id = NULL;
    }
    if (invoice_line_create_dto->timestamp) {
        free(invoice_line_create_dto->timestamp);
        invoice_line_create_dto->timestamp = NULL;
    }
    if (invoice_line_create_dto->title) {
        free(invoice_line_create_dto->title);
        invoice_line_create_dto->title = NULL;
    }
    if (invoice_line_create_dto->price_list_id) {
        free(invoice_line_create_dto->price_list_id);
        invoice_line_create_dto->price_list_id = NULL;
    }
    if (invoice_line_create_dto->description) {
        free(invoice_line_create_dto->description);
        invoice_line_create_dto->description = NULL;
    }
    if (invoice_line_create_dto->individual_id) {
        free(invoice_line_create_dto->individual_id);
        invoice_line_create_dto->individual_id = NULL;
    }
    if (invoice_line_create_dto->payment_term_id) {
        free(invoice_line_create_dto->payment_term_id);
        invoice_line_create_dto->payment_term_id = NULL;
    }
    if (invoice_line_create_dto->organization_id) {
        free(invoice_line_create_dto->organization_id);
        invoice_line_create_dto->organization_id = NULL;
    }
    if (invoice_line_create_dto->receiver_tenant_id) {
        free(invoice_line_create_dto->receiver_tenant_id);
        invoice_line_create_dto->receiver_tenant_id = NULL;
    }
    if (invoice_line_create_dto->first_name) {
        free(invoice_line_create_dto->first_name);
        invoice_line_create_dto->first_name = NULL;
    }
    if (invoice_line_create_dto->last_name) {
        free(invoice_line_create_dto->last_name);
        invoice_line_create_dto->last_name = NULL;
    }
    if (invoice_line_create_dto->company_name) {
        free(invoice_line_create_dto->company_name);
        invoice_line_create_dto->company_name = NULL;
    }
    if (invoice_line_create_dto->billing_email) {
        free(invoice_line_create_dto->billing_email);
        invoice_line_create_dto->billing_email = NULL;
    }
    if (invoice_line_create_dto->address_line1) {
        free(invoice_line_create_dto->address_line1);
        invoice_line_create_dto->address_line1 = NULL;
    }
    if (invoice_line_create_dto->address_line2) {
        free(invoice_line_create_dto->address_line2);
        invoice_line_create_dto->address_line2 = NULL;
    }
    if (invoice_line_create_dto->postal_code) {
        free(invoice_line_create_dto->postal_code);
        invoice_line_create_dto->postal_code = NULL;
    }
    if (invoice_line_create_dto->country_id) {
        free(invoice_line_create_dto->country_id);
        invoice_line_create_dto->country_id = NULL;
    }
    if (invoice_line_create_dto->state_id) {
        free(invoice_line_create_dto->state_id);
        invoice_line_create_dto->state_id = NULL;
    }
    if (invoice_line_create_dto->city_id) {
        free(invoice_line_create_dto->city_id);
        invoice_line_create_dto->city_id = NULL;
    }
    if (invoice_line_create_dto->currency_id) {
        free(invoice_line_create_dto->currency_id);
        invoice_line_create_dto->currency_id = NULL;
    }
    if (invoice_line_create_dto->total_detail_currency_id) {
        free(invoice_line_create_dto->total_detail_currency_id);
        invoice_line_create_dto->total_detail_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_profit_currency_id) {
        free(invoice_line_create_dto->total_profit_currency_id);
        invoice_line_create_dto->total_profit_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_discounts_currency_id) {
        free(invoice_line_create_dto->total_discounts_currency_id);
        invoice_line_create_dto->total_discounts_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_surcharges_currency_id) {
        free(invoice_line_create_dto->total_surcharges_currency_id);
        invoice_line_create_dto->total_surcharges_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_shipping_cost_currency_id) {
        free(invoice_line_create_dto->total_shipping_cost_currency_id);
        invoice_line_create_dto->total_shipping_cost_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_shipping_tax_currency_id) {
        free(invoice_line_create_dto->total_shipping_tax_currency_id);
        invoice_line_create_dto->total_shipping_tax_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_withheld_tax_currency_id) {
        free(invoice_line_create_dto->total_withheld_tax_currency_id);
        invoice_line_create_dto->total_withheld_tax_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_tax_base_currency_id) {
        free(invoice_line_create_dto->total_tax_base_currency_id);
        invoice_line_create_dto->total_tax_base_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_taxes_currency_id) {
        free(invoice_line_create_dto->total_taxes_currency_id);
        invoice_line_create_dto->total_taxes_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_global_surcharges_currency_id) {
        free(invoice_line_create_dto->total_global_surcharges_currency_id);
        invoice_line_create_dto->total_global_surcharges_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_global_discounts_currency_id) {
        free(invoice_line_create_dto->total_global_discounts_currency_id);
        invoice_line_create_dto->total_global_discounts_currency_id = NULL;
    }
    if (invoice_line_create_dto->total_currency_id) {
        free(invoice_line_create_dto->total_currency_id);
        invoice_line_create_dto->total_currency_id = NULL;
    }
    if (invoice_line_create_dto->item_id) {
        free(invoice_line_create_dto->item_id);
        invoice_line_create_dto->item_id = NULL;
    }
    if (invoice_line_create_dto->invoice_id) {
        free(invoice_line_create_dto->invoice_id);
        invoice_line_create_dto->invoice_id = NULL;
    }
    if (invoice_line_create_dto->item_price_id) {
        free(invoice_line_create_dto->item_price_id);
        invoice_line_create_dto->item_price_id = NULL;
    }
    free(invoice_line_create_dto);
}

cJSON *invoice_line_create_dto_convertToJSON(invoice_line_create_dto_t *invoice_line_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // invoice_line_create_dto->id
    if(invoice_line_create_dto->id) {
    if(cJSON_AddStringToObject(item, "id", invoice_line_create_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->timestamp
    if(invoice_line_create_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", invoice_line_create_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // invoice_line_create_dto->closed
    if(invoice_line_create_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", invoice_line_create_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // invoice_line_create_dto->title
    if(invoice_line_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", invoice_line_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->price_list_id
    if(invoice_line_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", invoice_line_create_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->description
    if(invoice_line_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", invoice_line_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->individual_id
    if(invoice_line_create_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", invoice_line_create_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->payment_term_id
    if(invoice_line_create_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", invoice_line_create_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->organization_id
    if(invoice_line_create_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", invoice_line_create_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->receiver_tenant_id
    if(invoice_line_create_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", invoice_line_create_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->first_name
    if(invoice_line_create_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", invoice_line_create_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->last_name
    if(invoice_line_create_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", invoice_line_create_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->company_name
    if(invoice_line_create_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", invoice_line_create_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->billing_email
    if(invoice_line_create_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", invoice_line_create_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->address_line1
    if(invoice_line_create_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", invoice_line_create_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->address_line2
    if(invoice_line_create_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", invoice_line_create_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->postal_code
    if(invoice_line_create_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", invoice_line_create_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->country_id
    if(invoice_line_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", invoice_line_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->state_id
    if(invoice_line_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", invoice_line_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->city_id
    if(invoice_line_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", invoice_line_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->forex_rate
    if(invoice_line_create_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", invoice_line_create_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->currency_id
    if(invoice_line_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", invoice_line_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_detail
    if(invoice_line_create_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", invoice_line_create_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_detail_currency_id
    if(invoice_line_create_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", invoice_line_create_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_profit
    if(invoice_line_create_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", invoice_line_create_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_profit_currency_id
    if(invoice_line_create_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", invoice_line_create_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_discounts
    if(invoice_line_create_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", invoice_line_create_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_discounts_currency_id
    if(invoice_line_create_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", invoice_line_create_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_surcharges
    if(invoice_line_create_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", invoice_line_create_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_surcharges_currency_id
    if(invoice_line_create_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", invoice_line_create_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_shipping_cost
    if(invoice_line_create_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", invoice_line_create_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_shipping_cost_currency_id
    if(invoice_line_create_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", invoice_line_create_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_shipping_tax
    if(invoice_line_create_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", invoice_line_create_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_shipping_tax_currency_id
    if(invoice_line_create_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", invoice_line_create_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_withheld_tax
    if(invoice_line_create_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", invoice_line_create_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_withheld_tax_currency_id
    if(invoice_line_create_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", invoice_line_create_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_tax_base
    if(invoice_line_create_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", invoice_line_create_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_tax_base_currency_id
    if(invoice_line_create_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", invoice_line_create_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_taxes
    if(invoice_line_create_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", invoice_line_create_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_taxes_currency_id
    if(invoice_line_create_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", invoice_line_create_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_global_surcharges
    if(invoice_line_create_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", invoice_line_create_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_global_surcharges_currency_id
    if(invoice_line_create_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", invoice_line_create_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total_global_discounts
    if(invoice_line_create_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", invoice_line_create_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_global_discounts_currency_id
    if(invoice_line_create_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", invoice_line_create_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->total
    if(invoice_line_create_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", invoice_line_create_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->total_currency_id
    if(invoice_line_create_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", invoice_line_create_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->cost_calculation_method
    if(invoice_line_create_dto->cost_calculation_method != invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodinvoice_line_create_dto_ToString(invoice_line_create_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_line_create_dto->tax_calculation_method
    if(invoice_line_create_dto->tax_calculation_method != invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodinvoice_line_create_dto_ToString(invoice_line_create_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // invoice_line_create_dto->quantity
    if(invoice_line_create_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", invoice_line_create_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_line_create_dto->item_id
    if(invoice_line_create_dto->item_id) {
    if(cJSON_AddStringToObject(item, "itemId", invoice_line_create_dto->item_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->invoice_id
    if(invoice_line_create_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", invoice_line_create_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // invoice_line_create_dto->item_price_id
    if(invoice_line_create_dto->item_price_id) {
    if(cJSON_AddStringToObject(item, "itemPriceId", invoice_line_create_dto->item_price_id) == NULL) {
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

invoice_line_create_dto_t *invoice_line_create_dto_parseFromJSON(cJSON *invoice_line_create_dtoJSON){

    invoice_line_create_dto_t *invoice_line_create_dto_local_var = NULL;

    // invoice_line_create_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // invoice_line_create_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // invoice_line_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "costCalculationMethod");
    invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = invoice_line_create_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // invoice_line_create_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "taxCalculationMethod");
    invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = invoice_line_create_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // invoice_line_create_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // invoice_line_create_dto->item_id
    cJSON *item_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "itemId");
    if (item_id) { 
    if(!cJSON_IsString(item_id) && !cJSON_IsNull(item_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // invoice_line_create_dto->item_price_id
    cJSON *item_price_id = cJSON_GetObjectItemCaseSensitive(invoice_line_create_dtoJSON, "itemPriceId");
    if (item_price_id) { 
    if(!cJSON_IsString(item_price_id) && !cJSON_IsNull(item_price_id))
    {
    goto end; //String
    }
    }


    invoice_line_create_dto_local_var = invoice_line_create_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        closed ? closed->valueint : 0,
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        price_list_id && !cJSON_IsNull(price_list_id) ? strdup(price_list_id->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
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
        total_shipping_cost ? total_shipping_cost->valuedouble : 0,
        total_shipping_cost_currency_id && !cJSON_IsNull(total_shipping_cost_currency_id) ? strdup(total_shipping_cost_currency_id->valuestring) : NULL,
        total_shipping_tax ? total_shipping_tax->valuedouble : 0,
        total_shipping_tax_currency_id && !cJSON_IsNull(total_shipping_tax_currency_id) ? strdup(total_shipping_tax_currency_id->valuestring) : NULL,
        total_withheld_tax ? total_withheld_tax->valuedouble : 0,
        total_withheld_tax_currency_id && !cJSON_IsNull(total_withheld_tax_currency_id) ? strdup(total_withheld_tax_currency_id->valuestring) : NULL,
        total_tax_base ? total_tax_base->valuedouble : 0,
        total_tax_base_currency_id && !cJSON_IsNull(total_tax_base_currency_id) ? strdup(total_tax_base_currency_id->valuestring) : NULL,
        total_taxes ? total_taxes->valuedouble : 0,
        total_taxes_currency_id && !cJSON_IsNull(total_taxes_currency_id) ? strdup(total_taxes_currency_id->valuestring) : NULL,
        total_global_surcharges ? total_global_surcharges->valuedouble : 0,
        total_global_surcharges_currency_id && !cJSON_IsNull(total_global_surcharges_currency_id) ? strdup(total_global_surcharges_currency_id->valuestring) : NULL,
        total_global_discounts ? total_global_discounts->valuedouble : 0,
        total_global_discounts_currency_id && !cJSON_IsNull(total_global_discounts_currency_id) ? strdup(total_global_discounts_currency_id->valuestring) : NULL,
        total ? total->valuedouble : 0,
        total_currency_id && !cJSON_IsNull(total_currency_id) ? strdup(total_currency_id->valuestring) : NULL,
        cost_calculation_method ? cost_calculation_methodVariable : invoicingservice_invoice_line_create_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : invoicingservice_invoice_line_create_dto_TAXCALCULATIONMETHOD_NULL,
        quantity ? quantity->valuedouble : 0,
        item_id && !cJSON_IsNull(item_id) ? strdup(item_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        item_price_id && !cJSON_IsNull(item_price_id) ? strdup(item_price_id->valuestring) : NULL
        );

    return invoice_line_create_dto_local_var;
end:
    return NULL;

}
