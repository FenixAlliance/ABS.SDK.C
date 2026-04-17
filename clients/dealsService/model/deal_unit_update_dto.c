#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deal_unit_update_dto.h"


char* deal_unit_update_dto_cost_calculation_method_ToString(dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_e deal_unit_update_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* deal_unit_update_dto_tax_calculation_method_ToString(dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_e deal_unit_update_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* deal_unit_update_dto_deal_unit_status_ToString(dealsservice_deal_unit_update_dto_DEALUNITSTATUS_e deal_unit_status) {
    char* deal_unit_statusArray[] =  { "NULL", "Open", "Won", "Lost", "Frozen" };
    return deal_unit_statusArray[deal_unit_status];
}

dealsservice_deal_unit_update_dto_DEALUNITSTATUS_e deal_unit_update_dto_deal_unit_status_FromString(char* deal_unit_status){
    int stringToReturn = 0;
    char *deal_unit_statusArray[] =  { "NULL", "Open", "Won", "Lost", "Frozen" };
    size_t sizeofArray = sizeof(deal_unit_statusArray) / sizeof(deal_unit_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(deal_unit_status, deal_unit_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* deal_unit_update_dto_deal_unit_purchase_process_ToString(dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process) {
    char* deal_unit_purchase_processArray[] =  { "NULL", "None", "Individual", "Commitee", "Unknown" };
    return deal_unit_purchase_processArray[deal_unit_purchase_process];
}

dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_e deal_unit_update_dto_deal_unit_purchase_process_FromString(char* deal_unit_purchase_process){
    int stringToReturn = 0;
    char *deal_unit_purchase_processArray[] =  { "NULL", "None", "Individual", "Commitee", "Unknown" };
    size_t sizeofArray = sizeof(deal_unit_purchase_processArray) / sizeof(deal_unit_purchase_processArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(deal_unit_purchase_process, deal_unit_purchase_processArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* deal_unit_update_dto_deal_unit_forecast_category_ToString(dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category) {
    char* deal_unit_forecast_categoryArray[] =  { "NULL", "None", "Pipeline", "BestCase", "Commited", "Ommited", "Won", "Lost" };
    return deal_unit_forecast_categoryArray[deal_unit_forecast_category];
}

dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_e deal_unit_update_dto_deal_unit_forecast_category_FromString(char* deal_unit_forecast_category){
    int stringToReturn = 0;
    char *deal_unit_forecast_categoryArray[] =  { "NULL", "None", "Pipeline", "BestCase", "Commited", "Ommited", "Won", "Lost" };
    size_t sizeofArray = sizeof(deal_unit_forecast_categoryArray) / sizeof(deal_unit_forecast_categoryArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(deal_unit_forecast_category, deal_unit_forecast_categoryArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* deal_unit_update_dto_deal_unit_amounts_calculation_ToString(dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation) {
    char* deal_unit_amounts_calculationArray[] =  { "NULL", "UserProvided", "SystemCalculated" };
    return deal_unit_amounts_calculationArray[deal_unit_amounts_calculation];
}

dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_update_dto_deal_unit_amounts_calculation_FromString(char* deal_unit_amounts_calculation){
    int stringToReturn = 0;
    char *deal_unit_amounts_calculationArray[] =  { "NULL", "UserProvided", "SystemCalculated" };
    size_t sizeofArray = sizeof(deal_unit_amounts_calculationArray) / sizeof(deal_unit_amounts_calculationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(deal_unit_amounts_calculation, deal_unit_amounts_calculationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

deal_unit_update_dto_t *deal_unit_update_dto_create(
    int closed,
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
    dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    int ordered,
    char *cart_id,
    char *deal_unit_feed_id,
    char *deal_unit_flow_id,
    char *deal_unit_flow_stage_id,
    int partner_created,
    int partner_collaboration,
    char *proposed_solution,
    char *current_situation,
    char *customer_need,
    char *won_date,
    char *lost_date,
    char *expiry_date,
    char *delivered_date,
    char *closed_timestamp,
    char *expected_close_date,
    dealsservice_deal_unit_update_dto_DEALUNITSTATUS_e deal_unit_status,
    dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process,
    dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category,
    dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation
    ) {
    deal_unit_update_dto_t *deal_unit_update_dto_local_var = malloc(sizeof(deal_unit_update_dto_t));
    if (!deal_unit_update_dto_local_var) {
        return NULL;
    }
    deal_unit_update_dto_local_var->closed = closed;
    deal_unit_update_dto_local_var->title = title;
    deal_unit_update_dto_local_var->user_id = user_id;
    deal_unit_update_dto_local_var->price_list_id = price_list_id;
    deal_unit_update_dto_local_var->description = description;
    deal_unit_update_dto_local_var->individual_id = individual_id;
    deal_unit_update_dto_local_var->payment_term_id = payment_term_id;
    deal_unit_update_dto_local_var->organization_id = organization_id;
    deal_unit_update_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    deal_unit_update_dto_local_var->first_name = first_name;
    deal_unit_update_dto_local_var->last_name = last_name;
    deal_unit_update_dto_local_var->company_name = company_name;
    deal_unit_update_dto_local_var->billing_email = billing_email;
    deal_unit_update_dto_local_var->address_line1 = address_line1;
    deal_unit_update_dto_local_var->address_line2 = address_line2;
    deal_unit_update_dto_local_var->postal_code = postal_code;
    deal_unit_update_dto_local_var->country_id = country_id;
    deal_unit_update_dto_local_var->state_id = state_id;
    deal_unit_update_dto_local_var->city_id = city_id;
    deal_unit_update_dto_local_var->billing_location_id = billing_location_id;
    deal_unit_update_dto_local_var->shipping_location_id = shipping_location_id;
    deal_unit_update_dto_local_var->shipping_method_id = shipping_method_id;
    deal_unit_update_dto_local_var->forex_rate = forex_rate;
    deal_unit_update_dto_local_var->currency_id = currency_id;
    deal_unit_update_dto_local_var->total_detail = total_detail;
    deal_unit_update_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    deal_unit_update_dto_local_var->total_profit = total_profit;
    deal_unit_update_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    deal_unit_update_dto_local_var->total_discounts = total_discounts;
    deal_unit_update_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    deal_unit_update_dto_local_var->total_surcharges = total_surcharges;
    deal_unit_update_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    deal_unit_update_dto_local_var->total_shipping_tax = total_shipping_tax;
    deal_unit_update_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    deal_unit_update_dto_local_var->total_shipping_cost = total_shipping_cost;
    deal_unit_update_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    deal_unit_update_dto_local_var->total_global_discounts = total_global_discounts;
    deal_unit_update_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    deal_unit_update_dto_local_var->total_global_surcharges = total_global_surcharges;
    deal_unit_update_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    deal_unit_update_dto_local_var->total_withheld_tax = total_withheld_tax;
    deal_unit_update_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    deal_unit_update_dto_local_var->total_tax_base = total_tax_base;
    deal_unit_update_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    deal_unit_update_dto_local_var->total_taxes = total_taxes;
    deal_unit_update_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    deal_unit_update_dto_local_var->total = total;
    deal_unit_update_dto_local_var->total_currency_id = total_currency_id;
    deal_unit_update_dto_local_var->cost_calculation_method = cost_calculation_method;
    deal_unit_update_dto_local_var->tax_calculation_method = tax_calculation_method;
    deal_unit_update_dto_local_var->ordered = ordered;
    deal_unit_update_dto_local_var->cart_id = cart_id;
    deal_unit_update_dto_local_var->deal_unit_feed_id = deal_unit_feed_id;
    deal_unit_update_dto_local_var->deal_unit_flow_id = deal_unit_flow_id;
    deal_unit_update_dto_local_var->deal_unit_flow_stage_id = deal_unit_flow_stage_id;
    deal_unit_update_dto_local_var->partner_created = partner_created;
    deal_unit_update_dto_local_var->partner_collaboration = partner_collaboration;
    deal_unit_update_dto_local_var->proposed_solution = proposed_solution;
    deal_unit_update_dto_local_var->current_situation = current_situation;
    deal_unit_update_dto_local_var->customer_need = customer_need;
    deal_unit_update_dto_local_var->won_date = won_date;
    deal_unit_update_dto_local_var->lost_date = lost_date;
    deal_unit_update_dto_local_var->expiry_date = expiry_date;
    deal_unit_update_dto_local_var->delivered_date = delivered_date;
    deal_unit_update_dto_local_var->closed_timestamp = closed_timestamp;
    deal_unit_update_dto_local_var->expected_close_date = expected_close_date;
    deal_unit_update_dto_local_var->deal_unit_status = deal_unit_status;
    deal_unit_update_dto_local_var->deal_unit_purchase_process = deal_unit_purchase_process;
    deal_unit_update_dto_local_var->deal_unit_forecast_category = deal_unit_forecast_category;
    deal_unit_update_dto_local_var->deal_unit_amounts_calculation = deal_unit_amounts_calculation;

    return deal_unit_update_dto_local_var;
}


void deal_unit_update_dto_free(deal_unit_update_dto_t *deal_unit_update_dto) {
    if(NULL == deal_unit_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (deal_unit_update_dto->title) {
        free(deal_unit_update_dto->title);
        deal_unit_update_dto->title = NULL;
    }
    if (deal_unit_update_dto->user_id) {
        free(deal_unit_update_dto->user_id);
        deal_unit_update_dto->user_id = NULL;
    }
    if (deal_unit_update_dto->price_list_id) {
        free(deal_unit_update_dto->price_list_id);
        deal_unit_update_dto->price_list_id = NULL;
    }
    if (deal_unit_update_dto->description) {
        free(deal_unit_update_dto->description);
        deal_unit_update_dto->description = NULL;
    }
    if (deal_unit_update_dto->individual_id) {
        free(deal_unit_update_dto->individual_id);
        deal_unit_update_dto->individual_id = NULL;
    }
    if (deal_unit_update_dto->payment_term_id) {
        free(deal_unit_update_dto->payment_term_id);
        deal_unit_update_dto->payment_term_id = NULL;
    }
    if (deal_unit_update_dto->organization_id) {
        free(deal_unit_update_dto->organization_id);
        deal_unit_update_dto->organization_id = NULL;
    }
    if (deal_unit_update_dto->receiver_tenant_id) {
        free(deal_unit_update_dto->receiver_tenant_id);
        deal_unit_update_dto->receiver_tenant_id = NULL;
    }
    if (deal_unit_update_dto->first_name) {
        free(deal_unit_update_dto->first_name);
        deal_unit_update_dto->first_name = NULL;
    }
    if (deal_unit_update_dto->last_name) {
        free(deal_unit_update_dto->last_name);
        deal_unit_update_dto->last_name = NULL;
    }
    if (deal_unit_update_dto->company_name) {
        free(deal_unit_update_dto->company_name);
        deal_unit_update_dto->company_name = NULL;
    }
    if (deal_unit_update_dto->billing_email) {
        free(deal_unit_update_dto->billing_email);
        deal_unit_update_dto->billing_email = NULL;
    }
    if (deal_unit_update_dto->address_line1) {
        free(deal_unit_update_dto->address_line1);
        deal_unit_update_dto->address_line1 = NULL;
    }
    if (deal_unit_update_dto->address_line2) {
        free(deal_unit_update_dto->address_line2);
        deal_unit_update_dto->address_line2 = NULL;
    }
    if (deal_unit_update_dto->postal_code) {
        free(deal_unit_update_dto->postal_code);
        deal_unit_update_dto->postal_code = NULL;
    }
    if (deal_unit_update_dto->country_id) {
        free(deal_unit_update_dto->country_id);
        deal_unit_update_dto->country_id = NULL;
    }
    if (deal_unit_update_dto->state_id) {
        free(deal_unit_update_dto->state_id);
        deal_unit_update_dto->state_id = NULL;
    }
    if (deal_unit_update_dto->city_id) {
        free(deal_unit_update_dto->city_id);
        deal_unit_update_dto->city_id = NULL;
    }
    if (deal_unit_update_dto->billing_location_id) {
        free(deal_unit_update_dto->billing_location_id);
        deal_unit_update_dto->billing_location_id = NULL;
    }
    if (deal_unit_update_dto->shipping_location_id) {
        free(deal_unit_update_dto->shipping_location_id);
        deal_unit_update_dto->shipping_location_id = NULL;
    }
    if (deal_unit_update_dto->shipping_method_id) {
        free(deal_unit_update_dto->shipping_method_id);
        deal_unit_update_dto->shipping_method_id = NULL;
    }
    if (deal_unit_update_dto->currency_id) {
        free(deal_unit_update_dto->currency_id);
        deal_unit_update_dto->currency_id = NULL;
    }
    if (deal_unit_update_dto->total_detail_currency_id) {
        free(deal_unit_update_dto->total_detail_currency_id);
        deal_unit_update_dto->total_detail_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_profit_currency_id) {
        free(deal_unit_update_dto->total_profit_currency_id);
        deal_unit_update_dto->total_profit_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_discounts_currency_id) {
        free(deal_unit_update_dto->total_discounts_currency_id);
        deal_unit_update_dto->total_discounts_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_surcharges_currency_id) {
        free(deal_unit_update_dto->total_surcharges_currency_id);
        deal_unit_update_dto->total_surcharges_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_shipping_tax_currency_id) {
        free(deal_unit_update_dto->total_shipping_tax_currency_id);
        deal_unit_update_dto->total_shipping_tax_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_shipping_cost_currency_id) {
        free(deal_unit_update_dto->total_shipping_cost_currency_id);
        deal_unit_update_dto->total_shipping_cost_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_global_discounts_currency_id) {
        free(deal_unit_update_dto->total_global_discounts_currency_id);
        deal_unit_update_dto->total_global_discounts_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_global_surcharges_currency_id) {
        free(deal_unit_update_dto->total_global_surcharges_currency_id);
        deal_unit_update_dto->total_global_surcharges_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_withheld_tax_currency_id) {
        free(deal_unit_update_dto->total_withheld_tax_currency_id);
        deal_unit_update_dto->total_withheld_tax_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_tax_base_currency_id) {
        free(deal_unit_update_dto->total_tax_base_currency_id);
        deal_unit_update_dto->total_tax_base_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_taxes_currency_id) {
        free(deal_unit_update_dto->total_taxes_currency_id);
        deal_unit_update_dto->total_taxes_currency_id = NULL;
    }
    if (deal_unit_update_dto->total_currency_id) {
        free(deal_unit_update_dto->total_currency_id);
        deal_unit_update_dto->total_currency_id = NULL;
    }
    if (deal_unit_update_dto->cart_id) {
        free(deal_unit_update_dto->cart_id);
        deal_unit_update_dto->cart_id = NULL;
    }
    if (deal_unit_update_dto->deal_unit_feed_id) {
        free(deal_unit_update_dto->deal_unit_feed_id);
        deal_unit_update_dto->deal_unit_feed_id = NULL;
    }
    if (deal_unit_update_dto->deal_unit_flow_id) {
        free(deal_unit_update_dto->deal_unit_flow_id);
        deal_unit_update_dto->deal_unit_flow_id = NULL;
    }
    if (deal_unit_update_dto->deal_unit_flow_stage_id) {
        free(deal_unit_update_dto->deal_unit_flow_stage_id);
        deal_unit_update_dto->deal_unit_flow_stage_id = NULL;
    }
    if (deal_unit_update_dto->proposed_solution) {
        free(deal_unit_update_dto->proposed_solution);
        deal_unit_update_dto->proposed_solution = NULL;
    }
    if (deal_unit_update_dto->current_situation) {
        free(deal_unit_update_dto->current_situation);
        deal_unit_update_dto->current_situation = NULL;
    }
    if (deal_unit_update_dto->customer_need) {
        free(deal_unit_update_dto->customer_need);
        deal_unit_update_dto->customer_need = NULL;
    }
    if (deal_unit_update_dto->won_date) {
        free(deal_unit_update_dto->won_date);
        deal_unit_update_dto->won_date = NULL;
    }
    if (deal_unit_update_dto->lost_date) {
        free(deal_unit_update_dto->lost_date);
        deal_unit_update_dto->lost_date = NULL;
    }
    if (deal_unit_update_dto->expiry_date) {
        free(deal_unit_update_dto->expiry_date);
        deal_unit_update_dto->expiry_date = NULL;
    }
    if (deal_unit_update_dto->delivered_date) {
        free(deal_unit_update_dto->delivered_date);
        deal_unit_update_dto->delivered_date = NULL;
    }
    if (deal_unit_update_dto->closed_timestamp) {
        free(deal_unit_update_dto->closed_timestamp);
        deal_unit_update_dto->closed_timestamp = NULL;
    }
    if (deal_unit_update_dto->expected_close_date) {
        free(deal_unit_update_dto->expected_close_date);
        deal_unit_update_dto->expected_close_date = NULL;
    }
    free(deal_unit_update_dto);
}

cJSON *deal_unit_update_dto_convertToJSON(deal_unit_update_dto_t *deal_unit_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // deal_unit_update_dto->closed
    if(deal_unit_update_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", deal_unit_update_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_update_dto->title
    if(deal_unit_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", deal_unit_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->user_id
    if(deal_unit_update_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", deal_unit_update_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->price_list_id
    if(deal_unit_update_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", deal_unit_update_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->description
    if(deal_unit_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", deal_unit_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->individual_id
    if(deal_unit_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", deal_unit_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->payment_term_id
    if(deal_unit_update_dto->payment_term_id) {
    if(cJSON_AddStringToObject(item, "paymentTermId", deal_unit_update_dto->payment_term_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->organization_id
    if(deal_unit_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", deal_unit_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->receiver_tenant_id
    if(deal_unit_update_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", deal_unit_update_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->first_name
    if(deal_unit_update_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", deal_unit_update_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->last_name
    if(deal_unit_update_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", deal_unit_update_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->company_name
    if(deal_unit_update_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", deal_unit_update_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->billing_email
    if(deal_unit_update_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", deal_unit_update_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->address_line1
    if(deal_unit_update_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", deal_unit_update_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->address_line2
    if(deal_unit_update_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", deal_unit_update_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->postal_code
    if(deal_unit_update_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", deal_unit_update_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->country_id
    if(deal_unit_update_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", deal_unit_update_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->state_id
    if(deal_unit_update_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", deal_unit_update_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->city_id
    if(deal_unit_update_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", deal_unit_update_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->billing_location_id
    if(deal_unit_update_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", deal_unit_update_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->shipping_location_id
    if(deal_unit_update_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", deal_unit_update_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->shipping_method_id
    if(deal_unit_update_dto->shipping_method_id) {
    if(cJSON_AddStringToObject(item, "shippingMethodId", deal_unit_update_dto->shipping_method_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->forex_rate
    if(deal_unit_update_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", deal_unit_update_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->currency_id
    if(deal_unit_update_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", deal_unit_update_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_detail
    if(deal_unit_update_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", deal_unit_update_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_detail_currency_id
    if(deal_unit_update_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", deal_unit_update_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_profit
    if(deal_unit_update_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", deal_unit_update_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_profit_currency_id
    if(deal_unit_update_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", deal_unit_update_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_discounts
    if(deal_unit_update_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", deal_unit_update_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_discounts_currency_id
    if(deal_unit_update_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", deal_unit_update_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_surcharges
    if(deal_unit_update_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", deal_unit_update_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_surcharges_currency_id
    if(deal_unit_update_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", deal_unit_update_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_shipping_tax
    if(deal_unit_update_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", deal_unit_update_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_shipping_tax_currency_id
    if(deal_unit_update_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", deal_unit_update_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_shipping_cost
    if(deal_unit_update_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", deal_unit_update_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_shipping_cost_currency_id
    if(deal_unit_update_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", deal_unit_update_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_global_discounts
    if(deal_unit_update_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", deal_unit_update_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_global_discounts_currency_id
    if(deal_unit_update_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", deal_unit_update_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_global_surcharges
    if(deal_unit_update_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", deal_unit_update_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_global_surcharges_currency_id
    if(deal_unit_update_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", deal_unit_update_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_withheld_tax
    if(deal_unit_update_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", deal_unit_update_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_withheld_tax_currency_id
    if(deal_unit_update_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", deal_unit_update_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_tax_base
    if(deal_unit_update_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", deal_unit_update_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_tax_base_currency_id
    if(deal_unit_update_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", deal_unit_update_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total_taxes
    if(deal_unit_update_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", deal_unit_update_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_taxes_currency_id
    if(deal_unit_update_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", deal_unit_update_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->total
    if(deal_unit_update_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", deal_unit_update_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // deal_unit_update_dto->total_currency_id
    if(deal_unit_update_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", deal_unit_update_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->cost_calculation_method
    if(deal_unit_update_dto->cost_calculation_method != dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methoddeal_unit_update_dto_ToString(deal_unit_update_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_update_dto->tax_calculation_method
    if(deal_unit_update_dto->tax_calculation_method != dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methoddeal_unit_update_dto_ToString(deal_unit_update_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_update_dto->ordered
    if(deal_unit_update_dto->ordered) {
    if(cJSON_AddBoolToObject(item, "ordered", deal_unit_update_dto->ordered) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_update_dto->cart_id
    if(deal_unit_update_dto->cart_id) {
    if(cJSON_AddStringToObject(item, "cartId", deal_unit_update_dto->cart_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->deal_unit_feed_id
    if(deal_unit_update_dto->deal_unit_feed_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFeedId", deal_unit_update_dto->deal_unit_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->deal_unit_flow_id
    if(deal_unit_update_dto->deal_unit_flow_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFlowId", deal_unit_update_dto->deal_unit_flow_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->deal_unit_flow_stage_id
    if(deal_unit_update_dto->deal_unit_flow_stage_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFlowStageId", deal_unit_update_dto->deal_unit_flow_stage_id) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->partner_created
    if(deal_unit_update_dto->partner_created) {
    if(cJSON_AddBoolToObject(item, "partnerCreated", deal_unit_update_dto->partner_created) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_update_dto->partner_collaboration
    if(deal_unit_update_dto->partner_collaboration) {
    if(cJSON_AddBoolToObject(item, "partnerCollaboration", deal_unit_update_dto->partner_collaboration) == NULL) {
    goto fail; //Bool
    }
    }


    // deal_unit_update_dto->proposed_solution
    if(deal_unit_update_dto->proposed_solution) {
    if(cJSON_AddStringToObject(item, "proposedSolution", deal_unit_update_dto->proposed_solution) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->current_situation
    if(deal_unit_update_dto->current_situation) {
    if(cJSON_AddStringToObject(item, "currentSituation", deal_unit_update_dto->current_situation) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->customer_need
    if(deal_unit_update_dto->customer_need) {
    if(cJSON_AddStringToObject(item, "customerNeed", deal_unit_update_dto->customer_need) == NULL) {
    goto fail; //String
    }
    }


    // deal_unit_update_dto->won_date
    if(deal_unit_update_dto->won_date) {
    if(cJSON_AddStringToObject(item, "wonDate", deal_unit_update_dto->won_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->lost_date
    if(deal_unit_update_dto->lost_date) {
    if(cJSON_AddStringToObject(item, "lostDate", deal_unit_update_dto->lost_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->expiry_date
    if(deal_unit_update_dto->expiry_date) {
    if(cJSON_AddStringToObject(item, "expiryDate", deal_unit_update_dto->expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->delivered_date
    if(deal_unit_update_dto->delivered_date) {
    if(cJSON_AddStringToObject(item, "deliveredDate", deal_unit_update_dto->delivered_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->closed_timestamp
    if(deal_unit_update_dto->closed_timestamp) {
    if(cJSON_AddStringToObject(item, "closedTimestamp", deal_unit_update_dto->closed_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->expected_close_date
    if(deal_unit_update_dto->expected_close_date) {
    if(cJSON_AddStringToObject(item, "expectedCloseDate", deal_unit_update_dto->expected_close_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // deal_unit_update_dto->deal_unit_status
    if(deal_unit_update_dto->deal_unit_status != dealsservice_deal_unit_update_dto_DEALUNITSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitStatus", deal_unit_statusdeal_unit_update_dto_ToString(deal_unit_update_dto->deal_unit_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_update_dto->deal_unit_purchase_process
    if(deal_unit_update_dto->deal_unit_purchase_process != dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitPurchaseProcess", deal_unit_purchase_processdeal_unit_update_dto_ToString(deal_unit_update_dto->deal_unit_purchase_process)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_update_dto->deal_unit_forecast_category
    if(deal_unit_update_dto->deal_unit_forecast_category != dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitForecastCategory", deal_unit_forecast_categorydeal_unit_update_dto_ToString(deal_unit_update_dto->deal_unit_forecast_category)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // deal_unit_update_dto->deal_unit_amounts_calculation
    if(deal_unit_update_dto->deal_unit_amounts_calculation != dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitAmountsCalculation", deal_unit_amounts_calculationdeal_unit_update_dto_ToString(deal_unit_update_dto->deal_unit_amounts_calculation)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deal_unit_update_dto_t *deal_unit_update_dto_parseFromJSON(cJSON *deal_unit_update_dtoJSON){

    deal_unit_update_dto_t *deal_unit_update_dto_local_var = NULL;

    // deal_unit_update_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // deal_unit_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->payment_term_id
    cJSON *payment_term_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "paymentTermId");
    if (payment_term_id) { 
    if(!cJSON_IsString(payment_term_id) && !cJSON_IsNull(payment_term_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->shipping_method_id
    cJSON *shipping_method_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "shippingMethodId");
    if (shipping_method_id) { 
    if(!cJSON_IsString(shipping_method_id) && !cJSON_IsNull(shipping_method_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // deal_unit_update_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "costCalculationMethod");
    dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = deal_unit_update_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // deal_unit_update_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "taxCalculationMethod");
    dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = deal_unit_update_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // deal_unit_update_dto->ordered
    cJSON *ordered = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "ordered");
    if (ordered) { 
    if(!cJSON_IsBool(ordered))
    {
    goto end; //Bool
    }
    }

    // deal_unit_update_dto->cart_id
    cJSON *cart_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "cartId");
    if (cart_id) { 
    if(!cJSON_IsString(cart_id) && !cJSON_IsNull(cart_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->deal_unit_feed_id
    cJSON *deal_unit_feed_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitFeedId");
    if (deal_unit_feed_id) { 
    if(!cJSON_IsString(deal_unit_feed_id) && !cJSON_IsNull(deal_unit_feed_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->deal_unit_flow_id
    cJSON *deal_unit_flow_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitFlowId");
    if (deal_unit_flow_id) { 
    if(!cJSON_IsString(deal_unit_flow_id) && !cJSON_IsNull(deal_unit_flow_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->deal_unit_flow_stage_id
    cJSON *deal_unit_flow_stage_id = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitFlowStageId");
    if (deal_unit_flow_stage_id) { 
    if(!cJSON_IsString(deal_unit_flow_stage_id) && !cJSON_IsNull(deal_unit_flow_stage_id))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->partner_created
    cJSON *partner_created = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "partnerCreated");
    if (partner_created) { 
    if(!cJSON_IsBool(partner_created))
    {
    goto end; //Bool
    }
    }

    // deal_unit_update_dto->partner_collaboration
    cJSON *partner_collaboration = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "partnerCollaboration");
    if (partner_collaboration) { 
    if(!cJSON_IsBool(partner_collaboration))
    {
    goto end; //Bool
    }
    }

    // deal_unit_update_dto->proposed_solution
    cJSON *proposed_solution = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "proposedSolution");
    if (proposed_solution) { 
    if(!cJSON_IsString(proposed_solution) && !cJSON_IsNull(proposed_solution))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->current_situation
    cJSON *current_situation = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "currentSituation");
    if (current_situation) { 
    if(!cJSON_IsString(current_situation) && !cJSON_IsNull(current_situation))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->customer_need
    cJSON *customer_need = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "customerNeed");
    if (customer_need) { 
    if(!cJSON_IsString(customer_need) && !cJSON_IsNull(customer_need))
    {
    goto end; //String
    }
    }

    // deal_unit_update_dto->won_date
    cJSON *won_date = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "wonDate");
    if (won_date) { 
    if(!cJSON_IsString(won_date) && !cJSON_IsNull(won_date))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->lost_date
    cJSON *lost_date = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "lostDate");
    if (lost_date) { 
    if(!cJSON_IsString(lost_date) && !cJSON_IsNull(lost_date))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->expiry_date
    cJSON *expiry_date = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "expiryDate");
    if (expiry_date) { 
    if(!cJSON_IsString(expiry_date) && !cJSON_IsNull(expiry_date))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->delivered_date
    cJSON *delivered_date = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "deliveredDate");
    if (delivered_date) { 
    if(!cJSON_IsString(delivered_date) && !cJSON_IsNull(delivered_date))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->closed_timestamp
    cJSON *closed_timestamp = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "closedTimestamp");
    if (closed_timestamp) { 
    if(!cJSON_IsString(closed_timestamp) && !cJSON_IsNull(closed_timestamp))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->expected_close_date
    cJSON *expected_close_date = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "expectedCloseDate");
    if (expected_close_date) { 
    if(!cJSON_IsString(expected_close_date) && !cJSON_IsNull(expected_close_date))
    {
    goto end; //DateTime
    }
    }

    // deal_unit_update_dto->deal_unit_status
    cJSON *deal_unit_status = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitStatus");
    dealsservice_deal_unit_update_dto_DEALUNITSTATUS_e deal_unit_statusVariable;
    if (deal_unit_status) { 
    if(!cJSON_IsString(deal_unit_status))
    {
    goto end; //Enum
    }
    deal_unit_statusVariable = deal_unit_update_dto_deal_unit_status_FromString(deal_unit_status->valuestring);
    }

    // deal_unit_update_dto->deal_unit_purchase_process
    cJSON *deal_unit_purchase_process = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitPurchaseProcess");
    dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_processVariable;
    if (deal_unit_purchase_process) { 
    if(!cJSON_IsString(deal_unit_purchase_process))
    {
    goto end; //Enum
    }
    deal_unit_purchase_processVariable = deal_unit_update_dto_deal_unit_purchase_process_FromString(deal_unit_purchase_process->valuestring);
    }

    // deal_unit_update_dto->deal_unit_forecast_category
    cJSON *deal_unit_forecast_category = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitForecastCategory");
    dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_categoryVariable;
    if (deal_unit_forecast_category) { 
    if(!cJSON_IsString(deal_unit_forecast_category))
    {
    goto end; //Enum
    }
    deal_unit_forecast_categoryVariable = deal_unit_update_dto_deal_unit_forecast_category_FromString(deal_unit_forecast_category->valuestring);
    }

    // deal_unit_update_dto->deal_unit_amounts_calculation
    cJSON *deal_unit_amounts_calculation = cJSON_GetObjectItemCaseSensitive(deal_unit_update_dtoJSON, "dealUnitAmountsCalculation");
    dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculationVariable;
    if (deal_unit_amounts_calculation) { 
    if(!cJSON_IsString(deal_unit_amounts_calculation))
    {
    goto end; //Enum
    }
    deal_unit_amounts_calculationVariable = deal_unit_update_dto_deal_unit_amounts_calculation_FromString(deal_unit_amounts_calculation->valuestring);
    }


    deal_unit_update_dto_local_var = deal_unit_update_dto_create (
        closed ? closed->valueint : 0,
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
        cost_calculation_method ? cost_calculation_methodVariable : dealsservice_deal_unit_update_dto_COSTCALCULATIONMETHOD_NULL,
        tax_calculation_method ? tax_calculation_methodVariable : dealsservice_deal_unit_update_dto_TAXCALCULATIONMETHOD_NULL,
        ordered ? ordered->valueint : 0,
        cart_id && !cJSON_IsNull(cart_id) ? strdup(cart_id->valuestring) : NULL,
        deal_unit_feed_id && !cJSON_IsNull(deal_unit_feed_id) ? strdup(deal_unit_feed_id->valuestring) : NULL,
        deal_unit_flow_id && !cJSON_IsNull(deal_unit_flow_id) ? strdup(deal_unit_flow_id->valuestring) : NULL,
        deal_unit_flow_stage_id && !cJSON_IsNull(deal_unit_flow_stage_id) ? strdup(deal_unit_flow_stage_id->valuestring) : NULL,
        partner_created ? partner_created->valueint : 0,
        partner_collaboration ? partner_collaboration->valueint : 0,
        proposed_solution && !cJSON_IsNull(proposed_solution) ? strdup(proposed_solution->valuestring) : NULL,
        current_situation && !cJSON_IsNull(current_situation) ? strdup(current_situation->valuestring) : NULL,
        customer_need && !cJSON_IsNull(customer_need) ? strdup(customer_need->valuestring) : NULL,
        won_date && !cJSON_IsNull(won_date) ? strdup(won_date->valuestring) : NULL,
        lost_date && !cJSON_IsNull(lost_date) ? strdup(lost_date->valuestring) : NULL,
        expiry_date && !cJSON_IsNull(expiry_date) ? strdup(expiry_date->valuestring) : NULL,
        delivered_date && !cJSON_IsNull(delivered_date) ? strdup(delivered_date->valuestring) : NULL,
        closed_timestamp && !cJSON_IsNull(closed_timestamp) ? strdup(closed_timestamp->valuestring) : NULL,
        expected_close_date && !cJSON_IsNull(expected_close_date) ? strdup(expected_close_date->valuestring) : NULL,
        deal_unit_status ? deal_unit_statusVariable : dealsservice_deal_unit_update_dto_DEALUNITSTATUS_NULL,
        deal_unit_purchase_process ? deal_unit_purchase_processVariable : dealsservice_deal_unit_update_dto_DEALUNITPURCHASEPROCESS_NULL,
        deal_unit_forecast_category ? deal_unit_forecast_categoryVariable : dealsservice_deal_unit_update_dto_DEALUNITFORECASTCATEGORY_NULL,
        deal_unit_amounts_calculation ? deal_unit_amounts_calculationVariable : dealsservice_deal_unit_update_dto_DEALUNITAMOUNTSCALCULATION_NULL
        );

    return deal_unit_update_dto_local_var;
end:
    return NULL;

}
