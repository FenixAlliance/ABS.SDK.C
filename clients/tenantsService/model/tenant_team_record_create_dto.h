/*
 * tenant_team_record_create_dto.h
 *
 * 
 */

#ifndef _tenant_team_record_create_dto_H_
#define _tenant_team_record_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_team_record_create_dto_t tenant_team_record_create_dto_t;




typedef struct tenant_team_record_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_team_id; // string

} tenant_team_record_create_dto_t;

tenant_team_record_create_dto_t *tenant_team_record_create_dto_create(
    char *id,
    char *timestamp,
    char *business_team_id
);

void tenant_team_record_create_dto_free(tenant_team_record_create_dto_t *tenant_team_record_create_dto);

tenant_team_record_create_dto_t *tenant_team_record_create_dto_parseFromJSON(cJSON *tenant_team_record_create_dtoJSON);

cJSON *tenant_team_record_create_dto_convertToJSON(tenant_team_record_create_dto_t *tenant_team_record_create_dto);

#endif /* _tenant_team_record_create_dto_H_ */

