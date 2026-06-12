/*
 * localization_string_dto.h
 *
 * 
 */

#ifndef _localization_string_dto_H_
#define _localization_string_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct localization_string_dto_t localization_string_dto_t;




typedef struct localization_string_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *base; // string
    char *comments; // string
    char *country_language_id; // string
    char *tenant_id; // string

} localization_string_dto_t;

localization_string_dto_t *localization_string_dto_create(
    char *id,
    char *timestamp,
    char *base,
    char *comments,
    char *country_language_id,
    char *tenant_id
);

void localization_string_dto_free(localization_string_dto_t *localization_string_dto);

localization_string_dto_t *localization_string_dto_parseFromJSON(cJSON *localization_string_dtoJSON);

cJSON *localization_string_dto_convertToJSON(localization_string_dto_t *localization_string_dto);

#endif /* _localization_string_dto_H_ */

