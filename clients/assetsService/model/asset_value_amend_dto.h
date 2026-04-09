/*
 * asset_value_amend_dto.h
 *
 * 
 */

#ifndef _asset_value_amend_dto_H_
#define _asset_value_amend_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_value_amend_dto_t asset_value_amend_dto_t;

#include "object.h"



typedef struct asset_value_amend_dto_t {
    object_t *id; //object
    char *timestamp; //date time
    object_t *business_id; //object
    object_t *business_profile_record_id; //object
    object_t *asset_id; //object
    char *asset_name; // string
    double previous_value; //numeric
    double new_value; //numeric
    double amendment_amount; //numeric
    char *reason; // string
    char *amendment_date; //date time
    char *approved_by; // string
    char *approval_date; //date time

} asset_value_amend_dto_t;

asset_value_amend_dto_t *asset_value_amend_dto_create(
    object_t *id,
    char *timestamp,
    object_t *business_id,
    object_t *business_profile_record_id,
    object_t *asset_id,
    char *asset_name,
    double previous_value,
    double new_value,
    double amendment_amount,
    char *reason,
    char *amendment_date,
    char *approved_by,
    char *approval_date
);

void asset_value_amend_dto_free(asset_value_amend_dto_t *asset_value_amend_dto);

asset_value_amend_dto_t *asset_value_amend_dto_parseFromJSON(cJSON *asset_value_amend_dtoJSON);

cJSON *asset_value_amend_dto_convertToJSON(asset_value_amend_dto_t *asset_value_amend_dto);

#endif /* _asset_value_amend_dto_H_ */

