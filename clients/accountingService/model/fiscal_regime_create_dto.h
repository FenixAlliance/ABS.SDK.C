/*
 * fiscal_regime_create_dto.h
 *
 * 
 */

#ifndef _fiscal_regime_create_dto_H_
#define _fiscal_regime_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_regime_create_dto_t fiscal_regime_create_dto_t;




typedef struct fiscal_regime_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *name; // string
    char *fiscal_authority_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} fiscal_regime_create_dto_t;

fiscal_regime_create_dto_t *fiscal_regime_create_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *name,
    char *fiscal_authority_id,
    char *tenant_id,
    char *enrollment_id
);

void fiscal_regime_create_dto_free(fiscal_regime_create_dto_t *fiscal_regime_create_dto);

fiscal_regime_create_dto_t *fiscal_regime_create_dto_parseFromJSON(cJSON *fiscal_regime_create_dtoJSON);

cJSON *fiscal_regime_create_dto_convertToJSON(fiscal_regime_create_dto_t *fiscal_regime_create_dto);

#endif /* _fiscal_regime_create_dto_H_ */

