/*
 * wallet_dto.h
 *
 * 
 */

#ifndef _wallet_dto_H_
#define _wallet_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct wallet_dto_t wallet_dto_t;




typedef struct wallet_dto_t {
    char *id; // string
    char *timestamp; //date time
    double balance; //numeric
    double crypto_balance; //numeric
    int test_mode; //boolean
    int verified; //boolean
    char *type; // string
    char *currency_id; // string
    double forex_rate; //numeric
    double balance_in_usd; //numeric
    double main_net_ether_balance; //numeric
    char *ethereum_address; // string
    char *ethereum_public_key; // string
    char *ethereum_private_key; // string
    double rolling_reserve_percent; //numeric

} wallet_dto_t;

wallet_dto_t *wallet_dto_create(
    char *id,
    char *timestamp,
    double balance,
    double crypto_balance,
    int test_mode,
    int verified,
    char *type,
    char *currency_id,
    double forex_rate,
    double balance_in_usd,
    double main_net_ether_balance,
    char *ethereum_address,
    char *ethereum_public_key,
    char *ethereum_private_key,
    double rolling_reserve_percent
);

void wallet_dto_free(wallet_dto_t *wallet_dto);

wallet_dto_t *wallet_dto_parseFromJSON(cJSON *wallet_dtoJSON);

cJSON *wallet_dto_convertToJSON(wallet_dto_t *wallet_dto);

#endif /* _wallet_dto_H_ */

