/*
 * open_id_configuration.h
 *
 * 
 */

#ifndef _open_id_configuration_H_
#define _open_id_configuration_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct open_id_configuration_t open_id_configuration_t;




typedef struct open_id_configuration_t {
    char *issuer; // string
    char *authorization_endpoint; // string
    char *token_endpoint; // string
    char *end_session_endpoint; // string
    char *jwks_uri; // string
    list_t *response_modes_supported; //primitive container
    list_t *response_types_supported; //primitive container
    list_t *scopes_supported; //primitive container
    list_t *subject_types_supported; //primitive container
    list_t *id_token_signing_alg_values_supported; //primitive container
    list_t *token_endpoint_auth_methods_supported; //primitive container
    list_t *claims_supported; //primitive container

} open_id_configuration_t;

open_id_configuration_t *open_id_configuration_create(
    char *issuer,
    char *authorization_endpoint,
    char *token_endpoint,
    char *end_session_endpoint,
    char *jwks_uri,
    list_t *response_modes_supported,
    list_t *response_types_supported,
    list_t *scopes_supported,
    list_t *subject_types_supported,
    list_t *id_token_signing_alg_values_supported,
    list_t *token_endpoint_auth_methods_supported,
    list_t *claims_supported
);

void open_id_configuration_free(open_id_configuration_t *open_id_configuration);

open_id_configuration_t *open_id_configuration_parseFromJSON(cJSON *open_id_configurationJSON);

cJSON *open_id_configuration_convertToJSON(open_id_configuration_t *open_id_configuration);

#endif /* _open_id_configuration_H_ */

