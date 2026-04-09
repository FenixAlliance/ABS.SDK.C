/*
 * fiscal_authority_create_dto.h
 *
 * 
 */

#ifndef _fiscal_authority_create_dto_H_
#define _fiscal_authority_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_authority_create_dto_t fiscal_authority_create_dto_t;




typedef struct fiscal_authority_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    char *country_id; // string
    char *logo_url; // string
    char *web_url; // string

} fiscal_authority_create_dto_t;

fiscal_authority_create_dto_t *fiscal_authority_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    char *country_id,
    char *logo_url,
    char *web_url
);

void fiscal_authority_create_dto_free(fiscal_authority_create_dto_t *fiscal_authority_create_dto);

fiscal_authority_create_dto_t *fiscal_authority_create_dto_parseFromJSON(cJSON *fiscal_authority_create_dtoJSON);

cJSON *fiscal_authority_create_dto_convertToJSON(fiscal_authority_create_dto_t *fiscal_authority_create_dto);

#endif /* _fiscal_authority_create_dto_H_ */

