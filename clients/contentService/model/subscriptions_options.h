/*
 * subscriptions_options.h
 *
 * 
 */

#ifndef _subscriptions_options_H_
#define _subscriptions_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subscriptions_options_t subscriptions_options_t;


// Enum PRORATEFIRSTRENEWAL for subscriptions_options

typedef enum  { contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_NULL = 0, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_AlwaysAndNoCharge, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_NeverAndNoCharge, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_NeverAndFullCharge, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_AlwaysAndFullCharge, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_ForVirtualProductsOnly, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_ForServiceProductsOnly, contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_ForSubscriptionProductsOnly } contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e;

char* subscriptions_options_prorate_first_renewal_ToString(contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal);

contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e subscriptions_options_prorate_first_renewal_FromString(char* prorate_first_renewal);



typedef struct subscriptions_options_t {
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
    contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal; //enum

} subscriptions_options_t;

subscriptions_options_t *subscriptions_options_create(
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
    contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal
);

void subscriptions_options_free(subscriptions_options_t *subscriptions_options);

subscriptions_options_t *subscriptions_options_parseFromJSON(cJSON *subscriptions_optionsJSON);

cJSON *subscriptions_options_convertToJSON(subscriptions_options_t *subscriptions_options);

#endif /* _subscriptions_options_H_ */

