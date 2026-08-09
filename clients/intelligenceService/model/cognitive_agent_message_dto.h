/*
 * cognitive_agent_message_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_message_dto_H_
#define _cognitive_agent_message_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_message_dto_t cognitive_agent_message_dto_t;




typedef struct cognitive_agent_message_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cognitive_agent_conversation_id; // string
    char *cognitive_agent_id; // string
    char *role; // string
    char *content; // string
    int sequence; //numeric
    char *creation_date; //date time
    char *metadata_json; // string
    char *ai_run_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string

} cognitive_agent_message_dto_t;

cognitive_agent_message_dto_t *cognitive_agent_message_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_conversation_id,
    char *cognitive_agent_id,
    char *role,
    char *content,
    int sequence,
    char *creation_date,
    char *metadata_json,
    char *ai_run_id,
    char *tenant_id,
    char *enrollment_id
);

void cognitive_agent_message_dto_free(cognitive_agent_message_dto_t *cognitive_agent_message_dto);

cognitive_agent_message_dto_t *cognitive_agent_message_dto_parseFromJSON(cJSON *cognitive_agent_message_dtoJSON);

cJSON *cognitive_agent_message_dto_convertToJSON(cognitive_agent_message_dto_t *cognitive_agent_message_dto);

#endif /* _cognitive_agent_message_dto_H_ */

