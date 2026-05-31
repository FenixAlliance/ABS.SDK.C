/*
 * wallet_withdraw_dto.h
 *
 * 
 */

#ifndef _wallet_withdraw_dto_H_
#define _wallet_withdraw_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_withdraw_dto_t wallet_withdraw_dto_t;


// Enum WITHDRAWSTATUS for wallet_withdraw_dto

typedef enum  { walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_NULL = 0, walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_OnHold, walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_Retained, walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_Processing, walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_OnValidation, walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_Processed } walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e;

char* wallet_withdraw_dto_withdraw_status_ToString(walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_status);

walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e wallet_withdraw_dto_withdraw_status_FromString(char* withdraw_status);



typedef struct wallet_withdraw_dto_t {
    char *id; // string
    char *timestamp; //date time
    walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_status; //enum
    char *wallet_account_id; // string
    char *wallet_withdraw_request_id; // string
    double balance_before_withdraw; //numeric
    double balance_after_withdraw; //numeric
    double withdrawed_amount; //numeric
    char *currency_id; // string

} wallet_withdraw_dto_t;

wallet_withdraw_dto_t *wallet_withdraw_dto_create(
    char *id,
    char *timestamp,
    walletsservice_wallet_withdraw_dto_WITHDRAWSTATUS_e withdraw_status,
    char *wallet_account_id,
    char *wallet_withdraw_request_id,
    double balance_before_withdraw,
    double balance_after_withdraw,
    double withdrawed_amount,
    char *currency_id
);

void wallet_withdraw_dto_free(wallet_withdraw_dto_t *wallet_withdraw_dto);

wallet_withdraw_dto_t *wallet_withdraw_dto_parseFromJSON(cJSON *wallet_withdraw_dtoJSON);

cJSON *wallet_withdraw_dto_convertToJSON(wallet_withdraw_dto_t *wallet_withdraw_dto);

#endif /* _wallet_withdraw_dto_H_ */

