/*
 * item_review_create_dto.h
 *
 * 
 */

#ifndef _item_review_create_dto_H_
#define _item_review_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_review_create_dto_t item_review_create_dto_t;




typedef struct item_review_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *item_id; // string
    double review_score; //numeric
    char *review_message; // string
    char *social_profile_id; // string

} item_review_create_dto_t;

item_review_create_dto_t *item_review_create_dto_create(
    char *id,
    char *timestamp,
    char *item_id,
    double review_score,
    char *review_message,
    char *social_profile_id
);

void item_review_create_dto_free(item_review_create_dto_t *item_review_create_dto);

item_review_create_dto_t *item_review_create_dto_parseFromJSON(cJSON *item_review_create_dtoJSON);

cJSON *item_review_create_dto_convertToJSON(item_review_create_dto_t *item_review_create_dto);

#endif /* _item_review_create_dto_H_ */

