/*
 * port_dto_envelope.h
 *
 * 
 */

#ifndef _port_dto_envelope_H_
#define _port_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct port_dto_envelope_t port_dto_envelope_t;

#include "port_dto.h"



typedef struct port_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct port_dto_t *result; //model

} port_dto_envelope_t;

port_dto_envelope_t *port_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    port_dto_t *result
);

void port_dto_envelope_free(port_dto_envelope_t *port_dto_envelope);

port_dto_envelope_t *port_dto_envelope_parseFromJSON(cJSON *port_dto_envelopeJSON);

cJSON *port_dto_envelope_convertToJSON(port_dto_envelope_t *port_dto_envelope);

#endif /* _port_dto_envelope_H_ */

