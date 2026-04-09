/*
 * asset_value_amend_update_dto.h
 *
 * 
 */

#ifndef _asset_value_amend_update_dto_H_
#define _asset_value_amend_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_value_amend_update_dto_t asset_value_amend_update_dto_t;




typedef struct asset_value_amend_update_dto_t {
    double new_value; //numeric
    char *reason; // string
    char *amendment_date; //date time
    char *approved_by; // string
    char *approval_date; //date time

} asset_value_amend_update_dto_t;

asset_value_amend_update_dto_t *asset_value_amend_update_dto_create(
    double new_value,
    char *reason,
    char *amendment_date,
    char *approved_by,
    char *approval_date
);

void asset_value_amend_update_dto_free(asset_value_amend_update_dto_t *asset_value_amend_update_dto);

asset_value_amend_update_dto_t *asset_value_amend_update_dto_parseFromJSON(cJSON *asset_value_amend_update_dtoJSON);

cJSON *asset_value_amend_update_dto_convertToJSON(asset_value_amend_update_dto_t *asset_value_amend_update_dto);

#endif /* _asset_value_amend_update_dto_H_ */

