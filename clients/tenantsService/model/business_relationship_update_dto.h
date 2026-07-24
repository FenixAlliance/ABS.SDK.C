/*
 * business_relationship_update_dto.h
 *
 * 
 */

#ifndef _business_relationship_update_dto_H_
#define _business_relationship_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct business_relationship_update_dto_t business_relationship_update_dto_t;




typedef struct business_relationship_update_dto_t {
    char *child_tenant_id; // string
    double ownership_percentage; //numeric

} business_relationship_update_dto_t;

business_relationship_update_dto_t *business_relationship_update_dto_create(
    char *child_tenant_id,
    double ownership_percentage
);

void business_relationship_update_dto_free(business_relationship_update_dto_t *business_relationship_update_dto);

business_relationship_update_dto_t *business_relationship_update_dto_parseFromJSON(cJSON *business_relationship_update_dtoJSON);

cJSON *business_relationship_update_dto_convertToJSON(business_relationship_update_dto_t *business_relationship_update_dto);

#endif /* _business_relationship_update_dto_H_ */

