/*
 * payment_token_dto.h
 *
 * 
 */

#ifndef _payment_token_dto_H_
#define _payment_token_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_token_dto_t payment_token_dto_t;




typedef struct payment_token_dto_t {
    char *id; // string
    char *timestamp; //date time
    int test; //boolean
    char *mask; // string
    char *token_type; // string
    char *card_franchise; // string
    char *card_expiration_month; // string
    char *card_expiration_year; // string
    char *status; // string
    char *valid_until; //date time
    char *wallet_account_id; // string
    char *payment_gateway_id; // string

} payment_token_dto_t;

payment_token_dto_t *payment_token_dto_create(
    char *id,
    char *timestamp,
    int test,
    char *mask,
    char *token_type,
    char *card_franchise,
    char *card_expiration_month,
    char *card_expiration_year,
    char *status,
    char *valid_until,
    char *wallet_account_id,
    char *payment_gateway_id
);

void payment_token_dto_free(payment_token_dto_t *payment_token_dto);

payment_token_dto_t *payment_token_dto_parseFromJSON(cJSON *payment_token_dtoJSON);

cJSON *payment_token_dto_convertToJSON(payment_token_dto_t *payment_token_dto);

#endif /* _payment_token_dto_H_ */

