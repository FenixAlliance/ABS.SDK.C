/*
 * payment_token_create_dto.h
 *
 * 
 */

#ifndef _payment_token_create_dto_H_
#define _payment_token_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_token_create_dto_t payment_token_create_dto_t;




typedef struct payment_token_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *mask; // string
    char *token_type; // string
    char *card_franchise; // string
    char *card_expiration_month; // string
    char *card_expiration_year; // string
    char *valid_until; //date time
    char *payment_gateway_id; // string

} payment_token_create_dto_t;

payment_token_create_dto_t *payment_token_create_dto_create(
    char *id,
    char *timestamp,
    char *mask,
    char *token_type,
    char *card_franchise,
    char *card_expiration_month,
    char *card_expiration_year,
    char *valid_until,
    char *payment_gateway_id
);

void payment_token_create_dto_free(payment_token_create_dto_t *payment_token_create_dto);

payment_token_create_dto_t *payment_token_create_dto_parseFromJSON(cJSON *payment_token_create_dtoJSON);

cJSON *payment_token_create_dto_convertToJSON(payment_token_create_dto_t *payment_token_create_dto);

#endif /* _payment_token_create_dto_H_ */

