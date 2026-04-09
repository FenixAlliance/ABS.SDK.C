/*
 * google_recaptcha_integration_options.h
 *
 * 
 */

#ifndef _google_recaptcha_integration_options_H_
#define _google_recaptcha_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_recaptcha_integration_options_t google_recaptcha_integration_options_t;




typedef struct google_recaptcha_integration_options_t {
    int enable; //boolean
    char *site; // string
    char *site_key; // string
    char *secret_key; // string
    char *version; // string

} google_recaptcha_integration_options_t;

google_recaptcha_integration_options_t *google_recaptcha_integration_options_create(
    int enable,
    char *site,
    char *site_key,
    char *secret_key,
    char *version
);

void google_recaptcha_integration_options_free(google_recaptcha_integration_options_t *google_recaptcha_integration_options);

google_recaptcha_integration_options_t *google_recaptcha_integration_options_parseFromJSON(cJSON *google_recaptcha_integration_optionsJSON);

cJSON *google_recaptcha_integration_options_convertToJSON(google_recaptcha_integration_options_t *google_recaptcha_integration_options);

#endif /* _google_recaptcha_integration_options_H_ */

