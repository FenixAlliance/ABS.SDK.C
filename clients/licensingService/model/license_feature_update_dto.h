/*
 * license_feature_update_dto.h
 *
 * 
 */

#ifndef _license_feature_update_dto_H_
#define _license_feature_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_feature_update_dto_t license_feature_update_dto_t;




typedef struct license_feature_update_dto_t {
    char *code; // string
    char *key; // string
    char *value; // string
    char *name; // string
    char *description; // string
    char *license_type_id; // string

} license_feature_update_dto_t;

license_feature_update_dto_t *license_feature_update_dto_create(
    char *code,
    char *key,
    char *value,
    char *name,
    char *description,
    char *license_type_id
);

void license_feature_update_dto_free(license_feature_update_dto_t *license_feature_update_dto);

license_feature_update_dto_t *license_feature_update_dto_parseFromJSON(cJSON *license_feature_update_dtoJSON);

cJSON *license_feature_update_dto_convertToJSON(license_feature_update_dto_t *license_feature_update_dto);

#endif /* _license_feature_update_dto_H_ */

