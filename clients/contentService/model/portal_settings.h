/*
 * portal_settings.h
 *
 * 
 */

#ifndef _portal_settings_H_
#define _portal_settings_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct portal_settings_t portal_settings_t;

#include "portal_options.h"



typedef struct portal_settings_t {
    int enable; //boolean
    char *portal_id; // string
    char *scopes; // string
    char *tenant_id; // string
    char *home_page_id; // string
    char *blog_page_id; // string
    char *store_page_id; // string
    char *base_endpoint; // string
    char *store_route_prefix; // string
    char *public_key; // string
    char *private_key; // string
    char *auth_token; // string
    char *auth_token_type; // string
    long auth_token_expiration; //numeric
    struct portal_options_t *options; //model

} portal_settings_t;

portal_settings_t *portal_settings_create(
    int enable,
    char *portal_id,
    char *scopes,
    char *tenant_id,
    char *home_page_id,
    char *blog_page_id,
    char *store_page_id,
    char *base_endpoint,
    char *store_route_prefix,
    char *public_key,
    char *private_key,
    char *auth_token,
    char *auth_token_type,
    long auth_token_expiration,
    portal_options_t *options
);

void portal_settings_free(portal_settings_t *portal_settings);

portal_settings_t *portal_settings_parseFromJSON(cJSON *portal_settingsJSON);

cJSON *portal_settings_convertToJSON(portal_settings_t *portal_settings);

#endif /* _portal_settings_H_ */

