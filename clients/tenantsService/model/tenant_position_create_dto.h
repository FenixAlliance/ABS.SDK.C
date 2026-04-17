/*
 * tenant_position_create_dto.h
 *
 * 
 */

#ifndef _tenant_position_create_dto_H_
#define _tenant_position_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_position_create_dto_t tenant_position_create_dto_t;




typedef struct tenant_position_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *description; // string

} tenant_position_create_dto_t;

tenant_position_create_dto_t *tenant_position_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *description
);

void tenant_position_create_dto_free(tenant_position_create_dto_t *tenant_position_create_dto);

tenant_position_create_dto_t *tenant_position_create_dto_parseFromJSON(cJSON *tenant_position_create_dtoJSON);

cJSON *tenant_position_create_dto_convertToJSON(tenant_position_create_dto_t *tenant_position_create_dto);

#endif /* _tenant_position_create_dto_H_ */

