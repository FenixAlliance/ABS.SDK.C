/*
 * e_payco_integration_options.h
 *
 * 
 */

#ifndef _e_payco_integration_options_H_
#define _e_payco_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct e_payco_integration_options_t e_payco_integration_options_t;




typedef struct e_payco_integration_options_t {
    int enable; //boolean
    char *customer_id; // string
    char *customer_key; // string
    char *api_key; // string
    char *api_secret; // string

} e_payco_integration_options_t;

e_payco_integration_options_t *e_payco_integration_options_create(
    int enable,
    char *customer_id,
    char *customer_key,
    char *api_key,
    char *api_secret
);

void e_payco_integration_options_free(e_payco_integration_options_t *e_payco_integration_options);

e_payco_integration_options_t *e_payco_integration_options_parseFromJSON(cJSON *e_payco_integration_optionsJSON);

cJSON *e_payco_integration_options_convertToJSON(e_payco_integration_options_t *e_payco_integration_options);

#endif /* _e_payco_integration_options_H_ */

