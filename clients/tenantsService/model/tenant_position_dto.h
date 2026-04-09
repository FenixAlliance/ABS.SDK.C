/*
 * tenant_position_dto.h
 *
 * 
 */

#ifndef _tenant_position_dto_H_
#define _tenant_position_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_position_dto_t tenant_position_dto_t;




typedef struct tenant_position_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *title; // string
    char *description; // string
    char *type; // string

} tenant_position_dto_t;

tenant_position_dto_t *tenant_position_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *title,
    char *description,
    char *type
);

void tenant_position_dto_free(tenant_position_dto_t *tenant_position_dto);

tenant_position_dto_t *tenant_position_dto_parseFromJSON(cJSON *tenant_position_dtoJSON);

cJSON *tenant_position_dto_convertToJSON(tenant_position_dto_t *tenant_position_dto);

#endif /* _tenant_position_dto_H_ */

