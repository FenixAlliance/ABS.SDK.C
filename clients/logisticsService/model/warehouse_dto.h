/*
 * warehouse_dto.h
 *
 * 
 */

#ifndef _warehouse_dto_H_
#define _warehouse_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct warehouse_dto_t warehouse_dto_t;




typedef struct warehouse_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *address1; // string
    char *address2; // string
    char *address3; // string
    char *postal_code; // string
    char *phone; // string
    char *country_id; // string
    char *state_id; // string
    char *city_id; // string
    char *tenant_id; // string
    int is_group; //boolean
    char *shipwire_warehouse_id; // string
    char *parent_warehouse_id; // string

} warehouse_dto_t;

warehouse_dto_t *warehouse_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *address1,
    char *address2,
    char *address3,
    char *postal_code,
    char *phone,
    char *country_id,
    char *state_id,
    char *city_id,
    char *tenant_id,
    int is_group,
    char *shipwire_warehouse_id,
    char *parent_warehouse_id
);

void warehouse_dto_free(warehouse_dto_t *warehouse_dto);

warehouse_dto_t *warehouse_dto_parseFromJSON(cJSON *warehouse_dtoJSON);

cJSON *warehouse_dto_convertToJSON(warehouse_dto_t *warehouse_dto);

#endif /* _warehouse_dto_H_ */

