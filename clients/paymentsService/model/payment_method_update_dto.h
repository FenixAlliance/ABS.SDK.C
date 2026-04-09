/*
 * payment_method_update_dto.h
 *
 * 
 */

#ifndef _payment_method_update_dto_H_
#define _payment_method_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct payment_method_update_dto_t payment_method_update_dto_t;




typedef struct payment_method_update_dto_t {
    char *name; // string
    char *description; // string

} payment_method_update_dto_t;

payment_method_update_dto_t *payment_method_update_dto_create(
    char *name,
    char *description
);

void payment_method_update_dto_free(payment_method_update_dto_t *payment_method_update_dto);

payment_method_update_dto_t *payment_method_update_dto_parseFromJSON(cJSON *payment_method_update_dtoJSON);

cJSON *payment_method_update_dto_convertToJSON(payment_method_update_dto_t *payment_method_update_dto);

#endif /* _payment_method_update_dto_H_ */

