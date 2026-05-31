/*
 * point_of_sale_create_dto.h
 *
 * 
 */

#ifndef _point_of_sale_create_dto_H_
#define _point_of_sale_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct point_of_sale_create_dto_t point_of_sale_create_dto_t;




typedef struct point_of_sale_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *code; // string
    char *description; // string
    char *price_list_id; // string
    char *location_id; // string

} point_of_sale_create_dto_t;

point_of_sale_create_dto_t *point_of_sale_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *code,
    char *description,
    char *price_list_id,
    char *location_id
);

void point_of_sale_create_dto_free(point_of_sale_create_dto_t *point_of_sale_create_dto);

point_of_sale_create_dto_t *point_of_sale_create_dto_parseFromJSON(cJSON *point_of_sale_create_dtoJSON);

cJSON *point_of_sale_create_dto_convertToJSON(point_of_sale_create_dto_t *point_of_sale_create_dto);

#endif /* _point_of_sale_create_dto_H_ */

