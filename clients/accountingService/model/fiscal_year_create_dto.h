/*
 * fiscal_year_create_dto.h
 *
 * 
 */

#ifndef _fiscal_year_create_dto_H_
#define _fiscal_year_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fiscal_year_create_dto_t fiscal_year_create_dto_t;




typedef struct fiscal_year_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *name; // string
    char *description; // string
    int closed; //boolean
    char *end_date; //date time
    char *start_date; //date time
    char *fiscal_authority_id; // string

} fiscal_year_create_dto_t;

fiscal_year_create_dto_t *fiscal_year_create_dto_create(
    char *id,
    char *timestamp,
    char *name,
    char *description,
    int closed,
    char *end_date,
    char *start_date,
    char *fiscal_authority_id
);

void fiscal_year_create_dto_free(fiscal_year_create_dto_t *fiscal_year_create_dto);

fiscal_year_create_dto_t *fiscal_year_create_dto_parseFromJSON(cJSON *fiscal_year_create_dtoJSON);

cJSON *fiscal_year_create_dto_convertToJSON(fiscal_year_create_dto_t *fiscal_year_create_dto);

#endif /* _fiscal_year_create_dto_H_ */

