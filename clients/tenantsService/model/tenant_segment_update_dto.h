/*
 * tenant_segment_update_dto.h
 *
 * 
 */

#ifndef _tenant_segment_update_dto_H_
#define _tenant_segment_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_segment_update_dto_t tenant_segment_update_dto_t;




typedef struct tenant_segment_update_dto_t {
    char *revenue; // string
    double min_employees; //numeric
    double max_employees; //numeric

} tenant_segment_update_dto_t;

tenant_segment_update_dto_t *tenant_segment_update_dto_create(
    char *revenue,
    double min_employees,
    double max_employees
);

void tenant_segment_update_dto_free(tenant_segment_update_dto_t *tenant_segment_update_dto);

tenant_segment_update_dto_t *tenant_segment_update_dto_parseFromJSON(cJSON *tenant_segment_update_dtoJSON);

cJSON *tenant_segment_update_dto_convertToJSON(tenant_segment_update_dto_t *tenant_segment_update_dto);

#endif /* _tenant_segment_update_dto_H_ */

