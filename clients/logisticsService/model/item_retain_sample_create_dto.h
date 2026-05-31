/*
 * item_retain_sample_create_dto.h
 *
 * 
 */

#ifndef _item_retain_sample_create_dto_H_
#define _item_retain_sample_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_retain_sample_create_dto_t item_retain_sample_create_dto_t;




typedef struct item_retain_sample_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *warehouse_id; // string
    char *item_id; // string

} item_retain_sample_create_dto_t;

item_retain_sample_create_dto_t *item_retain_sample_create_dto_create(
    char *id,
    char *timestamp,
    char *warehouse_id,
    char *item_id
);

void item_retain_sample_create_dto_free(item_retain_sample_create_dto_t *item_retain_sample_create_dto);

item_retain_sample_create_dto_t *item_retain_sample_create_dto_parseFromJSON(cJSON *item_retain_sample_create_dtoJSON);

cJSON *item_retain_sample_create_dto_convertToJSON(item_retain_sample_create_dto_t *item_retain_sample_create_dto);

#endif /* _item_retain_sample_create_dto_H_ */

