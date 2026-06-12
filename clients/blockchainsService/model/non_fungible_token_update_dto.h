/*
 * non_fungible_token_update_dto.h
 *
 * 
 */

#ifndef _non_fungible_token_update_dto_H_
#define _non_fungible_token_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_update_dto_t non_fungible_token_update_dto_t;




typedef struct non_fungible_token_update_dto_t {
    char *title; // string
    char *description; // string
    char *summary; // string
    double price; //numeric
    char *currency_id; // string
    int published; //boolean
    int minted; //boolean
    char *mint_transaction_hash; // string
    char *blockchain_block_id; // string

} non_fungible_token_update_dto_t;

non_fungible_token_update_dto_t *non_fungible_token_update_dto_create(
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    int published,
    int minted,
    char *mint_transaction_hash,
    char *blockchain_block_id
);

void non_fungible_token_update_dto_free(non_fungible_token_update_dto_t *non_fungible_token_update_dto);

non_fungible_token_update_dto_t *non_fungible_token_update_dto_parseFromJSON(cJSON *non_fungible_token_update_dtoJSON);

cJSON *non_fungible_token_update_dto_convertToJSON(non_fungible_token_update_dto_t *non_fungible_token_update_dto);

#endif /* _non_fungible_token_update_dto_H_ */

