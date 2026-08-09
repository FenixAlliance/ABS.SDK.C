/*
 * web_component_dto_envelope.h
 *
 * 
 */

#ifndef _web_component_dto_envelope_H_
#define _web_component_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct web_component_dto_envelope_t web_component_dto_envelope_t;

#include "web_component_dto.h"



typedef struct web_component_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct web_component_dto_t *result; //model

} web_component_dto_envelope_t;

web_component_dto_envelope_t *web_component_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    web_component_dto_t *result
);

void web_component_dto_envelope_free(web_component_dto_envelope_t *web_component_dto_envelope);

web_component_dto_envelope_t *web_component_dto_envelope_parseFromJSON(cJSON *web_component_dto_envelopeJSON);

cJSON *web_component_dto_envelope_convertToJSON(web_component_dto_envelope_t *web_component_dto_envelope);

#endif /* _web_component_dto_envelope_H_ */

