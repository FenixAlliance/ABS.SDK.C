/*
 * fiscal_responsibility_record_dto.h
 *
 * 
 */

#ifndef _fiscal_responsibility_record_dto_H_
#define _fiscal_responsibility_record_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_responsibility_record_dto_t fiscal_responsibility_record_dto_t;




typedef struct fiscal_responsibility_record_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *fiscal_responsibility_id; // string
    char *billing_profile_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} fiscal_responsibility_record_dto_t;

fiscal_responsibility_record_dto_t *fiscal_responsibility_record_dto_create(
    char *id,
    char *timestamp,
    char *fiscal_responsibility_id,
    char *billing_profile_id,
    char *tenant_id,
    char *enrollment_id
);

void fiscal_responsibility_record_dto_free(fiscal_responsibility_record_dto_t *fiscal_responsibility_record_dto);

fiscal_responsibility_record_dto_t *fiscal_responsibility_record_dto_parseFromJSON(cJSON *fiscal_responsibility_record_dtoJSON);

cJSON *fiscal_responsibility_record_dto_convertToJSON(fiscal_responsibility_record_dto_t *fiscal_responsibility_record_dto);

#endif /* _fiscal_responsibility_record_dto_H_ */

