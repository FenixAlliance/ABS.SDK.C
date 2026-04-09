/*
 * tenant_industry_dto.h
 *
 * 
 */

#ifndef _tenant_industry_dto_H_
#define _tenant_industry_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_industry_dto_t tenant_industry_dto_t;




typedef struct tenant_industry_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *parent_business_industry_id; // string
    char *business_profile_record_id; // string

} tenant_industry_dto_t;

tenant_industry_dto_t *tenant_industry_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *parent_business_industry_id,
    char *business_profile_record_id
);

void tenant_industry_dto_free(tenant_industry_dto_t *tenant_industry_dto);

tenant_industry_dto_t *tenant_industry_dto_parseFromJSON(cJSON *tenant_industry_dtoJSON);

cJSON *tenant_industry_dto_convertToJSON(tenant_industry_dto_t *tenant_industry_dto);

#endif /* _tenant_industry_dto_H_ */

