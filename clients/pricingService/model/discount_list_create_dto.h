/*
 * discount_list_create_dto.h
 *
 * 
 */

#ifndef _discount_list_create_dto_H_
#define _discount_list_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct discount_list_create_dto_t discount_list_create_dto_t;




typedef struct discount_list_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *currency_id; // string

} discount_list_create_dto_t;

discount_list_create_dto_t *discount_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *currency_id
);

void discount_list_create_dto_free(discount_list_create_dto_t *discount_list_create_dto);

discount_list_create_dto_t *discount_list_create_dto_parseFromJSON(cJSON *discount_list_create_dtoJSON);

cJSON *discount_list_create_dto_convertToJSON(discount_list_create_dto_t *discount_list_create_dto);

#endif /* _discount_list_create_dto_H_ */

