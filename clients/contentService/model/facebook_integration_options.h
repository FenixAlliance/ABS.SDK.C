/*
 * facebook_integration_options.h
 *
 * 
 */

#ifndef _facebook_integration_options_H_
#define _facebook_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct facebook_integration_options_t facebook_integration_options_t;




typedef struct facebook_integration_options_t {
    int enable; //boolean
    char *pixel_id; // string
    char *app_id; // string
    char *app_secret; // string
    char *instagram_app_id; // string
    char *instagram_app_secret; // string
    char *marketing_api_token; // string
    char *marketing_api_token_sandbox; // string

} facebook_integration_options_t;

facebook_integration_options_t *facebook_integration_options_create(
    int enable,
    char *pixel_id,
    char *app_id,
    char *app_secret,
    char *instagram_app_id,
    char *instagram_app_secret,
    char *marketing_api_token,
    char *marketing_api_token_sandbox
);

void facebook_integration_options_free(facebook_integration_options_t *facebook_integration_options);

facebook_integration_options_t *facebook_integration_options_parseFromJSON(cJSON *facebook_integration_optionsJSON);

cJSON *facebook_integration_options_convertToJSON(facebook_integration_options_t *facebook_integration_options);

#endif /* _facebook_integration_options_H_ */

