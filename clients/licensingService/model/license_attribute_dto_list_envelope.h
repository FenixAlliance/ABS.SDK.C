/*
 * license_attribute_dto_list_envelope.h
 *
 * 
 */

#ifndef _license_attribute_dto_list_envelope_H_
#define _license_attribute_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct license_attribute_dto_list_envelope_t license_attribute_dto_list_envelope_t;

#include "license_attribute_dto.h"



typedef struct license_attribute_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} license_attribute_dto_list_envelope_t;

license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void license_attribute_dto_list_envelope_free(license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope);

license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope_parseFromJSON(cJSON *license_attribute_dto_list_envelopeJSON);

cJSON *license_attribute_dto_list_envelope_convertToJSON(license_attribute_dto_list_envelope_t *license_attribute_dto_list_envelope);

#endif /* _license_attribute_dto_list_envelope_H_ */

