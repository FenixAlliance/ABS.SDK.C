/*
 * asset_repair_update_dto.h
 *
 * 
 */

#ifndef _asset_repair_update_dto_H_
#define _asset_repair_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct asset_repair_update_dto_t asset_repair_update_dto_t;


// Enum REPAIRSTATUS for asset_repair_update_dto

typedef enum  { assetsservice_asset_repair_update_dto_REPAIRSTATUS_NULL = 0, assetsservice_asset_repair_update_dto_REPAIRSTATUS_Scheduled, assetsservice_asset_repair_update_dto_REPAIRSTATUS_InProgress, assetsservice_asset_repair_update_dto_REPAIRSTATUS_Completed, assetsservice_asset_repair_update_dto_REPAIRSTATUS_Cancelled } assetsservice_asset_repair_update_dto_REPAIRSTATUS_e;

char* asset_repair_update_dto_repair_status_ToString(assetsservice_asset_repair_update_dto_REPAIRSTATUS_e repair_status);

assetsservice_asset_repair_update_dto_REPAIRSTATUS_e asset_repair_update_dto_repair_status_FromString(char* repair_status);



typedef struct asset_repair_update_dto_t {
    assetsservice_asset_repair_update_dto_REPAIRSTATUS_e repair_status; //enum
    char *scheduled_date; //date time
    char *completion_date; //date time
    double estimated_cost; //numeric
    double actual_cost; //numeric
    char *problem_description; // string
    char *repair_description; // string
    char *notes; // string
    char *asset_maintenance_team_id; // string

} asset_repair_update_dto_t;

asset_repair_update_dto_t *asset_repair_update_dto_create(
    assetsservice_asset_repair_update_dto_REPAIRSTATUS_e repair_status,
    char *scheduled_date,
    char *completion_date,
    double estimated_cost,
    double actual_cost,
    char *problem_description,
    char *repair_description,
    char *notes,
    char *asset_maintenance_team_id
);

void asset_repair_update_dto_free(asset_repair_update_dto_t *asset_repair_update_dto);

asset_repair_update_dto_t *asset_repair_update_dto_parseFromJSON(cJSON *asset_repair_update_dtoJSON);

cJSON *asset_repair_update_dto_convertToJSON(asset_repair_update_dto_t *asset_repair_update_dto);

#endif /* _asset_repair_update_dto_H_ */

