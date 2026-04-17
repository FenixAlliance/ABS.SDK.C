/*
 * cost_centre_group_create_dto.h
 *
 * 
 */

#ifndef _cost_centre_group_create_dto_H_
#define _cost_centre_group_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_group_create_dto_t cost_centre_group_create_dto_t;




typedef struct cost_centre_group_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    int disabled; //boolean
    char *parent_cost_centres_group_id; // string

} cost_centre_group_create_dto_t;

cost_centre_group_create_dto_t *cost_centre_group_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int disabled,
    char *parent_cost_centres_group_id
);

void cost_centre_group_create_dto_free(cost_centre_group_create_dto_t *cost_centre_group_create_dto);

cost_centre_group_create_dto_t *cost_centre_group_create_dto_parseFromJSON(cJSON *cost_centre_group_create_dtoJSON);

cJSON *cost_centre_group_create_dto_convertToJSON(cost_centre_group_create_dto_t *cost_centre_group_create_dto);

#endif /* _cost_centre_group_create_dto_H_ */

