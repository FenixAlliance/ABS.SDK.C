/*
 * services_options.h
 *
 * 
 */

#ifndef _services_options_H_
#define _services_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct services_options_t services_options_t;


// Enum PRORATEFIRSTRENEWAL for services_options

typedef enum  { contentservice_services_options_PRORATEFIRSTRENEWAL_NULL = 0, contentservice_services_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge, contentservice_services_options_PRORATEFIRSTRENEWAL_NeverAndNoCharge, contentservice_services_options_PRORATEFIRSTRENEWAL_NeverAndFullCharge, contentservice_services_options_PRORATEFIRSTRENEWAL_AlwaysAndFullCharge, contentservice_services_options_PRORATEFIRSTRENEWAL_ForVirtualProductsOnly, contentservice_services_options_PRORATEFIRSTRENEWAL_ForServiceProductsOnly, contentservice_services_options_PRORATEFIRSTRENEWAL_ForSubscriptionProductsOnly } contentservice_services_options_PRORATEFIRSTRENEWAL_e;

char* services_options_prorate_first_renewal_ToString(contentservice_services_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal);

contentservice_services_options_PRORATEFIRSTRENEWAL_e services_options_prorate_first_renewal_FromString(char* prorate_first_renewal);



typedef struct services_options_t {
    int drip_downloadable_content; //boolean
    int retry_failed_payments; //boolean
    int allow0_initial_checkout; //boolean
    int allow_mixed_checkout; //boolean
    int synchronise_renewals; //boolean
    char *add_to_cart_button_text; // string
    char *place_order_button_text; // string
    char *new_subscriber_role; // string
    char *inactive_subscriber_role; // string
    int enable_automatic_payments; //numeric
    int enable_manual_renewals; //numeric
    int display_auto_renewal_toggle; //numeric
    int accept_early_renewals; //numeric
    int customer_suspensions; //numeric
    int enable_subscription_switching_between_groups; //numeric
    int enable_subscription_switching_between_variations; //numeric
    contentservice_services_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal; //enum

} services_options_t;

services_options_t *services_options_create(
    int drip_downloadable_content,
    int retry_failed_payments,
    int allow0_initial_checkout,
    int allow_mixed_checkout,
    int synchronise_renewals,
    char *add_to_cart_button_text,
    char *place_order_button_text,
    char *new_subscriber_role,
    char *inactive_subscriber_role,
    int enable_automatic_payments,
    int enable_manual_renewals,
    int display_auto_renewal_toggle,
    int accept_early_renewals,
    int customer_suspensions,
    int enable_subscription_switching_between_groups,
    int enable_subscription_switching_between_variations,
    contentservice_services_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal
);

void services_options_free(services_options_t *services_options);

services_options_t *services_options_parseFromJSON(cJSON *services_optionsJSON);

cJSON *services_options_convertToJSON(services_options_t *services_options);

#endif /* _services_options_H_ */

