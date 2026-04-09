/*
 * suite_license_feature_dto_list_envelope.h
 *
 * 
 */

#ifndef _suite_license_feature_dto_list_envelope_H_
#define _suite_license_feature_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct suite_license_feature_dto_list_envelope_t suite_license_feature_dto_list_envelope_t;

#include "suite_license_feature_dto.h"



typedef struct suite_license_feature_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} suite_license_feature_dto_list_envelope_t;

suite_license_feature_dto_list_envelope_t *suite_license_feature_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void suite_license_feature_dto_list_envelope_free(suite_license_feature_dto_list_envelope_t *suite_license_feature_dto_list_envelope);

suite_license_feature_dto_list_envelope_t *suite_license_feature_dto_list_envelope_parseFromJSON(cJSON *suite_license_feature_dto_list_envelopeJSON);

cJSON *suite_license_feature_dto_list_envelope_convertToJSON(suite_license_feature_dto_list_envelope_t *suite_license_feature_dto_list_envelope);

#endif /* _suite_license_feature_dto_list_envelope_H_ */

