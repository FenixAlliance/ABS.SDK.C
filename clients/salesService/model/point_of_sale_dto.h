/*
 * point_of_sale_dto.h
 *
 * 
 */

#ifndef _point_of_sale_dto_H_
#define _point_of_sale_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct point_of_sale_dto_t point_of_sale_dto_t;




typedef struct point_of_sale_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *location_id; // string
    char *price_list_id; // string
    char *code; // string
    char *title; // string
    char *description; // string

} point_of_sale_dto_t;

point_of_sale_dto_t *point_of_sale_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *location_id,
    char *price_list_id,
    char *code,
    char *title,
    char *description
);

void point_of_sale_dto_free(point_of_sale_dto_t *point_of_sale_dto);

point_of_sale_dto_t *point_of_sale_dto_parseFromJSON(cJSON *point_of_sale_dtoJSON);

cJSON *point_of_sale_dto_convertToJSON(point_of_sale_dto_t *point_of_sale_dto);

#endif /* _point_of_sale_dto_H_ */

