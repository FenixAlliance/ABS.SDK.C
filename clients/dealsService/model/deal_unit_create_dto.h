/*
 * deal_unit_create_dto.h
 *
 * 
 */

#ifndef _deal_unit_create_dto_H_
#define _deal_unit_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_create_dto_t deal_unit_create_dto_t;

#include "deal_unit_line_create_dto.h"

// Enum COSTCALCULATIONMETHOD for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_NULL = 0, dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_Automatic, dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_Custom } dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_e;

char* deal_unit_create_dto_cost_calculation_method_ToString(dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_e deal_unit_create_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_NULL = 0, dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_Included, dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_Excluded } dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_e;

char* deal_unit_create_dto_tax_calculation_method_ToString(dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_e deal_unit_create_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum DEALUNITSTATUS for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_DEALUNITSTATUS_NULL = 0, dealsservice_deal_unit_create_dto_DEALUNITSTATUS_Open, dealsservice_deal_unit_create_dto_DEALUNITSTATUS_Won, dealsservice_deal_unit_create_dto_DEALUNITSTATUS_Lost, dealsservice_deal_unit_create_dto_DEALUNITSTATUS_Frozen } dealsservice_deal_unit_create_dto_DEALUNITSTATUS_e;

char* deal_unit_create_dto_deal_unit_status_ToString(dealsservice_deal_unit_create_dto_DEALUNITSTATUS_e deal_unit_status);

dealsservice_deal_unit_create_dto_DEALUNITSTATUS_e deal_unit_create_dto_deal_unit_status_FromString(char* deal_unit_status);

// Enum DEALUNITPURCHASEPROCESS for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_NULL = 0, dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_None, dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_Individual, dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_Commitee, dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_Unknown } dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_e;

char* deal_unit_create_dto_deal_unit_purchase_process_ToString(dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process);

dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_e deal_unit_create_dto_deal_unit_purchase_process_FromString(char* deal_unit_purchase_process);

// Enum DEALUNITFORECASTCATEGORY for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_NULL = 0, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_None, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_Pipeline, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_BestCase, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_Commited, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_Ommited, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_Won, dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_Lost } dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_e;

char* deal_unit_create_dto_deal_unit_forecast_category_ToString(dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category);

dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_e deal_unit_create_dto_deal_unit_forecast_category_FromString(char* deal_unit_forecast_category);

// Enum DEALUNITAMOUNTSCALCULATION for deal_unit_create_dto

typedef enum  { dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_NULL = 0, dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_UserProvided, dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_SystemCalculated } dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_e;

char* deal_unit_create_dto_deal_unit_amounts_calculation_ToString(dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation);

dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_create_dto_deal_unit_amounts_calculation_FromString(char* deal_unit_amounts_calculation);



typedef struct deal_unit_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *title; // string
    char *price_list_id; // string
    char *description; // string
    char *individual_id; // string
    char *payment_term_id; // string
    char *organization_id; // string
    char *receiver_tenant_id; // string
    char *first_name; // string
    char *last_name; // string
    char *company_name; // string
    char *billing_email; // string
    char *address_line1; // string
    char *address_line2; // string
    char *postal_code; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    double forex_rate; //numeric
    char *currency_id; // string
    double total_detail; //numeric
    char *total_detail_currency_id; // string
    double total_profit; //numeric
    char *total_profit_currency_id; // string
    double total_discounts; //numeric
    char *total_discounts_currency_id; // string
    double total_surcharges; //numeric
    char *total_surcharges_currency_id; // string
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    double total; //numeric
    char *total_currency_id; // string
    dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    char *deal_unit_flow_id; // string
    char *deal_unit_flow_stage_id; // string
    int partner_created; //boolean
    int partner_collaboration; //boolean
    char *proposed_solution; // string
    char *current_situation; // string
    char *customer_need; // string
    char *won_date; //date time
    char *lost_date; //date time
    char *expiry_date; //date time
    char *delivered_date; //date time
    char *closed_timestamp; //date time
    char *expected_close_date; //date time
    dealsservice_deal_unit_create_dto_DEALUNITSTATUS_e deal_unit_status; //enum
    dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process; //enum
    dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category; //enum
    dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation; //enum
    list_t *deal_unit_lines; //nonprimitive container

} deal_unit_create_dto_t;

deal_unit_create_dto_t *deal_unit_create_dto_create(
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
    dealsservice_deal_unit_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    dealsservice_deal_unit_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
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
    dealsservice_deal_unit_create_dto_DEALUNITSTATUS_e deal_unit_status,
    dealsservice_deal_unit_create_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process,
    dealsservice_deal_unit_create_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category,
    dealsservice_deal_unit_create_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation,
    list_t *deal_unit_lines
);

void deal_unit_create_dto_free(deal_unit_create_dto_t *deal_unit_create_dto);

deal_unit_create_dto_t *deal_unit_create_dto_parseFromJSON(cJSON *deal_unit_create_dtoJSON);

cJSON *deal_unit_create_dto_convertToJSON(deal_unit_create_dto_t *deal_unit_create_dto);

#endif /* _deal_unit_create_dto_H_ */

