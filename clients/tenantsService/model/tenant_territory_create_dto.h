/*
 * tenant_territory_create_dto.h
 *
 * 
 */

#ifndef _tenant_territory_create_dto_H_
#define _tenant_territory_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_territory_create_dto_t tenant_territory_create_dto_t;




typedef struct tenant_territory_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *business_id; // string
    char *business_profile_record_id; // string
    char *name; // string
    char *description; // string
    char *parent_territory_id; // string

} tenant_territory_create_dto_t;

tenant_territory_create_dto_t *tenant_territory_create_dto_create(
    char *id,
    char *timestamp,
    char *business_id,
    char *business_profile_record_id,
    char *name,
    char *description,
    char *parent_territory_id
);

void tenant_territory_create_dto_free(tenant_territory_create_dto_t *tenant_territory_create_dto);

tenant_territory_create_dto_t *tenant_territory_create_dto_parseFromJSON(cJSON *tenant_territory_create_dtoJSON);

cJSON *tenant_territory_create_dto_convertToJSON(tenant_territory_create_dto_t *tenant_territory_create_dto);

#endif /* _tenant_territory_create_dto_H_ */

