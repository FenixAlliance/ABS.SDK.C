/*
 * share_class_create_dto.h
 *
 * 
 */

#ifndef _share_class_create_dto_H_
#define _share_class_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_class_create_dto_t share_class_create_dto_t;




typedef struct share_class_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int value; //boolean
    char *description; // string
    char *forex_rates; // string
    char *currency_id; // string

} share_class_create_dto_t;

share_class_create_dto_t *share_class_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int value,
    char *description,
    char *forex_rates,
    char *currency_id
);

void share_class_create_dto_free(share_class_create_dto_t *share_class_create_dto);

share_class_create_dto_t *share_class_create_dto_parseFromJSON(cJSON *share_class_create_dtoJSON);

cJSON *share_class_create_dto_convertToJSON(share_class_create_dto_t *share_class_create_dto);

#endif /* _share_class_create_dto_H_ */

