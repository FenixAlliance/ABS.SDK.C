/*
 * suite_license_feature_dto.h
 *
 * 
 */

#ifndef _suite_license_feature_dto_H_
#define _suite_license_feature_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_license_feature_dto_t suite_license_feature_dto_t;




typedef struct suite_license_feature_dto_t {
    char *key; // string
    char *value; // string

} suite_license_feature_dto_t;

suite_license_feature_dto_t *suite_license_feature_dto_create(
    char *key,
    char *value
);

void suite_license_feature_dto_free(suite_license_feature_dto_t *suite_license_feature_dto);

suite_license_feature_dto_t *suite_license_feature_dto_parseFromJSON(cJSON *suite_license_feature_dtoJSON);

cJSON *suite_license_feature_dto_convertToJSON(suite_license_feature_dto_t *suite_license_feature_dto);

#endif /* _suite_license_feature_dto_H_ */

