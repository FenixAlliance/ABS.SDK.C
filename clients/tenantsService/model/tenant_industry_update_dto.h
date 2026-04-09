/*
 * tenant_industry_update_dto.h
 *
 * 
 */

#ifndef _tenant_industry_update_dto_H_
#define _tenant_industry_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_industry_update_dto_t tenant_industry_update_dto_t;




typedef struct tenant_industry_update_dto_t {
    char *name; // string
    char *parent_business_industry_id; // string
    char *business_profile_record_id; // string

} tenant_industry_update_dto_t;

tenant_industry_update_dto_t *tenant_industry_update_dto_create(
    char *name,
    char *parent_business_industry_id,
    char *business_profile_record_id
);

void tenant_industry_update_dto_free(tenant_industry_update_dto_t *tenant_industry_update_dto);

tenant_industry_update_dto_t *tenant_industry_update_dto_parseFromJSON(cJSON *tenant_industry_update_dtoJSON);

cJSON *tenant_industry_update_dto_convertToJSON(tenant_industry_update_dto_t *tenant_industry_update_dto);

#endif /* _tenant_industry_update_dto_H_ */

