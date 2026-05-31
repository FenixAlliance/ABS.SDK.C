/*
 * store_dto.h
 *
 * 
 */

#ifndef _store_dto_H_
#define _store_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct store_dto_t store_dto_t;




typedef struct store_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *name; // string
    int e_commerce; //boolean
    char *currency_id; // string

} store_dto_t;

store_dto_t *store_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *name,
    int e_commerce,
    char *currency_id
);

void store_dto_free(store_dto_t *store_dto);

store_dto_t *store_dto_parseFromJSON(cJSON *store_dtoJSON);

cJSON *store_dto_convertToJSON(store_dto_t *store_dto);

#endif /* _store_dto_H_ */

