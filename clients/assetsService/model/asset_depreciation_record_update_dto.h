/*
 * asset_depreciation_record_update_dto.h
 *
 * 
 */

#ifndef _asset_depreciation_record_update_dto_H_
#define _asset_depreciation_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_depreciation_record_update_dto_t asset_depreciation_record_update_dto_t;




typedef struct asset_depreciation_record_update_dto_t {
    double depreciation_amount; //numeric
    double accumulated_depreciation; //numeric
    double book_value; //numeric
    char *depreciation_date; //date time
    int year; //numeric
    int month; //numeric

} asset_depreciation_record_update_dto_t;

asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_create(
    double depreciation_amount,
    double accumulated_depreciation,
    double book_value,
    char *depreciation_date,
    int year,
    int month
);

void asset_depreciation_record_update_dto_free(asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto);

asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto_parseFromJSON(cJSON *asset_depreciation_record_update_dtoJSON);

cJSON *asset_depreciation_record_update_dto_convertToJSON(asset_depreciation_record_update_dto_t *asset_depreciation_record_update_dto);

#endif /* _asset_depreciation_record_update_dto_H_ */

