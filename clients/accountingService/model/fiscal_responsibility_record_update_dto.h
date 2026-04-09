/*
 * fiscal_responsibility_record_update_dto.h
 *
 * 
 */

#ifndef _fiscal_responsibility_record_update_dto_H_
#define _fiscal_responsibility_record_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_responsibility_record_update_dto_t fiscal_responsibility_record_update_dto_t;




typedef struct fiscal_responsibility_record_update_dto_t {
    char *fiscal_responsibility_id; // string
    char *billing_profile_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} fiscal_responsibility_record_update_dto_t;

fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_create(
    char *fiscal_responsibility_id,
    char *billing_profile_id,
    char *tenant_id,
    char *enrollment_id
);

void fiscal_responsibility_record_update_dto_free(fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto);

fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto_parseFromJSON(cJSON *fiscal_responsibility_record_update_dtoJSON);

cJSON *fiscal_responsibility_record_update_dto_convertToJSON(fiscal_responsibility_record_update_dto_t *fiscal_responsibility_record_update_dto);

#endif /* _fiscal_responsibility_record_update_dto_H_ */

