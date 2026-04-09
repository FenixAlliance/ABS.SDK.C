#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "payment_dto.h"


char* payment_dto_on_behalf_of_ToString(walletsservice_payment_dto_ONBEHALFOF_e on_behalf_of) {
    char* on_behalf_ofArray[] =  { "NULL", "Self", "Tenant", "Individual", "Organization" };
    return on_behalf_ofArray[on_behalf_of];
}

walletsservice_payment_dto_ONBEHALFOF_e payment_dto_on_behalf_of_FromString(char* on_behalf_of){
    int stringToReturn = 0;
    char *on_behalf_ofArray[] =  { "NULL", "Self", "Tenant", "Individual", "Organization" };
    size_t sizeofArray = sizeof(on_behalf_ofArray) / sizeof(on_behalf_ofArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(on_behalf_of, on_behalf_ofArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* payment_dto_payment_type_ToString(walletsservice_payment_dto_PAYMENTTYPE_e payment_type) {
    char* payment_typeArray[] =  { "NULL", "Paid", "Received", "Internal" };
    return payment_typeArray[payment_type];
}

walletsservice_payment_dto_PAYMENTTYPE_e payment_dto_payment_type_FromString(char* payment_type){
    int stringToReturn = 0;
    char *payment_typeArray[] =  { "NULL", "Paid", "Received", "Internal" };
    size_t sizeofArray = sizeof(payment_typeArray) / sizeof(payment_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(payment_type, payment_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* payment_dto_payment_status_ToString(walletsservice_payment_dto_PAYMENTSTATUS_e payment_status) {
    char* payment_statusArray[] =  { "NULL", "Unset", "Accepted", "Rejected", "OnHold", "Failed", "Reversed", "Retained", "Initialized", "Expired", "Abandoned", "Cancelled", "AcceptedRetained" };
    return payment_statusArray[payment_status];
}

walletsservice_payment_dto_PAYMENTSTATUS_e payment_dto_payment_status_FromString(char* payment_status){
    int stringToReturn = 0;
    char *payment_statusArray[] =  { "NULL", "Unset", "Accepted", "Rejected", "OnHold", "Failed", "Reversed", "Retained", "Initialized", "Expired", "Abandoned", "Cancelled", "AcceptedRetained" };
    size_t sizeofArray = sizeof(payment_statusArray) / sizeof(payment_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(payment_status, payment_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    walletsservice_payment_dto_ONBEHALFOF_e on_behalf_of,
    walletsservice_payment_dto_PAYMENTTYPE_e payment_type,
    walletsservice_payment_dto_PAYMENTSTATUS_e payment_status,
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
    ) {
    payment_dto_t *payment_dto_local_var = malloc(sizeof(payment_dto_t));
    if (!payment_dto_local_var) {
        return NULL;
    }
    payment_dto_local_var->id = id;
    payment_dto_local_var->timestamp = timestamp;
    payment_dto_local_var->test = test;
    payment_dto_local_var->invoice_id = invoice_id;
    payment_dto_local_var->tenant_id = tenant_id;
    payment_dto_local_var->emisor_wallet_id = emisor_wallet_id;
    payment_dto_local_var->receiver_wallet_id = receiver_wallet_id;
    payment_dto_local_var->currency_id = currency_id;
    payment_dto_local_var->forex_rate = forex_rate;
    payment_dto_local_var->total_cost = total_cost;
    payment_dto_local_var->total_taxes = total_taxes;
    payment_dto_local_var->closed = closed;
    payment_dto_local_var->data = data;
    payment_dto_local_var->data_label = data_label;
    payment_dto_local_var->data1 = data1;
    payment_dto_local_var->data1_label = data1_label;
    payment_dto_local_var->response = response;
    payment_dto_local_var->authorization = authorization;
    payment_dto_local_var->reference_code = reference_code;
    payment_dto_local_var->correlation_code = correlation_code;
    payment_dto_local_var->last_updated = last_updated;
    payment_dto_local_var->on_behalf_of = on_behalf_of;
    payment_dto_local_var->payment_type = payment_type;
    payment_dto_local_var->payment_status = payment_status;
    payment_dto_local_var->base_cost = base_cost;
    payment_dto_local_var->signature = signature;
    payment_dto_local_var->signature_mismatch = signature_mismatch;
    payment_dto_local_var->is_external = is_external;
    payment_dto_local_var->marked_for_revision = marked_for_revision;
    payment_dto_local_var->forex_rates_snapshot = forex_rates_snapshot;
    payment_dto_local_var->official_id = official_id;
    payment_dto_local_var->official_id_expedition_date = official_id_expedition_date;
    payment_dto_local_var->fiscal_identification_type_id = fiscal_identification_type_id;
    payment_dto_local_var->billing_address = billing_address;
    payment_dto_local_var->phone = phone;
    payment_dto_local_var->cellphone = cellphone;
    payment_dto_local_var->department = department;
    payment_dto_local_var->city = city;
    payment_dto_local_var->country_id = country_id;
    payment_dto_local_var->location_id = location_id;
    payment_dto_local_var->entitlement_id = entitlement_id;
    payment_dto_local_var->anti_fraud_score = anti_fraud_score;
    payment_dto_local_var->call_record_url = call_record_url;
    payment_dto_local_var->called = called;
    payment_dto_local_var->verified = verified;
    payment_dto_local_var->payer_picture_timestamp = payer_picture_timestamp;
    payment_dto_local_var->payer_picture = payer_picture;
    payment_dto_local_var->identification_picture_timestamp = identification_picture_timestamp;
    payment_dto_local_var->identification_picture = identification_picture;
    payment_dto_local_var->identification_back_picture = identification_back_picture;
    payment_dto_local_var->identification_back_picture_timestamp = identification_back_picture_timestamp;
    payment_dto_local_var->ip_lookup_id = ip_lookup_id;
    payment_dto_local_var->order_id = order_id;
    payment_dto_local_var->accounting_entry_id = accounting_entry_id;
    payment_dto_local_var->payment_gateway_id = payment_gateway_id;
    payment_dto_local_var->bank_account_id = bank_account_id;
    payment_dto_local_var->enrollment_id = enrollment_id;
    payment_dto_local_var->bank_id = bank_id;
    payment_dto_local_var->payment_token_id = payment_token_id;

    return payment_dto_local_var;
}


void payment_dto_free(payment_dto_t *payment_dto) {
    if(NULL == payment_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (payment_dto->id) {
        free(payment_dto->id);
        payment_dto->id = NULL;
    }
    if (payment_dto->timestamp) {
        free(payment_dto->timestamp);
        payment_dto->timestamp = NULL;
    }
    if (payment_dto->invoice_id) {
        free(payment_dto->invoice_id);
        payment_dto->invoice_id = NULL;
    }
    if (payment_dto->tenant_id) {
        free(payment_dto->tenant_id);
        payment_dto->tenant_id = NULL;
    }
    if (payment_dto->emisor_wallet_id) {
        free(payment_dto->emisor_wallet_id);
        payment_dto->emisor_wallet_id = NULL;
    }
    if (payment_dto->receiver_wallet_id) {
        free(payment_dto->receiver_wallet_id);
        payment_dto->receiver_wallet_id = NULL;
    }
    if (payment_dto->currency_id) {
        free(payment_dto->currency_id);
        payment_dto->currency_id = NULL;
    }
    if (payment_dto->data) {
        free(payment_dto->data);
        payment_dto->data = NULL;
    }
    if (payment_dto->data_label) {
        free(payment_dto->data_label);
        payment_dto->data_label = NULL;
    }
    if (payment_dto->data1) {
        free(payment_dto->data1);
        payment_dto->data1 = NULL;
    }
    if (payment_dto->data1_label) {
        free(payment_dto->data1_label);
        payment_dto->data1_label = NULL;
    }
    if (payment_dto->response) {
        free(payment_dto->response);
        payment_dto->response = NULL;
    }
    if (payment_dto->authorization) {
        free(payment_dto->authorization);
        payment_dto->authorization = NULL;
    }
    if (payment_dto->reference_code) {
        free(payment_dto->reference_code);
        payment_dto->reference_code = NULL;
    }
    if (payment_dto->correlation_code) {
        free(payment_dto->correlation_code);
        payment_dto->correlation_code = NULL;
    }
    if (payment_dto->last_updated) {
        free(payment_dto->last_updated);
        payment_dto->last_updated = NULL;
    }
    if (payment_dto->signature) {
        free(payment_dto->signature);
        payment_dto->signature = NULL;
    }
    if (payment_dto->forex_rates_snapshot) {
        free(payment_dto->forex_rates_snapshot);
        payment_dto->forex_rates_snapshot = NULL;
    }
    if (payment_dto->official_id) {
        free(payment_dto->official_id);
        payment_dto->official_id = NULL;
    }
    if (payment_dto->official_id_expedition_date) {
        free(payment_dto->official_id_expedition_date);
        payment_dto->official_id_expedition_date = NULL;
    }
    if (payment_dto->fiscal_identification_type_id) {
        free(payment_dto->fiscal_identification_type_id);
        payment_dto->fiscal_identification_type_id = NULL;
    }
    if (payment_dto->billing_address) {
        free(payment_dto->billing_address);
        payment_dto->billing_address = NULL;
    }
    if (payment_dto->phone) {
        free(payment_dto->phone);
        payment_dto->phone = NULL;
    }
    if (payment_dto->cellphone) {
        free(payment_dto->cellphone);
        payment_dto->cellphone = NULL;
    }
    if (payment_dto->department) {
        free(payment_dto->department);
        payment_dto->department = NULL;
    }
    if (payment_dto->city) {
        free(payment_dto->city);
        payment_dto->city = NULL;
    }
    if (payment_dto->country_id) {
        free(payment_dto->country_id);
        payment_dto->country_id = NULL;
    }
    if (payment_dto->location_id) {
        free(payment_dto->location_id);
        payment_dto->location_id = NULL;
    }
    if (payment_dto->entitlement_id) {
        free(payment_dto->entitlement_id);
        payment_dto->entitlement_id = NULL;
    }
    if (payment_dto->call_record_url) {
        free(payment_dto->call_record_url);
        payment_dto->call_record_url = NULL;
    }
    if (payment_dto->payer_picture_timestamp) {
        free(payment_dto->payer_picture_timestamp);
        payment_dto->payer_picture_timestamp = NULL;
    }
    if (payment_dto->payer_picture) {
        free(payment_dto->payer_picture);
        payment_dto->payer_picture = NULL;
    }
    if (payment_dto->identification_picture_timestamp) {
        free(payment_dto->identification_picture_timestamp);
        payment_dto->identification_picture_timestamp = NULL;
    }
    if (payment_dto->identification_picture) {
        free(payment_dto->identification_picture);
        payment_dto->identification_picture = NULL;
    }
    if (payment_dto->identification_back_picture) {
        free(payment_dto->identification_back_picture);
        payment_dto->identification_back_picture = NULL;
    }
    if (payment_dto->identification_back_picture_timestamp) {
        free(payment_dto->identification_back_picture_timestamp);
        payment_dto->identification_back_picture_timestamp = NULL;
    }
    if (payment_dto->ip_lookup_id) {
        free(payment_dto->ip_lookup_id);
        payment_dto->ip_lookup_id = NULL;
    }
    if (payment_dto->order_id) {
        free(payment_dto->order_id);
        payment_dto->order_id = NULL;
    }
    if (payment_dto->accounting_entry_id) {
        free(payment_dto->accounting_entry_id);
        payment_dto->accounting_entry_id = NULL;
    }
    if (payment_dto->payment_gateway_id) {
        free(payment_dto->payment_gateway_id);
        payment_dto->payment_gateway_id = NULL;
    }
    if (payment_dto->bank_account_id) {
        free(payment_dto->bank_account_id);
        payment_dto->bank_account_id = NULL;
    }
    if (payment_dto->enrollment_id) {
        free(payment_dto->enrollment_id);
        payment_dto->enrollment_id = NULL;
    }
    if (payment_dto->bank_id) {
        free(payment_dto->bank_id);
        payment_dto->bank_id = NULL;
    }
    if (payment_dto->payment_token_id) {
        free(payment_dto->payment_token_id);
        payment_dto->payment_token_id = NULL;
    }
    free(payment_dto);
}

cJSON *payment_dto_convertToJSON(payment_dto_t *payment_dto) {
    cJSON *item = cJSON_CreateObject();

    // payment_dto->id
    if(payment_dto->id) {
    if(cJSON_AddStringToObject(item, "id", payment_dto->id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->timestamp
    if(payment_dto->timestamp) {
    if(cJSON_AddStringToObject(item, "timestamp", payment_dto->timestamp) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_dto->test
    if(payment_dto->test) {
    if(cJSON_AddBoolToObject(item, "test", payment_dto->test) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->invoice_id
    if(payment_dto->invoice_id) {
    if(cJSON_AddStringToObject(item, "invoiceId", payment_dto->invoice_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->tenant_id
    if(payment_dto->tenant_id) {
    if(cJSON_AddStringToObject(item, "tenantId", payment_dto->tenant_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->emisor_wallet_id
    if(payment_dto->emisor_wallet_id) {
    if(cJSON_AddStringToObject(item, "emisorWalletId", payment_dto->emisor_wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->receiver_wallet_id
    if(payment_dto->receiver_wallet_id) {
    if(cJSON_AddStringToObject(item, "receiverWalletId", payment_dto->receiver_wallet_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->currency_id
    if(payment_dto->currency_id) {
    if(cJSON_AddStringToObject(item, "currencyId", payment_dto->currency_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->forex_rate
    if(payment_dto->forex_rate) {
    if(cJSON_AddNumberToObject(item, "forexRate", payment_dto->forex_rate) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_dto->total_cost
    if(payment_dto->total_cost) {
    if(cJSON_AddNumberToObject(item, "totalCost", payment_dto->total_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_dto->total_taxes
    if(payment_dto->total_taxes) {
    if(cJSON_AddNumberToObject(item, "totalTaxes", payment_dto->total_taxes) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_dto->closed
    if(payment_dto->closed) {
    if(cJSON_AddBoolToObject(item, "closed", payment_dto->closed) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->data
    if(payment_dto->data) {
    if(cJSON_AddStringToObject(item, "data", payment_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->data_label
    if(payment_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", payment_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->data1
    if(payment_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", payment_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->data1_label
    if(payment_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", payment_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->response
    if(payment_dto->response) {
    if(cJSON_AddStringToObject(item, "response", payment_dto->response) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->authorization
    if(payment_dto->authorization) {
    if(cJSON_AddStringToObject(item, "authorization", payment_dto->authorization) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->reference_code
    if(payment_dto->reference_code) {
    if(cJSON_AddStringToObject(item, "referenceCode", payment_dto->reference_code) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->correlation_code
    if(payment_dto->correlation_code) {
    if(cJSON_AddStringToObject(item, "correlationCode", payment_dto->correlation_code) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->last_updated
    if(payment_dto->last_updated) {
    if(cJSON_AddStringToObject(item, "lastUpdated", payment_dto->last_updated) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_dto->on_behalf_of
    if(payment_dto->on_behalf_of != walletsservice_payment_dto_ONBEHALFOF_NULL) {
    if(cJSON_AddStringToObject(item, "onBehalfOf", on_behalf_ofpayment_dto_ToString(payment_dto->on_behalf_of)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // payment_dto->payment_type
    if(payment_dto->payment_type != walletsservice_payment_dto_PAYMENTTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "paymentType", payment_typepayment_dto_ToString(payment_dto->payment_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // payment_dto->payment_status
    if(payment_dto->payment_status != walletsservice_payment_dto_PAYMENTSTATUS_NULL) {
    if(cJSON_AddStringToObject(item, "paymentStatus", payment_statuspayment_dto_ToString(payment_dto->payment_status)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // payment_dto->base_cost
    if(payment_dto->base_cost) {
    if(cJSON_AddNumberToObject(item, "baseCost", payment_dto->base_cost) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_dto->signature
    if(payment_dto->signature) {
    if(cJSON_AddStringToObject(item, "signature", payment_dto->signature) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->signature_mismatch
    if(payment_dto->signature_mismatch) {
    if(cJSON_AddBoolToObject(item, "signatureMismatch", payment_dto->signature_mismatch) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->is_external
    if(payment_dto->is_external) {
    if(cJSON_AddBoolToObject(item, "isExternal", payment_dto->is_external) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->marked_for_revision
    if(payment_dto->marked_for_revision) {
    if(cJSON_AddBoolToObject(item, "markedForRevision", payment_dto->marked_for_revision) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->forex_rates_snapshot
    if(payment_dto->forex_rates_snapshot) {
    if(cJSON_AddStringToObject(item, "forexRatesSnapshot", payment_dto->forex_rates_snapshot) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->official_id
    if(payment_dto->official_id) {
    if(cJSON_AddStringToObject(item, "officialId", payment_dto->official_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->official_id_expedition_date
    if(payment_dto->official_id_expedition_date) {
    if(cJSON_AddStringToObject(item, "officialIdExpeditionDate", payment_dto->official_id_expedition_date) == NULL) {
    goto fail; //Date-Time
    }
    }


    // payment_dto->fiscal_identification_type_id
    if(payment_dto->fiscal_identification_type_id) {
    if(cJSON_AddStringToObject(item, "fiscalIdentificationTypeId", payment_dto->fiscal_identification_type_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->billing_address
    if(payment_dto->billing_address) {
    if(cJSON_AddStringToObject(item, "billingAddress", payment_dto->billing_address) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->phone
    if(payment_dto->phone) {
    if(cJSON_AddStringToObject(item, "phone", payment_dto->phone) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->cellphone
    if(payment_dto->cellphone) {
    if(cJSON_AddStringToObject(item, "cellphone", payment_dto->cellphone) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->department
    if(payment_dto->department) {
    if(cJSON_AddStringToObject(item, "department", payment_dto->department) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->city
    if(payment_dto->city) {
    if(cJSON_AddStringToObject(item, "city", payment_dto->city) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->country_id
    if(payment_dto->country_id) {
    if(cJSON_AddStringToObject(item, "countryId", payment_dto->country_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->location_id
    if(payment_dto->location_id) {
    if(cJSON_AddStringToObject(item, "locationId", payment_dto->location_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->entitlement_id
    if(payment_dto->entitlement_id) {
    if(cJSON_AddStringToObject(item, "entitlementId", payment_dto->entitlement_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->anti_fraud_score
    if(payment_dto->anti_fraud_score) {
    if(cJSON_AddNumberToObject(item, "antiFraudScore", payment_dto->anti_fraud_score) == NULL) {
    goto fail; //Numeric
    }
    }


    // payment_dto->call_record_url
    if(payment_dto->call_record_url) {
    if(cJSON_AddStringToObject(item, "callRecordURL", payment_dto->call_record_url) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->called
    if(payment_dto->called) {
    if(cJSON_AddBoolToObject(item, "called", payment_dto->called) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->verified
    if(payment_dto->verified) {
    if(cJSON_AddBoolToObject(item, "verified", payment_dto->verified) == NULL) {
    goto fail; //Bool
    }
    }


    // payment_dto->payer_picture_timestamp
    if(payment_dto->payer_picture_timestamp) {
    if(cJSON_AddStringToObject(item, "payerPictureTimestamp", payment_dto->payer_picture_timestamp) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->payer_picture
    if(payment_dto->payer_picture) {
    if(cJSON_AddStringToObject(item, "payerPicture", payment_dto->payer_picture) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->identification_picture_timestamp
    if(payment_dto->identification_picture_timestamp) {
    if(cJSON_AddStringToObject(item, "identificationPictureTimestamp", payment_dto->identification_picture_timestamp) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->identification_picture
    if(payment_dto->identification_picture) {
    if(cJSON_AddStringToObject(item, "identificationPicture", payment_dto->identification_picture) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->identification_back_picture
    if(payment_dto->identification_back_picture) {
    if(cJSON_AddStringToObject(item, "identificationBackPicture", payment_dto->identification_back_picture) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->identification_back_picture_timestamp
    if(payment_dto->identification_back_picture_timestamp) {
    if(cJSON_AddStringToObject(item, "identificationBackPictureTimestamp", payment_dto->identification_back_picture_timestamp) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->ip_lookup_id
    if(payment_dto->ip_lookup_id) {
    if(cJSON_AddStringToObject(item, "ipLookupId", payment_dto->ip_lookup_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->order_id
    if(payment_dto->order_id) {
    if(cJSON_AddStringToObject(item, "orderId", payment_dto->order_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->accounting_entry_id
    if(payment_dto->accounting_entry_id) {
    if(cJSON_AddStringToObject(item, "accountingEntryId", payment_dto->accounting_entry_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->payment_gateway_id
    if(payment_dto->payment_gateway_id) {
    if(cJSON_AddStringToObject(item, "paymentGatewayId", payment_dto->payment_gateway_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->bank_account_id
    if(payment_dto->bank_account_id) {
    if(cJSON_AddStringToObject(item, "bankAccountId", payment_dto->bank_account_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->enrollment_id
    if(payment_dto->enrollment_id) {
    if(cJSON_AddStringToObject(item, "enrollmentId", payment_dto->enrollment_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->bank_id
    if(payment_dto->bank_id) {
    if(cJSON_AddStringToObject(item, "bankId", payment_dto->bank_id) == NULL) {
    goto fail; //String
    }
    }


    // payment_dto->payment_token_id
    if(payment_dto->payment_token_id) {
    if(cJSON_AddStringToObject(item, "paymentTokenId", payment_dto->payment_token_id) == NULL) {
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

payment_dto_t *payment_dto_parseFromJSON(cJSON *payment_dtoJSON){

    payment_dto_t *payment_dto_local_var = NULL;

    // payment_dto->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // payment_dto->timestamp
    cJSON *timestamp = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "timestamp");
    if (timestamp) { 
    if(!cJSON_IsString(timestamp) && !cJSON_IsNull(timestamp))
    {
    goto end; //DateTime
    }
    }

    // payment_dto->test
    cJSON *test = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "test");
    if (test) { 
    if(!cJSON_IsBool(test))
    {
    goto end; //Bool
    }
    }

    // payment_dto->invoice_id
    cJSON *invoice_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "invoiceId");
    if (invoice_id) { 
    if(!cJSON_IsString(invoice_id) && !cJSON_IsNull(invoice_id))
    {
    goto end; //String
    }
    }

    // payment_dto->tenant_id
    cJSON *tenant_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "tenantId");
    if (tenant_id) { 
    if(!cJSON_IsString(tenant_id) && !cJSON_IsNull(tenant_id))
    {
    goto end; //String
    }
    }

    // payment_dto->emisor_wallet_id
    cJSON *emisor_wallet_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "emisorWalletId");
    if (emisor_wallet_id) { 
    if(!cJSON_IsString(emisor_wallet_id) && !cJSON_IsNull(emisor_wallet_id))
    {
    goto end; //String
    }
    }

    // payment_dto->receiver_wallet_id
    cJSON *receiver_wallet_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "receiverWalletId");
    if (receiver_wallet_id) { 
    if(!cJSON_IsString(receiver_wallet_id) && !cJSON_IsNull(receiver_wallet_id))
    {
    goto end; //String
    }
    }

    // payment_dto->currency_id
    cJSON *currency_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "currencyId");
    if (currency_id) { 
    if(!cJSON_IsString(currency_id) && !cJSON_IsNull(currency_id))
    {
    goto end; //String
    }
    }

    // payment_dto->forex_rate
    cJSON *forex_rate = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "forexRate");
    if (forex_rate) { 
    if(!cJSON_IsNumber(forex_rate))
    {
    goto end; //Numeric
    }
    }

    // payment_dto->total_cost
    cJSON *total_cost = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "totalCost");
    if (total_cost) { 
    if(!cJSON_IsNumber(total_cost))
    {
    goto end; //Numeric
    }
    }

    // payment_dto->total_taxes
    cJSON *total_taxes = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "totalTaxes");
    if (total_taxes) { 
    if(!cJSON_IsNumber(total_taxes))
    {
    goto end; //Numeric
    }
    }

    // payment_dto->closed
    cJSON *closed = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "closed");
    if (closed) { 
    if(!cJSON_IsBool(closed))
    {
    goto end; //Bool
    }
    }

    // payment_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // payment_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // payment_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // payment_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // payment_dto->response
    cJSON *response = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "response");
    if (response) { 
    if(!cJSON_IsString(response) && !cJSON_IsNull(response))
    {
    goto end; //String
    }
    }

    // payment_dto->authorization
    cJSON *authorization = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "authorization");
    if (authorization) { 
    if(!cJSON_IsString(authorization) && !cJSON_IsNull(authorization))
    {
    goto end; //String
    }
    }

    // payment_dto->reference_code
    cJSON *reference_code = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "referenceCode");
    if (reference_code) { 
    if(!cJSON_IsString(reference_code) && !cJSON_IsNull(reference_code))
    {
    goto end; //String
    }
    }

    // payment_dto->correlation_code
    cJSON *correlation_code = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "correlationCode");
    if (correlation_code) { 
    if(!cJSON_IsString(correlation_code) && !cJSON_IsNull(correlation_code))
    {
    goto end; //String
    }
    }

    // payment_dto->last_updated
    cJSON *last_updated = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "lastUpdated");
    if (last_updated) { 
    if(!cJSON_IsString(last_updated) && !cJSON_IsNull(last_updated))
    {
    goto end; //DateTime
    }
    }

    // payment_dto->on_behalf_of
    cJSON *on_behalf_of = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "onBehalfOf");
    walletsservice_payment_dto_ONBEHALFOF_e on_behalf_ofVariable;
    if (on_behalf_of) { 
    if(!cJSON_IsString(on_behalf_of))
    {
    goto end; //Enum
    }
    on_behalf_ofVariable = payment_dto_on_behalf_of_FromString(on_behalf_of->valuestring);
    }

    // payment_dto->payment_type
    cJSON *payment_type = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "paymentType");
    walletsservice_payment_dto_PAYMENTTYPE_e payment_typeVariable;
    if (payment_type) { 
    if(!cJSON_IsString(payment_type))
    {
    goto end; //Enum
    }
    payment_typeVariable = payment_dto_payment_type_FromString(payment_type->valuestring);
    }

    // payment_dto->payment_status
    cJSON *payment_status = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "paymentStatus");
    walletsservice_payment_dto_PAYMENTSTATUS_e payment_statusVariable;
    if (payment_status) { 
    if(!cJSON_IsString(payment_status))
    {
    goto end; //Enum
    }
    payment_statusVariable = payment_dto_payment_status_FromString(payment_status->valuestring);
    }

    // payment_dto->base_cost
    cJSON *base_cost = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "baseCost");
    if (base_cost) { 
    if(!cJSON_IsNumber(base_cost))
    {
    goto end; //Numeric
    }
    }

    // payment_dto->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "signature");
    if (signature) { 
    if(!cJSON_IsString(signature) && !cJSON_IsNull(signature))
    {
    goto end; //String
    }
    }

    // payment_dto->signature_mismatch
    cJSON *signature_mismatch = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "signatureMismatch");
    if (signature_mismatch) { 
    if(!cJSON_IsBool(signature_mismatch))
    {
    goto end; //Bool
    }
    }

    // payment_dto->is_external
    cJSON *is_external = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "isExternal");
    if (is_external) { 
    if(!cJSON_IsBool(is_external))
    {
    goto end; //Bool
    }
    }

    // payment_dto->marked_for_revision
    cJSON *marked_for_revision = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "markedForRevision");
    if (marked_for_revision) { 
    if(!cJSON_IsBool(marked_for_revision))
    {
    goto end; //Bool
    }
    }

    // payment_dto->forex_rates_snapshot
    cJSON *forex_rates_snapshot = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "forexRatesSnapshot");
    if (forex_rates_snapshot) { 
    if(!cJSON_IsString(forex_rates_snapshot) && !cJSON_IsNull(forex_rates_snapshot))
    {
    goto end; //String
    }
    }

    // payment_dto->official_id
    cJSON *official_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "officialId");
    if (official_id) { 
    if(!cJSON_IsString(official_id) && !cJSON_IsNull(official_id))
    {
    goto end; //String
    }
    }

    // payment_dto->official_id_expedition_date
    cJSON *official_id_expedition_date = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "officialIdExpeditionDate");
    if (official_id_expedition_date) { 
    if(!cJSON_IsString(official_id_expedition_date) && !cJSON_IsNull(official_id_expedition_date))
    {
    goto end; //DateTime
    }
    }

    // payment_dto->fiscal_identification_type_id
    cJSON *fiscal_identification_type_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "fiscalIdentificationTypeId");
    if (fiscal_identification_type_id) { 
    if(!cJSON_IsString(fiscal_identification_type_id) && !cJSON_IsNull(fiscal_identification_type_id))
    {
    goto end; //String
    }
    }

    // payment_dto->billing_address
    cJSON *billing_address = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "billingAddress");
    if (billing_address) { 
    if(!cJSON_IsString(billing_address) && !cJSON_IsNull(billing_address))
    {
    goto end; //String
    }
    }

    // payment_dto->phone
    cJSON *phone = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "phone");
    if (phone) { 
    if(!cJSON_IsString(phone) && !cJSON_IsNull(phone))
    {
    goto end; //String
    }
    }

    // payment_dto->cellphone
    cJSON *cellphone = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "cellphone");
    if (cellphone) { 
    if(!cJSON_IsString(cellphone) && !cJSON_IsNull(cellphone))
    {
    goto end; //String
    }
    }

    // payment_dto->department
    cJSON *department = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "department");
    if (department) { 
    if(!cJSON_IsString(department) && !cJSON_IsNull(department))
    {
    goto end; //String
    }
    }

    // payment_dto->city
    cJSON *city = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "city");
    if (city) { 
    if(!cJSON_IsString(city) && !cJSON_IsNull(city))
    {
    goto end; //String
    }
    }

    // payment_dto->country_id
    cJSON *country_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "countryId");
    if (country_id) { 
    if(!cJSON_IsString(country_id) && !cJSON_IsNull(country_id))
    {
    goto end; //String
    }
    }

    // payment_dto->location_id
    cJSON *location_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "locationId");
    if (location_id) { 
    if(!cJSON_IsString(location_id) && !cJSON_IsNull(location_id))
    {
    goto end; //String
    }
    }

    // payment_dto->entitlement_id
    cJSON *entitlement_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "entitlementId");
    if (entitlement_id) { 
    if(!cJSON_IsString(entitlement_id) && !cJSON_IsNull(entitlement_id))
    {
    goto end; //String
    }
    }

    // payment_dto->anti_fraud_score
    cJSON *anti_fraud_score = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "antiFraudScore");
    if (anti_fraud_score) { 
    if(!cJSON_IsNumber(anti_fraud_score))
    {
    goto end; //Numeric
    }
    }

    // payment_dto->call_record_url
    cJSON *call_record_url = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "callRecordURL");
    if (call_record_url) { 
    if(!cJSON_IsString(call_record_url) && !cJSON_IsNull(call_record_url))
    {
    goto end; //String
    }
    }

    // payment_dto->called
    cJSON *called = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "called");
    if (called) { 
    if(!cJSON_IsBool(called))
    {
    goto end; //Bool
    }
    }

    // payment_dto->verified
    cJSON *verified = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "verified");
    if (verified) { 
    if(!cJSON_IsBool(verified))
    {
    goto end; //Bool
    }
    }

    // payment_dto->payer_picture_timestamp
    cJSON *payer_picture_timestamp = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "payerPictureTimestamp");
    if (payer_picture_timestamp) { 
    if(!cJSON_IsString(payer_picture_timestamp) && !cJSON_IsNull(payer_picture_timestamp))
    {
    goto end; //String
    }
    }

    // payment_dto->payer_picture
    cJSON *payer_picture = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "payerPicture");
    if (payer_picture) { 
    if(!cJSON_IsString(payer_picture) && !cJSON_IsNull(payer_picture))
    {
    goto end; //String
    }
    }

    // payment_dto->identification_picture_timestamp
    cJSON *identification_picture_timestamp = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "identificationPictureTimestamp");
    if (identification_picture_timestamp) { 
    if(!cJSON_IsString(identification_picture_timestamp) && !cJSON_IsNull(identification_picture_timestamp))
    {
    goto end; //String
    }
    }

    // payment_dto->identification_picture
    cJSON *identification_picture = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "identificationPicture");
    if (identification_picture) { 
    if(!cJSON_IsString(identification_picture) && !cJSON_IsNull(identification_picture))
    {
    goto end; //String
    }
    }

    // payment_dto->identification_back_picture
    cJSON *identification_back_picture = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "identificationBackPicture");
    if (identification_back_picture) { 
    if(!cJSON_IsString(identification_back_picture) && !cJSON_IsNull(identification_back_picture))
    {
    goto end; //String
    }
    }

    // payment_dto->identification_back_picture_timestamp
    cJSON *identification_back_picture_timestamp = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "identificationBackPictureTimestamp");
    if (identification_back_picture_timestamp) { 
    if(!cJSON_IsString(identification_back_picture_timestamp) && !cJSON_IsNull(identification_back_picture_timestamp))
    {
    goto end; //String
    }
    }

    // payment_dto->ip_lookup_id
    cJSON *ip_lookup_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "ipLookupId");
    if (ip_lookup_id) { 
    if(!cJSON_IsString(ip_lookup_id) && !cJSON_IsNull(ip_lookup_id))
    {
    goto end; //String
    }
    }

    // payment_dto->order_id
    cJSON *order_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "orderId");
    if (order_id) { 
    if(!cJSON_IsString(order_id) && !cJSON_IsNull(order_id))
    {
    goto end; //String
    }
    }

    // payment_dto->accounting_entry_id
    cJSON *accounting_entry_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "accountingEntryId");
    if (accounting_entry_id) { 
    if(!cJSON_IsString(accounting_entry_id) && !cJSON_IsNull(accounting_entry_id))
    {
    goto end; //String
    }
    }

    // payment_dto->payment_gateway_id
    cJSON *payment_gateway_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "paymentGatewayId");
    if (payment_gateway_id) { 
    if(!cJSON_IsString(payment_gateway_id) && !cJSON_IsNull(payment_gateway_id))
    {
    goto end; //String
    }
    }

    // payment_dto->bank_account_id
    cJSON *bank_account_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "bankAccountId");
    if (bank_account_id) { 
    if(!cJSON_IsString(bank_account_id) && !cJSON_IsNull(bank_account_id))
    {
    goto end; //String
    }
    }

    // payment_dto->enrollment_id
    cJSON *enrollment_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "enrollmentId");
    if (enrollment_id) { 
    if(!cJSON_IsString(enrollment_id) && !cJSON_IsNull(enrollment_id))
    {
    goto end; //String
    }
    }

    // payment_dto->bank_id
    cJSON *bank_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "bankId");
    if (bank_id) { 
    if(!cJSON_IsString(bank_id) && !cJSON_IsNull(bank_id))
    {
    goto end; //String
    }
    }

    // payment_dto->payment_token_id
    cJSON *payment_token_id = cJSON_GetObjectItemCaseSensitive(payment_dtoJSON, "paymentTokenId");
    if (payment_token_id) { 
    if(!cJSON_IsString(payment_token_id) && !cJSON_IsNull(payment_token_id))
    {
    goto end; //String
    }
    }


    payment_dto_local_var = payment_dto_create (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        timestamp && !cJSON_IsNull(timestamp) ? strdup(timestamp->valuestring) : NULL,
        test ? test->valueint : 0,
        invoice_id && !cJSON_IsNull(invoice_id) ? strdup(invoice_id->valuestring) : NULL,
        tenant_id && !cJSON_IsNull(tenant_id) ? strdup(tenant_id->valuestring) : NULL,
        emisor_wallet_id && !cJSON_IsNull(emisor_wallet_id) ? strdup(emisor_wallet_id->valuestring) : NULL,
        receiver_wallet_id && !cJSON_IsNull(receiver_wallet_id) ? strdup(receiver_wallet_id->valuestring) : NULL,
        currency_id && !cJSON_IsNull(currency_id) ? strdup(currency_id->valuestring) : NULL,
        forex_rate ? forex_rate->valuedouble : 0,
        total_cost ? total_cost->valuedouble : 0,
        total_taxes ? total_taxes->valuedouble : 0,
        closed ? closed->valueint : 0,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        response && !cJSON_IsNull(response) ? strdup(response->valuestring) : NULL,
        authorization && !cJSON_IsNull(authorization) ? strdup(authorization->valuestring) : NULL,
        reference_code && !cJSON_IsNull(reference_code) ? strdup(reference_code->valuestring) : NULL,
        correlation_code && !cJSON_IsNull(correlation_code) ? strdup(correlation_code->valuestring) : NULL,
        last_updated && !cJSON_IsNull(last_updated) ? strdup(last_updated->valuestring) : NULL,
        on_behalf_of ? on_behalf_ofVariable : walletsservice_payment_dto_ONBEHALFOF_NULL,
        payment_type ? payment_typeVariable : walletsservice_payment_dto_PAYMENTTYPE_NULL,
        payment_status ? payment_statusVariable : walletsservice_payment_dto_PAYMENTSTATUS_NULL,
        base_cost ? base_cost->valuedouble : 0,
        signature && !cJSON_IsNull(signature) ? strdup(signature->valuestring) : NULL,
        signature_mismatch ? signature_mismatch->valueint : 0,
        is_external ? is_external->valueint : 0,
        marked_for_revision ? marked_for_revision->valueint : 0,
        forex_rates_snapshot && !cJSON_IsNull(forex_rates_snapshot) ? strdup(forex_rates_snapshot->valuestring) : NULL,
        official_id && !cJSON_IsNull(official_id) ? strdup(official_id->valuestring) : NULL,
        official_id_expedition_date && !cJSON_IsNull(official_id_expedition_date) ? strdup(official_id_expedition_date->valuestring) : NULL,
        fiscal_identification_type_id && !cJSON_IsNull(fiscal_identification_type_id) ? strdup(fiscal_identification_type_id->valuestring) : NULL,
        billing_address && !cJSON_IsNull(billing_address) ? strdup(billing_address->valuestring) : NULL,
        phone && !cJSON_IsNull(phone) ? strdup(phone->valuestring) : NULL,
        cellphone && !cJSON_IsNull(cellphone) ? strdup(cellphone->valuestring) : NULL,
        department && !cJSON_IsNull(department) ? strdup(department->valuestring) : NULL,
        city && !cJSON_IsNull(city) ? strdup(city->valuestring) : NULL,
        country_id && !cJSON_IsNull(country_id) ? strdup(country_id->valuestring) : NULL,
        location_id && !cJSON_IsNull(location_id) ? strdup(location_id->valuestring) : NULL,
        entitlement_id && !cJSON_IsNull(entitlement_id) ? strdup(entitlement_id->valuestring) : NULL,
        anti_fraud_score ? anti_fraud_score->valuedouble : 0,
        call_record_url && !cJSON_IsNull(call_record_url) ? strdup(call_record_url->valuestring) : NULL,
        called ? called->valueint : 0,
        verified ? verified->valueint : 0,
        payer_picture_timestamp && !cJSON_IsNull(payer_picture_timestamp) ? strdup(payer_picture_timestamp->valuestring) : NULL,
        payer_picture && !cJSON_IsNull(payer_picture) ? strdup(payer_picture->valuestring) : NULL,
        identification_picture_timestamp && !cJSON_IsNull(identification_picture_timestamp) ? strdup(identification_picture_timestamp->valuestring) : NULL,
        identification_picture && !cJSON_IsNull(identification_picture) ? strdup(identification_picture->valuestring) : NULL,
        identification_back_picture && !cJSON_IsNull(identification_back_picture) ? strdup(identification_back_picture->valuestring) : NULL,
        identification_back_picture_timestamp && !cJSON_IsNull(identification_back_picture_timestamp) ? strdup(identification_back_picture_timestamp->valuestring) : NULL,
        ip_lookup_id && !cJSON_IsNull(ip_lookup_id) ? strdup(ip_lookup_id->valuestring) : NULL,
        order_id && !cJSON_IsNull(order_id) ? strdup(order_id->valuestring) : NULL,
        accounting_entry_id && !cJSON_IsNull(accounting_entry_id) ? strdup(accounting_entry_id->valuestring) : NULL,
        payment_gateway_id && !cJSON_IsNull(payment_gateway_id) ? strdup(payment_gateway_id->valuestring) : NULL,
        bank_account_id && !cJSON_IsNull(bank_account_id) ? strdup(bank_account_id->valuestring) : NULL,
        enrollment_id && !cJSON_IsNull(enrollment_id) ? strdup(enrollment_id->valuestring) : NULL,
        bank_id && !cJSON_IsNull(bank_id) ? strdup(bank_id->valuestring) : NULL,
        payment_token_id && !cJSON_IsNull(payment_token_id) ? strdup(payment_token_id->valuestring) : NULL
        );

    return payment_dto_local_var;
end:
    return NULL;

}
