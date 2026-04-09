/*
 * average_dto.h
 *
 * 
 */

#ifndef _average_dto_H_
#define _average_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct average_dto_t average_dto_t;




typedef struct average_dto_t {
    char *id; // string
    char *timestamp; //date time
    double average; //numeric

} average_dto_t;

average_dto_t *average_dto_create(
    char *id,
    char *timestamp,
    double average
);

void average_dto_free(average_dto_t *average_dto);

average_dto_t *average_dto_parseFromJSON(cJSON *average_dtoJSON);

cJSON *average_dto_convertToJSON(average_dto_t *average_dto);

#endif /* _average_dto_H_ */

