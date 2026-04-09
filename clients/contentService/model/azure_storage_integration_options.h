/*
 * azure_storage_integration_options.h
 *
 * 
 */

#ifndef _azure_storage_integration_options_H_
#define _azure_storage_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct azure_storage_integration_options_t azure_storage_integration_options_t;




typedef struct azure_storage_integration_options_t {
    int enable; //boolean
    char *connection_string; // string

} azure_storage_integration_options_t;

azure_storage_integration_options_t *azure_storage_integration_options_create(
    int enable,
    char *connection_string
);

void azure_storage_integration_options_free(azure_storage_integration_options_t *azure_storage_integration_options);

azure_storage_integration_options_t *azure_storage_integration_options_parseFromJSON(cJSON *azure_storage_integration_optionsJSON);

cJSON *azure_storage_integration_options_convertToJSON(azure_storage_integration_options_t *azure_storage_integration_options);

#endif /* _azure_storage_integration_options_H_ */

