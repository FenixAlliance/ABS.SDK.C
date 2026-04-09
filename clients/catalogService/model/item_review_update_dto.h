/*
 * item_review_update_dto.h
 *
 * 
 */

#ifndef _item_review_update_dto_H_
#define _item_review_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_review_update_dto_t item_review_update_dto_t;




typedef struct item_review_update_dto_t {
    double review_score; //numeric
    char *review_message; // string

} item_review_update_dto_t;

item_review_update_dto_t *item_review_update_dto_create(
    double review_score,
    char *review_message
);

void item_review_update_dto_free(item_review_update_dto_t *item_review_update_dto);

item_review_update_dto_t *item_review_update_dto_parseFromJSON(cJSON *item_review_update_dtoJSON);

cJSON *item_review_update_dto_convertToJSON(item_review_update_dto_t *item_review_update_dto);

#endif /* _item_review_update_dto_H_ */

