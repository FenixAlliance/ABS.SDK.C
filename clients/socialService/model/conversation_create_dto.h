/*
 * conversation_create_dto.h
 *
 * 
 */

#ifndef _conversation_create_dto_H_
#define _conversation_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct conversation_create_dto_t conversation_create_dto_t;




typedef struct conversation_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *subject; // string
    char *social_profile_id; // string

} conversation_create_dto_t;

conversation_create_dto_t *conversation_create_dto_create(
    char *id,
    char *timestamp,
    char *subject,
    char *social_profile_id
);

void conversation_create_dto_free(conversation_create_dto_t *conversation_create_dto);

conversation_create_dto_t *conversation_create_dto_parseFromJSON(cJSON *conversation_create_dtoJSON);

cJSON *conversation_create_dto_convertToJSON(conversation_create_dto_t *conversation_create_dto);

#endif /* _conversation_create_dto_H_ */

