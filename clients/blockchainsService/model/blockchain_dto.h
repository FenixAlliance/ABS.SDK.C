/*
 * blockchain_dto.h
 *
 * 
 */

#ifndef _blockchain_dto_H_
#define _blockchain_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct blockchain_dto_t blockchain_dto_t;




typedef struct blockchain_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *logo_url; // string
    char *description; // string
    int difficulty; //numeric
    char *tenant_id; // string
    char *enrollment_id; // string

} blockchain_dto_t;

blockchain_dto_t *blockchain_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *logo_url,
    char *description,
    int difficulty,
    char *tenant_id,
    char *enrollment_id
);

void blockchain_dto_free(blockchain_dto_t *blockchain_dto);

blockchain_dto_t *blockchain_dto_parseFromJSON(cJSON *blockchain_dtoJSON);

cJSON *blockchain_dto_convertToJSON(blockchain_dto_t *blockchain_dto);

#endif /* _blockchain_dto_H_ */

