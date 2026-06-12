/*
 * blockchain_create_dto.h
 *
 * 
 */

#ifndef _blockchain_create_dto_H_
#define _blockchain_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_create_dto_t blockchain_create_dto_t;




typedef struct blockchain_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *logo_url; // string
    char *description; // string
    int difficulty; //numeric

} blockchain_create_dto_t;

blockchain_create_dto_t *blockchain_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *description,
    int difficulty
);

void blockchain_create_dto_free(blockchain_create_dto_t *blockchain_create_dto);

blockchain_create_dto_t *blockchain_create_dto_parseFromJSON(cJSON *blockchain_create_dtoJSON);

cJSON *blockchain_create_dto_convertToJSON(blockchain_create_dto_t *blockchain_create_dto);

#endif /* _blockchain_create_dto_H_ */

