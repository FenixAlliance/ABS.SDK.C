/*
 * user_dto_list_envelope.h
 *
 * 
 */

#ifndef _user_dto_list_envelope_H_
#define _user_dto_list_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_dto_list_envelope_t user_dto_list_envelope_t;

#include "user_dto.h"



typedef struct user_dto_list_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    list_t *result; //nonprimitive container

} user_dto_list_envelope_t;

user_dto_list_envelope_t *user_dto_list_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    list_t *result
);

void user_dto_list_envelope_free(user_dto_list_envelope_t *user_dto_list_envelope);

user_dto_list_envelope_t *user_dto_list_envelope_parseFromJSON(cJSON *user_dto_list_envelopeJSON);

cJSON *user_dto_list_envelope_convertToJSON(user_dto_list_envelope_t *user_dto_list_envelope);

#endif /* _user_dto_list_envelope_H_ */

