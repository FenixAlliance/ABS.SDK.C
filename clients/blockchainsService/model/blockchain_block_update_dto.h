/*
 * blockchain_block_update_dto.h
 *
 * 
 */

#ifndef _blockchain_block_update_dto_H_
#define _blockchain_block_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_block_update_dto_t blockchain_block_update_dto_t;




typedef struct blockchain_block_update_dto_t {
    char *data; // string
    long nonce; //numeric

} blockchain_block_update_dto_t;

blockchain_block_update_dto_t *blockchain_block_update_dto_create(
    char *data,
    long nonce
);

void blockchain_block_update_dto_free(blockchain_block_update_dto_t *blockchain_block_update_dto);

blockchain_block_update_dto_t *blockchain_block_update_dto_parseFromJSON(cJSON *blockchain_block_update_dtoJSON);

cJSON *blockchain_block_update_dto_convertToJSON(blockchain_block_update_dto_t *blockchain_block_update_dto);

#endif /* _blockchain_block_update_dto_H_ */

