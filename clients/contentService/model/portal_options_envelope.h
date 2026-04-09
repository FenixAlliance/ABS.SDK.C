/*
 * portal_options_envelope.h
 *
 * 
 */

#ifndef _portal_options_envelope_H_
#define _portal_options_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct portal_options_envelope_t portal_options_envelope_t;

#include "portal_options.h"



typedef struct portal_options_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct portal_options_t *result; //model

} portal_options_envelope_t;

portal_options_envelope_t *portal_options_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    portal_options_t *result
);

void portal_options_envelope_free(portal_options_envelope_t *portal_options_envelope);

portal_options_envelope_t *portal_options_envelope_parseFromJSON(cJSON *portal_options_envelopeJSON);

cJSON *portal_options_envelope_convertToJSON(portal_options_envelope_t *portal_options_envelope);

#endif /* _portal_options_envelope_H_ */

