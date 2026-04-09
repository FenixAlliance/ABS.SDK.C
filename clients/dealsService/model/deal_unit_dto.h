/*
 * deal_unit_dto.h
 *
 * 
 */

#ifndef _deal_unit_dto_H_
#define _deal_unit_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deal_unit_dto_t deal_unit_dto_t;


// Enum TAXCALCULATIONMETHOD for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_NULL = 0, dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_Included, dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_Excluded } dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_e;

char* deal_unit_dto_tax_calculation_method_ToString(dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_e deal_unit_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum COSTCALCULATIONMETHOD for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_NULL = 0, dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_Automatic, dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_Custom } dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_e;

char* deal_unit_dto_cost_calculation_method_ToString(dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_e deal_unit_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum DEALUNITSTATUS for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_DEALUNITSTATUS_NULL = 0, dealsservice_deal_unit_dto_DEALUNITSTATUS_Open, dealsservice_deal_unit_dto_DEALUNITSTATUS_Won, dealsservice_deal_unit_dto_DEALUNITSTATUS_Lost, dealsservice_deal_unit_dto_DEALUNITSTATUS_Frozen } dealsservice_deal_unit_dto_DEALUNITSTATUS_e;

char* deal_unit_dto_deal_unit_status_ToString(dealsservice_deal_unit_dto_DEALUNITSTATUS_e deal_unit_status);

dealsservice_deal_unit_dto_DEALUNITSTATUS_e deal_unit_dto_deal_unit_status_FromString(char* deal_unit_status);

// Enum DEALUNITPURCHASEPROCESS for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_NULL = 0, dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_None, dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_Individual, dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_Commitee, dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_Unknown } dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_e;

char* deal_unit_dto_deal_unit_purchase_process_ToString(dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process);

dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_dto_deal_unit_purchase_process_FromString(char* deal_unit_purchase_process);

// Enum DEALUNITFORECASTCATEGORY for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_NULL = 0, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_None, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_Pipeline, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_BestCase, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_Commited, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_Ommited, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_Won, dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_Lost } dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_e;

char* deal_unit_dto_deal_unit_forecast_category_ToString(dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category);

dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_dto_deal_unit_forecast_category_FromString(char* deal_unit_forecast_category);

// Enum DEALUNITAMOUNTSCALCULATION for deal_unit_dto

typedef enum  { dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_NULL = 0, dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_UserProvided, dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_SystemCalculated } dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e;

char* deal_unit_dto_deal_unit_amounts_calculation_ToString(dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation);

dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_dto_deal_unit_amounts_calculation_FromString(char* deal_unit_amounts_calculation);



typedef struct deal_unit_dto_t {
    char *id; // string
    char *timestamp; //date time
    int closed; //boolean
    char *type; // string
    char *title; // string
    char *user_id; // string
    char *tenant_id; // string
    char *description; // string
    char *price_list_id; // string
    char *enrollment_id; // string
    char *individual_id; // string
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
    char *customer_notes; // string
    dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
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
    double total_tax_base; //numeric
    char *total_tax_base_currency_id; // string
    double total_taxes; //numeric
    char *total_taxes_currency_id; // string
    double total_shipping_cost; //numeric
    char *total_shipping_cost_currency_id; // string
    double total_shipping_tax; //numeric
    char *total_shipping_tax_currency_id; // string
    double total_withheld_tax; //numeric
    char *total_withheld_tax_currency_id; // string
    double total_global_discounts; //numeric
    char *total_global_discounts_currency_id; // string
    double total_global_surcharges; //numeric
    char *total_global_surcharges_currency_id; // string
    double total; //numeric
    char *total_currency_id; // string
    double total_detail_in_usd; //numeric
    double total_profit_in_usd; //numeric
    double total_discounts_in_usd; //numeric
    double total_surcharges_in_usd; //numeric
    double total_tax_base_in_usd; //numeric
    double total_taxes_in_usd; //numeric
    double total_withheld_taxes_in_usd; //numeric
    double total_shipping_cost_in_usd; //numeric
    double total_shipping_taxes_in_usd; //numeric
    double total_global_discounts_in_usd; //numeric
    double total_global_surcharges_in_usd; //numeric
    double total_in_usd; //numeric
    int ordered; //boolean
    char *deal_unit_feed_id; // string
    char *deal_unit_flow_id; // string
    char *deal_unit_flow_stage_id; // string
    char *billing_location_id; // string
    char *shipping_location_id; // string
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
    dealsservice_deal_unit_dto_DEALUNITSTATUS_e deal_unit_status; //enum
    dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process; //enum
    dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category; //enum
    dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation; //enum
    int lines_count; //numeric
    double custom_total_amount; //numeric
    double custom_detail_amount; //numeric
    double custom_profit_amount; //numeric
    double custom_shipping_cost_amount; //numeric
    double custom_withholding_tax_amount; //numeric
    double custom_surcharges_amount; //numeric
    double custom_discounts_amount; //numeric
    double custom_shipping_tax_amount; //numeric

} deal_unit_dto_t;

deal_unit_dto_t *deal_unit_dto_create(
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
    dealsservice_deal_unit_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
    dealsservice_deal_unit_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
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
    dealsservice_deal_unit_dto_DEALUNITSTATUS_e deal_unit_status,
    dealsservice_deal_unit_dto_DEALUNITPURCHASEPROCESS_e deal_unit_purchase_process,
    dealsservice_deal_unit_dto_DEALUNITFORECASTCATEGORY_e deal_unit_forecast_category,
    dealsservice_deal_unit_dto_DEALUNITAMOUNTSCALCULATION_e deal_unit_amounts_calculation,
    int lines_count,
    double custom_total_amount,
    double custom_detail_amount,
    double custom_profit_amount,
    double custom_shipping_cost_amount,
    double custom_withholding_tax_amount,
    double custom_surcharges_amount,
    double custom_discounts_amount,
    double custom_shipping_tax_amount
);

void deal_unit_dto_free(deal_unit_dto_t *deal_unit_dto);

deal_unit_dto_t *deal_unit_dto_parseFromJSON(cJSON *deal_unit_dtoJSON);

cJSON *deal_unit_dto_convertToJSON(deal_unit_dto_t *deal_unit_dto);

#endif /* _deal_unit_dto_H_ */

