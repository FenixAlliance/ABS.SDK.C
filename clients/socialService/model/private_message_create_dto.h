/*
 * private_message_create_dto.h
 *
 * 
 */

#ifndef _private_message_create_dto_H_
#define _private_message_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct private_message_create_dto_t private_message_create_dto_t;




typedef struct private_message_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *title; // string
    char *message; // string
    char *conversation_id; // string
    char *sender_social_profile_id; // string
    char *receiver_social_profile_id; // string

} private_message_create_dto_t;

private_message_create_dto_t *private_message_create_dto_create(
    char *id,
    char *timestamp,
    char *title,
    char *message,
    char *conversation_id,
    char *sender_social_profile_id,
    char *receiver_social_profile_id
);

void private_message_create_dto_free(private_message_create_dto_t *private_message_create_dto);

private_message_create_dto_t *private_message_create_dto_parseFromJSON(cJSON *private_message_create_dtoJSON);

cJSON *private_message_create_dto_convertToJSON(private_message_create_dto_t *private_message_create_dto);

#endif /* _private_message_create_dto_H_ */

