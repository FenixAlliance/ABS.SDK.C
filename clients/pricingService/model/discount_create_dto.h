/*
 * discount_create_dto.h
 *
 * 
 */

#ifndef _discount_create_dto_H_
#define _discount_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_create_dto_t discount_create_dto_t;




typedef struct discount_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *description; // string
    double begin_quantity; //numeric
    double end_quantity; //numeric
    double percent; //numeric
    double value; //numeric
    char *discount_list_id; // string

} discount_create_dto_t;

discount_create_dto_t *discount_create_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double begin_quantity,
    double end_quantity,
    double percent,
    double value,
    char *discount_list_id
);

void discount_create_dto_free(discount_create_dto_t *discount_create_dto);

discount_create_dto_t *discount_create_dto_parseFromJSON(cJSON *discount_create_dtoJSON);

cJSON *discount_create_dto_convertToJSON(discount_create_dto_t *discount_create_dto);

#endif /* _discount_create_dto_H_ */

