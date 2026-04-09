/*
 * tenant_segment_create_dto.h
 *
 * 
 */

#ifndef _tenant_segment_create_dto_H_
#define _tenant_segment_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_segment_create_dto_t tenant_segment_create_dto_t;




typedef struct tenant_segment_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *revenue; // string
    double min_employees; //numeric
    double max_employees; //numeric

} tenant_segment_create_dto_t;

tenant_segment_create_dto_t *tenant_segment_create_dto_create(
    char *id,
    char *timestamp,
    char *revenue,
    double min_employees,
    double max_employees
);

void tenant_segment_create_dto_free(tenant_segment_create_dto_t *tenant_segment_create_dto);

tenant_segment_create_dto_t *tenant_segment_create_dto_parseFromJSON(cJSON *tenant_segment_create_dtoJSON);

cJSON *tenant_segment_create_dto_convertToJSON(tenant_segment_create_dto_t *tenant_segment_create_dto);

#endif /* _tenant_segment_create_dto_H_ */

