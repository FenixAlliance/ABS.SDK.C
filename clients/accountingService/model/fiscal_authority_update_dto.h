/*
 * fiscal_authority_update_dto.h
 *
 * 
 */

#ifndef _fiscal_authority_update_dto_H_
#define _fiscal_authority_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_authority_update_dto_t fiscal_authority_update_dto_t;




typedef struct fiscal_authority_update_dto_t {
    char *name; // string
    char *description; // string
    char *country_id; // string
    char *logo_url; // string
    char *web_url; // string

} fiscal_authority_update_dto_t;

fiscal_authority_update_dto_t *fiscal_authority_update_dto_create(
    char *name,
    char *description,
    char *country_id,
    char *logo_url,
    char *web_url
);

void fiscal_authority_update_dto_free(fiscal_authority_update_dto_t *fiscal_authority_update_dto);

fiscal_authority_update_dto_t *fiscal_authority_update_dto_parseFromJSON(cJSON *fiscal_authority_update_dtoJSON);

cJSON *fiscal_authority_update_dto_convertToJSON(fiscal_authority_update_dto_t *fiscal_authority_update_dto);

#endif /* _fiscal_authority_update_dto_H_ */

