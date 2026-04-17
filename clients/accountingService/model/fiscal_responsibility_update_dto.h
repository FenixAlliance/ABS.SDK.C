/*
 * fiscal_responsibility_update_dto.h
 *
 * 
 */

#ifndef _fiscal_responsibility_update_dto_H_
#define _fiscal_responsibility_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_responsibility_update_dto_t fiscal_responsibility_update_dto_t;




typedef struct fiscal_responsibility_update_dto_t {
    char *code; // string
    char *name; // string
    char *fiscal_authority_id; // string

} fiscal_responsibility_update_dto_t;

fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_create(
    char *code,
    char *name,
    char *fiscal_authority_id
);

void fiscal_responsibility_update_dto_free(fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto);

fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto_parseFromJSON(cJSON *fiscal_responsibility_update_dtoJSON);

cJSON *fiscal_responsibility_update_dto_convertToJSON(fiscal_responsibility_update_dto_t *fiscal_responsibility_update_dto);

#endif /* _fiscal_responsibility_update_dto_H_ */

