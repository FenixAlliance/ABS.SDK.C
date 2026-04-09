/*
 * google_my_business_integration_options.h
 *
 * 
 */

#ifndef _google_my_business_integration_options_H_
#define _google_my_business_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_my_business_integration_options_t google_my_business_integration_options_t;




typedef struct google_my_business_integration_options_t {
    int enable; //boolean
    char *client_id; // string
    char *project_id; // string
    char *auth_string; // string
    char *token_string; // string
    char *client_secret; // string
    char *auth_provider_x509_cert_url; // string
    list_t *redirect_strings; //primitive container

} google_my_business_integration_options_t;

google_my_business_integration_options_t *google_my_business_integration_options_create(
    int enable,
    char *client_id,
    char *project_id,
    char *auth_string,
    char *token_string,
    char *client_secret,
    char *auth_provider_x509_cert_url,
    list_t *redirect_strings
);

void google_my_business_integration_options_free(google_my_business_integration_options_t *google_my_business_integration_options);

google_my_business_integration_options_t *google_my_business_integration_options_parseFromJSON(cJSON *google_my_business_integration_optionsJSON);

cJSON *google_my_business_integration_options_convertToJSON(google_my_business_integration_options_t *google_my_business_integration_options);

#endif /* _google_my_business_integration_options_H_ */

