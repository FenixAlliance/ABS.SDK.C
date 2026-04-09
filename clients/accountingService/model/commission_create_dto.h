/*
 * commission_create_dto.h
 *
 * 
 */

#ifndef _commission_create_dto_H_
#define _commission_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct commission_create_dto_t commission_create_dto_t;




typedef struct commission_create_dto_t {
    char *id; // string
    char *timestamp; //date time
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

} commission_create_dto_t;

commission_create_dto_t *commission_create_dto_create(
    char *id,
    char *timestamp,
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

void commission_create_dto_free(commission_create_dto_t *commission_create_dto);

commission_create_dto_t *commission_create_dto_parseFromJSON(cJSON *commission_create_dtoJSON);

cJSON *commission_create_dto_convertToJSON(commission_create_dto_t *commission_create_dto);

#endif /* _commission_create_dto_H_ */

