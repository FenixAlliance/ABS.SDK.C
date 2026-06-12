/*
 * business_domain_update_dto.h
 *
 * 
 */

#ifndef _business_domain_update_dto_H_
#define _business_domain_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_domain_update_dto_t business_domain_update_dto_t;




typedef struct business_domain_update_dto_t {
    char *domain; // string

} business_domain_update_dto_t;

business_domain_update_dto_t *business_domain_update_dto_create(
    char *domain
);

void business_domain_update_dto_free(business_domain_update_dto_t *business_domain_update_dto);

business_domain_update_dto_t *business_domain_update_dto_parseFromJSON(cJSON *business_domain_update_dtoJSON);

cJSON *business_domain_update_dto_convertToJSON(business_domain_update_dto_t *business_domain_update_dto);

#endif /* _business_domain_update_dto_H_ */

