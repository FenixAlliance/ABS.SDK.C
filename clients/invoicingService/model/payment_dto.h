/*
 * payment_dto.h
 *
 * 
 */

#ifndef _payment_dto_H_
#define _payment_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_dto_t payment_dto_t;


// Enum ONBEHALFOF for payment_dto

typedef enum  { invoicingservice_payment_dto_ONBEHALFOF_NULL = 0, invoicingservice_payment_dto_ONBEHALFOF_Self, invoicingservice_payment_dto_ONBEHALFOF_Tenant, invoicingservice_payment_dto_ONBEHALFOF_Individual, invoicingservice_payment_dto_ONBEHALFOF_Organization } invoicingservice_payment_dto_ONBEHALFOF_e;

char* payment_dto_on_behalf_of_ToString(invoicingservice_payment_dto_ONBEHALFOF_e on_behalf_of);

invoicingservice_payment_dto_ONBEHALFOF_e payment_dto_on_behalf_of_FromString(char* on_behalf_of);

// Enum PAYMENTTYPE for payment_dto

typedef enum  { invoicingservice_payment_dto_PAYMENTTYPE_NULL = 0, invoicingservice_payment_dto_PAYMENTTYPE_Paid, invoicingservice_payment_dto_PAYMENTTYPE_Received, invoicingservice_payment_dto_PAYMENTTYPE_Internal } invoicingservice_payment_dto_PAYMENTTYPE_e;

char* payment_dto_payment_type_ToString(invoicingservice_payment_dto_PAYMENTTYPE_e payment_type);

invoicingservice_payment_dto_PAYMENTTYPE_e payment_dto_payment_type_FromString(char* payment_type);

// Enum PAYMENTSTATUS for payment_dto

typedef enum  { invoicingservice_payment_dto_PAYMENTSTATUS_NULL = 0, invoicingservice_payment_dto_PAYMENTSTATUS_Unset, invoicingservice_payment_dto_PAYMENTSTATUS_Accepted, invoicingservice_payment_dto_PAYMENTSTATUS_Rejected, invoicingservice_payment_dto_PAYMENTSTATUS_OnHold, invoicingservice_payment_dto_PAYMENTSTATUS_Failed, invoicingservice_payment_dto_PAYMENTSTATUS_Reversed, invoicingservice_payment_dto_PAYMENTSTATUS_Retained, invoicingservice_payment_dto_PAYMENTSTATUS_Initialized, invoicingservice_payment_dto_PAYMENTSTATUS_Expired, invoicingservice_payment_dto_PAYMENTSTATUS_Abandoned, invoicingservice_payment_dto_PAYMENTSTATUS_Cancelled, invoicingservice_payment_dto_PAYMENTSTATUS_AcceptedRetained } invoicingservice_payment_dto_PAYMENTSTATUS_e;

char* payment_dto_payment_status_ToString(invoicingservice_payment_dto_PAYMENTSTATUS_e payment_status);

invoicingservice_payment_dto_PAYMENTSTATUS_e payment_dto_payment_status_FromString(char* payment_status);



typedef struct payment_dto_t {
    char *id; // string
    char *timestamp; //date time
    int test; //boolean
    char *invoice_id; // string
    char *tenant_id; // string
    char *emisor_wallet_id; // string
    char *receiver_wallet_id; // string
    char *currency_id; // string
    double forex_rate; //numeric
    double total_cost; //numeric
    double total_taxes; //numeric
    int closed; //boolean
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *response; // string
    char *authorization; // string
    char *reference_code; // string
    char *correlation_code; // string
    char *last_updated; //date time
    invoicingservice_payment_dto_ONBEHALFOF_e on_behalf_of; //enum
    invoicingservice_payment_dto_PAYMENTTYPE_e payment_type; //enum
    invoicingservice_payment_dto_PAYMENTSTATUS_e payment_status; //enum
    double base_cost; //numeric
    char *signature; // string
    int signature_mismatch; //boolean
    int is_external; //boolean
    int marked_for_revision; //boolean
    char *forex_rates_snapshot; // string
    char *official_id; // string
    char *official_id_expedition_date; //date time
    char *fiscal_identification_type_id; // string
    char *billing_address; // string
    char *phone; // string
    char *cellphone; // string
    char *department; // string
    char *city; // string
    char *country_id; // string
    char *location_id; // string
    char *entitlement_id; // string
    double anti_fraud_score; //numeric
    char *call_record_url; // string
    int called; //boolean
    int verified; //boolean
    char *payer_picture_timestamp; // string
    char *payer_picture; // string
    char *identification_picture_timestamp; // string
    char *identification_picture; // string
    char *identification_back_picture; // string
    char *identification_back_picture_timestamp; // string
    char *ip_lookup_id; // string
    char *order_id; // string
    char *accounting_entry_id; // string
    char *payment_gateway_id; // string
    char *bank_account_id; // string
    char *enrollment_id; // string
    char *bank_id; // string
    char *payment_token_id; // string

} payment_dto_t;

payment_dto_t *payment_dto_create(
    char *id,
    char *timestamp,
    int test,
    char *invoice_id,
    char *tenant_id,
    char *emisor_wallet_id,
    char *receiver_wallet_id,
    char *currency_id,
    double forex_rate,
    double total_cost,
    double total_taxes,
    int closed,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *response,
    char *authorization,
    char *reference_code,
    char *correlation_code,
    char *last_updated,
    invoicingservice_payment_dto_ONBEHALFOF_e on_behalf_of,
    invoicingservice_payment_dto_PAYMENTTYPE_e payment_type,
    invoicingservice_payment_dto_PAYMENTSTATUS_e payment_status,
    double base_cost,
    char *signature,
    int signature_mismatch,
    int is_external,
    int marked_for_revision,
    char *forex_rates_snapshot,
    char *official_id,
    char *official_id_expedition_date,
    char *fiscal_identification_type_id,
    char *billing_address,
    char *phone,
    char *cellphone,
    char *department,
    char *city,
    char *country_id,
    char *location_id,
    char *entitlement_id,
    double anti_fraud_score,
    char *call_record_url,
    int called,
    int verified,
    char *payer_picture_timestamp,
    char *payer_picture,
    char *identification_picture_timestamp,
    char *identification_picture,
    char *identification_back_picture,
    char *identification_back_picture_timestamp,
    char *ip_lookup_id,
    char *order_id,
    char *accounting_entry_id,
    char *payment_gateway_id,
    char *bank_account_id,
    char *enrollment_id,
    char *bank_id,
    char *payment_token_id
);

void payment_dto_free(payment_dto_t *payment_dto);

payment_dto_t *payment_dto_parseFromJSON(cJSON *payment_dtoJSON);

cJSON *payment_dto_convertToJSON(payment_dto_t *payment_dto);

#endif /* _payment_dto_H_ */

