/*
 * google_integration_options.h
 *
 * 
 */

#ifndef _google_integration_options_H_
#define _google_integration_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct google_integration_options_t google_integration_options_t;

#include "google_analytics.h"
#include "google_maps_integration_options.h"
#include "google_merchant_center_integration_options.h"
#include "google_my_business_integration_options.h"
#include "google_recaptcha_integration_options.h"
#include "google_tag_manager_integration_options.h"



typedef struct google_integration_options_t {
    int enable; //boolean
    struct google_maps_integration_options_t *google_maps; //model
    struct google_merchant_center_integration_options_t *google_merchant_center; //model
    struct google_tag_manager_integration_options_t *google_tag_manager; //model
    struct google_recaptcha_integration_options_t *google_recaptcha; //model
    struct google_analytics_t *google_analytics; //model
    struct google_my_business_integration_options_t *google_my_business; //model

} google_integration_options_t;

google_integration_options_t *google_integration_options_create(
    int enable,
    google_maps_integration_options_t *google_maps,
    google_merchant_center_integration_options_t *google_merchant_center,
    google_tag_manager_integration_options_t *google_tag_manager,
    google_recaptcha_integration_options_t *google_recaptcha,
    google_analytics_t *google_analytics,
    google_my_business_integration_options_t *google_my_business
);

void google_integration_options_free(google_integration_options_t *google_integration_options);

google_integration_options_t *google_integration_options_parseFromJSON(cJSON *google_integration_optionsJSON);

cJSON *google_integration_options_convertToJSON(google_integration_options_t *google_integration_options);

#endif /* _google_integration_options_H_ */

