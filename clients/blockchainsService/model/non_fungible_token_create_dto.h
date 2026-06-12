/*
 * non_fungible_token_create_dto.h
 *
 * 
 */

#ifndef _non_fungible_token_create_dto_H_
#define _non_fungible_token_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct non_fungible_token_create_dto_t non_fungible_token_create_dto_t;




typedef struct non_fungible_token_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string
    char *summary; // string
    double price; //numeric
    char *currency_id; // string
    char *blockchain_id; // string

} non_fungible_token_create_dto_t;

non_fungible_token_create_dto_t *non_fungible_token_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description,
    char *summary,
    double price,
    char *currency_id,
    char *blockchain_id
);

void non_fungible_token_create_dto_free(non_fungible_token_create_dto_t *non_fungible_token_create_dto);

non_fungible_token_create_dto_t *non_fungible_token_create_dto_parseFromJSON(cJSON *non_fungible_token_create_dtoJSON);

cJSON *non_fungible_token_create_dto_convertToJSON(non_fungible_token_create_dto_t *non_fungible_token_create_dto);

#endif /* _non_fungible_token_create_dto_H_ */

