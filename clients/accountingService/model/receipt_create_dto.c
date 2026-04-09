#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "receipt_create_dto.h"


char* receipt_create_dto_cost_calculation_method_ToString(accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_e receipt_create_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* receipt_create_dto_tax_calculation_method_ToString(accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_e receipt_create_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* receipt_create_dto_receipt_type_ToString(accountingservice_receipt_create_dto_RECEIPTTYPE_e receipt_type) {
    char* receipt_typeArray[] =  { "NULL", "PaymentReceipt", "PurchaseReceipt" };
    return receipt_typeArray[receipt_type];
}

accountingservice_receipt_create_dto_RECEIPTTYPE_e receipt_create_dto_receipt_type_FromString(char* receipt_type){
    int stringToReturn = 0;
    char *receipt_typeArray[] =  { "NULL", "PaymentReceipt", "PurchaseReceipt" };
    size_t sizeofArray = sizeof(receipt_typeArray) / sizeof(receipt_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(receipt_type, receipt_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

receipt_create_dto_t *receipt_create_dto_create(
    char *title,
    char *user_id,
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
    char *billing_location_id,
    char *shipping_location_id,
    char *shipping_method_id,
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
    accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    char *payment_id,
    char *tenant_id,
    double forex_rate,
    double total_amount,
    double total_amount_in_usd,
    int closed,
    char *account_holder_id,
    char *contact_id,
    char *enrollment_id,
    accountingservice_receipt_create_dto_RECEIPTTYPE_e receipt_type,
    char *order_id,
    char *invoice_id
    ) {
    receipt_create_dto_t *receipt_create_dto_local_var = malloc(sizeof(receipt_create_dto_t));
    if (!receipt_create_dto_local_var) {
        return NULL;
    }
    receipt_create_dto_local_var->title = title;
    receipt_create_dto_local_var->user_id = user_id;
    receipt_create_dto_local_var->price_list_id = price_list_id;
    receipt_create_dto_local_var->description = description;
    receipt_create_dto_local_var->individual_id = individual_id;
    receipt_create_dto_local_var->payment_term_id = payment_term_id;
    receipt_create_dto_local_var->organization_id = organization_id;
    receipt_create_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    receipt_create_dto_local_var->first_name = first_name;
    receipt_create_dto_local_var->last_name = last_name;
    receipt_create_dto_local_var->company_name = company_name;
    receipt_create_dto_local_var->billing_email = billing_email;
    receipt_create_dto_local_var->address_line1 = address_line1;
    receipt_create_dto_local_var->address_line2 = address_line2;
    receipt_create_dto_local_var->postal_code = postal_code;
    receipt_create_dto_local_var->country_id = country_id;
    receipt_create_dto_local_var->state_id = state_id;
    receipt_create_dto_local_var->city_id = city_id;
    receipt_create_dto_local_var->billing_location_id = billing_location_id;
    receipt_create_dto_local_var->shipping_location_id = shipping_location_id;
    receipt_create_dto_local_var->shipping_method_id = shipping_method_id;
    receipt_create_dto_local_var->currency_id = currency_id;
    receipt_create_dto_local_var->total_detail = total_detail;
    receipt_create_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    receipt_create_dto_local_var->total_profit = total_profit;
    receipt_create_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    receipt_create_dto_local_var->total_discounts = total_discounts;
    receipt_create_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    receipt_create_dto_local_var->total_surcharges = total_surcharges;
    receipt_create_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    receipt_create_dto_local_var->total_shipping_tax = total_shipping_tax;
    receipt_create_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    receipt_create_dto_local_var->total_shipping_cost = total_shipping_cost;
    receipt_create_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    receipt_create_dto_local_var->total_global_discounts = total_global_discounts;
    receipt_create_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    receipt_create_dto_local_var->total_global_surcharges = total_global_surcharges;
    receipt_create_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    receipt_create_dto_local_var->total_withheld_tax = total_withheld_tax;
    receipt_create_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    receipt_create_dto_local_var->total_tax_base = total_tax_base;
    receipt_create_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    receipt_create_dto_local_var->total_taxes = total_taxes;
    receipt_create_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    receipt_create_dto_local_var->total = total;
    receipt_create_dto_local_var->total_currency_id = total_currency_id;
    receipt_create_dto_local_var->cost_calculation_method = cost_calculation_method;
    receipt_create_dto_local_var->tax_calculation_method = tax_calculation_method;
    receipt_create_dto_local_var->payment_id = payment_id;
    receipt_create_dto_local_var->tenant_id = tenant_id;
    receipt_create_dto_local_var->forex_rate = forex_rate;
    receipt_create_dto_local_var->total_amount = total_amount;
    receipt_create_dto_local_var->total_amount_in_usd = total_amount_in_usd;
    receipt_create_dto_local_var->closed = closed;
    receipt_create_dto_local_var->account_holder_id = account_holder_id;
    receipt_create_dto_local_var->contact_id = contact_id;
    receipt_create_dto_local_var->enrollment_id = enrollment_id;
    receipt_create_dto_local_var->receipt_type = receipt_type;
    receipt_create_dto_local_var->order_id = order_id;
    receipt_create_dto_local_var->invoice_id = invoice_id;

    return receipt_create_dto_local_var;
}


void receipt_create_dto_free(receipt_create_dto_t *receipt_create_dto) {
    if(NULL == receipt_create_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (receipt_create_dto->title) {
        free(receipt_create_dto->title);
        receipt_create_dto->title = NULL;
    }
    if (receipt_create_dto->user_id) {
        free(receipt_create_dto->user_id);
        receipt_create_dto->user_id = NULL;
    }
    if (receipt_create_dto->price_list_id) {
        free(receipt_create_dto->price_list_id);
        receipt_create_dto->price_list_id = NULL;
    }
    if (receipt_create_dto->description) {
        free(receipt_create_dto->description);
        receipt_create_dto->description = NULL;
    }
    if (receipt_create_dto->individual_id) {
        free(receipt_create_dto->individual_id);
        receipt_create_dto->individual_id = NULL;
    }
    if (receipt_create_dto->payment_term_id) {
        free(receipt_create_dto->payment_term_id);
        receipt_create_dto->payment_term_id = NULL;
    }
    if (receipt_create_dto->organization_id) {
        free(receipt_create_dto->organization_id);
        receipt_create_dto->organization_id = NULL;
    }
    if (receipt_create_dto->receiver_tenant_id) {
        free(receipt_create_dto->receiver_tenant_id);
        receipt_create_dto->receiver_tenant_id = NULL;
    }
    if (receipt_create_dto->first_name) {
        free(receipt_create_dto->first_name);
        receipt_create_dto->first_name = NULL;
    }
    if (receipt_create_dto->last_name) {
        free(receipt_create_dto->last_name);
        receipt_create_dto->last_name = NULL;
    }
    if (receipt_create_dto->company_name) {
        free(receipt_create_dto->company_name);
        receipt_create_dto->company_name = NULL;
    }
    if (receipt_create_dto->billing_email) {
        free(receipt_create_dto->billing_email);
        receipt_create_dto->billing_email = NULL;
    }
    if (receipt_create_dto->address_line1) {
        free(receipt_create_dto->address_line1);
        receipt_create_dto->address_line1 = NULL;
    }
    if (receipt_create_dto->address_line2) {
        free(receipt_create_dto->address_line2);
        receipt_create_dto->address_line2 = NULL;
    }
    if (receipt_create_dto->postal_code) {
        free(receipt_create_dto->postal_code);
        receipt_create_dto->postal_code = NULL;
    }
    if (receipt_create_dto->country_id) {
        free(receipt_create_dto->country_id);
        receipt_create_dto->country_id = NULL;
    }
    if (receipt_create_dto->state_id) {
        free(receipt_create_dto->state_id);
        receipt_create_dto->state_id = NULL;
    }
    if (receipt_create_dto->city_id) {
        free(receipt_create_dto->city_id);
        receipt_create_dto->city_id = NULL;
    }
    if (receipt_create_dto->billing_location_id) {
        free(receipt_create_dto->billing_location_id);
        receipt_create_dto->billing_location_id = NULL;
    }
    if (receipt_create_dto->shipping_location_id) {
        free(receipt_create_dto->shipping_location_id);
        receipt_create_dto->shipping_location_id = NULL;
    }
    if (receipt_create_dto->shipping_method_id) {
        free(receipt_create_dto->shipping_method_id);
        receipt_create_dto->shipping_method_id = NULL;
    }
    if (receipt_create_dto->currency_id) {
        free(receipt_create_dto->currency_id);
        receipt_create_dto->currency_id = NULL;
    }
    if (receipt_create_dto->total_detail_currency_id) {
        free(receipt_create_dto->total_detail_currency_id);
        receipt_create_dto->total_detail_currency_id = NULL;
    }
    if (receipt_create_dto->total_profit_currency_id) {
        free(receipt_create_dto->total_profit_currency_id);
        receipt_create_dto->total_profit_currency_id = NULL;
    }
    if (receipt_create_dto->total_discounts_currency_id) {
        free(receipt_create_dto->total_discounts_currency_id);
        receipt_create_dto->total_discounts_currency_id = NULL;
    }
    if (receipt_create_dto->total_surcharges_currency_id) {
        free(receipt_create_dto->total_surcharges_currency_id);
        receipt_create_dto->total_surcharges_currency_id = NULL;
    }
    if (receipt_create_dto->total_shipping_tax_currency_id) {
        free(receipt_create_dto->total_shipping_tax_currency_id);
        receipt_create_dto->total_shipping_tax_currency_id = NULL;
    }
    if (receipt_create_dto->total_shipping_cost_currency_id) {
        free(receipt_create_dto->total_shipping_cost_currency_id);
        receipt_create_dto->total_shipping_cost_currency_id = NULL;
    }
    if (receipt_create_dto->total_global_discounts_currency_id) {
        free(receipt_create_dto->total_global_discounts_currency_id);
        receipt_create_dto->total_global_discounts_currency_id = NULL;
    }
    if (receipt_create_dto->total_global_surcharges_currency_id) {
        free(receipt_create_dto->total_global_surcharges_currency_id);
        receipt_create_dto->total_global_surcharges_currency_id = NULL;
    }
    if (receipt_create_dto->total_withheld_tax_currency_id) {
        free(receipt_create_dto->total_withheld_tax_currency_id);
        receipt_create_dto->total_withheld_tax_currency_id = NULL;
    }
    if (receipt_create_dto->total_tax_base_currency_id) {
        free(receipt_create_dto->total_tax_base_currency_id);
        receipt_create_dto->total_tax_base_currency_id = NULL;
    }
    if (receipt_create_dto->total_taxes_currency_id) {
        free(receipt_create_dto->total_taxes_currency_id);
        receipt_create_dto->total_taxes_currency_id = NULL;
    }
    if (receipt_create_dto->total_currency_id) {
        free(receipt_create_dto->total_currency_id);
        receipt_create_dto->total_currency_id = NULL;
    }
    if (receipt_create_dto->payment_id) {
        free(receipt_create_dto->payment_id);
        receipt_create_dto->payment_id = NULL;
    }
    if (receipt_create_dto->tenant_id) {
        free(receipt_create_dto->tenant_id);
        receipt_create_dto->tenant_id = NULL;
    }
    if (receipt_create_dto->account_holder_id) {
        free(receipt_create_dto->account_holder_id);
        receipt_create_dto->account_holder_id = NULL;
    }
    if (receipt_create_dto->contact_id) {
        free(receipt_create_dto->contact_id);
        receipt_create_dto->contact_id = NULL;
    }
    if (receipt_create_dto->enrollment_id) {
        free(receipt_create_dto->enrollment_id);
        receipt_create_dto->enrollment_id = NULL;
    }
    if (receipt_create_dto->order_id) {
        free(receipt_create_dto->order_id);
        receipt_create_dto->order_id = NULL;
    }
    if (receipt_create_dto->invoice_id) {
        free(receipt_create_dto->invoice_id);
        receipt_create_dto->invoice_id = NULL;
    }
    free(receipt_create_dto);
}

cJSON *receipt_create_dto_convertToJSON(receipt_create_dto_t *receipt_create_dto) {
    cJSON *item = cJSON_CreateObject();

    // receipt_create_dto->title
    if(receipt_create_dto->title) {
    if(cJSON_AddStringToObject(item, "title", receipt_create_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->user_id
    if(receipt_create_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", receipt_create_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->price_list_id
    if(receipt_create_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", receipt_create_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->description
    if(receipt_create_dto->description) {
    if(cJSON_AddStringToObject(item, "description", receipt_create_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->individual_id
    if(receipt_create_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", receipt_create_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->payment_term_id
    if(receipt_create_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", receipt_create_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->organization_id
    if(receipt_create_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", receipt_create_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->receiver_tenant_id
    if(receipt_create_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", receipt_create_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->first_name
    if(receipt_create_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", receipt_create_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->last_name
    if(receipt_create_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", receipt_create_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->company_name
    if(receipt_create_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", receipt_create_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->billing_email
    if(receipt_create_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", receipt_create_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->address_line1
    if(receipt_create_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", receipt_create_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->address_line2
    if(receipt_create_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", receipt_create_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->postal_code
    if(receipt_create_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", receipt_create_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->country_id
    if(receipt_create_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", receipt_create_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->state_id
    if(receipt_create_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", receipt_create_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->city_id
    if(receipt_create_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", receipt_create_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->billing_location_id
    if(receipt_create_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", receipt_create_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->shipping_location_id
    if(receipt_create_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", receipt_create_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->shipping_method_id
    if(receipt_create_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", receipt_create_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->currency_id
    if(receipt_create_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", receipt_create_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_detail
    if(receipt_create_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", receipt_create_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_detail_currency_id
    if(receipt_create_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", receipt_create_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_profit
    if(receipt_create_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", receipt_create_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_profit_currency_id
    if(receipt_create_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", receipt_create_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_discounts
    if(receipt_create_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", receipt_create_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_discounts_currency_id
    if(receipt_create_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", receipt_create_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_surcharges
    if(receipt_create_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", receipt_create_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_surcharges_currency_id
    if(receipt_create_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", receipt_create_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_shipping_tax
    if(receipt_create_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", receipt_create_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_shipping_tax_currency_id
    if(receipt_create_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", receipt_create_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_shipping_cost
    if(receipt_create_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", receipt_create_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_shipping_cost_currency_id
    if(receipt_create_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", receipt_create_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_global_discounts
    if(receipt_create_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", receipt_create_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_global_discounts_currency_id
    if(receipt_create_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", receipt_create_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_global_surcharges
    if(receipt_create_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", receipt_create_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_global_surcharges_currency_id
    if(receipt_create_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", receipt_create_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_withheld_tax
    if(receipt_create_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", receipt_create_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_withheld_tax_currency_id
    if(receipt_create_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", receipt_create_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_tax_base
    if(receipt_create_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", receipt_create_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_tax_base_currency_id
    if(receipt_create_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", receipt_create_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total_taxes
    if(receipt_create_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", receipt_create_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_taxes_currency_id
    if(receipt_create_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", receipt_create_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->total
    if(receipt_create_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", receipt_create_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_currency_id
    if(receipt_create_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", receipt_create_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->cost_calculation_method
    if(receipt_create_dto->cost_calculation_method != accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodreceipt_create_dto_ToString(receipt_create_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // receipt_create_dto->tax_calculation_method
    if(receipt_create_dto->tax_calculation_method != accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodreceipt_create_dto_ToString(receipt_create_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // receipt_create_dto->payment_id
    if(receipt_create_dto->payment_id) {
    if(cJSON_AddStringToObject(item, "paymentId", receipt_create_dto->payment_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->tenant_id
    if(receipt_create_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", receipt_create_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->forex_rate
    if(receipt_create_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", receipt_create_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_amount
    if(receipt_create_dto->total_amount) {
    if(cJSON_AddNumberToObject(item, "totalAmount", receipt_create_dto->total_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->total_amount_in_usd
    if(receipt_create_dto->total_amount_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalAmountInUSD", receipt_create_dto->total_amount_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // receipt_create_dto->closed
    if(receipt_create_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", receipt_create_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // receipt_create_dto->account_holder_id
    if(receipt_create_dto->account_holder_id) {
    if(cJSON_AddStringToObject(item, "accountHolderId", receipt_create_dto->account_holder_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->contact_id
    if(receipt_create_dto->contact_id) {
    if(cJSON_AddStringToObject(item, "contactId", receipt_create_dto->contact_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->enrollment_id
    if(receipt_create_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", receipt_create_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->receipt_type
    if(receipt_create_dto->receipt_type != accountingservice_receipt_create_dto_RECEIPTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "receiptType", receipt_typereceipt_create_dto_ToString(receipt_create_dto->receipt_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // receipt_create_dto->order_id
    if(receipt_create_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", receipt_create_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // receipt_create_dto->invoice_id
    if(receipt_create_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", receipt_create_dto->invoice_id) == NULL) {
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

receipt_create_dto_t *receipt_create_dto_parseFromJSON(cJSON *receipt_create_dtoJSON){

    receipt_create_dto_t *receipt_create_dto_local_var = NULL;

    // receipt_create_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "costCalculationMethod");
    accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = receipt_create_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // receipt_create_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "taxCalculationMethod");
    accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = receipt_create_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // receipt_create_dto->payment_id
    cJSON *payment_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "paymentId");
    if (payment_id) { 
    if(!cJSON_IsString(payment_id) && !cJSON_IsNull(payment_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_amount
    cJSON *total_amount = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalAmount");
    if (total_amount) { 
    if(!cJSON_IsNumber(total_amount))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->total_amount_in_usd
    cJSON *total_amount_in_usd = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "totalAmountInUSD");
    if (total_amount_in_usd) { 
    if(!cJSON_IsNumber(total_amount_in_usd))
    {
    goto end; //Numeric
    }
    }

    // receipt_create_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // receipt_create_dto->account_holder_id
    cJSON *account_holder_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "accountHolderId");
    if (account_holder_id) { 
    if(!cJSON_IsString(account_holder_id) && !cJSON_IsNull(account_holder_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->contact_id
    cJSON *contact_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "contactId");
    if (contact_id) { 
    if(!cJSON_IsString(contact_id) && !cJSON_IsNull(contact_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->receipt_type
    cJSON *receipt_type = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "receiptType");
    accountingservice_receipt_create_dto_RECEIPTTYPE_e receipt_typeVariable;
    if (receipt_type) { 
    if(!cJSON_IsString(receipt_type))
    {
    goto end; //Enum
    }
    receipt_typeVariable = receipt_create_dto_receipt_type_FromString(receipt_type->valuestring);
    }

    // receipt_create_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // receipt_create_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(receipt_create_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }


    receipt_create_dto_local_var = receipt_create_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
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
        billing_location_id && !cJSON_IsNull(billing_location_id) ? strdup(billing_location_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
        shipping_method_id && !cJSON_IsNull(shipping_method_id) ? strdup(shipping_method_id->valuestring) : NULL,
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
        cost_calculation_method ? cost_calculation_methodVariable : accountingservice_receipt_create_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : accountingservice_receipt_create_dto_TAXCALCULATIONMETHOD_NULL,
        payment_id && !cJSON_IsNull(payment_id) ? strdup(payment_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        total_amount ? total_amount->valuedouble : 0,
        total_amount_in_usd ? total_amount_in_usd->valuedouble : 0,
        closed ? closed->valueint : 0,
        account_holder_id && !cJSON_IsNull(account_holder_id) ? strdup(account_holder_id->valuestring) : NULL,
        contact_id && !cJSON_IsNull(contact_id) ? strdup(contact_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        receipt_type ? receipt_typeVariable : accountingservice_receipt_create_dto_RECEIPTTYPE_NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL
        );

    return receipt_create_dto_local_var;
end:
    return NULL;

}
