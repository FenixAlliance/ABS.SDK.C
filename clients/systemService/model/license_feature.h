/*
 * license_feature.h
 *
 * 
 */

#ifndef _license_feature_H_
#define _license_feature_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_feature_t license_feature_t;




typedef struct license_feature_t {
    char *key; // string
    char *value; // string

} license_feature_t;

license_feature_t *license_feature_create(
    char *key,
    char *value
);

void license_feature_free(license_feature_t *license_feature);

license_feature_t *license_feature_parseFromJSON(cJSON *license_featureJSON);

cJSON *license_feature_convertToJSON(license_feature_t *license_feature);

#endif /* _license_feature_H_ */

