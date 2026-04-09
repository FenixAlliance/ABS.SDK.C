/*
 * open_id_configuration_envelope.h
 *
 * 
 */

#ifndef _open_id_configuration_envelope_H_
#define _open_id_configuration_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct open_id_configuration_envelope_t open_id_configuration_envelope_t;

#include "open_id_configuration.h"



typedef struct open_id_configuration_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct open_id_configuration_t *result; //model

} open_id_configuration_envelope_t;

open_id_configuration_envelope_t *open_id_configuration_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    open_id_configuration_t *result
);

void open_id_configuration_envelope_free(open_id_configuration_envelope_t *open_id_configuration_envelope);

open_id_configuration_envelope_t *open_id_configuration_envelope_parseFromJSON(cJSON *open_id_configuration_envelopeJSON);

cJSON *open_id_configuration_envelope_convertToJSON(open_id_configuration_envelope_t *open_id_configuration_envelope);

#endif /* _open_id_configuration_envelope_H_ */

