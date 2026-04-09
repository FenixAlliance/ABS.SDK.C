/*
 * asset_value_amend_create_dto.h
 *
 * 
 */

#ifndef _asset_value_amend_create_dto_H_
#define _asset_value_amend_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_value_amend_create_dto_t asset_value_amend_create_dto_t;




typedef struct asset_value_amend_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *asset_id; // string
    double previous_value; //numeric
    double new_value; //numeric
    char *reason; // string
    char *amendment_date; //date time
    char *approved_by; // string
    char *approval_date; //date time

} asset_value_amend_create_dto_t;

asset_value_amend_create_dto_t *asset_value_amend_create_dto_create(
    char *id,
    char *timestamp,
    char *asset_id,
    double previous_value,
    double new_value,
    char *reason,
    char *amendment_date,
    char *approved_by,
    char *approval_date
);

void asset_value_amend_create_dto_free(asset_value_amend_create_dto_t *asset_value_amend_create_dto);

asset_value_amend_create_dto_t *asset_value_amend_create_dto_parseFromJSON(cJSON *asset_value_amend_create_dtoJSON);

cJSON *asset_value_amend_create_dto_convertToJSON(asset_value_amend_create_dto_t *asset_value_amend_create_dto);

#endif /* _asset_value_amend_create_dto_H_ */

