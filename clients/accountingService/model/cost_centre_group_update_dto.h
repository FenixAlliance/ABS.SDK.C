/*
 * cost_centre_group_update_dto.h
 *
 * 
 */

#ifndef _cost_centre_group_update_dto_H_
#define _cost_centre_group_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_group_update_dto_t cost_centre_group_update_dto_t;




typedef struct cost_centre_group_update_dto_t {
    char *name; // string
    char *description; // string
    int disabled; //boolean
    char *parent_cost_centres_group_id; // string

} cost_centre_group_update_dto_t;

cost_centre_group_update_dto_t *cost_centre_group_update_dto_create(
    char *name,
    char *description,
    int disabled,
    char *parent_cost_centres_group_id
);

void cost_centre_group_update_dto_free(cost_centre_group_update_dto_t *cost_centre_group_update_dto);

cost_centre_group_update_dto_t *cost_centre_group_update_dto_parseFromJSON(cJSON *cost_centre_group_update_dtoJSON);

cJSON *cost_centre_group_update_dto_convertToJSON(cost_centre_group_update_dto_t *cost_centre_group_update_dto);

#endif /* _cost_centre_group_update_dto_H_ */

