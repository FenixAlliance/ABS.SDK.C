/*
 * microsoft_integrations_options.h
 *
 * 
 */

#ifndef _microsoft_integrations_options_H_
#define _microsoft_integrations_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct microsoft_integrations_options_t microsoft_integrations_options_t;

#include "microsoft_azure_integration_options.h"



typedef struct microsoft_integrations_options_t {
    int enable; //boolean
    struct microsoft_azure_integration_options_t *azure; //model

} microsoft_integrations_options_t;

microsoft_integrations_options_t *microsoft_integrations_options_create(
    int enable,
    microsoft_azure_integration_options_t *azure
);

void microsoft_integrations_options_free(microsoft_integrations_options_t *microsoft_integrations_options);

microsoft_integrations_options_t *microsoft_integrations_options_parseFromJSON(cJSON *microsoft_integrations_optionsJSON);

cJSON *microsoft_integrations_options_convertToJSON(microsoft_integrations_options_t *microsoft_integrations_options);

#endif /* _microsoft_integrations_options_H_ */

