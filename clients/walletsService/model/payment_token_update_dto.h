/*
 * payment_token_update_dto.h
 *
 * 
 */

#ifndef _payment_token_update_dto_H_
#define _payment_token_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_token_update_dto_t payment_token_update_dto_t;




typedef struct payment_token_update_dto_t {
    char *mask; // string
    char *token_type; // string
    char *card_franchise; // string
    char *card_expiration_month; // string
    char *card_expiration_year; // string
    char *status; // string
    char *valid_until; //date time
    char *payment_gateway_id; // string

} payment_token_update_dto_t;

payment_token_update_dto_t *payment_token_update_dto_create(
    char *mask,
    char *token_type,
    char *card_franchise,
    char *card_expiration_month,
    char *card_expiration_year,
    char *status,
    char *valid_until,
    char *payment_gateway_id
);

void payment_token_update_dto_free(payment_token_update_dto_t *payment_token_update_dto);

payment_token_update_dto_t *payment_token_update_dto_parseFromJSON(cJSON *payment_token_update_dtoJSON);

cJSON *payment_token_update_dto_convertToJSON(payment_token_update_dto_t *payment_token_update_dto);

#endif /* _payment_token_update_dto_H_ */

