/*
 * integrations_options.h
 *
 * 
 */

#ifndef _integrations_options_H_
#define _integrations_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct integrations_options_t integrations_options_t;

#include "e_payco_integration_options.h"
#include "facebook_integration_options.h"
#include "fenix_alliance_integrations_options.h"
#include "free_geo_ip_integration_options.h"
#include "google_integration_options.h"
#include "microsoft_integrations_options.h"
#include "open_exchange_rates_integrations_options.h"
#include "sendgrid_integrations_options.h"



typedef struct integrations_options_t {
    int enable; //boolean
    struct e_payco_integration_options_t *e_payco; //model
    struct google_integration_options_t *google; //model
    struct facebook_integration_options_t *facebook; //model
    struct sendgrid_integrations_options_t *sendgrid; //model
    struct free_geo_ip_integration_options_t *free_geo_ip; //model
    struct microsoft_integrations_options_t *microsoft; //model
    struct fenix_alliance_integrations_options_t *fenix_alliance; //model
    struct open_exchange_rates_integrations_options_t *open_exchange_rates; //model

} integrations_options_t;

integrations_options_t *integrations_options_create(
    int enable,
    e_payco_integration_options_t *e_payco,
    google_integration_options_t *google,
    facebook_integration_options_t *facebook,
    sendgrid_integrations_options_t *sendgrid,
    free_geo_ip_integration_options_t *free_geo_ip,
    microsoft_integrations_options_t *microsoft,
    fenix_alliance_integrations_options_t *fenix_alliance,
    open_exchange_rates_integrations_options_t *open_exchange_rates
);

void integrations_options_free(integrations_options_t *integrations_options);

integrations_options_t *integrations_options_parseFromJSON(cJSON *integrations_optionsJSON);

cJSON *integrations_options_convertToJSON(integrations_options_t *integrations_options);

#endif /* _integrations_options_H_ */

