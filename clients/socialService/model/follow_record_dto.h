/*
 * follow_record_dto.h
 *
 * 
 */

#ifndef _follow_record_dto_H_
#define _follow_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct follow_record_dto_t follow_record_dto_t;




typedef struct follow_record_dto_t {
    char *id; // string
    char *type; // string
    char *follower_id; // string
    char *followed_id; // string
    int alerts; //boolean

} follow_record_dto_t;

follow_record_dto_t *follow_record_dto_create(
    char *id,
    char *type,
    char *follower_id,
    char *followed_id,
    int alerts
);

void follow_record_dto_free(follow_record_dto_t *follow_record_dto);

follow_record_dto_t *follow_record_dto_parseFromJSON(cJSON *follow_record_dtoJSON);

cJSON *follow_record_dto_convertToJSON(follow_record_dto_t *follow_record_dto);

#endif /* _follow_record_dto_H_ */

