/*
 * cognitive_agent_conversation_dto_envelope.h
 *
 * 
 */

#ifndef _cognitive_agent_conversation_dto_envelope_H_
#define _cognitive_agent_conversation_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_conversation_dto_envelope_t cognitive_agent_conversation_dto_envelope_t;

#include "cognitive_agent_conversation_dto.h"



typedef struct cognitive_agent_conversation_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    int http_status; //numeric
    char *error_code; // string
    list_t* validation_details; //map
    char *activity_id; // string
    struct cognitive_agent_conversation_dto_t *result; //model

} cognitive_agent_conversation_dto_envelope_t;

cognitive_agent_conversation_dto_envelope_t *cognitive_agent_conversation_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    int http_status,
    char *error_code,
    list_t* validation_details,
    char *activity_id,
    cognitive_agent_conversation_dto_t *result
);

void cognitive_agent_conversation_dto_envelope_free(cognitive_agent_conversation_dto_envelope_t *cognitive_agent_conversation_dto_envelope);

cognitive_agent_conversation_dto_envelope_t *cognitive_agent_conversation_dto_envelope_parseFromJSON(cJSON *cognitive_agent_conversation_dto_envelopeJSON);

cJSON *cognitive_agent_conversation_dto_envelope_convertToJSON(cognitive_agent_conversation_dto_envelope_t *cognitive_agent_conversation_dto_envelope);

#endif /* _cognitive_agent_conversation_dto_envelope_H_ */

