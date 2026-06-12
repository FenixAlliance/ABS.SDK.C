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




typedef struct asset_depreciation_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *asset_id; // string
    char *asset_name; // string
    char *asset_depreciation_policy_id; // string
    char *asset_depreciation_policy_name; // string
    char *financial_book_id; // string
    char *start_date; //date time
    int total_depreciations; //numeric
    int depreciation_frequency; //numeric
    double depreciation_rate; //numeric
    double expected_value_aul; //numeric
    double depreciation_amount; //numeric
    double accumulated_depreciation; //numeric
    double book_value; //numeric
    char *depreciation_date; //date time
    int year; //numeric
    int month; //numeric
    char *period; // string

} asset_depreciation_record_dto_t;

asset_depreciation_record_dto_t *asset_depreciation_record_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *asset_id,
    char *asset_name,
    char *asset_depreciation_policy_id,
    char *asset_depreciation_policy_name,
    char *financial_book_id,
    char *start_date,
    int total_depreciations,
    int depreciation_frequency,
    double depreciation_rate,
    double expected_value_aul,
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

