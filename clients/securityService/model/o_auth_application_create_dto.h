/*
 * o_auth_application_create_dto.h
 *
 * 
 */

#ifndef _o_auth_application_create_dto_H_
#define _o_auth_application_create_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_auth_application_create_dto_t o_auth_application_create_dto_t;




typedef struct o_auth_application_create_dto_t {
    char *id; // string
    char *timestamp; //date time
    char *display_name; // string
    char *client_id; // string
    char *client_secret; // string
    char *consent_type; // string
    char *permissions; // string
    char *requirements; // string
    char *redirect_uris; // string
    char *post_logout_redirect_uris; // string
    char *logo; // string

} o_auth_application_create_dto_t;

o_auth_application_create_dto_t *o_auth_application_create_dto_create(
    char *id,
    char *timestamp,
    char *display_name,
    char *client_id,
    char *client_secret,
    char *consent_type,
    char *permissions,
    char *requirements,
    char *redirect_uris,
    char *post_logout_redirect_uris,
    char *logo
);

void o_auth_application_create_dto_free(o_auth_application_create_dto_t *o_auth_application_create_dto);

o_auth_application_create_dto_t *o_auth_application_create_dto_parseFromJSON(cJSON *o_auth_application_create_dtoJSON);

cJSON *o_auth_application_create_dto_convertToJSON(o_auth_application_create_dto_t *o_auth_application_create_dto);

#endif /* _o_auth_application_create_dto_H_ */

