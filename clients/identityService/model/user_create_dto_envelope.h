/*
 * user_create_dto_envelope.h
 *
 * 
 */

#ifndef _user_create_dto_envelope_H_
#define _user_create_dto_envelope_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_create_dto_envelope_t user_create_dto_envelope_t;

#include "user_create_dto.h"



typedef struct user_create_dto_envelope_t {
    int is_success; //boolean
    char *error_message; // string
    char *correlation_id; // string
    char *timestamp; //date time
    char *activity_id; // string
    struct user_create_dto_t *result; //model

} user_create_dto_envelope_t;

user_create_dto_envelope_t *user_create_dto_envelope_create(
    int is_success,
    char *error_message,
    char *correlation_id,
    char *timestamp,
    char *activity_id,
    user_create_dto_t *result
);

void user_create_dto_envelope_free(user_create_dto_envelope_t *user_create_dto_envelope);

user_create_dto_envelope_t *user_create_dto_envelope_parseFromJSON(cJSON *user_create_dto_envelopeJSON);

cJSON *user_create_dto_envelope_convertToJSON(user_create_dto_envelope_t *user_create_dto_envelope);

#endif /* _user_create_dto_envelope_H_ */

