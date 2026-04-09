/*
 * support_ticket_conversation_dto.h
 *
 * 
 */

#ifndef _support_ticket_conversation_dto_H_
#define _support_ticket_conversation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct support_ticket_conversation_dto_t support_ticket_conversation_dto_t;




typedef struct support_ticket_conversation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *support_ticket_id; // string
    char *topic; // string
    int closed; //boolean
    char *closed_timestamp; //date time
    char *social_profile_id; // string

} support_ticket_conversation_dto_t;

support_ticket_conversation_dto_t *support_ticket_conversation_dto_create(
    char *id,
    char *timestamp,
    char *support_ticket_id,
    char *topic,
    int closed,
    char *closed_timestamp,
    char *social_profile_id
);

void support_ticket_conversation_dto_free(support_ticket_conversation_dto_t *support_ticket_conversation_dto);

support_ticket_conversation_dto_t *support_ticket_conversation_dto_parseFromJSON(cJSON *support_ticket_conversation_dtoJSON);

cJSON *support_ticket_conversation_dto_convertToJSON(support_ticket_conversation_dto_t *support_ticket_conversation_dto);

#endif /* _support_ticket_conversation_dto_H_ */

