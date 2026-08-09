/*
 * activity_record_dto_list_envelope.h
 *
 * 
 */

#ifndef _activity_record_dto_list_envelope_H_
#define _activity_record_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activity_record_dto_list_envelope_t activity_record_dto_list_envelope_t;

#include "activity_record_dto.h"



typedef struct activity_record_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    list_t *result; //nonprimitive container

} activity_record_dto_list_envelope_t;

activity_record_dto_list_envelope_t *activity_record_dto_list_envelope_create(
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

void activity_record_dto_list_envelope_free(activity_record_dto_list_envelope_t *activity_record_dto_list_envelope);

activity_record_dto_list_envelope_t *activity_record_dto_list_envelope_parseFromJSON(cJSON *activity_record_dto_list_envelopeJSON);

cJSON *activity_record_dto_list_envelope_convertToJSON(activity_record_dto_list_envelope_t *activity_record_dto_list_envelope);

#endif /* _activity_record_dto_list_envelope_H_ */

