/*
 * blockchain_update_dto.h
 *
 * 
 */

#ifndef _blockchain_update_dto_H_
#define _blockchain_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_update_dto_t blockchain_update_dto_t;




typedef struct blockchain_update_dto_t {
    char *name; // string
    char *logo_url; // string
    char *description; // string
    int difficulty; //numeric

} blockchain_update_dto_t;

blockchain_update_dto_t *blockchain_update_dto_create(
    char *name,
    char *logo_url,
    char *description,
    int difficulty
);

void blockchain_update_dto_free(blockchain_update_dto_t *blockchain_update_dto);

blockchain_update_dto_t *blockchain_update_dto_parseFromJSON(cJSON *blockchain_update_dtoJSON);

cJSON *blockchain_update_dto_convertToJSON(blockchain_update_dto_t *blockchain_update_dto);

#endif /* _blockchain_update_dto_H_ */

