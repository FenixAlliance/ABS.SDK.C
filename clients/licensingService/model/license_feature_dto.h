/*
 * license_feature_dto.h
 *
 * 
 */

#ifndef _license_feature_dto_H_
#define _license_feature_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_feature_dto_t license_feature_dto_t;




typedef struct license_feature_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *code; // string
    char *key; // string
    char *value; // string
    char *name; // string
    char *description; // string
    char *license_type_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} license_feature_dto_t;

license_feature_dto_t *license_feature_dto_create(
    char *id,
    char *timestamp,
    char *code,
    char *key,
    char *value,
    char *name,
    char *description,
    char *license_type_id,
    char *tenant_id,
    char *enrollment_id
);

void license_feature_dto_free(license_feature_dto_t *license_feature_dto);

license_feature_dto_t *license_feature_dto_parseFromJSON(cJSON *license_feature_dtoJSON);

cJSON *license_feature_dto_convertToJSON(license_feature_dto_t *license_feature_dto);

#endif /* _license_feature_dto_H_ */

