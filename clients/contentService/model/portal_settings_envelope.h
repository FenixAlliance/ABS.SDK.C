/*
 * portal_settings_envelope.h
 *
 * 
 */

#ifndef _portal_settings_envelope_H_
#define _portal_settings_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct portal_settings_envelope_t portal_settings_envelope_t;

#include "portal_settings.h"



typedef struct portal_settings_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct portal_settings_t *result; //model

} portal_settings_envelope_t;

portal_settings_envelope_t *portal_settings_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    portal_settings_t *result
);

void portal_settings_envelope_free(portal_settings_envelope_t *portal_settings_envelope);

portal_settings_envelope_t *portal_settings_envelope_parseFromJSON(cJSON *portal_settings_envelopeJSON);

cJSON *portal_settings_envelope_convertToJSON(portal_settings_envelope_t *portal_settings_envelope);

#endif /* _portal_settings_envelope_H_ */

