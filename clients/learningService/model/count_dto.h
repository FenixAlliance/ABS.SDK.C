/*
 * count_dto.h
 *
 * 
 */

#ifndef _count_dto_H_
#define _count_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct count_dto_t count_dto_t;




typedef struct count_dto_t {
    char *id; // string
    char *timestamp; //date time
    int count; //numeric

} count_dto_t;

count_dto_t *count_dto_create(
    char *id,
    char *timestamp,
    int count
);

void count_dto_free(count_dto_t *count_dto);

count_dto_t *count_dto_parseFromJSON(cJSON *count_dtoJSON);

cJSON *count_dto_convertToJSON(count_dto_t *count_dto);

#endif /* _count_dto_H_ */

