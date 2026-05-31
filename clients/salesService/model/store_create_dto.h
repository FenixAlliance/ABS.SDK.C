/*
 * store_create_dto.h
 *
 * 
 */

#ifndef _store_create_dto_H_
#define _store_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_create_dto_t store_create_dto_t;




typedef struct store_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int e_commerce; //boolean
    char *currency_id; // string

} store_create_dto_t;

store_create_dto_t *store_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int e_commerce,
    char *currency_id
);

void store_create_dto_free(store_create_dto_t *store_create_dto);

store_create_dto_t *store_create_dto_parseFromJSON(cJSON *store_create_dtoJSON);

cJSON *store_create_dto_convertToJSON(store_create_dto_t *store_create_dto);

#endif /* _store_create_dto_H_ */

