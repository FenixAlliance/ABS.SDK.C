/*
 * conversation_dto.h
 *
 * 
 */

#ifndef _conversation_dto_H_
#define _conversation_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct conversation_dto_t conversation_dto_t;




typedef struct conversation_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *subject; // string
    char *social_profile_id; // string
    char *started_timestamp; //date time
    char *last_message_timestamp; //date time
    char *last_message; // string
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string

} conversation_dto_t;

conversation_dto_t *conversation_dto_create(
    char *id,
    char *timestamp,
    char *subject,
    char *social_profile_id,
    char *started_timestamp,
    char *last_message_timestamp,
    char *last_message,
    char *social_profile_name,
    char *social_profile_avatar_url
);

void conversation_dto_free(conversation_dto_t *conversation_dto);

conversation_dto_t *conversation_dto_parseFromJSON(cJSON *conversation_dtoJSON);

cJSON *conversation_dto_convertToJSON(conversation_dto_t *conversation_dto);

#endif /* _conversation_dto_H_ */

