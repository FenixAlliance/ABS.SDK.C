/*
 * wallet_withdraw_request_dto.h
 *
 * 
 */

#ifndef _wallet_withdraw_request_dto_H_
#define _wallet_withdraw_request_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_withdraw_request_dto_t wallet_withdraw_request_dto_t;


// Enum WALLETWITHDRAWREQUESTSTATUS for wallet_withdraw_request_dto

typedef enum  { walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_NULL = 0, walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_Pending, walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_Processed, walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_Cancelled, walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_OnHold, walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_Denied } walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e;

char* wallet_withdraw_request_dto_wallet_withdraw_request_status_ToString(walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_status);

walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_dto_wallet_withdraw_request_status_FromString(char* wallet_withdraw_request_status);



typedef struct wallet_withdraw_request_dto_t {
    char *id; // string
    char *timestamp; //date time
    double requested_withdraw_amount; //numeric
    double requested_withdraw_amount_in_usd; //numeric
    walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_status; //enum
    char *currency_id; // string
    char *business_id; // string
    char *wallet_account_id; // string
    char *bank_account_id; // string

} wallet_withdraw_request_dto_t;

wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_create(
    char *id,
    char *timestamp,
    double requested_withdraw_amount,
    double requested_withdraw_amount_in_usd,
    walletsservice_wallet_withdraw_request_dto_WALLETWITHDRAWREQUESTSTATUS_e wallet_withdraw_request_status,
    char *currency_id,
    char *business_id,
    char *wallet_account_id,
    char *bank_account_id
);

void wallet_withdraw_request_dto_free(wallet_withdraw_request_dto_t *wallet_withdraw_request_dto);

wallet_withdraw_request_dto_t *wallet_withdraw_request_dto_parseFromJSON(cJSON *wallet_withdraw_request_dtoJSON);

cJSON *wallet_withdraw_request_dto_convertToJSON(wallet_withdraw_request_dto_t *wallet_withdraw_request_dto);

#endif /* _wallet_withdraw_request_dto_H_ */

