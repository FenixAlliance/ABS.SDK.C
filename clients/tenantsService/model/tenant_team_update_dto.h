/*
 * tenant_team_update_dto.h
 *
 * 
 */

#ifndef _tenant_team_update_dto_H_
#define _tenant_team_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_team_update_dto_t tenant_team_update_dto_t;




typedef struct tenant_team_update_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *avatar_url; // string
    int is_public; //boolean
    char *business_unit_id; // string
    char *organization_profile_id; // string

} tenant_team_update_dto_t;

tenant_team_update_dto_t *tenant_team_update_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *avatar_url,
    int is_public,
    char *business_unit_id,
    char *organization_profile_id
);

void tenant_team_update_dto_free(tenant_team_update_dto_t *tenant_team_update_dto);

tenant_team_update_dto_t *tenant_team_update_dto_parseFromJSON(cJSON *tenant_team_update_dtoJSON);

cJSON *tenant_team_update_dto_convertToJSON(tenant_team_update_dto_t *tenant_team_update_dto);

#endif /* _tenant_team_update_dto_H_ */

