/*
 * discount_update_dto.h
 *
 * 
 */

#ifndef _discount_update_dto_H_
#define _discount_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_update_dto_t discount_update_dto_t;




typedef struct discount_update_dto_t {
    char *description; // string
    double begin_quantity; //numeric
    double end_quantity; //numeric
    double percent; //numeric
    double value; //numeric
    char *tenant_id; // string
    char *enrollment_id; // string
    char *discount_list_id; // string

} discount_update_dto_t;

discount_update_dto_t *discount_update_dto_create(
    char *description,
    double begin_quantity,
    double end_quantity,
    double percent,
    double value,
    char *tenant_id,
    char *enrollment_id,
    char *discount_list_id
);

void discount_update_dto_free(discount_update_dto_t *discount_update_dto);

discount_update_dto_t *discount_update_dto_parseFromJSON(cJSON *discount_update_dtoJSON);

cJSON *discount_update_dto_convertToJSON(discount_update_dto_t *discount_update_dto);

#endif /* _discount_update_dto_H_ */

