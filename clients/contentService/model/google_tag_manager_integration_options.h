/*
 * google_tag_manager_integration_options.h
 *
 * 
 */

#ifndef _google_tag_manager_integration_options_H_
#define _google_tag_manager_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_tag_manager_integration_options_t google_tag_manager_integration_options_t;




typedef struct google_tag_manager_integration_options_t {
    int enable; //boolean
    char *id; // string

} google_tag_manager_integration_options_t;

google_tag_manager_integration_options_t *google_tag_manager_integration_options_create(
    int enable,
    char *id
);

void google_tag_manager_integration_options_free(google_tag_manager_integration_options_t *google_tag_manager_integration_options);

google_tag_manager_integration_options_t *google_tag_manager_integration_options_parseFromJSON(cJSON *google_tag_manager_integration_optionsJSON);

cJSON *google_tag_manager_integration_options_convertToJSON(google_tag_manager_integration_options_t *google_tag_manager_integration_options);

#endif /* _google_tag_manager_integration_options_H_ */

