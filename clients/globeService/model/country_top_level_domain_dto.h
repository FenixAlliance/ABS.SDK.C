/*
 * country_top_level_domain_dto.h
 *
 * 
 */

#ifndef _country_top_level_domain_dto_H_
#define _country_top_level_domain_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_top_level_domain_dto_t country_top_level_domain_dto_t;




typedef struct country_top_level_domain_dto_t {
    char *id; // string
    char *domain; // string
    char *country_id; // string

} country_top_level_domain_dto_t;

country_top_level_domain_dto_t *country_top_level_domain_dto_create(
    char *id,
    char *domain,
    char *country_id
);

void country_top_level_domain_dto_free(country_top_level_domain_dto_t *country_top_level_domain_dto);

country_top_level_domain_dto_t *country_top_level_domain_dto_parseFromJSON(cJSON *country_top_level_domain_dtoJSON);

cJSON *country_top_level_domain_dto_convertToJSON(country_top_level_domain_dto_t *country_top_level_domain_dto);

#endif /* _country_top_level_domain_dto_H_ */

