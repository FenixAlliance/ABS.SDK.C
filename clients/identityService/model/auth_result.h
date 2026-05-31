/*
 * auth_result.h
 *
 * 
 */

#ifndef _auth_result_H_
#define _auth_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct auth_result_t auth_result_t;

#include "object.h"



typedef struct auth_result_t {
    object_t *user_id; //object
    object_t *tenant_id; //object
    object_t *portal_id; //object
    object_t *application_id; //object
    object_t *enrollment_id; //object
    char *correlation_id; // string
    list_t *scopes; //primitive container
    char *error; // string

} auth_result_t;

auth_result_t *auth_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error
);

void auth_result_free(auth_result_t *auth_result);

auth_result_t *auth_result_parseFromJSON(cJSON *auth_resultJSON);

cJSON *auth_result_convertToJSON(auth_result_t *auth_result);

#endif /* _auth_result_H_ */

