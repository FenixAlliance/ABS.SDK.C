/*
 * commission_update_dto.h
 *
 * 
 */

#ifndef _commission_update_dto_H_
#define _commission_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commission_update_dto_t commission_update_dto_t;




typedef struct commission_update_dto_t {
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

} commission_update_dto_t;

commission_update_dto_t *commission_update_dto_create(
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
    char *receiver_contact_id
);

void commission_update_dto_free(commission_update_dto_t *commission_update_dto);

commission_update_dto_t *commission_update_dto_parseFromJSON(cJSON *commission_update_dtoJSON);

cJSON *commission_update_dto_convertToJSON(commission_update_dto_t *commission_update_dto);

#endif /* _commission_update_dto_H_ */

