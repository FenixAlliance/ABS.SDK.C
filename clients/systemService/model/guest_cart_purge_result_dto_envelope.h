/*
 * guest_cart_purge_result_dto_envelope.h
 *
 * 
 */

#ifndef _guest_cart_purge_result_dto_envelope_H_
#define _guest_cart_purge_result_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct guest_cart_purge_result_dto_envelope_t guest_cart_purge_result_dto_envelope_t;

#include "guest_cart_purge_result_dto.h"



typedef struct guest_cart_purge_result_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct guest_cart_purge_result_dto_t *result; //model

} guest_cart_purge_result_dto_envelope_t;

guest_cart_purge_result_dto_envelope_t *guest_cart_purge_result_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    guest_cart_purge_result_dto_t *result
);

void guest_cart_purge_result_dto_envelope_free(guest_cart_purge_result_dto_envelope_t *guest_cart_purge_result_dto_envelope);

guest_cart_purge_result_dto_envelope_t *guest_cart_purge_result_dto_envelope_parseFromJSON(cJSON *guest_cart_purge_result_dto_envelopeJSON);

cJSON *guest_cart_purge_result_dto_envelope_convertToJSON(guest_cart_purge_result_dto_envelope_t *guest_cart_purge_result_dto_envelope);

#endif /* _guest_cart_purge_result_dto_envelope_H_ */

