/*
 * authorization_result.h
 *
 * 
 */

#ifndef _authorization_result_H_
#define _authorization_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authorization_result_t authorization_result_t;

#include "object.h"



typedef struct authorization_result_t {
    object_t *user_id; //object
    object_t *tenant_id; //object
    object_t *portal_id; //object
    object_t *application_id; //object
    object_t *enrollment_id; //object
    char *correlation_id; // string
    list_t *scopes; //primitive container
    char *error; // string

} authorization_result_t;

authorization_result_t *authorization_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error
);

void authorization_result_free(authorization_result_t *authorization_result);

authorization_result_t *authorization_result_parseFromJSON(cJSON *authorization_resultJSON);

cJSON *authorization_result_convertToJSON(authorization_result_t *authorization_result);

#endif /* _authorization_result_H_ */

