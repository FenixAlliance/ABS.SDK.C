/*
 * tenant_size_dto.h
 *
 * 
 */

#ifndef _tenant_size_dto_H_
#define _tenant_size_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct tenant_size_dto_t tenant_size_dto_t;




typedef struct tenant_size_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    int employee_low_range_value; //numeric
    int employee_high_range_value; //numeric

} tenant_size_dto_t;

tenant_size_dto_t *tenant_size_dto_create(
    char *id,
    char *timestamp,
    char *name,
    int employee_low_range_value,
    int employee_high_range_value
);

void tenant_size_dto_free(tenant_size_dto_t *tenant_size_dto);

tenant_size_dto_t *tenant_size_dto_parseFromJSON(cJSON *tenant_size_dtoJSON);

cJSON *tenant_size_dto_convertToJSON(tenant_size_dto_t *tenant_size_dto);

#endif /* _tenant_size_dto_H_ */

