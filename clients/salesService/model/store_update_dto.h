/*
 * store_update_dto.h
 *
 * 
 */

#ifndef _store_update_dto_H_
#define _store_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_update_dto_t store_update_dto_t;




typedef struct store_update_dto_t {
    char *name; // string
    int e_commerce; //boolean
    char *currency_id; // string

} store_update_dto_t;

store_update_dto_t *store_update_dto_create(
    char *name,
    int e_commerce,
    char *currency_id
);

void store_update_dto_free(store_update_dto_t *store_update_dto);

store_update_dto_t *store_update_dto_parseFromJSON(cJSON *store_update_dtoJSON);

cJSON *store_update_dto_convertToJSON(store_update_dto_t *store_update_dto);

#endif /* _store_update_dto_H_ */

