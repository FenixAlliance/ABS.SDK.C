/*
 * o_auth_authorization_dto.h
 *
 * 
 */

#ifndef _o_auth_authorization_dto_H_
#define _o_auth_authorization_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_auth_authorization_dto_t o_auth_authorization_dto_t;




typedef struct o_auth_authorization_dto_t {
    char *id; // string
    char *concurrency_token; // string
    char *creation_date; //date time
    char *properties; // string
    char *scopes; // string
    char *status; // string
    char *subject; // string
    char *type; // string
    char *application_id; // string
    int tokens_count; //numeric

} o_auth_authorization_dto_t;

o_auth_authorization_dto_t *o_auth_authorization_dto_create(
    char *id,
    char *concurrency_token,
    char *creation_date,
    char *properties,
    char *scopes,
    char *status,
    char *subject,
    char *type,
    char *application_id,
    int tokens_count
);

void o_auth_authorization_dto_free(o_auth_authorization_dto_t *o_auth_authorization_dto);

o_auth_authorization_dto_t *o_auth_authorization_dto_parseFromJSON(cJSON *o_auth_authorization_dtoJSON);

cJSON *o_auth_authorization_dto_convertToJSON(o_auth_authorization_dto_t *o_auth_authorization_dto);

#endif /* _o_auth_authorization_dto_H_ */

