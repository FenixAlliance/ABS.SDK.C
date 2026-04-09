/*
 * fiscal_responsibility_dto.h
 *
 * 
 */

#ifndef _fiscal_responsibility_dto_H_
#define _fiscal_responsibility_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_responsibility_dto_t fiscal_responsibility_dto_t;




typedef struct fiscal_responsibility_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *name; // string
    char *fiscal_authority_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} fiscal_responsibility_dto_t;

fiscal_responsibility_dto_t *fiscal_responsibility_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *fiscal_authority_id,
    char *tenant_id,
    char *enrollment_id
);

void fiscal_responsibility_dto_free(fiscal_responsibility_dto_t *fiscal_responsibility_dto);

fiscal_responsibility_dto_t *fiscal_responsibility_dto_parseFromJSON(cJSON *fiscal_responsibility_dtoJSON);

cJSON *fiscal_responsibility_dto_convertToJSON(fiscal_responsibility_dto_t *fiscal_responsibility_dto);

#endif /* _fiscal_responsibility_dto_H_ */

