/*
 * item_retain_sample_dto.h
 *
 * 
 */

#ifndef _item_retain_sample_dto_H_
#define _item_retain_sample_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_retain_sample_dto_t item_retain_sample_dto_t;




typedef struct item_retain_sample_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *warehouse_id; // string
    char *item_id; // string

} item_retain_sample_dto_t;

item_retain_sample_dto_t *item_retain_sample_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *warehouse_id,
    char *item_id
);

void item_retain_sample_dto_free(item_retain_sample_dto_t *item_retain_sample_dto);

item_retain_sample_dto_t *item_retain_sample_dto_parseFromJSON(cJSON *item_retain_sample_dtoJSON);

cJSON *item_retain_sample_dto_convertToJSON(item_retain_sample_dto_t *item_retain_sample_dto);

#endif /* _item_retain_sample_dto_H_ */

