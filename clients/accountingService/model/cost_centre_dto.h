/*
 * cost_centre_dto.h
 *
 * 
 */

#ifndef _cost_centre_dto_H_
#define _cost_centre_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cost_centre_dto_t cost_centre_dto_t;


// Enum COSTCENTRETYPE for cost_centre_dto

typedef enum  { accountingservice_cost_centre_dto_COSTCENTRETYPE_NULL = 0, accountingservice_cost_centre_dto_COSTCENTRETYPE_Service, accountingservice_cost_centre_dto_COSTCENTRETYPE_Production } accountingservice_cost_centre_dto_COSTCENTRETYPE_e;

char* cost_centre_dto_cost_centre_type_ToString(accountingservice_cost_centre_dto_COSTCENTRETYPE_e cost_centre_type);

accountingservice_cost_centre_dto_COSTCENTRETYPE_e cost_centre_dto_cost_centre_type_FromString(char* cost_centre_type);



typedef struct cost_centre_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int disabled; //boolean
    char *description; // string
    accountingservice_cost_centre_dto_COSTCENTRETYPE_e cost_centre_type; //enum
    char *tenant_id; // string
    char *cost_centres_group_id; // string
    char *parent_cost_centre_id; // string

} cost_centre_dto_t;

cost_centre_dto_t *cost_centre_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int disabled,
    char *description,
    accountingservice_cost_centre_dto_COSTCENTRETYPE_e cost_centre_type,
    char *tenant_id,
    char *cost_centres_group_id,
    char *parent_cost_centre_id
);

void cost_centre_dto_free(cost_centre_dto_t *cost_centre_dto);

cost_centre_dto_t *cost_centre_dto_parseFromJSON(cJSON *cost_centre_dtoJSON);

cJSON *cost_centre_dto_convertToJSON(cost_centre_dto_t *cost_centre_dto);

#endif /* _cost_centre_dto_H_ */

