/*
 * open_exchange_rates_integrations_options.h
 *
 * 
 */

#ifndef _open_exchange_rates_integrations_options_H_
#define _open_exchange_rates_integrations_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct open_exchange_rates_integrations_options_t open_exchange_rates_integrations_options_t;




typedef struct open_exchange_rates_integrations_options_t {
    int enable; //boolean
    char *app_id; // string

} open_exchange_rates_integrations_options_t;

open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_create(
    int enable,
    char *app_id
);

void open_exchange_rates_integrations_options_free(open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options);

open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options_parseFromJSON(cJSON *open_exchange_rates_integrations_optionsJSON);

cJSON *open_exchange_rates_integrations_options_convertToJSON(open_exchange_rates_integrations_options_t *open_exchange_rates_integrations_options);

#endif /* _open_exchange_rates_integrations_options_H_ */

