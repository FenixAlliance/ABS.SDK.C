/*
 * payment_commission_update_dto.h
 *
 * 
 */

#ifndef _payment_commission_update_dto_H_
#define _payment_commission_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_commission_update_dto_t payment_commission_update_dto_t;




typedef struct payment_commission_update_dto_t {
    char *title; // string
    char *description; // string
    double base_amount; //numeric
    double added_percent; //numeric
    double added_amount; //numeric
    double tax_comission; //numeric
    char *tenant_id; // string
    char *enrollment_id; // string
    char *salary_id; // string
    char *emisor_wallet_account_id; // string
    char *receiver_wallet_account_id; // string
    char *emisor_contact_id; // string
    char *receiver_contact_id; // string
    char *payment_id; // string

} payment_commission_update_dto_t;

payment_commission_update_dto_t *payment_commission_update_dto_create(
    char *title,
    char *description,
    double base_amount,
    double added_percent,
    double added_amount,
    double tax_comission,
    char *tenant_id,
    char *enrollment_id,
    char *salary_id,
    char *emisor_wallet_account_id,
    char *receiver_wallet_account_id,
    char *emisor_contact_id,
    char *receiver_contact_id,
    char *payment_id
);

void payment_commission_update_dto_free(payment_commission_update_dto_t *payment_commission_update_dto);

payment_commission_update_dto_t *payment_commission_update_dto_parseFromJSON(cJSON *payment_commission_update_dtoJSON);

cJSON *payment_commission_update_dto_convertToJSON(payment_commission_update_dto_t *payment_commission_update_dto);

#endif /* _payment_commission_update_dto_H_ */

