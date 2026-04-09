/*
 * asset_depreciation_record_dto.h
 *
 * 
 */

#ifndef _asset_depreciation_record_dto_H_
#define _asset_depreciation_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_depreciation_record_dto_t asset_depreciation_record_dto_t;

#include "object.h"



typedef struct asset_depreciation_record_dto_t {
    object_t *id; //object
    char *timestamp; //date time
    object_t *business_id; //object
    object_t *business_profile_record_id; //object
    object_t *asset_id; //object
    char *asset_name; // string
    char *asset_depreciation_policy_id; // string
    char *asset_depreciation_policy_name; // string
    double depreciation_amount; //numeric
    double accumulated_depreciation; //numeric
    double book_value; //numeric
    char *depreciation_date; //date time
    int year; //numeric
    int month; //numeric
    char *period; // string

} asset_depreciation_record_dto_t;

asset_depreciation_record_dto_t *asset_depreciation_record_dto_create(
    object_t *id,
    char *timestamp,
    object_t *business_id,
    object_t *business_profile_record_id,
    object_t *asset_id,
    char *asset_name,
    char *asset_depreciation_policy_id,
    char *asset_depreciation_policy_name,
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month,
    char *period
);

void asset_depreciation_record_dto_free(asset_depreciation_record_dto_t *asset_depreciation_record_dto);

asset_depreciation_record_dto_t *asset_depreciation_record_dto_parseFromJSON(cJSON *asset_depreciation_record_dtoJSON);

cJSON *asset_depreciation_record_dto_convertToJSON(asset_depreciation_record_dto_t *asset_depreciation_record_dto);

#endif /* _asset_depreciation_record_dto_H_ */

