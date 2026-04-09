/*
 * private_message_update_dto.h
 *
 * 
 */

#ifndef _private_message_update_dto_H_
#define _private_message_update_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct private_message_update_dto_t private_message_update_dto_t;




typedef struct private_message_update_dto_t {
    char *title; // string
    char *message; // string

} private_message_update_dto_t;

private_message_update_dto_t *private_message_update_dto_create(
    char *title,
    char *message
);

void private_message_update_dto_free(private_message_update_dto_t *private_message_update_dto);

private_message_update_dto_t *private_message_update_dto_parseFromJSON(cJSON *private_message_update_dtoJSON);

cJSON *private_message_update_dto_convertToJSON(private_message_update_dto_t *private_message_update_dto);

#endif /* _private_message_update_dto_H_ */

