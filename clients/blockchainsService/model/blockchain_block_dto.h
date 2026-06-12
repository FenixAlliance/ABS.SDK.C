/*
 * blockchain_block_dto.h
 *
 * 
 */

#ifndef _blockchain_block_dto_H_
#define _blockchain_block_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_block_dto_t blockchain_block_dto_t;




typedef struct blockchain_block_dto_t {
    char *id; // string
    char *timestamp; //date time
    int index; //numeric
    char *hash; // string
    char *data; // string
    long nonce; //numeric
    char *previous_hash; // string
    char *blockchain_id; // string
    char *wallet_account_id; // string
    char *tenant_id; // string

} blockchain_block_dto_t;

blockchain_block_dto_t *blockchain_block_dto_create(
    char *id,
    char *timestamp,
    int index,
    char *hash,
    char *data,
    long nonce,
    char *previous_hash,
    char *blockchain_id,
    char *wallet_account_id,
    char *tenant_id
);

void blockchain_block_dto_free(blockchain_block_dto_t *blockchain_block_dto);

blockchain_block_dto_t *blockchain_block_dto_parseFromJSON(cJSON *blockchain_block_dtoJSON);

cJSON *blockchain_block_dto_convertToJSON(blockchain_block_dto_t *blockchain_block_dto);

#endif /* _blockchain_block_dto_H_ */

