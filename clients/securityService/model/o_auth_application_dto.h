/*
 * o_auth_application_dto.h
 *
 * 
 */

#ifndef _o_auth_application_dto_H_
#define _o_auth_application_dto_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_auth_application_dto_t o_auth_application_dto_t;




typedef struct o_auth_application_dto_t {
    char *id; // string
    char *application_type; // string
    char *client_id; // string
    char *concurrency_token; // string
    char *consent_type; // string
    char *display_name; // string
    char *display_names; // string
    char *permissions; // string
    char *post_logout_redirect_uris; // string
    char *properties; // string
    char *redirect_uris; // string
    char *requirements; // string
    char *settings; // string
    char *type; // string
    char *logo; // string
    char *business_id; // string
    char *business_profile_record_id; // string
    char *business_application_id; // string
    int authorizations_count; //numeric
    int tokens_count; //numeric

} o_auth_application_dto_t;

o_auth_application_dto_t *o_auth_application_dto_create(
    char *id,
    char *application_type,
    char *client_id,
    char *concurrency_token,
    char *consent_type,
    char *display_name,
    char *display_names,
    char *permissions,
    char *post_logout_redirect_uris,
    char *properties,
    char *redirect_uris,
    char *requirements,
    char *settings,
    char *type,
    char *logo,
    char *business_id,
    char *business_profile_record_id,
    char *business_application_id,
    int authorizations_count,
    int tokens_count
);

void o_auth_application_dto_free(o_auth_application_dto_t *o_auth_application_dto);

o_auth_application_dto_t *o_auth_application_dto_parseFromJSON(cJSON *o_auth_application_dtoJSON);

cJSON *o_auth_application_dto_convertToJSON(o_auth_application_dto_t *o_auth_application_dto);

#endif /* _o_auth_application_dto_H_ */

