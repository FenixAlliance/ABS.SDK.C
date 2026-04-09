/*
 * item_question_record_create_dto.h
 *
 * 
 */

#ifndef _item_question_record_create_dto_H_
#define _item_question_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct item_question_record_create_dto_t item_question_record_create_dto_t;




typedef struct item_question_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    int needs_revision; //boolean
    char *question; // string
    char *social_profile_id; // string
    char *business_id; // string

} item_question_record_create_dto_t;

item_question_record_create_dto_t *item_question_record_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    int needs_revision,
    char *question,
    char *social_profile_id,
    char *business_id
);

void item_question_record_create_dto_free(item_question_record_create_dto_t *item_question_record_create_dto);

item_question_record_create_dto_t *item_question_record_create_dto_parseFromJSON(cJSON *item_question_record_create_dtoJSON);

cJSON *item_question_record_create_dto_convertToJSON(item_question_record_create_dto_t *item_question_record_create_dto);

#endif /* _item_question_record_create_dto_H_ */

