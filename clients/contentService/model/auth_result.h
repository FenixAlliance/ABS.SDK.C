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

#include "execution_provenance.h"
#include "object.h"

// Enum RUNAS for auth_result

typedef enum  { contentservice_auth_result_RUNAS_NULL = 0, contentservice_auth_result_RUNAS_Invoker, contentservice_auth_result_RUNAS_Application, contentservice_auth_result_RUNAS_System, contentservice_auth_result_RUNAS_Service } contentservice_auth_result_RUNAS_e;

char* auth_result_run_as_ToString(contentservice_auth_result_RUNAS_e run_as);

contentservice_auth_result_RUNAS_e auth_result_run_as_FromString(char* run_as);

// Enum PRINCIPALKIND for auth_result

typedef enum  { contentservice_auth_result_PRINCIPALKIND_NULL = 0, contentservice_auth_result_PRINCIPALKIND_Human, contentservice_auth_result_PRINCIPALKIND_Agent, contentservice_auth_result_PRINCIPALKIND_Application, contentservice_auth_result_PRINCIPALKIND_Service, contentservice_auth_result_PRINCIPALKIND_System } contentservice_auth_result_PRINCIPALKIND_e;

char* auth_result_principal_kind_ToString(contentservice_auth_result_PRINCIPALKIND_e principal_kind);

contentservice_auth_result_PRINCIPALKIND_e auth_result_principal_kind_FromString(char* principal_kind);



typedef struct auth_result_t {
    object_t *user_id; //object
    object_t *tenant_id; //object
    object_t *portal_id; //object
    object_t *application_id; //object
    object_t *enrollment_id; //object
    char *correlation_id; // string
    list_t *scopes; //primitive container
    char *error; // string
    contentservice_auth_result_RUNAS_e run_as; //enum
    contentservice_auth_result_PRINCIPALKIND_e principal_kind; //enum
    struct execution_provenance_t *provenance; //model

} auth_result_t;

auth_result_t *auth_result_create(
    object_t *user_id,
    object_t *tenant_id,
    object_t *portal_id,
    object_t *application_id,
    object_t *enrollment_id,
    char *correlation_id,
    list_t *scopes,
    char *error,
    contentservice_auth_result_RUNAS_e run_as,
    contentservice_auth_result_PRINCIPALKIND_e principal_kind,
    execution_provenance_t *provenance
);

void auth_result_free(auth_result_t *auth_result);

auth_result_t *auth_result_parseFromJSON(cJSON *auth_resultJSON);

cJSON *auth_result_convertToJSON(auth_result_t *auth_result);

#endif /* _auth_result_H_ */

