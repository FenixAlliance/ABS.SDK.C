/*
 * private_message_dto.h
 *
 * 
 */

#ifndef _private_message_dto_H_
#define _private_message_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct private_message_dto_t private_message_dto_t;




typedef struct private_message_dto_t {
    char *id; // string
    char *timestamp; //date time
    int read; //boolean
    char *title; // string
    char *message; // string
    char *conversation_id; // string
    char *sender_social_profile_id; // string
    char *receiver_social_profile_id; // string
    char *sent_timestamp; //date time
    char *read_timestamp; //date time
    char *received_timestamp; //date time

} private_message_dto_t;

private_message_dto_t *private_message_dto_create(
    char *id,
    char *timestamp,
    int read,
    char *title,
    char *message,
    char *conversation_id,
    char *sender_social_profile_id,
    char *receiver_social_profile_id,
    char *sent_timestamp,
    char *read_timestamp,
    char *received_timestamp
);

void private_message_dto_free(private_message_dto_t *private_message_dto);

private_message_dto_t *private_message_dto_parseFromJSON(cJSON *private_message_dtoJSON);

cJSON *private_message_dto_convertToJSON(private_message_dto_t *private_message_dto);

#endif /* _private_message_dto_H_ */

