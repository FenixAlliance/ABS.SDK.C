/*
 * invoice_create_dto.h
 *
 * 
 */

#ifndef _invoice_create_dto_H_
#define _invoice_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct invoice_create_dto_t invoice_create_dto_t;

#include "invoice_adjustment_create_dto.h"
#include "invoice_line_create_dto.h"
#include "invoice_reference_create_dto.h"

// Enum COSTCALCULATIONMETHOD for invoice_create_dto

typedef enum  { invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_NULL = 0, invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_Automatic, invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_Custom } invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_e;

char* invoice_create_dto_cost_calculation_method_ToString(invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method);

invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_e invoice_create_dto_cost_calculation_method_FromString(char* cost_calculation_method);

// Enum TAXCALCULATIONMETHOD for invoice_create_dto

typedef enum  { invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_NULL = 0, invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_Included, invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_Excluded } invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_e;

char* invoice_create_dto_tax_calculation_method_ToString(invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method);

invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_e invoice_create_dto_tax_calculation_method_FromString(char* tax_calculation_method);

// Enum INVOICETYPE for invoice_create_dto

typedef enum  { invoicingservice_invoice_create_dto_INVOICETYPE_NULL = 0, invoicingservice_invoice_create_dto_INVOICETYPE_PurchaseInvoice, invoicingservice_invoice_create_dto_INVOICETYPE_SalesInvoice, invoicingservice_invoice_create_dto_INVOICETYPE_CreditNote, invoicingservice_invoice_create_dto_INVOICETYPE_DebitNote } invoicingservice_invoice_create_dto_INVOICETYPE_e;

char* invoice_create_dto_invoice_type_ToString(invoicingservice_invoice_create_dto_INVOICETYPE_e invoice_type);

invoicingservice_invoice_create_dto_INVOICETYPE_e invoice_create_dto_invoice_type_FromString(char* invoice_type);

// Enum DOCUMENTTYPE for invoice_create_dto

typedef enum  { invoicingservice_invoice_create_dto_DOCUMENTTYPE_NULL = 0, invoicingservice_invoice_create_dto_DOCUMENTTYPE_Standard, invoicingservice_invoice_create_dto_DOCUMENTTYPE_DebitNote, invoicingservice_invoice_create_dto_DOCUMENTTYPE_CreditNote } invoicingservice_invoice_create_dto_DOCUMENTTYPE_e;

char* invoice_create_dto_document_type_ToString(invoicingservice_invoice_create_dto_DOCUMENTTYPE_e document_type);

invoicingservice_invoice_create_dto_DOCUMENTTYPE_e invoice_create_dto_document_type_FromString(char* document_type);

// Enum INVOICESTATUS for invoice_create_dto

typedef enum  { invoicingservice_invoice_create_dto_INVOICESTATUS_NULL = 0, invoicingservice_invoice_create_dto_INVOICESTATUS_Draft, invoicingservice_invoice_create_dto_INVOICESTATUS_Closed, invoicingservice_invoice_create_dto_INVOICESTATUS__Signed, invoicingservice_invoice_create_dto_INVOICESTATUS_Expired, invoicingservice_invoice_create_dto_INVOICESTATUS_Paid } invoicingservice_invoice_create_dto_INVOICESTATUS_e;

char* invoice_create_dto_invoice_status_ToString(invoicingservice_invoice_create_dto_INVOICESTATUS_e invoice_status);

invoicingservice_invoice_create_dto_INVOICESTATUS_e invoice_create_dto_invoice_status_FromString(char* invoice_status);



typedef struct invoice_create_dto_t {
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
    invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method; //enum
    invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method; //enum
    int paid; //boolean
    int number; //numeric
    char *notes; // string
    char *order_id; // string
    char *enumeration; // string
    char *payment_mode_id; // string
    char *enumeration_range_id; // string
    char *emisor_billing_profile_id; // string
    char *receiver_billing_profile_id; // string
    char *emisor_wallet_account_id; // string
    char *receiver_wallet_account_id; // string
    char *customer_notes; // string
    invoicingservice_invoice_create_dto_INVOICETYPE_e invoice_type; //enum
    invoicingservice_invoice_create_dto_DOCUMENTTYPE_e document_type; //enum
    invoicingservice_invoice_create_dto_INVOICESTATUS_e invoice_status; //enum
    char *payment_due; //date time
    char *valid_from; //date time
    char *valid_to; //date time
    list_t *invoice_lines; //nonprimitive container
    list_t *invoice_references; //nonprimitive container
    list_t *invoice_adjustments; //nonprimitive container

} invoice_create_dto_t;

invoice_create_dto_t *invoice_create_dto_create(
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
    invoicingservice_invoice_create_dto_COSTCALCULATIONMETHOD_e cost_calculation_method,
    invoicingservice_invoice_create_dto_TAXCALCULATIONMETHOD_e tax_calculation_method,
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
    invoicingservice_invoice_create_dto_INVOICETYPE_e invoice_type,
    invoicingservice_invoice_create_dto_DOCUMENTTYPE_e document_type,
    invoicingservice_invoice_create_dto_INVOICESTATUS_e invoice_status,
    char *payment_due,
    char *valid_from,
    char *valid_to,
    list_t *invoice_lines,
    list_t *invoice_references,
    list_t *invoice_adjustments
);

void invoice_create_dto_free(invoice_create_dto_t *invoice_create_dto);

invoice_create_dto_t *invoice_create_dto_parseFromJSON(cJSON *invoice_create_dtoJSON);

cJSON *invoice_create_dto_convertToJSON(invoice_create_dto_t *invoice_create_dto);

#endif /* _invoice_create_dto_H_ */

