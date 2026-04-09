/*
 * asset_depreciation_record_create_dto.h
 *
 * 
 */

#ifndef _asset_depreciation_record_create_dto_H_
#define _asset_depreciation_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_depreciation_record_create_dto_t asset_depreciation_record_create_dto_t;




typedef struct asset_depreciation_record_create_dto_t {
    char *asset_id; // string
    char *asset_depreciation_policy_id; // string
    double depreciation_amount; //numeric
    double accumulated_depreciation; //numeric
    double book_value; //numeric
    char *depreciation_date; //date time
    int year; //numeric
    int month; //numeric

} asset_depreciation_record_create_dto_t;

asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_create(
    char *asset_id,
    char *asset_depreciation_policy_id,
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month
);

void asset_depreciation_record_create_dto_free(asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto);

asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto_parseFromJSON(cJSON *asset_depreciation_record_create_dtoJSON);

cJSON *asset_depreciation_record_create_dto_convertToJSON(asset_depreciation_record_create_dto_t *asset_depreciation_record_create_dto);

#endif /* _asset_depreciation_record_create_dto_H_ */

