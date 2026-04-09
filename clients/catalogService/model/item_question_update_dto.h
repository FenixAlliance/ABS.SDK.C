/*
 * item_question_update_dto.h
 *
 * 
 */

#ifndef _item_question_update_dto_H_
#define _item_question_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_question_update_dto_t item_question_update_dto_t;




typedef struct item_question_update_dto_t {
    char *title; // string
    int needs_revision; //boolean
    char *question; // string

} item_question_update_dto_t;

item_question_update_dto_t *item_question_update_dto_create(
    char *title,
    int needs_revision,
    char *question
);

void item_question_update_dto_free(item_question_update_dto_t *item_question_update_dto);

item_question_update_dto_t *item_question_update_dto_parseFromJSON(cJSON *item_question_update_dtoJSON);

cJSON *item_question_update_dto_convertToJSON(item_question_update_dto_t *item_question_update_dto);

#endif /* _item_question_update_dto_H_ */

