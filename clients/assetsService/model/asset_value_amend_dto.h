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




typedef struct asset_value_amend_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *enrollment_id; // string
    char *asset_id; // string
    char *asset_name; // string
    double previous_value; //numeric
    double new_value; //numeric
    double amendment_amount; //numeric
    char *reason; // string
    char *amendment_date; //date time
    char *currency_id; // string

} asset_value_amend_dto_t;

asset_value_amend_dto_t *asset_value_amend_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *enrollment_id,
    char *asset_id,
    char *asset_name,
    double previous_value,
    double new_value,
    double amendment_amount,
    char *reason,
    char *amendment_date,
    char *currency_id
);

void asset_value_amend_dto_free(asset_value_amend_dto_t *asset_value_amend_dto);

asset_value_amend_dto_t *asset_value_amend_dto_parseFromJSON(cJSON *asset_value_amend_dtoJSON);

cJSON *asset_value_amend_dto_convertToJSON(asset_value_amend_dto_t *asset_value_amend_dto);

#endif /* _asset_value_amend_dto_H_ */

