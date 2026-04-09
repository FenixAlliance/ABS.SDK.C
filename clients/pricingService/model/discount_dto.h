/*
 * discount_dto.h
 *
 * 
 */

#ifndef _discount_dto_H_
#define _discount_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_dto_t discount_dto_t;




typedef struct discount_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *description; // string
    double value; //numeric
    double percent; //numeric
    char *item_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *discount_list_id; // string
    double end_quantity; //numeric
    double begin_quantity; //numeric

} discount_dto_t;

discount_dto_t *discount_dto_create(
    char *id,
    char *timestamp,
    char *description,
    double value,
    double percent,
    char *item_id,
    char *tenant_id,
    char *enrollment_id,
    char *discount_list_id,
    double end_quantity,
    double begin_quantity
);

void discount_dto_free(discount_dto_t *discount_dto);

discount_dto_t *discount_dto_parseFromJSON(cJSON *discount_dtoJSON);

cJSON *discount_dto_convertToJSON(discount_dto_t *discount_dto);

#endif /* _discount_dto_H_ */

