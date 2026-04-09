/*
 * price_list_create_dto.h
 *
 * 
 */

#ifndef _price_list_create_dto_H_
#define _price_list_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct price_list_create_dto_t price_list_create_dto_t;




typedef struct price_list_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *start_date; //date time
    char *end_date; //date time
    char *currency_id; // string
    char *unit_id; // string
    char *unit_group_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} price_list_create_dto_t;

price_list_create_dto_t *price_list_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *start_date,
    char *end_date,
    char *currency_id,
    char *unit_id,
    char *unit_group_id,
    char *tenant_id,
    char *enrollment_id
);

void price_list_create_dto_free(price_list_create_dto_t *price_list_create_dto);

price_list_create_dto_t *price_list_create_dto_parseFromJSON(cJSON *price_list_create_dtoJSON);

cJSON *price_list_create_dto_convertToJSON(price_list_create_dto_t *price_list_create_dto);

#endif /* _price_list_create_dto_H_ */

