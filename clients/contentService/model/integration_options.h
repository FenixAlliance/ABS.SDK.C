/*
 * integration_options.h
 *
 * 
 */

#ifndef _integration_options_H_
#define _integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct integration_options_t integration_options_t;




typedef struct integration_options_t {
    char *max_mind_license_key; // string
    char *max_mind_db_path; // string

} integration_options_t;

integration_options_t *integration_options_create(
    char *max_mind_license_key,
    char *max_mind_db_path
);

void integration_options_free(integration_options_t *integration_options);

integration_options_t *integration_options_parseFromJSON(cJSON *integration_optionsJSON);

cJSON *integration_options_convertToJSON(integration_options_t *integration_options);

#endif /* _integration_options_H_ */

