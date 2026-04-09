/*
 * tenant_team_record_dto.h
 *
 * 
 */

#ifndef _tenant_team_record_dto_H_
#define _tenant_team_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_team_record_dto_t tenant_team_record_dto_t;




typedef struct tenant_team_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *team_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} tenant_team_record_dto_t;

tenant_team_record_dto_t *tenant_team_record_dto_create(
    char *id,
    char *timestamp,
    char *team_id,
    char *tenant_id,
    char *enrollment_id
);

void tenant_team_record_dto_free(tenant_team_record_dto_t *tenant_team_record_dto);

tenant_team_record_dto_t *tenant_team_record_dto_parseFromJSON(cJSON *tenant_team_record_dtoJSON);

cJSON *tenant_team_record_dto_convertToJSON(tenant_team_record_dto_t *tenant_team_record_dto);

#endif /* _tenant_team_record_dto_H_ */

