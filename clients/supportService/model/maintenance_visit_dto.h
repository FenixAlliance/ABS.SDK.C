/*
 * maintenance_visit_dto.h
 *
 * 
 */

#ifndef _maintenance_visit_dto_H_
#define _maintenance_visit_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct maintenance_visit_dto_t maintenance_visit_dto_t;




typedef struct maintenance_visit_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *tenant_id; // string
    char *business_profile_record_id; // string

} maintenance_visit_dto_t;

maintenance_visit_dto_t *maintenance_visit_dto_create(
    char *id,
    char *timestamp,
    char *tenant_id,
    char *business_profile_record_id
);

void maintenance_visit_dto_free(maintenance_visit_dto_t *maintenance_visit_dto);

maintenance_visit_dto_t *maintenance_visit_dto_parseFromJSON(cJSON *maintenance_visit_dtoJSON);

cJSON *maintenance_visit_dto_convertToJSON(maintenance_visit_dto_t *maintenance_visit_dto);

#endif /* _maintenance_visit_dto_H_ */

