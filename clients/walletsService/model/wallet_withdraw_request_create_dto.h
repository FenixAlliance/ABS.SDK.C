/*
 * wallet_withdraw_request_create_dto.h
 *
 * 
 */

#ifndef _wallet_withdraw_request_create_dto_H_
#define _wallet_withdraw_request_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_withdraw_request_create_dto_t wallet_withdraw_request_create_dto_t;




typedef struct wallet_withdraw_request_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    double requested_withdraw_amount; //numeric
    char *currency_id; // string
    char *bank_account_id; // string

} wallet_withdraw_request_create_dto_t;

wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_create(
    char *id,
    char *timestamp,
    double requested_withdraw_amount,
    char *currency_id,
    char *bank_account_id
);

void wallet_withdraw_request_create_dto_free(wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto);

wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto_parseFromJSON(cJSON *wallet_withdraw_request_create_dtoJSON);

cJSON *wallet_withdraw_request_create_dto_convertToJSON(wallet_withdraw_request_create_dto_t *wallet_withdraw_request_create_dto);

#endif /* _wallet_withdraw_request_create_dto_H_ */

