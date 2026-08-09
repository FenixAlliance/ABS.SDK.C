/*
 * cognitive_agent_conversation_create_dto.h
 *
 * 
 */

#ifndef _cognitive_agent_conversation_create_dto_H_
#define _cognitive_agent_conversation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cognitive_agent_conversation_create_dto_t cognitive_agent_conversation_create_dto_t;




typedef struct cognitive_agent_conversation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *channel_id; // string
    char *conversation_id; // string
    char *state; // string
    int current; //boolean
    char *account_holder_id; // string
    char *individual_id; // string
    char *organization_id; // string
    char *receiver_business_id; // string

} cognitive_agent_conversation_create_dto_t;

cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_create(
    char *id,
    char *timestamp,
    char *channel_id,
    char *conversation_id,
    char *state,
    int current,
    char *account_holder_id,
    char *individual_id,
    char *organization_id,
    char *receiver_business_id
);

void cognitive_agent_conversation_create_dto_free(cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto);

cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto_parseFromJSON(cJSON *cognitive_agent_conversation_create_dtoJSON);

cJSON *cognitive_agent_conversation_create_dto_convertToJSON(cognitive_agent_conversation_create_dto_t *cognitive_agent_conversation_create_dto);

#endif /* _cognitive_agent_conversation_create_dto_H_ */

