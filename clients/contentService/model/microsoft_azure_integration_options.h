/*
 * microsoft_azure_integration_options.h
 *
 * 
 */

#ifndef _microsoft_azure_integration_options_H_
#define _microsoft_azure_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct microsoft_azure_integration_options_t microsoft_azure_integration_options_t;

#include "azure_app_insight_integration_options.h"
#include "azure_storage_integration_options.h"



typedef struct microsoft_azure_integration_options_t {
    int enable; //boolean
    struct azure_app_insight_integration_options_t *azure_app_insight; //model
    struct azure_storage_integration_options_t *azure_storage; //model

} microsoft_azure_integration_options_t;

microsoft_azure_integration_options_t *microsoft_azure_integration_options_create(
    int enable,
    azure_app_insight_integration_options_t *azure_app_insight,
    azure_storage_integration_options_t *azure_storage
);

void microsoft_azure_integration_options_free(microsoft_azure_integration_options_t *microsoft_azure_integration_options);

microsoft_azure_integration_options_t *microsoft_azure_integration_options_parseFromJSON(cJSON *microsoft_azure_integration_optionsJSON);

cJSON *microsoft_azure_integration_options_convertToJSON(microsoft_azure_integration_options_t *microsoft_azure_integration_options);

#endif /* _microsoft_azure_integration_options_H_ */

