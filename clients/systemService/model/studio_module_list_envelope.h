/*
 * studio_module_list_envelope.h
 *
 * 
 */

#ifndef _studio_module_list_envelope_H_
#define _studio_module_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct studio_module_list_envelope_t studio_module_list_envelope_t;

#include "studio_module.h"



typedef struct studio_module_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} studio_module_list_envelope_t;

studio_module_list_envelope_t *studio_module_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void studio_module_list_envelope_free(studio_module_list_envelope_t *studio_module_list_envelope);

studio_module_list_envelope_t *studio_module_list_envelope_parseFromJSON(cJSON *studio_module_list_envelopeJSON);

cJSON *studio_module_list_envelope_convertToJSON(studio_module_list_envelope_t *studio_module_list_envelope);

#endif /* _studio_module_list_envelope_H_ */

