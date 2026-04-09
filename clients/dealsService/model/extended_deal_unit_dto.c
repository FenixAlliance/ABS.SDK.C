#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "extended_deal_unit_dto.h"


char* extended_deal_unit_dto_tax_calculation_method_ToString(dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_method) {
    char* tax_calculation_methodArray[] =  { "NULL", "Included", "Excluded" };
    return tax_calculation_methodArray[tax_calculation_method];
}

dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_e extended_deal_unit_dto_tax_calculation_method_FromString(char* tax_calculation_method){
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
char* extended_deal_unit_dto_cost_calculation_method_ToString(dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_method) {
    char* cost_calculation_methodArray[] =  { "NULL", "Automatic", "Custom" };
    return cost_calculation_methodArray[cost_calculation_method];
}

dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_e extended_deal_unit_dto_cost_calculation_method_FromString(char* cost_calculation_method){
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
char* extended_deal_unit_dto_deal_unit_status_ToString(dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_e deal_unit_status) {
    char* deal_unit_statusArray[] =  { "NULL", "Open", "Won", "Lost", "Frozen" };
    return deal_unit_statusArray[deal_unit_status];
}

dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_e extended_deal_unit_dto_deal_unit_status_FromString(char* deal_unit_status){
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
char* extended_deal_unit_dto_deal_unit_purchase_process_ToString(dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process) {
    char* deal_unit_purchase_processArray[] =  { "NULL", "None", "Individual", "Commitee", "Unknown" };
    return deal_unit_purchase_processArray[deal_unit_purchase_process];
}

dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_e extended_deal_unit_dto_deal_unit_purchase_process_FromString(char* deal_unit_purchase_process){
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
char* extended_deal_unit_dto_deal_unit_forecast_category_ToString(dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category) {
    char* deal_unit_forecast_categoryArray[] =  { "NULL", "None", "Pipeline", "BestCase", "Commited", "Ommited", "Won", "Lost" };
    return deal_unit_forecast_categoryArray[deal_unit_forecast_category];
}

dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_e extended_deal_unit_dto_deal_unit_forecast_category_FromString(char* deal_unit_forecast_category){
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
char* extended_deal_unit_dto_deal_unit_amounts_calculation_ToString(dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation) {
    char* deal_unit_amounts_calculationArray[] =  { "NULL", "UserProvided", "SystemCalculated" };
    return deal_unit_amounts_calculationArray[deal_unit_amounts_calculation];
}

dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e extended_deal_unit_dto_deal_unit_amounts_calculation_FromString(char* deal_unit_amounts_calculation){
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

extended_deal_unit_dto_t *extended_deal_unit_dto_create(
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
    dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    int ordered,
    char *deal_unit_feed_id,
    char *deal_unit_flow_id,
    char *deal_unit_flow_stage_id,
    char *billing_location_id,
    char *shipping_location_id,
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
    dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_e deal_unit_status,
    dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process,
    dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category,
    dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation,
    int lines_count,
    double custom_total_amount,
    double custom_detail_amount,
    double custom_profit_amount,
    double custom_shipping_cost_amount,
    double custom_withholding_tax_amount,
    double custom_surcharges_amount,
    double custom_discounts_amount,
    double custom_shipping_tax_amount,
    user_dto_t *user,
    tenant_dto_t *tenant,
    contact_dto_t *individual,
    contact_dto_t *organization,
    tenant_dto_t *receiver_tenant,
    tenant_enrollment_dto_t *enrollment
    ) {
    extended_deal_unit_dto_t *extended_deal_unit_dto_local_var = malloc(sizeof(extended_deal_unit_dto_t));
    if (!extended_deal_unit_dto_local_var) {
        return NULL;
    }
    extended_deal_unit_dto_local_var->id = id;
    extended_deal_unit_dto_local_var->timestamp = timestamp;
    extended_deal_unit_dto_local_var->closed = closed;
    extended_deal_unit_dto_local_var->type = type;
    extended_deal_unit_dto_local_var->title = title;
    extended_deal_unit_dto_local_var->user_id = user_id;
    extended_deal_unit_dto_local_var->tenant_id = tenant_id;
    extended_deal_unit_dto_local_var->description = description;
    extended_deal_unit_dto_local_var->price_list_id = price_list_id;
    extended_deal_unit_dto_local_var->enrollment_id = enrollment_id;
    extended_deal_unit_dto_local_var->individual_id = individual_id;
    extended_deal_unit_dto_local_var->organization_id = organization_id;
    extended_deal_unit_dto_local_var->receiver_tenant_id = receiver_tenant_id;
    extended_deal_unit_dto_local_var->first_name = first_name;
    extended_deal_unit_dto_local_var->last_name = last_name;
    extended_deal_unit_dto_local_var->company_name = company_name;
    extended_deal_unit_dto_local_var->billing_email = billing_email;
    extended_deal_unit_dto_local_var->address_line1 = address_line1;
    extended_deal_unit_dto_local_var->address_line2 = address_line2;
    extended_deal_unit_dto_local_var->postal_code = postal_code;
    extended_deal_unit_dto_local_var->country_id = country_id;
    extended_deal_unit_dto_local_var->state_id = state_id;
    extended_deal_unit_dto_local_var->city_id = city_id;
    extended_deal_unit_dto_local_var->customer_notes = customer_notes;
    extended_deal_unit_dto_local_var->tax_calculation_method = tax_calculation_method;
    extended_deal_unit_dto_local_var->cost_calculation_method = cost_calculation_method;
    extended_deal_unit_dto_local_var->forex_rate = forex_rate;
    extended_deal_unit_dto_local_var->currency_id = currency_id;
    extended_deal_unit_dto_local_var->total_detail = total_detail;
    extended_deal_unit_dto_local_var->total_detail_currency_id = total_detail_currency_id;
    extended_deal_unit_dto_local_var->total_profit = total_profit;
    extended_deal_unit_dto_local_var->total_profit_currency_id = total_profit_currency_id;
    extended_deal_unit_dto_local_var->total_discounts = total_discounts;
    extended_deal_unit_dto_local_var->total_discounts_currency_id = total_discounts_currency_id;
    extended_deal_unit_dto_local_var->total_surcharges = total_surcharges;
    extended_deal_unit_dto_local_var->total_surcharges_currency_id = total_surcharges_currency_id;
    extended_deal_unit_dto_local_var->total_tax_base = total_tax_base;
    extended_deal_unit_dto_local_var->total_tax_base_currency_id = total_tax_base_currency_id;
    extended_deal_unit_dto_local_var->total_taxes = total_taxes;
    extended_deal_unit_dto_local_var->total_taxes_currency_id = total_taxes_currency_id;
    extended_deal_unit_dto_local_var->total_shipping_cost = total_shipping_cost;
    extended_deal_unit_dto_local_var->total_shipping_cost_currency_id = total_shipping_cost_currency_id;
    extended_deal_unit_dto_local_var->total_shipping_tax = total_shipping_tax;
    extended_deal_unit_dto_local_var->total_shipping_tax_currency_id = total_shipping_tax_currency_id;
    extended_deal_unit_dto_local_var->total_withheld_tax = total_withheld_tax;
    extended_deal_unit_dto_local_var->total_withheld_tax_currency_id = total_withheld_tax_currency_id;
    extended_deal_unit_dto_local_var->total_global_discounts = total_global_discounts;
    extended_deal_unit_dto_local_var->total_global_discounts_currency_id = total_global_discounts_currency_id;
    extended_deal_unit_dto_local_var->total_global_surcharges = total_global_surcharges;
    extended_deal_unit_dto_local_var->total_global_surcharges_currency_id = total_global_surcharges_currency_id;
    extended_deal_unit_dto_local_var->total = total;
    extended_deal_unit_dto_local_var->total_currency_id = total_currency_id;
    extended_deal_unit_dto_local_var->total_detail_in_usd = total_detail_in_usd;
    extended_deal_unit_dto_local_var->total_profit_in_usd = total_profit_in_usd;
    extended_deal_unit_dto_local_var->total_discounts_in_usd = total_discounts_in_usd;
    extended_deal_unit_dto_local_var->total_surcharges_in_usd = total_surcharges_in_usd;
    extended_deal_unit_dto_local_var->total_tax_base_in_usd = total_tax_base_in_usd;
    extended_deal_unit_dto_local_var->total_taxes_in_usd = total_taxes_in_usd;
    extended_deal_unit_dto_local_var->total_withheld_taxes_in_usd = total_withheld_taxes_in_usd;
    extended_deal_unit_dto_local_var->total_shipping_cost_in_usd = total_shipping_cost_in_usd;
    extended_deal_unit_dto_local_var->total_shipping_taxes_in_usd = total_shipping_taxes_in_usd;
    extended_deal_unit_dto_local_var->total_global_discounts_in_usd = total_global_discounts_in_usd;
    extended_deal_unit_dto_local_var->total_global_surcharges_in_usd = total_global_surcharges_in_usd;
    extended_deal_unit_dto_local_var->total_in_usd = total_in_usd;
    extended_deal_unit_dto_local_var->ordered = ordered;
    extended_deal_unit_dto_local_var->deal_unit_feed_id = deal_unit_feed_id;
    extended_deal_unit_dto_local_var->deal_unit_flow_id = deal_unit_flow_id;
    extended_deal_unit_dto_local_var->deal_unit_flow_stage_id = deal_unit_flow_stage_id;
    extended_deal_unit_dto_local_var->billing_location_id = billing_location_id;
    extended_deal_unit_dto_local_var->shipping_location_id = shipping_location_id;
    extended_deal_unit_dto_local_var->partner_created = partner_created;
    extended_deal_unit_dto_local_var->partner_collaboration = partner_collaboration;
    extended_deal_unit_dto_local_var->proposed_solution = proposed_solution;
    extended_deal_unit_dto_local_var->current_situation = current_situation;
    extended_deal_unit_dto_local_var->customer_need = customer_need;
    extended_deal_unit_dto_local_var->won_date = won_date;
    extended_deal_unit_dto_local_var->lost_date = lost_date;
    extended_deal_unit_dto_local_var->expiry_date = expiry_date;
    extended_deal_unit_dto_local_var->delivered_date = delivered_date;
    extended_deal_unit_dto_local_var->closed_timestamp = closed_timestamp;
    extended_deal_unit_dto_local_var->expected_close_date = expected_close_date;
    extended_deal_unit_dto_local_var->deal_unit_status = deal_unit_status;
    extended_deal_unit_dto_local_var->deal_unit_purchase_process = deal_unit_purchase_process;
    extended_deal_unit_dto_local_var->deal_unit_forecast_category = deal_unit_forecast_category;
    extended_deal_unit_dto_local_var->deal_unit_amounts_calculation = deal_unit_amounts_calculation;
    extended_deal_unit_dto_local_var->lines_count = lines_count;
    extended_deal_unit_dto_local_var->custom_total_amount = custom_total_amount;
    extended_deal_unit_dto_local_var->custom_detail_amount = custom_detail_amount;
    extended_deal_unit_dto_local_var->custom_profit_amount = custom_profit_amount;
    extended_deal_unit_dto_local_var->custom_shipping_cost_amount = custom_shipping_cost_amount;
    extended_deal_unit_dto_local_var->custom_withholding_tax_amount = custom_withholding_tax_amount;
    extended_deal_unit_dto_local_var->custom_surcharges_amount = custom_surcharges_amount;
    extended_deal_unit_dto_local_var->custom_discounts_amount = custom_discounts_amount;
    extended_deal_unit_dto_local_var->custom_shipping_tax_amount = custom_shipping_tax_amount;
    extended_deal_unit_dto_local_var->user = user;
    extended_deal_unit_dto_local_var->tenant = tenant;
    extended_deal_unit_dto_local_var->individual = individual;
    extended_deal_unit_dto_local_var->organization = organization;
    extended_deal_unit_dto_local_var->receiver_tenant = receiver_tenant;
    extended_deal_unit_dto_local_var->enrollment = enrollment;

    return extended_deal_unit_dto_local_var;
}


void extended_deal_unit_dto_free(extended_deal_unit_dto_t *extended_deal_unit_dto) {
    if(NULL == extended_deal_unit_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (extended_deal_unit_dto->id) {
        free(extended_deal_unit_dto->id);
        extended_deal_unit_dto->id = NULL;
    }
    if (extended_deal_unit_dto->timestamp) {
        free(extended_deal_unit_dto->timestamp);
        extended_deal_unit_dto->timestamp = NULL;
    }
    if (extended_deal_unit_dto->type) {
        free(extended_deal_unit_dto->type);
        extended_deal_unit_dto->type = NULL;
    }
    if (extended_deal_unit_dto->title) {
        free(extended_deal_unit_dto->title);
        extended_deal_unit_dto->title = NULL;
    }
    if (extended_deal_unit_dto->user_id) {
        free(extended_deal_unit_dto->user_id);
        extended_deal_unit_dto->user_id = NULL;
    }
    if (extended_deal_unit_dto->tenant_id) {
        free(extended_deal_unit_dto->tenant_id);
        extended_deal_unit_dto->tenant_id = NULL;
    }
    if (extended_deal_unit_dto->description) {
        free(extended_deal_unit_dto->description);
        extended_deal_unit_dto->description = NULL;
    }
    if (extended_deal_unit_dto->price_list_id) {
        free(extended_deal_unit_dto->price_list_id);
        extended_deal_unit_dto->price_list_id = NULL;
    }
    if (extended_deal_unit_dto->enrollment_id) {
        free(extended_deal_unit_dto->enrollment_id);
        extended_deal_unit_dto->enrollment_id = NULL;
    }
    if (extended_deal_unit_dto->individual_id) {
        free(extended_deal_unit_dto->individual_id);
        extended_deal_unit_dto->individual_id = NULL;
    }
    if (extended_deal_unit_dto->organization_id) {
        free(extended_deal_unit_dto->organization_id);
        extended_deal_unit_dto->organization_id = NULL;
    }
    if (extended_deal_unit_dto->receiver_tenant_id) {
        free(extended_deal_unit_dto->receiver_tenant_id);
        extended_deal_unit_dto->receiver_tenant_id = NULL;
    }
    if (extended_deal_unit_dto->first_name) {
        free(extended_deal_unit_dto->first_name);
        extended_deal_unit_dto->first_name = NULL;
    }
    if (extended_deal_unit_dto->last_name) {
        free(extended_deal_unit_dto->last_name);
        extended_deal_unit_dto->last_name = NULL;
    }
    if (extended_deal_unit_dto->company_name) {
        free(extended_deal_unit_dto->company_name);
        extended_deal_unit_dto->company_name = NULL;
    }
    if (extended_deal_unit_dto->billing_email) {
        free(extended_deal_unit_dto->billing_email);
        extended_deal_unit_dto->billing_email = NULL;
    }
    if (extended_deal_unit_dto->address_line1) {
        free(extended_deal_unit_dto->address_line1);
        extended_deal_unit_dto->address_line1 = NULL;
    }
    if (extended_deal_unit_dto->address_line2) {
        free(extended_deal_unit_dto->address_line2);
        extended_deal_unit_dto->address_line2 = NULL;
    }
    if (extended_deal_unit_dto->postal_code) {
        free(extended_deal_unit_dto->postal_code);
        extended_deal_unit_dto->postal_code = NULL;
    }
    if (extended_deal_unit_dto->country_id) {
        free(extended_deal_unit_dto->country_id);
        extended_deal_unit_dto->country_id = NULL;
    }
    if (extended_deal_unit_dto->state_id) {
        free(extended_deal_unit_dto->state_id);
        extended_deal_unit_dto->state_id = NULL;
    }
    if (extended_deal_unit_dto->city_id) {
        free(extended_deal_unit_dto->city_id);
        extended_deal_unit_dto->city_id = NULL;
    }
    if (extended_deal_unit_dto->customer_notes) {
        free(extended_deal_unit_dto->customer_notes);
        extended_deal_unit_dto->customer_notes = NULL;
    }
    if (extended_deal_unit_dto->currency_id) {
        free(extended_deal_unit_dto->currency_id);
        extended_deal_unit_dto->currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_detail_currency_id) {
        free(extended_deal_unit_dto->total_detail_currency_id);
        extended_deal_unit_dto->total_detail_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_profit_currency_id) {
        free(extended_deal_unit_dto->total_profit_currency_id);
        extended_deal_unit_dto->total_profit_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_discounts_currency_id) {
        free(extended_deal_unit_dto->total_discounts_currency_id);
        extended_deal_unit_dto->total_discounts_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_surcharges_currency_id) {
        free(extended_deal_unit_dto->total_surcharges_currency_id);
        extended_deal_unit_dto->total_surcharges_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_tax_base_currency_id) {
        free(extended_deal_unit_dto->total_tax_base_currency_id);
        extended_deal_unit_dto->total_tax_base_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_taxes_currency_id) {
        free(extended_deal_unit_dto->total_taxes_currency_id);
        extended_deal_unit_dto->total_taxes_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_shipping_cost_currency_id) {
        free(extended_deal_unit_dto->total_shipping_cost_currency_id);
        extended_deal_unit_dto->total_shipping_cost_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_shipping_tax_currency_id) {
        free(extended_deal_unit_dto->total_shipping_tax_currency_id);
        extended_deal_unit_dto->total_shipping_tax_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_withheld_tax_currency_id) {
        free(extended_deal_unit_dto->total_withheld_tax_currency_id);
        extended_deal_unit_dto->total_withheld_tax_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_global_discounts_currency_id) {
        free(extended_deal_unit_dto->total_global_discounts_currency_id);
        extended_deal_unit_dto->total_global_discounts_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_global_surcharges_currency_id) {
        free(extended_deal_unit_dto->total_global_surcharges_currency_id);
        extended_deal_unit_dto->total_global_surcharges_currency_id = NULL;
    }
    if (extended_deal_unit_dto->total_currency_id) {
        free(extended_deal_unit_dto->total_currency_id);
        extended_deal_unit_dto->total_currency_id = NULL;
    }
    if (extended_deal_unit_dto->deal_unit_feed_id) {
        free(extended_deal_unit_dto->deal_unit_feed_id);
        extended_deal_unit_dto->deal_unit_feed_id = NULL;
    }
    if (extended_deal_unit_dto->deal_unit_flow_id) {
        free(extended_deal_unit_dto->deal_unit_flow_id);
        extended_deal_unit_dto->deal_unit_flow_id = NULL;
    }
    if (extended_deal_unit_dto->deal_unit_flow_stage_id) {
        free(extended_deal_unit_dto->deal_unit_flow_stage_id);
        extended_deal_unit_dto->deal_unit_flow_stage_id = NULL;
    }
    if (extended_deal_unit_dto->billing_location_id) {
        free(extended_deal_unit_dto->billing_location_id);
        extended_deal_unit_dto->billing_location_id = NULL;
    }
    if (extended_deal_unit_dto->shipping_location_id) {
        free(extended_deal_unit_dto->shipping_location_id);
        extended_deal_unit_dto->shipping_location_id = NULL;
    }
    if (extended_deal_unit_dto->proposed_solution) {
        free(extended_deal_unit_dto->proposed_solution);
        extended_deal_unit_dto->proposed_solution = NULL;
    }
    if (extended_deal_unit_dto->current_situation) {
        free(extended_deal_unit_dto->current_situation);
        extended_deal_unit_dto->current_situation = NULL;
    }
    if (extended_deal_unit_dto->customer_need) {
        free(extended_deal_unit_dto->customer_need);
        extended_deal_unit_dto->customer_need = NULL;
    }
    if (extended_deal_unit_dto->won_date) {
        free(extended_deal_unit_dto->won_date);
        extended_deal_unit_dto->won_date = NULL;
    }
    if (extended_deal_unit_dto->lost_date) {
        free(extended_deal_unit_dto->lost_date);
        extended_deal_unit_dto->lost_date = NULL;
    }
    if (extended_deal_unit_dto->expiry_date) {
        free(extended_deal_unit_dto->expiry_date);
        extended_deal_unit_dto->expiry_date = NULL;
    }
    if (extended_deal_unit_dto->delivered_date) {
        free(extended_deal_unit_dto->delivered_date);
        extended_deal_unit_dto->delivered_date = NULL;
    }
    if (extended_deal_unit_dto->closed_timestamp) {
        free(extended_deal_unit_dto->closed_timestamp);
        extended_deal_unit_dto->closed_timestamp = NULL;
    }
    if (extended_deal_unit_dto->expected_close_date) {
        free(extended_deal_unit_dto->expected_close_date);
        extended_deal_unit_dto->expected_close_date = NULL;
    }
    if (extended_deal_unit_dto->user) {
        user_dto_free(extended_deal_unit_dto->user);
        extended_deal_unit_dto->user = NULL;
    }
    if (extended_deal_unit_dto->tenant) {
        tenant_dto_free(extended_deal_unit_dto->tenant);
        extended_deal_unit_dto->tenant = NULL;
    }
    if (extended_deal_unit_dto->individual) {
        contact_dto_free(extended_deal_unit_dto->individual);
        extended_deal_unit_dto->individual = NULL;
    }
    if (extended_deal_unit_dto->organization) {
        contact_dto_free(extended_deal_unit_dto->organization);
        extended_deal_unit_dto->organization = NULL;
    }
    if (extended_deal_unit_dto->receiver_tenant) {
        tenant_dto_free(extended_deal_unit_dto->receiver_tenant);
        extended_deal_unit_dto->receiver_tenant = NULL;
    }
    if (extended_deal_unit_dto->enrollment) {
        tenant_enrollment_dto_free(extended_deal_unit_dto->enrollment);
        extended_deal_unit_dto->enrollment = NULL;
    }
    free(extended_deal_unit_dto);
}

cJSON *extended_deal_unit_dto_convertToJSON(extended_deal_unit_dto_t *extended_deal_unit_dto) {
    cJSON *item = cJSON_CreateObject();

    // extended_deal_unit_dto->id
    if(extended_deal_unit_dto->id) {
    if(cJSON_AddStringToObject(item, "id", extended_deal_unit_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->timestamp
    if(extended_deal_unit_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", extended_deal_unit_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->closed
    if(extended_deal_unit_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", extended_deal_unit_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_deal_unit_dto->type
    if(extended_deal_unit_dto->type) {
    if(cJSON_AddStringToObject(item, "type", extended_deal_unit_dto->type) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->title
    if(extended_deal_unit_dto->title) {
    if(cJSON_AddStringToObject(item, "title", extended_deal_unit_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->user_id
    if(extended_deal_unit_dto->user_id) {
    if(cJSON_AddStringToObject(item, "userId", extended_deal_unit_dto->user_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->tenant_id
    if(extended_deal_unit_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", extended_deal_unit_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->description
    if(extended_deal_unit_dto->description) {
    if(cJSON_AddStringToObject(item, "description", extended_deal_unit_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->price_list_id
    if(extended_deal_unit_dto->price_list_id) {
    if(cJSON_AddStringToObject(item, "priceListId", extended_deal_unit_dto->price_list_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->enrollment_id
    if(extended_deal_unit_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", extended_deal_unit_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->individual_id
    if(extended_deal_unit_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualId", extended_deal_unit_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->organization_id
    if(extended_deal_unit_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationId", extended_deal_unit_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->receiver_tenant_id
    if(extended_deal_unit_dto->receiver_tenant_id) {
    if(cJSON_AddStringToObject(item, "receiverTenantId", extended_deal_unit_dto->receiver_tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->first_name
    if(extended_deal_unit_dto->first_name) {
    if(cJSON_AddStringToObject(item, "firstName", extended_deal_unit_dto->first_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->last_name
    if(extended_deal_unit_dto->last_name) {
    if(cJSON_AddStringToObject(item, "lastName", extended_deal_unit_dto->last_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->company_name
    if(extended_deal_unit_dto->company_name) {
    if(cJSON_AddStringToObject(item, "companyName", extended_deal_unit_dto->company_name) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->billing_email
    if(extended_deal_unit_dto->billing_email) {
    if(cJSON_AddStringToObject(item, "billingEmail", extended_deal_unit_dto->billing_email) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->address_line1
    if(extended_deal_unit_dto->address_line1) {
    if(cJSON_AddStringToObject(item, "addressLine1", extended_deal_unit_dto->address_line1) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->address_line2
    if(extended_deal_unit_dto->address_line2) {
    if(cJSON_AddStringToObject(item, "addressLine2", extended_deal_unit_dto->address_line2) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->postal_code
    if(extended_deal_unit_dto->postal_code) {
    if(cJSON_AddStringToObject(item, "postalCode", extended_deal_unit_dto->postal_code) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->country_id
    if(extended_deal_unit_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", extended_deal_unit_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->state_id
    if(extended_deal_unit_dto->state_id) {
    if(cJSON_AddStringToObject(item, "stateId", extended_deal_unit_dto->state_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->city_id
    if(extended_deal_unit_dto->city_id) {
    if(cJSON_AddStringToObject(item, "cityId", extended_deal_unit_dto->city_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->customer_notes
    if(extended_deal_unit_dto->customer_notes) {
    if(cJSON_AddStringToObject(item, "customerNotes", extended_deal_unit_dto->customer_notes) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->tax_calculation_method
    if(extended_deal_unit_dto->tax_calculation_method != dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "taxCalculationMethod", tax_calculation_methodextended_deal_unit_dto_ToString(extended_deal_unit_dto->tax_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->cost_calculation_method
    if(extended_deal_unit_dto->cost_calculation_method != dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_NULL) {
    if(cJSON_AddStringToObject(item, "costCalculationMethod", cost_calculation_methodextended_deal_unit_dto_ToString(extended_deal_unit_dto->cost_calculation_method)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->forex_rate
    if(extended_deal_unit_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", extended_deal_unit_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->currency_id
    if(extended_deal_unit_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", extended_deal_unit_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_detail
    if(extended_deal_unit_dto->total_detail) {
    if(cJSON_AddNumberToObject(item, "totalDetail", extended_deal_unit_dto->total_detail) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_detail_currency_id
    if(extended_deal_unit_dto->total_detail_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDetailCurrencyId", extended_deal_unit_dto->total_detail_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_profit
    if(extended_deal_unit_dto->total_profit) {
    if(cJSON_AddNumberToObject(item, "totalProfit", extended_deal_unit_dto->total_profit) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_profit_currency_id
    if(extended_deal_unit_dto->total_profit_currency_id) {
    if(cJSON_AddStringToObject(item, "totalProfitCurrencyId", extended_deal_unit_dto->total_profit_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_discounts
    if(extended_deal_unit_dto->total_discounts) {
    if(cJSON_AddNumberToObject(item, "totalDiscounts", extended_deal_unit_dto->total_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_discounts_currency_id
    if(extended_deal_unit_dto->total_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalDiscountsCurrencyId", extended_deal_unit_dto->total_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_surcharges
    if(extended_deal_unit_dto->total_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalSurcharges", extended_deal_unit_dto->total_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_surcharges_currency_id
    if(extended_deal_unit_dto->total_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalSurchargesCurrencyId", extended_deal_unit_dto->total_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_tax_base
    if(extended_deal_unit_dto->total_tax_base) {
    if(cJSON_AddNumberToObject(item, "totalTaxBase", extended_deal_unit_dto->total_tax_base) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_tax_base_currency_id
    if(extended_deal_unit_dto->total_tax_base_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxBaseCurrencyId", extended_deal_unit_dto->total_tax_base_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_taxes
    if(extended_deal_unit_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", extended_deal_unit_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_taxes_currency_id
    if(extended_deal_unit_dto->total_taxes_currency_id) {
    if(cJSON_AddStringToObject(item, "totalTaxesCurrencyId", extended_deal_unit_dto->total_taxes_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_shipping_cost
    if(extended_deal_unit_dto->total_shipping_cost) {
    if(cJSON_AddNumberToObject(item, "totalShippingCost", extended_deal_unit_dto->total_shipping_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_shipping_cost_currency_id
    if(extended_deal_unit_dto->total_shipping_cost_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingCostCurrencyId", extended_deal_unit_dto->total_shipping_cost_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_shipping_tax
    if(extended_deal_unit_dto->total_shipping_tax) {
    if(cJSON_AddNumberToObject(item, "totalShippingTax", extended_deal_unit_dto->total_shipping_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_shipping_tax_currency_id
    if(extended_deal_unit_dto->total_shipping_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalShippingTaxCurrencyId", extended_deal_unit_dto->total_shipping_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_withheld_tax
    if(extended_deal_unit_dto->total_withheld_tax) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTax", extended_deal_unit_dto->total_withheld_tax) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_withheld_tax_currency_id
    if(extended_deal_unit_dto->total_withheld_tax_currency_id) {
    if(cJSON_AddStringToObject(item, "totalWithheldTaxCurrencyId", extended_deal_unit_dto->total_withheld_tax_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_global_discounts
    if(extended_deal_unit_dto->total_global_discounts) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscounts", extended_deal_unit_dto->total_global_discounts) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_global_discounts_currency_id
    if(extended_deal_unit_dto->total_global_discounts_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalDiscountsCurrencyId", extended_deal_unit_dto->total_global_discounts_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_global_surcharges
    if(extended_deal_unit_dto->total_global_surcharges) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurcharges", extended_deal_unit_dto->total_global_surcharges) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_global_surcharges_currency_id
    if(extended_deal_unit_dto->total_global_surcharges_currency_id) {
    if(cJSON_AddStringToObject(item, "totalGlobalSurchargesCurrencyId", extended_deal_unit_dto->total_global_surcharges_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total
    if(extended_deal_unit_dto->total) {
    if(cJSON_AddNumberToObject(item, "total", extended_deal_unit_dto->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_currency_id
    if(extended_deal_unit_dto->total_currency_id) {
    if(cJSON_AddStringToObject(item, "totalCurrencyId", extended_deal_unit_dto->total_currency_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->total_detail_in_usd
    if(extended_deal_unit_dto->total_detail_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDetailInUsd", extended_deal_unit_dto->total_detail_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_profit_in_usd
    if(extended_deal_unit_dto->total_profit_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalProfitInUsd", extended_deal_unit_dto->total_profit_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_discounts_in_usd
    if(extended_deal_unit_dto->total_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalDiscountsInUsd", extended_deal_unit_dto->total_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_surcharges_in_usd
    if(extended_deal_unit_dto->total_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalSurchargesInUsd", extended_deal_unit_dto->total_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_tax_base_in_usd
    if(extended_deal_unit_dto->total_tax_base_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxBaseInUsd", extended_deal_unit_dto->total_tax_base_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_taxes_in_usd
    if(extended_deal_unit_dto->total_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalTaxesInUsd", extended_deal_unit_dto->total_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_withheld_taxes_in_usd
    if(extended_deal_unit_dto->total_withheld_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalWithheldTaxesInUsd", extended_deal_unit_dto->total_withheld_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_shipping_cost_in_usd
    if(extended_deal_unit_dto->total_shipping_cost_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingCostInUsd", extended_deal_unit_dto->total_shipping_cost_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_shipping_taxes_in_usd
    if(extended_deal_unit_dto->total_shipping_taxes_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalShippingTaxesInUsd", extended_deal_unit_dto->total_shipping_taxes_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_global_discounts_in_usd
    if(extended_deal_unit_dto->total_global_discounts_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalDiscountsInUsd", extended_deal_unit_dto->total_global_discounts_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_global_surcharges_in_usd
    if(extended_deal_unit_dto->total_global_surcharges_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalGlobalSurchargesInUsd", extended_deal_unit_dto->total_global_surcharges_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->total_in_usd
    if(extended_deal_unit_dto->total_in_usd) {
    if(cJSON_AddNumberToObject(item, "totalInUsd", extended_deal_unit_dto->total_in_usd) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->ordered
    if(extended_deal_unit_dto->ordered) {
    if(cJSON_AddBoolToObject(item, "ordered", extended_deal_unit_dto->ordered) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_deal_unit_dto->deal_unit_feed_id
    if(extended_deal_unit_dto->deal_unit_feed_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFeedId", extended_deal_unit_dto->deal_unit_feed_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->deal_unit_flow_id
    if(extended_deal_unit_dto->deal_unit_flow_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFlowId", extended_deal_unit_dto->deal_unit_flow_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->deal_unit_flow_stage_id
    if(extended_deal_unit_dto->deal_unit_flow_stage_id) {
    if(cJSON_AddStringToObject(item, "dealUnitFlowStageId", extended_deal_unit_dto->deal_unit_flow_stage_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->billing_location_id
    if(extended_deal_unit_dto->billing_location_id) {
    if(cJSON_AddStringToObject(item, "billingLocationId", extended_deal_unit_dto->billing_location_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->shipping_location_id
    if(extended_deal_unit_dto->shipping_location_id) {
    if(cJSON_AddStringToObject(item, "shippingLocationId", extended_deal_unit_dto->shipping_location_id) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->partner_created
    if(extended_deal_unit_dto->partner_created) {
    if(cJSON_AddBoolToObject(item, "partnerCreated", extended_deal_unit_dto->partner_created) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_deal_unit_dto->partner_collaboration
    if(extended_deal_unit_dto->partner_collaboration) {
    if(cJSON_AddBoolToObject(item, "partnerCollaboration", extended_deal_unit_dto->partner_collaboration) == NULL) {
    goto fail; //Bool
    }
    }


    // extended_deal_unit_dto->proposed_solution
    if(extended_deal_unit_dto->proposed_solution) {
    if(cJSON_AddStringToObject(item, "proposedSolution", extended_deal_unit_dto->proposed_solution) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->current_situation
    if(extended_deal_unit_dto->current_situation) {
    if(cJSON_AddStringToObject(item, "currentSituation", extended_deal_unit_dto->current_situation) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->customer_need
    if(extended_deal_unit_dto->customer_need) {
    if(cJSON_AddStringToObject(item, "customerNeed", extended_deal_unit_dto->customer_need) == NULL) {
    goto fail; //String
    }
    }


    // extended_deal_unit_dto->won_date
    if(extended_deal_unit_dto->won_date) {
    if(cJSON_AddStringToObject(item, "wonDate", extended_deal_unit_dto->won_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->lost_date
    if(extended_deal_unit_dto->lost_date) {
    if(cJSON_AddStringToObject(item, "lostDate", extended_deal_unit_dto->lost_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->expiry_date
    if(extended_deal_unit_dto->expiry_date) {
    if(cJSON_AddStringToObject(item, "expiryDate", extended_deal_unit_dto->expiry_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->delivered_date
    if(extended_deal_unit_dto->delivered_date) {
    if(cJSON_AddStringToObject(item, "deliveredDate", extended_deal_unit_dto->delivered_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->closed_timestamp
    if(extended_deal_unit_dto->closed_timestamp) {
    if(cJSON_AddStringToObject(item, "closedTimestamp", extended_deal_unit_dto->closed_timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->expected_close_date
    if(extended_deal_unit_dto->expected_close_date) {
    if(cJSON_AddStringToObject(item, "expectedCloseDate", extended_deal_unit_dto->expected_close_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // extended_deal_unit_dto->deal_unit_status
    if(extended_deal_unit_dto->deal_unit_status != dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitStatus", deal_unit_statusextended_deal_unit_dto_ToString(extended_deal_unit_dto->deal_unit_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->deal_unit_purchase_process
    if(extended_deal_unit_dto->deal_unit_purchase_process != dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitPurchaseProcess", deal_unit_purchase_processextended_deal_unit_dto_ToString(extended_deal_unit_dto->deal_unit_purchase_process)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->deal_unit_forecast_category
    if(extended_deal_unit_dto->deal_unit_forecast_category != dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitForecastCategory", deal_unit_forecast_categoryextended_deal_unit_dto_ToString(extended_deal_unit_dto->deal_unit_forecast_category)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->deal_unit_amounts_calculation
    if(extended_deal_unit_dto->deal_unit_amounts_calculation != dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_NULL) {
    if(cJSON_AddStringToObject(item, "dealUnitAmountsCalculation", deal_unit_amounts_calculationextended_deal_unit_dto_ToString(extended_deal_unit_dto->deal_unit_amounts_calculation)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // extended_deal_unit_dto->lines_count
    if(extended_deal_unit_dto->lines_count) {
    if(cJSON_AddNumberToObject(item, "linesCount", extended_deal_unit_dto->lines_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_total_amount
    if(extended_deal_unit_dto->custom_total_amount) {
    if(cJSON_AddNumberToObject(item, "customTotalAmount", extended_deal_unit_dto->custom_total_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_detail_amount
    if(extended_deal_unit_dto->custom_detail_amount) {
    if(cJSON_AddNumberToObject(item, "customDetailAmount", extended_deal_unit_dto->custom_detail_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_profit_amount
    if(extended_deal_unit_dto->custom_profit_amount) {
    if(cJSON_AddNumberToObject(item, "customProfitAmount", extended_deal_unit_dto->custom_profit_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_shipping_cost_amount
    if(extended_deal_unit_dto->custom_shipping_cost_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingCostAmount", extended_deal_unit_dto->custom_shipping_cost_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_withholding_tax_amount
    if(extended_deal_unit_dto->custom_withholding_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customWithholdingTaxAmount", extended_deal_unit_dto->custom_withholding_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_surcharges_amount
    if(extended_deal_unit_dto->custom_surcharges_amount) {
    if(cJSON_AddNumberToObject(item, "customSurchargesAmount", extended_deal_unit_dto->custom_surcharges_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_discounts_amount
    if(extended_deal_unit_dto->custom_discounts_amount) {
    if(cJSON_AddNumberToObject(item, "customDiscountsAmount", extended_deal_unit_dto->custom_discounts_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->custom_shipping_tax_amount
    if(extended_deal_unit_dto->custom_shipping_tax_amount) {
    if(cJSON_AddNumberToObject(item, "customShippingTaxAmount", extended_deal_unit_dto->custom_shipping_tax_amount) == NULL) {
    goto fail; //Numeric
    }
    }


    // extended_deal_unit_dto->user
    if(extended_deal_unit_dto->user) {
    cJSON *user_local_JSON = user_dto_convertToJSON(extended_deal_unit_dto->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_deal_unit_dto->tenant
    if(extended_deal_unit_dto->tenant) {
    cJSON *tenant_local_JSON = tenant_dto_convertToJSON(extended_deal_unit_dto->tenant);
    if(tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tenant", tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_deal_unit_dto->individual
    if(extended_deal_unit_dto->individual) {
    cJSON *individual_local_JSON = contact_dto_convertToJSON(extended_deal_unit_dto->individual);
    if(individual_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "individual", individual_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_deal_unit_dto->organization
    if(extended_deal_unit_dto->organization) {
    cJSON *organization_local_JSON = contact_dto_convertToJSON(extended_deal_unit_dto->organization);
    if(organization_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "organization", organization_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_deal_unit_dto->receiver_tenant
    if(extended_deal_unit_dto->receiver_tenant) {
    cJSON *receiver_tenant_local_JSON = tenant_dto_convertToJSON(extended_deal_unit_dto->receiver_tenant);
    if(receiver_tenant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "receiverTenant", receiver_tenant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // extended_deal_unit_dto->enrollment
    if(extended_deal_unit_dto->enrollment) {
    cJSON *enrollment_local_JSON = tenant_enrollment_dto_convertToJSON(extended_deal_unit_dto->enrollment);
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

extended_deal_unit_dto_t *extended_deal_unit_dto_parseFromJSON(cJSON *extended_deal_unit_dtoJSON){

    extended_deal_unit_dto_t *extended_deal_unit_dto_local_var = NULL;

    // define the local variable for extended_deal_unit_dto->user
    user_dto_t *user_local_nonprim = NULL;

    // define the local variable for extended_deal_unit_dto->tenant
    tenant_dto_t *tenant_local_nonprim = NULL;

    // define the local variable for extended_deal_unit_dto->individual
    contact_dto_t *individual_local_nonprim = NULL;

    // define the local variable for extended_deal_unit_dto->organization
    contact_dto_t *organization_local_nonprim = NULL;

    // define the local variable for extended_deal_unit_dto->receiver_tenant
    tenant_dto_t *receiver_tenant_local_nonprim = NULL;

    // define the local variable for extended_deal_unit_dto->enrollment
    tenant_enrollment_dto_t *enrollment_local_nonprim = NULL;

    // extended_deal_unit_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // extended_deal_unit_dto->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "userId");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->price_list_id
    cJSON *price_list_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "priceListId");
    if (price_list_id) { 
    if(!cJSON_IsString(price_list_id) && !cJSON_IsNull(price_list_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "individualId");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "organizationId");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->receiver_tenant_id
    cJSON *receiver_tenant_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "receiverTenantId");
    if (receiver_tenant_id) { 
    if(!cJSON_IsString(receiver_tenant_id) && !cJSON_IsNull(receiver_tenant_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->first_name
    cJSON *first_name = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "firstName");
    if (first_name) { 
    if(!cJSON_IsString(first_name) && !cJSON_IsNull(first_name))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->last_name
    cJSON *last_name = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "lastName");
    if (last_name) { 
    if(!cJSON_IsString(last_name) && !cJSON_IsNull(last_name))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->company_name
    cJSON *company_name = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "companyName");
    if (company_name) { 
    if(!cJSON_IsString(company_name) && !cJSON_IsNull(company_name))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->billing_email
    cJSON *billing_email = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "billingEmail");
    if (billing_email) { 
    if(!cJSON_IsString(billing_email) && !cJSON_IsNull(billing_email))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->address_line1
    cJSON *address_line1 = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "addressLine1");
    if (address_line1) { 
    if(!cJSON_IsString(address_line1) && !cJSON_IsNull(address_line1))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->address_line2
    cJSON *address_line2 = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "addressLine2");
    if (address_line2) { 
    if(!cJSON_IsString(address_line2) && !cJSON_IsNull(address_line2))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->postal_code
    cJSON *postal_code = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "postalCode");
    if (postal_code) { 
    if(!cJSON_IsString(postal_code) && !cJSON_IsNull(postal_code))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->state_id
    cJSON *state_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "stateId");
    if (state_id) { 
    if(!cJSON_IsString(state_id) && !cJSON_IsNull(state_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->city_id
    cJSON *city_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "cityId");
    if (city_id) { 
    if(!cJSON_IsString(city_id) && !cJSON_IsNull(city_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->customer_notes
    cJSON *customer_notes = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customerNotes");
    if (customer_notes) { 
    if(!cJSON_IsString(customer_notes) && !cJSON_IsNull(customer_notes))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->tax_calculation_method
    cJSON *tax_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "taxCalculationMethod");
    dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_methodVariable;
    if (tax_calculation_method) { 
    if(!cJSON_IsString(tax_calculation_method))
    {
    goto end; //Enum
    }
    tax_calculation_methodVariable = extended_deal_unit_dto_tax_calculation_method_FromString(tax_calculation_method->valuestring);
    }

    // extended_deal_unit_dto->cost_calculation_method
    cJSON *cost_calculation_method = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "costCalculationMethod");
    dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_methodVariable;
    if (cost_calculation_method) { 
    if(!cJSON_IsString(cost_calculation_method))
    {
    goto end; //Enum
    }
    cost_calculation_methodVariable = extended_deal_unit_dto_cost_calculation_method_FromString(cost_calculation_method->valuestring);
    }

    // extended_deal_unit_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_detail
    cJSON *total_detail = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDetail");
    if (total_detail) { 
    if(!cJSON_IsNumber(total_detail))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_detail_currency_id
    cJSON *total_detail_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDetailCurrencyId");
    if (total_detail_currency_id) { 
    if(!cJSON_IsString(total_detail_currency_id) && !cJSON_IsNull(total_detail_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_profit
    cJSON *total_profit = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalProfit");
    if (total_profit) { 
    if(!cJSON_IsNumber(total_profit))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_profit_currency_id
    cJSON *total_profit_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalProfitCurrencyId");
    if (total_profit_currency_id) { 
    if(!cJSON_IsString(total_profit_currency_id) && !cJSON_IsNull(total_profit_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_discounts
    cJSON *total_discounts = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDiscounts");
    if (total_discounts) { 
    if(!cJSON_IsNumber(total_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_discounts_currency_id
    cJSON *total_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDiscountsCurrencyId");
    if (total_discounts_currency_id) { 
    if(!cJSON_IsString(total_discounts_currency_id) && !cJSON_IsNull(total_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_surcharges
    cJSON *total_surcharges = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalSurcharges");
    if (total_surcharges) { 
    if(!cJSON_IsNumber(total_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_surcharges_currency_id
    cJSON *total_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalSurchargesCurrencyId");
    if (total_surcharges_currency_id) { 
    if(!cJSON_IsString(total_surcharges_currency_id) && !cJSON_IsNull(total_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_tax_base
    cJSON *total_tax_base = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxBase");
    if (total_tax_base) { 
    if(!cJSON_IsNumber(total_tax_base))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_tax_base_currency_id
    cJSON *total_tax_base_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxBaseCurrencyId");
    if (total_tax_base_currency_id) { 
    if(!cJSON_IsString(total_tax_base_currency_id) && !cJSON_IsNull(total_tax_base_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_taxes_currency_id
    cJSON *total_taxes_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxesCurrencyId");
    if (total_taxes_currency_id) { 
    if(!cJSON_IsString(total_taxes_currency_id) && !cJSON_IsNull(total_taxes_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_shipping_cost
    cJSON *total_shipping_cost = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingCost");
    if (total_shipping_cost) { 
    if(!cJSON_IsNumber(total_shipping_cost))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_shipping_cost_currency_id
    cJSON *total_shipping_cost_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingCostCurrencyId");
    if (total_shipping_cost_currency_id) { 
    if(!cJSON_IsString(total_shipping_cost_currency_id) && !cJSON_IsNull(total_shipping_cost_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_shipping_tax
    cJSON *total_shipping_tax = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingTax");
    if (total_shipping_tax) { 
    if(!cJSON_IsNumber(total_shipping_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_shipping_tax_currency_id
    cJSON *total_shipping_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingTaxCurrencyId");
    if (total_shipping_tax_currency_id) { 
    if(!cJSON_IsString(total_shipping_tax_currency_id) && !cJSON_IsNull(total_shipping_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_withheld_tax
    cJSON *total_withheld_tax = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalWithheldTax");
    if (total_withheld_tax) { 
    if(!cJSON_IsNumber(total_withheld_tax))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_withheld_tax_currency_id
    cJSON *total_withheld_tax_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalWithheldTaxCurrencyId");
    if (total_withheld_tax_currency_id) { 
    if(!cJSON_IsString(total_withheld_tax_currency_id) && !cJSON_IsNull(total_withheld_tax_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_global_discounts
    cJSON *total_global_discounts = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalDiscounts");
    if (total_global_discounts) { 
    if(!cJSON_IsNumber(total_global_discounts))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_global_discounts_currency_id
    cJSON *total_global_discounts_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalDiscountsCurrencyId");
    if (total_global_discounts_currency_id) { 
    if(!cJSON_IsString(total_global_discounts_currency_id) && !cJSON_IsNull(total_global_discounts_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_global_surcharges
    cJSON *total_global_surcharges = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalSurcharges");
    if (total_global_surcharges) { 
    if(!cJSON_IsNumber(total_global_surcharges))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_global_surcharges_currency_id
    cJSON *total_global_surcharges_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalSurchargesCurrencyId");
    if (total_global_surcharges_currency_id) { 
    if(!cJSON_IsString(total_global_surcharges_currency_id) && !cJSON_IsNull(total_global_surcharges_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_currency_id
    cJSON *total_currency_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalCurrencyId");
    if (total_currency_id) { 
    if(!cJSON_IsString(total_currency_id) && !cJSON_IsNull(total_currency_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->total_detail_in_usd
    cJSON *total_detail_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDetailInUsd");
    if (total_detail_in_usd) { 
    if(!cJSON_IsNumber(total_detail_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_profit_in_usd
    cJSON *total_profit_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalProfitInUsd");
    if (total_profit_in_usd) { 
    if(!cJSON_IsNumber(total_profit_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_discounts_in_usd
    cJSON *total_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalDiscountsInUsd");
    if (total_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_surcharges_in_usd
    cJSON *total_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalSurchargesInUsd");
    if (total_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_tax_base_in_usd
    cJSON *total_tax_base_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxBaseInUsd");
    if (total_tax_base_in_usd) { 
    if(!cJSON_IsNumber(total_tax_base_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_taxes_in_usd
    cJSON *total_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalTaxesInUsd");
    if (total_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_withheld_taxes_in_usd
    cJSON *total_withheld_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalWithheldTaxesInUsd");
    if (total_withheld_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_withheld_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_shipping_cost_in_usd
    cJSON *total_shipping_cost_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingCostInUsd");
    if (total_shipping_cost_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_cost_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_shipping_taxes_in_usd
    cJSON *total_shipping_taxes_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalShippingTaxesInUsd");
    if (total_shipping_taxes_in_usd) { 
    if(!cJSON_IsNumber(total_shipping_taxes_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_global_discounts_in_usd
    cJSON *total_global_discounts_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalDiscountsInUsd");
    if (total_global_discounts_in_usd) { 
    if(!cJSON_IsNumber(total_global_discounts_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_global_surcharges_in_usd
    cJSON *total_global_surcharges_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalGlobalSurchargesInUsd");
    if (total_global_surcharges_in_usd) { 
    if(!cJSON_IsNumber(total_global_surcharges_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->total_in_usd
    cJSON *total_in_usd = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "totalInUsd");
    if (total_in_usd) { 
    if(!cJSON_IsNumber(total_in_usd))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->ordered
    cJSON *ordered = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "ordered");
    if (ordered) { 
    if(!cJSON_IsBool(ordered))
    {
    goto end; //Bool
    }
    }

    // extended_deal_unit_dto->deal_unit_feed_id
    cJSON *deal_unit_feed_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitFeedId");
    if (deal_unit_feed_id) { 
    if(!cJSON_IsString(deal_unit_feed_id) && !cJSON_IsNull(deal_unit_feed_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->deal_unit_flow_id
    cJSON *deal_unit_flow_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitFlowId");
    if (deal_unit_flow_id) { 
    if(!cJSON_IsString(deal_unit_flow_id) && !cJSON_IsNull(deal_unit_flow_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->deal_unit_flow_stage_id
    cJSON *deal_unit_flow_stage_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitFlowStageId");
    if (deal_unit_flow_stage_id) { 
    if(!cJSON_IsString(deal_unit_flow_stage_id) && !cJSON_IsNull(deal_unit_flow_stage_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->billing_location_id
    cJSON *billing_location_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "billingLocationId");
    if (billing_location_id) { 
    if(!cJSON_IsString(billing_location_id) && !cJSON_IsNull(billing_location_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->shipping_location_id
    cJSON *shipping_location_id = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "shippingLocationId");
    if (shipping_location_id) { 
    if(!cJSON_IsString(shipping_location_id) && !cJSON_IsNull(shipping_location_id))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->partner_created
    cJSON *partner_created = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "partnerCreated");
    if (partner_created) { 
    if(!cJSON_IsBool(partner_created))
    {
    goto end; //Bool
    }
    }

    // extended_deal_unit_dto->partner_collaboration
    cJSON *partner_collaboration = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "partnerCollaboration");
    if (partner_collaboration) { 
    if(!cJSON_IsBool(partner_collaboration))
    {
    goto end; //Bool
    }
    }

    // extended_deal_unit_dto->proposed_solution
    cJSON *proposed_solution = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "proposedSolution");
    if (proposed_solution) { 
    if(!cJSON_IsString(proposed_solution) && !cJSON_IsNull(proposed_solution))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->current_situation
    cJSON *current_situation = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "currentSituation");
    if (current_situation) { 
    if(!cJSON_IsString(current_situation) && !cJSON_IsNull(current_situation))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->customer_need
    cJSON *customer_need = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customerNeed");
    if (customer_need) { 
    if(!cJSON_IsString(customer_need) && !cJSON_IsNull(customer_need))
    {
    goto end; //String
    }
    }

    // extended_deal_unit_dto->won_date
    cJSON *won_date = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "wonDate");
    if (won_date) { 
    if(!cJSON_IsString(won_date) && !cJSON_IsNull(won_date))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->lost_date
    cJSON *lost_date = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "lostDate");
    if (lost_date) { 
    if(!cJSON_IsString(lost_date) && !cJSON_IsNull(lost_date))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->expiry_date
    cJSON *expiry_date = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "expiryDate");
    if (expiry_date) { 
    if(!cJSON_IsString(expiry_date) && !cJSON_IsNull(expiry_date))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->delivered_date
    cJSON *delivered_date = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "deliveredDate");
    if (delivered_date) { 
    if(!cJSON_IsString(delivered_date) && !cJSON_IsNull(delivered_date))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->closed_timestamp
    cJSON *closed_timestamp = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "closedTimestamp");
    if (closed_timestamp) { 
    if(!cJSON_IsString(closed_timestamp) && !cJSON_IsNull(closed_timestamp))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->expected_close_date
    cJSON *expected_close_date = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "expectedCloseDate");
    if (expected_close_date) { 
    if(!cJSON_IsString(expected_close_date) && !cJSON_IsNull(expected_close_date))
    {
    goto end; //DateTime
    }
    }

    // extended_deal_unit_dto->deal_unit_status
    cJSON *deal_unit_status = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitStatus");
    dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_e deal_unit_statusVariable;
    if (deal_unit_status) { 
    if(!cJSON_IsString(deal_unit_status))
    {
    goto end; //Enum
    }
    deal_unit_statusVariable = extended_deal_unit_dto_deal_unit_status_FromString(deal_unit_status->valuestring);
    }

    // extended_deal_unit_dto->deal_unit_purchase_process
    cJSON *deal_unit_purchase_process = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitPurchaseProcess");
    dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_processVariable;
    if (deal_unit_purchase_process) { 
    if(!cJSON_IsString(deal_unit_purchase_process))
    {
    goto end; //Enum
    }
    deal_unit_purchase_processVariable = extended_deal_unit_dto_deal_unit_purchase_process_FromString(deal_unit_purchase_process->valuestring);
    }

    // extended_deal_unit_dto->deal_unit_forecast_category
    cJSON *deal_unit_forecast_category = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitForecastCategory");
    dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_categoryVariable;
    if (deal_unit_forecast_category) { 
    if(!cJSON_IsString(deal_unit_forecast_category))
    {
    goto end; //Enum
    }
    deal_unit_forecast_categoryVariable = extended_deal_unit_dto_deal_unit_forecast_category_FromString(deal_unit_forecast_category->valuestring);
    }

    // extended_deal_unit_dto->deal_unit_amounts_calculation
    cJSON *deal_unit_amounts_calculation = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "dealUnitAmountsCalculation");
    dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculationVariable;
    if (deal_unit_amounts_calculation) { 
    if(!cJSON_IsString(deal_unit_amounts_calculation))
    {
    goto end; //Enum
    }
    deal_unit_amounts_calculationVariable = extended_deal_unit_dto_deal_unit_amounts_calculation_FromString(deal_unit_amounts_calculation->valuestring);
    }

    // extended_deal_unit_dto->lines_count
    cJSON *lines_count = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "linesCount");
    if (lines_count) { 
    if(!cJSON_IsNumber(lines_count))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_total_amount
    cJSON *custom_total_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customTotalAmount");
    if (custom_total_amount) { 
    if(!cJSON_IsNumber(custom_total_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_detail_amount
    cJSON *custom_detail_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customDetailAmount");
    if (custom_detail_amount) { 
    if(!cJSON_IsNumber(custom_detail_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_profit_amount
    cJSON *custom_profit_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customProfitAmount");
    if (custom_profit_amount) { 
    if(!cJSON_IsNumber(custom_profit_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_shipping_cost_amount
    cJSON *custom_shipping_cost_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customShippingCostAmount");
    if (custom_shipping_cost_amount) { 
    if(!cJSON_IsNumber(custom_shipping_cost_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_withholding_tax_amount
    cJSON *custom_withholding_tax_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customWithholdingTaxAmount");
    if (custom_withholding_tax_amount) { 
    if(!cJSON_IsNumber(custom_withholding_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_surcharges_amount
    cJSON *custom_surcharges_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customSurchargesAmount");
    if (custom_surcharges_amount) { 
    if(!cJSON_IsNumber(custom_surcharges_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_discounts_amount
    cJSON *custom_discounts_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customDiscountsAmount");
    if (custom_discounts_amount) { 
    if(!cJSON_IsNumber(custom_discounts_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->custom_shipping_tax_amount
    cJSON *custom_shipping_tax_amount = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "customShippingTaxAmount");
    if (custom_shipping_tax_amount) { 
    if(!cJSON_IsNumber(custom_shipping_tax_amount))
    {
    goto end; //Numeric
    }
    }

    // extended_deal_unit_dto->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "user");
    if (user) { 
    user_local_nonprim = user_dto_parseFromJSON(user); //nonprimitive
    }

    // extended_deal_unit_dto->tenant
    cJSON *tenant = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "tenant");
    if (tenant) { 
    tenant_local_nonprim = tenant_dto_parseFromJSON(tenant); //nonprimitive
    }

    // extended_deal_unit_dto->individual
    cJSON *individual = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "individual");
    if (individual) { 
    individual_local_nonprim = contact_dto_parseFromJSON(individual); //nonprimitive
    }

    // extended_deal_unit_dto->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "organization");
    if (organization) { 
    organization_local_nonprim = contact_dto_parseFromJSON(organization); //nonprimitive
    }

    // extended_deal_unit_dto->receiver_tenant
    cJSON *receiver_tenant = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "receiverTenant");
    if (receiver_tenant) { 
    receiver_tenant_local_nonprim = tenant_dto_parseFromJSON(receiver_tenant); //nonprimitive
    }

    // extended_deal_unit_dto->enrollment
    cJSON *enrollment = cJSON_GetObjectItemCaseSensitive(extended_deal_unit_dtoJSON, "enrollment");
    if (enrollment) { 
    enrollment_local_nonprim = tenant_enrollment_dto_parseFromJSON(enrollment); //nonprimitive
    }


    extended_deal_unit_dto_local_var = extended_deal_unit_dto_create (
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
        tax_calculation_method ? tax_calculation_methodVariable : dealsservice_extended_deal_unit_dto_TAXCALCULATIONMETHOD_NULL,
        cost_calculation_method ? cost_calculation_methodVariable : dealsservice_extended_deal_unit_dto_COSTCALCULATIONMETHOD_NULL,
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
        ordered ? ordered->valueint : 0,
        deal_unit_feed_id && !cJSON_IsNull(deal_unit_feed_id) ? strdup(deal_unit_feed_id->valuestring) : NULL,
        deal_unit_flow_id && !cJSON_IsNull(deal_unit_flow_id) ? strdup(deal_unit_flow_id->valuestring) : NULL,
        deal_unit_flow_stage_id && !cJSON_IsNull(deal_unit_flow_stage_id) ? strdup(deal_unit_flow_stage_id->valuestring) : NULL,
        billing_location_id && !cJSON_IsNull(billing_location_id) ? strdup(billing_location_id->valuestring) : NULL,
        shipping_location_id && !cJSON_IsNull(shipping_location_id) ? strdup(shipping_location_id->valuestring) : NULL,
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
        deal_unit_status ? deal_unit_statusVariable : dealsservice_extended_deal_unit_dto_DEALUNITSTATUS_NULL,
        deal_unit_purchase_process ? deal_unit_purchase_processVariable : dealsservice_extended_deal_unit_dto_DEALUNITPURCHASEPROCESS_NULL,
        deal_unit_forecast_category ? deal_unit_forecast_categoryVariable : dealsservice_extended_deal_unit_dto_DEALUNITFORECASTCATEGORY_NULL,
        deal_unit_amounts_calculation ? deal_unit_amounts_calculationVariable : dealsservice_extended_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_NULL,
        lines_count ? lines_count->valuedouble : 0,
        custom_total_amount ? custom_total_amount->valuedouble : 0,
        custom_detail_amount ? custom_detail_amount->valuedouble : 0,
        custom_profit_amount ? custom_profit_amount->valuedouble : 0,
        custom_shipping_cost_amount ? custom_shipping_cost_amount->valuedouble : 0,
        custom_withholding_tax_amount ? custom_withholding_tax_amount->valuedouble : 0,
        custom_surcharges_amount ? custom_surcharges_amount->valuedouble : 0,
        custom_discounts_amount ? custom_discounts_amount->valuedouble : 0,
        custom_shipping_tax_amount ? custom_shipping_tax_amount->valuedouble : 0,
        user ? user_local_nonprim : NULL,
        tenant ? tenant_local_nonprim : NULL,
        individual ? individual_local_nonprim : NULL,
        organization ? organization_local_nonprim : NULL,
        receiver_tenant ? receiver_tenant_local_nonprim : NULL,
        enrollment ? enrollment_local_nonprim : NULL
        );

    return extended_deal_unit_dto_local_var;
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
