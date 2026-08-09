/*
 * inbox_replay_result_dto_envelope.h
 *
 * 
 */

#ifndef _inbox_replay_result_dto_envelope_H_
#define _inbox_replay_result_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inbox_replay_result_dto_envelope_t inbox_replay_result_dto_envelope_t;

#include "inbox_replay_result_dto.h"



typedef struct inbox_replay_result_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct inbox_replay_result_dto_t *result; //model

} inbox_replay_result_dto_envelope_t;

inbox_replay_result_dto_envelope_t *inbox_replay_result_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    inbox_replay_result_dto_t *result
);

void inbox_replay_result_dto_envelope_free(inbox_replay_result_dto_envelope_t *inbox_replay_result_dto_envelope);

inbox_replay_result_dto_envelope_t *inbox_replay_result_dto_envelope_parseFromJSON(cJSON *inbox_replay_result_dto_envelopeJSON);

cJSON *inbox_replay_result_dto_envelope_convertToJSON(inbox_replay_result_dto_envelope_t *inbox_replay_result_dto_envelope);

#endif /* _inbox_replay_result_dto_envelope_H_ */

