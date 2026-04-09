/*
 * infinity_comex_integration_options.h
 *
 * 
 */

#ifndef _infinity_comex_integration_options_H_
#define _infinity_comex_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct infinity_comex_integration_options_t infinity_comex_integration_options_t;




typedef struct infinity_comex_integration_options_t {
    int enable; //boolean
    char *app_id; // string
    char *tenant_id; // string
    char *public_key; // string
    char *private_key; // string

} infinity_comex_integration_options_t;

infinity_comex_integration_options_t *infinity_comex_integration_options_create(
    int enable,
    char *app_id,
    char *tenant_id,
    char *public_key,
    char *private_key
);

void infinity_comex_integration_options_free(infinity_comex_integration_options_t *infinity_comex_integration_options);

infinity_comex_integration_options_t *infinity_comex_integration_options_parseFromJSON(cJSON *infinity_comex_integration_optionsJSON);

cJSON *infinity_comex_integration_options_convertToJSON(infinity_comex_integration_options_t *infinity_comex_integration_options);

#endif /* _infinity_comex_integration_options_H_ */

