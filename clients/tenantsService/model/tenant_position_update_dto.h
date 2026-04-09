/*
 * tenant_position_update_dto.h
 *
 * 
 */

#ifndef _tenant_position_update_dto_H_
#define _tenant_position_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_position_update_dto_t tenant_position_update_dto_t;




typedef struct tenant_position_update_dto_t {
    char *title; // string
    char *description; // string
    char *type; // string
    char *business_profile_record_id; // string

} tenant_position_update_dto_t;

tenant_position_update_dto_t *tenant_position_update_dto_create(
    char *title,
    char *description,
    char *type,
    char *business_profile_record_id
);

void tenant_position_update_dto_free(tenant_position_update_dto_t *tenant_position_update_dto);

tenant_position_update_dto_t *tenant_position_update_dto_parseFromJSON(cJSON *tenant_position_update_dtoJSON);

cJSON *tenant_position_update_dto_convertToJSON(tenant_position_update_dto_t *tenant_position_update_dto);

#endif /* _tenant_position_update_dto_H_ */

