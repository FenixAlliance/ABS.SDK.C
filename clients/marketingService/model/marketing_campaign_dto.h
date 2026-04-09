/*
 * marketing_campaign_dto.h
 *
 * 
 */

#ifndef _marketing_campaign_dto_H_
#define _marketing_campaign_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct marketing_campaign_dto_t marketing_campaign_dto_t;




typedef struct marketing_campaign_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *offer; // string
    int active; //boolean
    char *proposed_start; //date time
    char *proposed_end; //date time
    char *actual_start; //date time
    char *actual_end; //date time
    char *code; // string
    double allocated_budget; //numeric
    double activity_cost; //numeric
    double misc_cost; //numeric
    double expected_response_percent; //numeric
    char *marketing_area_id; // string
    char *currency_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} marketing_campaign_dto_t;

marketing_campaign_dto_t *marketing_campaign_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *offer,
    int active,
    char *proposed_start,
    char *proposed_end,
    char *actual_start,
    char *actual_end,
    char *code,
    double allocated_budget,
    double activity_cost,
    double misc_cost,
    double expected_response_percent,
    char *marketing_area_id,
    char *currency_id,
    char *tenant_id,
    char *enrollment_id
);

void marketing_campaign_dto_free(marketing_campaign_dto_t *marketing_campaign_dto);

marketing_campaign_dto_t *marketing_campaign_dto_parseFromJSON(cJSON *marketing_campaign_dtoJSON);

cJSON *marketing_campaign_dto_convertToJSON(marketing_campaign_dto_t *marketing_campaign_dto);

#endif /* _marketing_campaign_dto_H_ */

