/*
 * fenix_alliance_integrations_options.h
 *
 * 
 */

#ifndef _fenix_alliance_integrations_options_H_
#define _fenix_alliance_integrations_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct fenix_alliance_integrations_options_t fenix_alliance_integrations_options_t;

#include "alliance_business_suite_integration_options.h"
#include "infinity_comex_integration_options.h"



typedef struct fenix_alliance_integrations_options_t {
    int enable; //boolean
    struct infinity_comex_integration_options_t *icx; //model
    struct alliance_business_suite_integration_options_t *abs; //model

} fenix_alliance_integrations_options_t;

fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_create(
    int enable,
    infinity_comex_integration_options_t *icx,
    alliance_business_suite_integration_options_t *abs
);

void fenix_alliance_integrations_options_free(fenix_alliance_integrations_options_t *fenix_alliance_integrations_options);

fenix_alliance_integrations_options_t *fenix_alliance_integrations_options_parseFromJSON(cJSON *fenix_alliance_integrations_optionsJSON);

cJSON *fenix_alliance_integrations_options_convertToJSON(fenix_alliance_integrations_options_t *fenix_alliance_integrations_options);

#endif /* _fenix_alliance_integrations_options_H_ */

