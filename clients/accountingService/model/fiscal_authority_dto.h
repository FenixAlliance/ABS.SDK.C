/*
 * fiscal_authority_dto.h
 *
 * 
 */

#ifndef _fiscal_authority_dto_H_
#define _fiscal_authority_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_authority_dto_t fiscal_authority_dto_t;




typedef struct fiscal_authority_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *country_id; // string
    char *logo_url; // string
    char *web_url; // string

} fiscal_authority_dto_t;

fiscal_authority_dto_t *fiscal_authority_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *tenant_id,
    char *enrollment_id,
    char *country_id,
    char *logo_url,
    char *web_url
);

void fiscal_authority_dto_free(fiscal_authority_dto_t *fiscal_authority_dto);

fiscal_authority_dto_t *fiscal_authority_dto_parseFromJSON(cJSON *fiscal_authority_dtoJSON);

cJSON *fiscal_authority_dto_convertToJSON(fiscal_authority_dto_t *fiscal_authority_dto);

#endif /* _fiscal_authority_dto_H_ */

