/*
 * voyage_port_call_dto_list_envelope.h
 *
 * 
 */

#ifndef _voyage_port_call_dto_list_envelope_H_
#define _voyage_port_call_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct voyage_port_call_dto_list_envelope_t voyage_port_call_dto_list_envelope_t;

#include "voyage_port_call_dto.h"



typedef struct voyage_port_call_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} voyage_port_call_dto_list_envelope_t;

voyage_port_call_dto_list_envelope_t *voyage_port_call_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    list_t *result
);

void voyage_port_call_dto_list_envelope_free(voyage_port_call_dto_list_envelope_t *voyage_port_call_dto_list_envelope);

voyage_port_call_dto_list_envelope_t *voyage_port_call_dto_list_envelope_parseFromJSON(cJSON *voyage_port_call_dto_list_envelopeJSON);

cJSON *voyage_port_call_dto_list_envelope_convertToJSON(voyage_port_call_dto_list_envelope_t *voyage_port_call_dto_list_envelope);

#endif /* _voyage_port_call_dto_list_envelope_H_ */

