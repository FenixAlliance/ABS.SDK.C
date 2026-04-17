/*
 * support_entitlement_create_dto.h
 *
 * 
 */

#ifndef _support_entitlement_create_dto_H_
#define _support_entitlement_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_entitlement_create_dto_t support_entitlement_create_dto_t;




typedef struct support_entitlement_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *start_date_time; //date time
    char *end_date_time; //date time
    char *next_invoice_date_time; //date time
    char *code; // string
    char *signature; // string
    int quantity; //numeric
    int repetitions; //numeric
    int charge_attempts; //numeric
    int free_trial_in_days; //numeric
    int grace_period_in_days; //numeric
    int custom_renewal_period; //numeric
    int enable_automatic_renew; //boolean
    int enable_pro_rate_billing; //boolean
    int enable_usage_threshold; //boolean
    int enable_automatic_disable; //boolean
    int enable_automatic_payments; //boolean
    int usage_threshold; //numeric
    char *data; // string
    char *data_label; // string
    char *data1; // string
    char *data1_label; // string
    char *data2; // string
    char *data2_label; // string
    char *data3; // string
    char *data3_label; // string
    char *data4; // string
    char *data4_label; // string
    char *data5; // string
    char *data5_label; // string
    char *data6; // string
    char *data6_label; // string
    char *data7; // string
    char *data7_label; // string
    char *data8; // string
    char *data8_label; // string
    char *data9; // string
    char *data9_label; // string
    char *individual_id; // string
    char *organization_id; // string
    char *receiver_business_id; // string
    char *payment_token_id; // string
    char *wallet_account_id; // string
    char *security_certificate_id; // string

} support_entitlement_create_dto_t;

support_entitlement_create_dto_t *support_entitlement_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *start_date_time,
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
);

void support_entitlement_create_dto_free(support_entitlement_create_dto_t *support_entitlement_create_dto);

support_entitlement_create_dto_t *support_entitlement_create_dto_parseFromJSON(cJSON *support_entitlement_create_dtoJSON);

cJSON *support_entitlement_create_dto_convertToJSON(support_entitlement_create_dto_t *support_entitlement_create_dto);

#endif /* _support_entitlement_create_dto_H_ */

