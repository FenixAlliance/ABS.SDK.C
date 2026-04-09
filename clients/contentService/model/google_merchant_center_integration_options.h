/*
 * google_merchant_center_integration_options.h
 *
 * 
 */

#ifndef _google_merchant_center_integration_options_H_
#define _google_merchant_center_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_merchant_center_integration_options_t google_merchant_center_integration_options_t;




typedef struct google_merchant_center_integration_options_t {
    int enable; //boolean
    char *merchant_id; // string
    char *merchant_user_email; // string
    char *json_credentials; // string

} google_merchant_center_integration_options_t;

google_merchant_center_integration_options_t *google_merchant_center_integration_options_create(
    int enable,
    char *merchant_id,
    char *merchant_user_email,
    char *json_credentials
);

void google_merchant_center_integration_options_free(google_merchant_center_integration_options_t *google_merchant_center_integration_options);

google_merchant_center_integration_options_t *google_merchant_center_integration_options_parseFromJSON(cJSON *google_merchant_center_integration_optionsJSON);

cJSON *google_merchant_center_integration_options_convertToJSON(google_merchant_center_integration_options_t *google_merchant_center_integration_options);

#endif /* _google_merchant_center_integration_options_H_ */

