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


// Enum SOCIALPROFILETYPE for private_message_dto

typedef enum  { supportservice_private_message_dto_SOCIALPROFILETYPE_NULL = 0, supportservice_private_message_dto_SOCIALPROFILETYPE_User, supportservice_private_message_dto_SOCIALPROFILETYPE_Tenant, supportservice_private_message_dto_SOCIALPROFILETYPE_Contact } supportservice_private_message_dto_SOCIALPROFILETYPE_e;

char* private_message_dto_social_profile_type_ToString(supportservice_private_message_dto_SOCIALPROFILETYPE_e social_profile_type);

supportservice_private_message_dto_SOCIALPROFILETYPE_e private_message_dto_social_profile_type_FromString(char* social_profile_type);



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
    char *social_profile_name; // string
    char *social_profile_avatar_url; // string
    supportservice_private_message_dto_SOCIALPROFILETYPE_e social_profile_type; //enum

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
    char *received_timestamp,
    char *social_profile_name,
    char *social_profile_avatar_url,
    supportservice_private_message_dto_SOCIALPROFILETYPE_e social_profile_type
);

void private_message_dto_free(private_message_dto_t *private_message_dto);

private_message_dto_t *private_message_dto_parseFromJSON(cJSON *private_message_dtoJSON);

cJSON *private_message_dto_convertToJSON(private_message_dto_t *private_message_dto);

#endif /* _private_message_dto_H_ */

