/*
 * share_class_update_dto.h
 *
 * 
 */

#ifndef _share_class_update_dto_H_
#define _share_class_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct share_class_update_dto_t share_class_update_dto_t;




typedef struct share_class_update_dto_t {
    char *name; // string
    int value; //boolean
    char *description; // string
    char *forex_rates; // string
    char *currency_id; // string

} share_class_update_dto_t;

share_class_update_dto_t *share_class_update_dto_create(
    char *name,
    int value,
    char *description,
    char *forex_rates,
    char *currency_id
);

void share_class_update_dto_free(share_class_update_dto_t *share_class_update_dto);

share_class_update_dto_t *share_class_update_dto_parseFromJSON(cJSON *share_class_update_dtoJSON);

cJSON *share_class_update_dto_convertToJSON(share_class_update_dto_t *share_class_update_dto);

#endif /* _share_class_update_dto_H_ */

