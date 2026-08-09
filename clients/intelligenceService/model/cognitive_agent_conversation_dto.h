/*
 * cognitive_agent_conversation_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_conversation_dto_H_
#define _cognitive_agent_conversation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_conversation_dto_t cognitive_agent_conversation_dto_t;




typedef struct cognitive_agent_conversation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *cognitive_agent_id; // string
    char *tenant_id; // string
    char *enrollment_id; // string
    char *title; // string
    int claimed; //boolean
    int current; //boolean
    char *channel_id; // string
    char *conversation_id; // string
    char *activity_id; // string
    char *activity_from; // string
    char *state; // string
    char *last_activity; //date time
    char *account_holder_id; // string
    char *individual_id; // string
    char *organization_id; // string
    char *receiver_business_id; // string

} cognitive_agent_conversation_dto_t;

cognitive_agent_conversation_dto_t *cognitive_agent_conversation_dto_create(
    char *id,
    char *timestamp,
    char *cognitive_agent_id,
    char *tenant_id,
    char *enrollment_id,
    char *title,
    int claimed,
    int current,
    char *channel_id,
    char *conversation_id,
    char *activity_id,
    char *activity_from,
    char *state,
    char *last_activity,
    char *account_holder_id,
    char *individual_id,
    char *organization_id,
    char *receiver_business_id
);

void cognitive_agent_conversation_dto_free(cognitive_agent_conversation_dto_t *cognitive_agent_conversation_dto);

cognitive_agent_conversation_dto_t *cognitive_agent_conversation_dto_parseFromJSON(cJSON *cognitive_agent_conversation_dtoJSON);

cJSON *cognitive_agent_conversation_dto_convertToJSON(cognitive_agent_conversation_dto_t *cognitive_agent_conversation_dto);

#endif /* _cognitive_agent_conversation_dto_H_ */

