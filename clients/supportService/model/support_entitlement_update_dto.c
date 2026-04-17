#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "support_entitlement_update_dto.h"



support_entitlement_update_dto_t *support_entitlement_update_dto_create(
    char *title,
    char *description,
    char *end_date_time,
    char *next_invoice_date_time,
    char *code,
    char *signature,
    int quantity,
    int repetitions,
    int charge_attempts,
    int free_trial_in_days,
    int grace_period_in_days,
    int custom_renewal_period,
    int enable_automatic_renew,
    int enable_pro_rate_billing,
    int enable_usage_threshold,
    int enable_automatic_disable,
    int enable_automatic_payments,
    int usage_threshold,
    char *data,
    char *data_label,
    char *data1,
    char *data1_label,
    char *data2,
    char *data2_label,
    char *data3,
    char *data3_label,
    char *data4,
    char *data4_label,
    char *data5,
    char *data5_label,
    char *data6,
    char *data6_label,
    char *data7,
    char *data7_label,
    char *data8,
    char *data8_label,
    char *data9,
    char *data9_label,
    char *individual_id,
    char *organization_id,
    char *receiver_business_id,
    char *payment_token_id,
    char *wallet_account_id,
    char *security_certificate_id
    ) {
    support_entitlement_update_dto_t *support_entitlement_update_dto_local_var = malloc(sizeof(support_entitlement_update_dto_t));
    if (!support_entitlement_update_dto_local_var) {
        return NULL;
    }
    support_entitlement_update_dto_local_var->title = title;
    support_entitlement_update_dto_local_var->description = description;
    support_entitlement_update_dto_local_var->end_date_time = end_date_time;
    support_entitlement_update_dto_local_var->next_invoice_date_time = next_invoice_date_time;
    support_entitlement_update_dto_local_var->code = code;
    support_entitlement_update_dto_local_var->signature = signature;
    support_entitlement_update_dto_local_var->quantity = quantity;
    support_entitlement_update_dto_local_var->repetitions = repetitions;
    support_entitlement_update_dto_local_var->charge_attempts = charge_attempts;
    support_entitlement_update_dto_local_var->free_trial_in_days = free_trial_in_days;
    support_entitlement_update_dto_local_var->grace_period_in_days = grace_period_in_days;
    support_entitlement_update_dto_local_var->custom_renewal_period = custom_renewal_period;
    support_entitlement_update_dto_local_var->enable_automatic_renew = enable_automatic_renew;
    support_entitlement_update_dto_local_var->enable_pro_rate_billing = enable_pro_rate_billing;
    support_entitlement_update_dto_local_var->enable_usage_threshold = enable_usage_threshold;
    support_entitlement_update_dto_local_var->enable_automatic_disable = enable_automatic_disable;
    support_entitlement_update_dto_local_var->enable_automatic_payments = enable_automatic_payments;
    support_entitlement_update_dto_local_var->usage_threshold = usage_threshold;
    support_entitlement_update_dto_local_var->data = data;
    support_entitlement_update_dto_local_var->data_label = data_label;
    support_entitlement_update_dto_local_var->data1 = data1;
    support_entitlement_update_dto_local_var->data1_label = data1_label;
    support_entitlement_update_dto_local_var->data2 = data2;
    support_entitlement_update_dto_local_var->data2_label = data2_label;
    support_entitlement_update_dto_local_var->data3 = data3;
    support_entitlement_update_dto_local_var->data3_label = data3_label;
    support_entitlement_update_dto_local_var->data4 = data4;
    support_entitlement_update_dto_local_var->data4_label = data4_label;
    support_entitlement_update_dto_local_var->data5 = data5;
    support_entitlement_update_dto_local_var->data5_label = data5_label;
    support_entitlement_update_dto_local_var->data6 = data6;
    support_entitlement_update_dto_local_var->data6_label = data6_label;
    support_entitlement_update_dto_local_var->data7 = data7;
    support_entitlement_update_dto_local_var->data7_label = data7_label;
    support_entitlement_update_dto_local_var->data8 = data8;
    support_entitlement_update_dto_local_var->data8_label = data8_label;
    support_entitlement_update_dto_local_var->data9 = data9;
    support_entitlement_update_dto_local_var->data9_label = data9_label;
    support_entitlement_update_dto_local_var->individual_id = individual_id;
    support_entitlement_update_dto_local_var->organization_id = organization_id;
    support_entitlement_update_dto_local_var->receiver_business_id = receiver_business_id;
    support_entitlement_update_dto_local_var->payment_token_id = payment_token_id;
    support_entitlement_update_dto_local_var->wallet_account_id = wallet_account_id;
    support_entitlement_update_dto_local_var->security_certificate_id = security_certificate_id;

    return support_entitlement_update_dto_local_var;
}


void support_entitlement_update_dto_free(support_entitlement_update_dto_t *support_entitlement_update_dto) {
    if(NULL == support_entitlement_update_dto){
        return ;
    }
    listEntry_t *listEntry;
    if (support_entitlement_update_dto->title) {
        free(support_entitlement_update_dto->title);
        support_entitlement_update_dto->title = NULL;
    }
    if (support_entitlement_update_dto->description) {
        free(support_entitlement_update_dto->description);
        support_entitlement_update_dto->description = NULL;
    }
    if (support_entitlement_update_dto->end_date_time) {
        free(support_entitlement_update_dto->end_date_time);
        support_entitlement_update_dto->end_date_time = NULL;
    }
    if (support_entitlement_update_dto->next_invoice_date_time) {
        free(support_entitlement_update_dto->next_invoice_date_time);
        support_entitlement_update_dto->next_invoice_date_time = NULL;
    }
    if (support_entitlement_update_dto->code) {
        free(support_entitlement_update_dto->code);
        support_entitlement_update_dto->code = NULL;
    }
    if (support_entitlement_update_dto->signature) {
        free(support_entitlement_update_dto->signature);
        support_entitlement_update_dto->signature = NULL;
    }
    if (support_entitlement_update_dto->data) {
        free(support_entitlement_update_dto->data);
        support_entitlement_update_dto->data = NULL;
    }
    if (support_entitlement_update_dto->data_label) {
        free(support_entitlement_update_dto->data_label);
        support_entitlement_update_dto->data_label = NULL;
    }
    if (support_entitlement_update_dto->data1) {
        free(support_entitlement_update_dto->data1);
        support_entitlement_update_dto->data1 = NULL;
    }
    if (support_entitlement_update_dto->data1_label) {
        free(support_entitlement_update_dto->data1_label);
        support_entitlement_update_dto->data1_label = NULL;
    }
    if (support_entitlement_update_dto->data2) {
        free(support_entitlement_update_dto->data2);
        support_entitlement_update_dto->data2 = NULL;
    }
    if (support_entitlement_update_dto->data2_label) {
        free(support_entitlement_update_dto->data2_label);
        support_entitlement_update_dto->data2_label = NULL;
    }
    if (support_entitlement_update_dto->data3) {
        free(support_entitlement_update_dto->data3);
        support_entitlement_update_dto->data3 = NULL;
    }
    if (support_entitlement_update_dto->data3_label) {
        free(support_entitlement_update_dto->data3_label);
        support_entitlement_update_dto->data3_label = NULL;
    }
    if (support_entitlement_update_dto->data4) {
        free(support_entitlement_update_dto->data4);
        support_entitlement_update_dto->data4 = NULL;
    }
    if (support_entitlement_update_dto->data4_label) {
        free(support_entitlement_update_dto->data4_label);
        support_entitlement_update_dto->data4_label = NULL;
    }
    if (support_entitlement_update_dto->data5) {
        free(support_entitlement_update_dto->data5);
        support_entitlement_update_dto->data5 = NULL;
    }
    if (support_entitlement_update_dto->data5_label) {
        free(support_entitlement_update_dto->data5_label);
        support_entitlement_update_dto->data5_label = NULL;
    }
    if (support_entitlement_update_dto->data6) {
        free(support_entitlement_update_dto->data6);
        support_entitlement_update_dto->data6 = NULL;
    }
    if (support_entitlement_update_dto->data6_label) {
        free(support_entitlement_update_dto->data6_label);
        support_entitlement_update_dto->data6_label = NULL;
    }
    if (support_entitlement_update_dto->data7) {
        free(support_entitlement_update_dto->data7);
        support_entitlement_update_dto->data7 = NULL;
    }
    if (support_entitlement_update_dto->data7_label) {
        free(support_entitlement_update_dto->data7_label);
        support_entitlement_update_dto->data7_label = NULL;
    }
    if (support_entitlement_update_dto->data8) {
        free(support_entitlement_update_dto->data8);
        support_entitlement_update_dto->data8 = NULL;
    }
    if (support_entitlement_update_dto->data8_label) {
        free(support_entitlement_update_dto->data8_label);
        support_entitlement_update_dto->data8_label = NULL;
    }
    if (support_entitlement_update_dto->data9) {
        free(support_entitlement_update_dto->data9);
        support_entitlement_update_dto->data9 = NULL;
    }
    if (support_entitlement_update_dto->data9_label) {
        free(support_entitlement_update_dto->data9_label);
        support_entitlement_update_dto->data9_label = NULL;
    }
    if (support_entitlement_update_dto->individual_id) {
        free(support_entitlement_update_dto->individual_id);
        support_entitlement_update_dto->individual_id = NULL;
    }
    if (support_entitlement_update_dto->organization_id) {
        free(support_entitlement_update_dto->organization_id);
        support_entitlement_update_dto->organization_id = NULL;
    }
    if (support_entitlement_update_dto->receiver_business_id) {
        free(support_entitlement_update_dto->receiver_business_id);
        support_entitlement_update_dto->receiver_business_id = NULL;
    }
    if (support_entitlement_update_dto->payment_token_id) {
        free(support_entitlement_update_dto->payment_token_id);
        support_entitlement_update_dto->payment_token_id = NULL;
    }
    if (support_entitlement_update_dto->wallet_account_id) {
        free(support_entitlement_update_dto->wallet_account_id);
        support_entitlement_update_dto->wallet_account_id = NULL;
    }
    if (support_entitlement_update_dto->security_certificate_id) {
        free(support_entitlement_update_dto->security_certificate_id);
        support_entitlement_update_dto->security_certificate_id = NULL;
    }
    free(support_entitlement_update_dto);
}

cJSON *support_entitlement_update_dto_convertToJSON(support_entitlement_update_dto_t *support_entitlement_update_dto) {
    cJSON *item = cJSON_CreateObject();

    // support_entitlement_update_dto->title
    if(support_entitlement_update_dto->title) {
    if(cJSON_AddStringToObject(item, "title", support_entitlement_update_dto->title) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->description
    if(support_entitlement_update_dto->description) {
    if(cJSON_AddStringToObject(item, "description", support_entitlement_update_dto->description) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->end_date_time
    if(support_entitlement_update_dto->end_date_time) {
    if(cJSON_AddStringToObject(item, "endDateTime", support_entitlement_update_dto->end_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_entitlement_update_dto->next_invoice_date_time
    if(support_entitlement_update_dto->next_invoice_date_time) {
    if(cJSON_AddStringToObject(item, "nextInvoiceDateTime", support_entitlement_update_dto->next_invoice_date_time) == NULL) {
    goto fail; //Date-Time
    }
    }


    // support_entitlement_update_dto->code
    if(support_entitlement_update_dto->code) {
    if(cJSON_AddStringToObject(item, "code", support_entitlement_update_dto->code) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->signature
    if(support_entitlement_update_dto->signature) {
    if(cJSON_AddStringToObject(item, "signature", support_entitlement_update_dto->signature) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->quantity
    if(support_entitlement_update_dto->quantity) {
    if(cJSON_AddNumberToObject(item, "quantity", support_entitlement_update_dto->quantity) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->repetitions
    if(support_entitlement_update_dto->repetitions) {
    if(cJSON_AddNumberToObject(item, "repetitions", support_entitlement_update_dto->repetitions) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->charge_attempts
    if(support_entitlement_update_dto->charge_attempts) {
    if(cJSON_AddNumberToObject(item, "chargeAttempts", support_entitlement_update_dto->charge_attempts) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->free_trial_in_days
    if(support_entitlement_update_dto->free_trial_in_days) {
    if(cJSON_AddNumberToObject(item, "freeTrialInDays", support_entitlement_update_dto->free_trial_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->grace_period_in_days
    if(support_entitlement_update_dto->grace_period_in_days) {
    if(cJSON_AddNumberToObject(item, "gracePeriodInDays", support_entitlement_update_dto->grace_period_in_days) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->custom_renewal_period
    if(support_entitlement_update_dto->custom_renewal_period) {
    if(cJSON_AddNumberToObject(item, "customRenewalPeriod", support_entitlement_update_dto->custom_renewal_period) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->enable_automatic_renew
    if(support_entitlement_update_dto->enable_automatic_renew) {
    if(cJSON_AddBoolToObject(item, "enableAutomaticRenew", support_entitlement_update_dto->enable_automatic_renew) == NULL) {
    goto fail; //Bool
    }
    }


    // support_entitlement_update_dto->enable_pro_rate_billing
    if(support_entitlement_update_dto->enable_pro_rate_billing) {
    if(cJSON_AddBoolToObject(item, "enableProRateBilling", support_entitlement_update_dto->enable_pro_rate_billing) == NULL) {
    goto fail; //Bool
    }
    }


    // support_entitlement_update_dto->enable_usage_threshold
    if(support_entitlement_update_dto->enable_usage_threshold) {
    if(cJSON_AddBoolToObject(item, "enableUsageThreshold", support_entitlement_update_dto->enable_usage_threshold) == NULL) {
    goto fail; //Bool
    }
    }


    // support_entitlement_update_dto->enable_automatic_disable
    if(support_entitlement_update_dto->enable_automatic_disable) {
    if(cJSON_AddBoolToObject(item, "enableAutomaticDisable", support_entitlement_update_dto->enable_automatic_disable) == NULL) {
    goto fail; //Bool
    }
    }


    // support_entitlement_update_dto->enable_automatic_payments
    if(support_entitlement_update_dto->enable_automatic_payments) {
    if(cJSON_AddBoolToObject(item, "enableAutomaticPayments", support_entitlement_update_dto->enable_automatic_payments) == NULL) {
    goto fail; //Bool
    }
    }


    // support_entitlement_update_dto->usage_threshold
    if(support_entitlement_update_dto->usage_threshold) {
    if(cJSON_AddNumberToObject(item, "usageThreshold", support_entitlement_update_dto->usage_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // support_entitlement_update_dto->data
    if(support_entitlement_update_dto->data) {
    if(cJSON_AddStringToObject(item, "data", support_entitlement_update_dto->data) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data_label
    if(support_entitlement_update_dto->data_label) {
    if(cJSON_AddStringToObject(item, "dataLabel", support_entitlement_update_dto->data_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data1
    if(support_entitlement_update_dto->data1) {
    if(cJSON_AddStringToObject(item, "data1", support_entitlement_update_dto->data1) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data1_label
    if(support_entitlement_update_dto->data1_label) {
    if(cJSON_AddStringToObject(item, "data1Label", support_entitlement_update_dto->data1_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data2
    if(support_entitlement_update_dto->data2) {
    if(cJSON_AddStringToObject(item, "data2", support_entitlement_update_dto->data2) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data2_label
    if(support_entitlement_update_dto->data2_label) {
    if(cJSON_AddStringToObject(item, "data2Label", support_entitlement_update_dto->data2_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data3
    if(support_entitlement_update_dto->data3) {
    if(cJSON_AddStringToObject(item, "data3", support_entitlement_update_dto->data3) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data3_label
    if(support_entitlement_update_dto->data3_label) {
    if(cJSON_AddStringToObject(item, "data3Label", support_entitlement_update_dto->data3_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data4
    if(support_entitlement_update_dto->data4) {
    if(cJSON_AddStringToObject(item, "data4", support_entitlement_update_dto->data4) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data4_label
    if(support_entitlement_update_dto->data4_label) {
    if(cJSON_AddStringToObject(item, "data4Label", support_entitlement_update_dto->data4_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data5
    if(support_entitlement_update_dto->data5) {
    if(cJSON_AddStringToObject(item, "data5", support_entitlement_update_dto->data5) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data5_label
    if(support_entitlement_update_dto->data5_label) {
    if(cJSON_AddStringToObject(item, "data5Label", support_entitlement_update_dto->data5_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data6
    if(support_entitlement_update_dto->data6) {
    if(cJSON_AddStringToObject(item, "data6", support_entitlement_update_dto->data6) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data6_label
    if(support_entitlement_update_dto->data6_label) {
    if(cJSON_AddStringToObject(item, "data6Label", support_entitlement_update_dto->data6_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data7
    if(support_entitlement_update_dto->data7) {
    if(cJSON_AddStringToObject(item, "data7", support_entitlement_update_dto->data7) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data7_label
    if(support_entitlement_update_dto->data7_label) {
    if(cJSON_AddStringToObject(item, "data7Label", support_entitlement_update_dto->data7_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data8
    if(support_entitlement_update_dto->data8) {
    if(cJSON_AddStringToObject(item, "data8", support_entitlement_update_dto->data8) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data8_label
    if(support_entitlement_update_dto->data8_label) {
    if(cJSON_AddStringToObject(item, "data8Label", support_entitlement_update_dto->data8_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data9
    if(support_entitlement_update_dto->data9) {
    if(cJSON_AddStringToObject(item, "data9", support_entitlement_update_dto->data9) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->data9_label
    if(support_entitlement_update_dto->data9_label) {
    if(cJSON_AddStringToObject(item, "data9Label", support_entitlement_update_dto->data9_label) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->individual_id
    if(support_entitlement_update_dto->individual_id) {
    if(cJSON_AddStringToObject(item, "individualID", support_entitlement_update_dto->individual_id) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->organization_id
    if(support_entitlement_update_dto->organization_id) {
    if(cJSON_AddStringToObject(item, "organizationID", support_entitlement_update_dto->organization_id) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->receiver_business_id
    if(support_entitlement_update_dto->receiver_business_id) {
    if(cJSON_AddStringToObject(item, "receiverBusinessID", support_entitlement_update_dto->receiver_business_id) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->payment_token_id
    if(support_entitlement_update_dto->payment_token_id) {
    if(cJSON_AddStringToObject(item, "paymentTokenID", support_entitlement_update_dto->payment_token_id) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->wallet_account_id
    if(support_entitlement_update_dto->wallet_account_id) {
    if(cJSON_AddStringToObject(item, "walletAccountID", support_entitlement_update_dto->wallet_account_id) == NULL) {
    goto fail; //String
    }
    }


    // support_entitlement_update_dto->security_certificate_id
    if(support_entitlement_update_dto->security_certificate_id) {
    if(cJSON_AddStringToObject(item, "securityCertificateID", support_entitlement_update_dto->security_certificate_id) == NULL) {
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

support_entitlement_update_dto_t *support_entitlement_update_dto_parseFromJSON(cJSON *support_entitlement_update_dtoJSON){

    support_entitlement_update_dto_t *support_entitlement_update_dto_local_var = NULL;

    // support_entitlement_update_dto->title
    cJSON *title = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "title");
    if (title) { 
    if(!cJSON_IsString(title) && !cJSON_IsNull(title))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->end_date_time
    cJSON *end_date_time = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "endDateTime");
    if (end_date_time) { 
    if(!cJSON_IsString(end_date_time) && !cJSON_IsNull(end_date_time))
    {
    goto end; //DateTime
    }
    }

    // support_entitlement_update_dto->next_invoice_date_time
    cJSON *next_invoice_date_time = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "nextInvoiceDateTime");
    if (next_invoice_date_time) { 
    if(!cJSON_IsString(next_invoice_date_time) && !cJSON_IsNull(next_invoice_date_time))
    {
    goto end; //DateTime
    }
    }

    // support_entitlement_update_dto->code
    cJSON *code = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "code");
    if (code) { 
    if(!cJSON_IsString(code) && !cJSON_IsNull(code))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->signature
    cJSON *signature = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "signature");
    if (signature) { 
    if(!cJSON_IsString(signature) && !cJSON_IsNull(signature))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->quantity
    cJSON *quantity = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "quantity");
    if (quantity) { 
    if(!cJSON_IsNumber(quantity))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->repetitions
    cJSON *repetitions = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "repetitions");
    if (repetitions) { 
    if(!cJSON_IsNumber(repetitions))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->charge_attempts
    cJSON *charge_attempts = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "chargeAttempts");
    if (charge_attempts) { 
    if(!cJSON_IsNumber(charge_attempts))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->free_trial_in_days
    cJSON *free_trial_in_days = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "freeTrialInDays");
    if (free_trial_in_days) { 
    if(!cJSON_IsNumber(free_trial_in_days))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->grace_period_in_days
    cJSON *grace_period_in_days = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "gracePeriodInDays");
    if (grace_period_in_days) { 
    if(!cJSON_IsNumber(grace_period_in_days))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->custom_renewal_period
    cJSON *custom_renewal_period = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "customRenewalPeriod");
    if (custom_renewal_period) { 
    if(!cJSON_IsNumber(custom_renewal_period))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->enable_automatic_renew
    cJSON *enable_automatic_renew = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "enableAutomaticRenew");
    if (enable_automatic_renew) { 
    if(!cJSON_IsBool(enable_automatic_renew))
    {
    goto end; //Bool
    }
    }

    // support_entitlement_update_dto->enable_pro_rate_billing
    cJSON *enable_pro_rate_billing = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "enableProRateBilling");
    if (enable_pro_rate_billing) { 
    if(!cJSON_IsBool(enable_pro_rate_billing))
    {
    goto end; //Bool
    }
    }

    // support_entitlement_update_dto->enable_usage_threshold
    cJSON *enable_usage_threshold = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "enableUsageThreshold");
    if (enable_usage_threshold) { 
    if(!cJSON_IsBool(enable_usage_threshold))
    {
    goto end; //Bool
    }
    }

    // support_entitlement_update_dto->enable_automatic_disable
    cJSON *enable_automatic_disable = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "enableAutomaticDisable");
    if (enable_automatic_disable) { 
    if(!cJSON_IsBool(enable_automatic_disable))
    {
    goto end; //Bool
    }
    }

    // support_entitlement_update_dto->enable_automatic_payments
    cJSON *enable_automatic_payments = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "enableAutomaticPayments");
    if (enable_automatic_payments) { 
    if(!cJSON_IsBool(enable_automatic_payments))
    {
    goto end; //Bool
    }
    }

    // support_entitlement_update_dto->usage_threshold
    cJSON *usage_threshold = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "usageThreshold");
    if (usage_threshold) { 
    if(!cJSON_IsNumber(usage_threshold))
    {
    goto end; //Numeric
    }
    }

    // support_entitlement_update_dto->data
    cJSON *data = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data");
    if (data) { 
    if(!cJSON_IsString(data) && !cJSON_IsNull(data))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data_label
    cJSON *data_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "dataLabel");
    if (data_label) { 
    if(!cJSON_IsString(data_label) && !cJSON_IsNull(data_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data1
    cJSON *data1 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data1");
    if (data1) { 
    if(!cJSON_IsString(data1) && !cJSON_IsNull(data1))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data1_label
    cJSON *data1_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data1Label");
    if (data1_label) { 
    if(!cJSON_IsString(data1_label) && !cJSON_IsNull(data1_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data2
    cJSON *data2 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data2");
    if (data2) { 
    if(!cJSON_IsString(data2) && !cJSON_IsNull(data2))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data2_label
    cJSON *data2_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data2Label");
    if (data2_label) { 
    if(!cJSON_IsString(data2_label) && !cJSON_IsNull(data2_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data3
    cJSON *data3 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data3");
    if (data3) { 
    if(!cJSON_IsString(data3) && !cJSON_IsNull(data3))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data3_label
    cJSON *data3_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data3Label");
    if (data3_label) { 
    if(!cJSON_IsString(data3_label) && !cJSON_IsNull(data3_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data4
    cJSON *data4 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data4");
    if (data4) { 
    if(!cJSON_IsString(data4) && !cJSON_IsNull(data4))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data4_label
    cJSON *data4_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data4Label");
    if (data4_label) { 
    if(!cJSON_IsString(data4_label) && !cJSON_IsNull(data4_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data5
    cJSON *data5 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data5");
    if (data5) { 
    if(!cJSON_IsString(data5) && !cJSON_IsNull(data5))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data5_label
    cJSON *data5_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data5Label");
    if (data5_label) { 
    if(!cJSON_IsString(data5_label) && !cJSON_IsNull(data5_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data6
    cJSON *data6 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data6");
    if (data6) { 
    if(!cJSON_IsString(data6) && !cJSON_IsNull(data6))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data6_label
    cJSON *data6_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data6Label");
    if (data6_label) { 
    if(!cJSON_IsString(data6_label) && !cJSON_IsNull(data6_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data7
    cJSON *data7 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data7");
    if (data7) { 
    if(!cJSON_IsString(data7) && !cJSON_IsNull(data7))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data7_label
    cJSON *data7_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data7Label");
    if (data7_label) { 
    if(!cJSON_IsString(data7_label) && !cJSON_IsNull(data7_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data8
    cJSON *data8 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data8");
    if (data8) { 
    if(!cJSON_IsString(data8) && !cJSON_IsNull(data8))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data8_label
    cJSON *data8_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data8Label");
    if (data8_label) { 
    if(!cJSON_IsString(data8_label) && !cJSON_IsNull(data8_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data9
    cJSON *data9 = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data9");
    if (data9) { 
    if(!cJSON_IsString(data9) && !cJSON_IsNull(data9))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->data9_label
    cJSON *data9_label = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "data9Label");
    if (data9_label) { 
    if(!cJSON_IsString(data9_label) && !cJSON_IsNull(data9_label))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->individual_id
    cJSON *individual_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "individualID");
    if (individual_id) { 
    if(!cJSON_IsString(individual_id) && !cJSON_IsNull(individual_id))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->organization_id
    cJSON *organization_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "organizationID");
    if (organization_id) { 
    if(!cJSON_IsString(organization_id) && !cJSON_IsNull(organization_id))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->receiver_business_id
    cJSON *receiver_business_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "receiverBusinessID");
    if (receiver_business_id) { 
    if(!cJSON_IsString(receiver_business_id) && !cJSON_IsNull(receiver_business_id))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->payment_token_id
    cJSON *payment_token_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "paymentTokenID");
    if (payment_token_id) { 
    if(!cJSON_IsString(payment_token_id) && !cJSON_IsNull(payment_token_id))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->wallet_account_id
    cJSON *wallet_account_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "walletAccountID");
    if (wallet_account_id) { 
    if(!cJSON_IsString(wallet_account_id) && !cJSON_IsNull(wallet_account_id))
    {
    goto end; //String
    }
    }

    // support_entitlement_update_dto->security_certificate_id
    cJSON *security_certificate_id = cJSON_GetObjectItemCaseSensitive(support_entitlement_update_dtoJSON, "securityCertificateID");
    if (security_certificate_id) { 
    if(!cJSON_IsString(security_certificate_id) && !cJSON_IsNull(security_certificate_id))
    {
    goto end; //String
    }
    }


    support_entitlement_update_dto_local_var = support_entitlement_update_dto_create (
        title && !cJSON_IsNull(title) ? strdup(title->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        end_date_time && !cJSON_IsNull(end_date_time) ? strdup(end_date_time->valuestring) : NULL,
        next_invoice_date_time && !cJSON_IsNull(next_invoice_date_time) ? strdup(next_invoice_date_time->valuestring) : NULL,
        code && !cJSON_IsNull(code) ? strdup(code->valuestring) : NULL,
        signature && !cJSON_IsNull(signature) ? strdup(signature->valuestring) : NULL,
        quantity ? quantity->valuedouble : 0,
        repetitions ? repetitions->valuedouble : 0,
        charge_attempts ? charge_attempts->valuedouble : 0,
        free_trial_in_days ? free_trial_in_days->valuedouble : 0,
        grace_period_in_days ? grace_period_in_days->valuedouble : 0,
        custom_renewal_period ? custom_renewal_period->valuedouble : 0,
        enable_automatic_renew ? enable_automatic_renew->valueint : 0,
        enable_pro_rate_billing ? enable_pro_rate_billing->valueint : 0,
        enable_usage_threshold ? enable_usage_threshold->valueint : 0,
        enable_automatic_disable ? enable_automatic_disable->valueint : 0,
        enable_automatic_payments ? enable_automatic_payments->valueint : 0,
        usage_threshold ? usage_threshold->valuedouble : 0,
        data && !cJSON_IsNull(data) ? strdup(data->valuestring) : NULL,
        data_label && !cJSON_IsNull(data_label) ? strdup(data_label->valuestring) : NULL,
        data1 && !cJSON_IsNull(data1) ? strdup(data1->valuestring) : NULL,
        data1_label && !cJSON_IsNull(data1_label) ? strdup(data1_label->valuestring) : NULL,
        data2 && !cJSON_IsNull(data2) ? strdup(data2->valuestring) : NULL,
        data2_label && !cJSON_IsNull(data2_label) ? strdup(data2_label->valuestring) : NULL,
        data3 && !cJSON_IsNull(data3) ? strdup(data3->valuestring) : NULL,
        data3_label && !cJSON_IsNull(data3_label) ? strdup(data3_label->valuestring) : NULL,
        data4 && !cJSON_IsNull(data4) ? strdup(data4->valuestring) : NULL,
        data4_label && !cJSON_IsNull(data4_label) ? strdup(data4_label->valuestring) : NULL,
        data5 && !cJSON_IsNull(data5) ? strdup(data5->valuestring) : NULL,
        data5_label && !cJSON_IsNull(data5_label) ? strdup(data5_label->valuestring) : NULL,
        data6 && !cJSON_IsNull(data6) ? strdup(data6->valuestring) : NULL,
        data6_label && !cJSON_IsNull(data6_label) ? strdup(data6_label->valuestring) : NULL,
        data7 && !cJSON_IsNull(data7) ? strdup(data7->valuestring) : NULL,
        data7_label && !cJSON_IsNull(data7_label) ? strdup(data7_label->valuestring) : NULL,
        data8 && !cJSON_IsNull(data8) ? strdup(data8->valuestring) : NULL,
        data8_label && !cJSON_IsNull(data8_label) ? strdup(data8_label->valuestring) : NULL,
        data9 && !cJSON_IsNull(data9) ? strdup(data9->valuestring) : NULL,
        data9_label && !cJSON_IsNull(data9_label) ? strdup(data9_label->valuestring) : NULL,
        individual_id && !cJSON_IsNull(individual_id) ? strdup(individual_id->valuestring) : NULL,
        organization_id && !cJSON_IsNull(organization_id) ? strdup(organization_id->valuestring) : NULL,
        receiver_business_id && !cJSON_IsNull(receiver_business_id) ? strdup(receiver_business_id->valuestring) : NULL,
        payment_token_id && !cJSON_IsNull(payment_token_id) ? strdup(payment_token_id->valuestring) : NULL,
        wallet_account_id && !cJSON_IsNull(wallet_account_id) ? strdup(wallet_account_id->valuestring) : NULL,
        security_certificate_id && !cJSON_IsNull(security_certificate_id) ? strdup(security_certificate_id->valuestring) : NULL
        );

    return support_entitlement_update_dto_local_var;
end:
    return NULL;

}
