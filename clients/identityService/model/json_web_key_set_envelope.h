/*
 * json_web_key_set_envelope.h
 *
 * 
 */

#ifndef _json_web_key_set_envelope_H_
#define _json_web_key_set_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct json_web_key_set_envelope_t json_web_key_set_envelope_t;

#include "json_web_key_set.h"



typedef struct json_web_key_set_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct json_web_key_set_t *result; //model

} json_web_key_set_envelope_t;

json_web_key_set_envelope_t *json_web_key_set_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    json_web_key_set_t *result
);

void json_web_key_set_envelope_free(json_web_key_set_envelope_t *json_web_key_set_envelope);

json_web_key_set_envelope_t *json_web_key_set_envelope_parseFromJSON(cJSON *json_web_key_set_envelopeJSON);

cJSON *json_web_key_set_envelope_convertToJSON(json_web_key_set_envelope_t *json_web_key_set_envelope);

#endif /* _json_web_key_set_envelope_H_ */

