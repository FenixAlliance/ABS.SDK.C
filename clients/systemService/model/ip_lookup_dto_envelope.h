/*
 * ip_lookup_dto_envelope.h
 *
 * 
 */

#ifndef _ip_lookup_dto_envelope_H_
#define _ip_lookup_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ip_lookup_dto_envelope_t ip_lookup_dto_envelope_t;

#include "ip_lookup_dto.h"



typedef struct ip_lookup_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct ip_lookup_dto_t *result; //model

} ip_lookup_dto_envelope_t;

ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    ip_lookup_dto_t *result
);

void ip_lookup_dto_envelope_free(ip_lookup_dto_envelope_t *ip_lookup_dto_envelope);

ip_lookup_dto_envelope_t *ip_lookup_dto_envelope_parseFromJSON(cJSON *ip_lookup_dto_envelopeJSON);

cJSON *ip_lookup_dto_envelope_convertToJSON(ip_lookup_dto_envelope_t *ip_lookup_dto_envelope);

#endif /* _ip_lookup_dto_envelope_H_ */

