/*
 * non_fungible_token_dto.h
 *
 * 
 */

#ifndef _non_fungible_token_dto_H_
#define _non_fungible_token_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_dto_t non_fungible_token_dto_t;




typedef struct non_fungible_token_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *summary; // string
    double price; //numeric
    char *currency_id; // string
    int published; //boolean
    int minted; //boolean
    char *blockchain_id; // string
    char *blockchain_name; // string
    char *minted_timestamp; //date time
    char *mint_transaction_hash; // string
    char *blockchain_block_id; // string
    char *primary_image_url; // string
    char *cover_url; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} non_fungible_token_dto_t;

non_fungible_token_dto_t *non_fungible_token_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    int published,
    int minted,
    char *blockchain_id,
    char *blockchain_name,
    char *minted_timestamp,
    char *mint_transaction_hash,
    char *blockchain_block_id,
    char *primary_image_url,
    char *cover_url,
    char *tenant_id,
    char *enrollment_id
);

void non_fungible_token_dto_free(non_fungible_token_dto_t *non_fungible_token_dto);

non_fungible_token_dto_t *non_fungible_token_dto_parseFromJSON(cJSON *non_fungible_token_dtoJSON);

cJSON *non_fungible_token_dto_convertToJSON(non_fungible_token_dto_t *non_fungible_token_dto);

#endif /* _non_fungible_token_dto_H_ */

