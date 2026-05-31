/*
 * point_of_sale_update_dto.h
 *
 * 
 */

#ifndef _point_of_sale_update_dto_H_
#define _point_of_sale_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct point_of_sale_update_dto_t point_of_sale_update_dto_t;




typedef struct point_of_sale_update_dto_t {
    char *code; // string
    char *title; // string
    char *description; // string
    char *price_list_id; // string
    char *location_id; // string

} point_of_sale_update_dto_t;

point_of_sale_update_dto_t *point_of_sale_update_dto_create(
    char *code,
    char *title,
    char *description,
    char *price_list_id,
    char *location_id
);

void point_of_sale_update_dto_free(point_of_sale_update_dto_t *point_of_sale_update_dto);

point_of_sale_update_dto_t *point_of_sale_update_dto_parseFromJSON(cJSON *point_of_sale_update_dtoJSON);

cJSON *point_of_sale_update_dto_convertToJSON(point_of_sale_update_dto_t *point_of_sale_update_dto);

#endif /* _point_of_sale_update_dto_H_ */

