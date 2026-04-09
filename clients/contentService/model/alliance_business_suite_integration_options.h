/*
 * alliance_business_suite_integration_options.h
 *
 * 
 */

#ifndef _alliance_business_suite_integration_options_H_
#define _alliance_business_suite_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct alliance_business_suite_integration_options_t alliance_business_suite_integration_options_t;




typedef struct alliance_business_suite_integration_options_t {
    int enable; //boolean
    char *app_id; // string
    char *tenant_id; // string
    char *public_key; // string
    char *private_key; // string

} alliance_business_suite_integration_options_t;

alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_create(
    int enable,
    char *app_id,
    char *tenant_id,
    char *public_key,
    char *private_key
);

void alliance_business_suite_integration_options_free(alliance_business_suite_integration_options_t *alliance_business_suite_integration_options);

alliance_business_suite_integration_options_t *alliance_business_suite_integration_options_parseFromJSON(cJSON *alliance_business_suite_integration_optionsJSON);

cJSON *alliance_business_suite_integration_options_convertToJSON(alliance_business_suite_integration_options_t *alliance_business_suite_integration_options);

#endif /* _alliance_business_suite_integration_options_H_ */

