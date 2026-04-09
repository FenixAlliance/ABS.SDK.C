/*
 * identity_and_privacy_options.h
 *
 * 
 */

#ifndef _identity_and_privacy_options_H_
#define _identity_and_privacy_options_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct identity_and_privacy_options_t identity_and_privacy_options_t;

#include "store_data_retention_policy.h"

// Enum DEFAULTCUSTOMERLOCATION for identity_and_privacy_options

typedef enum  { contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_NULL = 0, contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_None, contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_Geolocate, contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_StoreAddressBased, contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_GeolocateWithCaching } contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e;

char* identity_and_privacy_options_default_customer_location_ToString(contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e default_customer_location);

contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e identity_and_privacy_options_default_customer_location_FromString(char* default_customer_location);



typedef struct identity_and_privacy_options_t {
    int allow_guest_orders; //boolean
    int allow_guest_cart_recognition; //boolean
    int allow_remove_download_access_on_request; //boolean
    int allow_remove_personal_data_from_orders_on_request; //boolean
    int allow_remove_personal_data_from_subscriptions_on_request; //boolean
    char *store_checkout_privacy_policy_notice; // string
    char *store_registration_privacy_policy_notice; // string
    contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e default_customer_location; //enum
    struct store_data_retention_policy_t *inactive_carts_retention_policy; //model
    struct store_data_retention_policy_t *pending_orders_retention_policy; //model
    struct store_data_retention_policy_t *failed_orders_retention_policy; //model
    struct store_data_retention_policy_t *cancelled_orders_retention_policy; //model
    struct store_data_retention_policy_t *completed_orders_retention_policy; //model

} identity_and_privacy_options_t;

identity_and_privacy_options_t *identity_and_privacy_options_create(
    int allow_guest_orders,
    int allow_guest_cart_recognition,
    int allow_remove_download_access_on_request,
    int allow_remove_personal_data_from_orders_on_request,
    int allow_remove_personal_data_from_subscriptions_on_request,
    char *store_checkout_privacy_policy_notice,
    char *store_registration_privacy_policy_notice,
    contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e default_customer_location,
    store_data_retention_policy_t *inactive_carts_retention_policy,
    store_data_retention_policy_t *pending_orders_retention_policy,
    store_data_retention_policy_t *failed_orders_retention_policy,
    store_data_retention_policy_t *cancelled_orders_retention_policy,
    store_data_retention_policy_t *completed_orders_retention_policy
);

void identity_and_privacy_options_free(identity_and_privacy_options_t *identity_and_privacy_options);

identity_and_privacy_options_t *identity_and_privacy_options_parseFromJSON(cJSON *identity_and_privacy_optionsJSON);

cJSON *identity_and_privacy_options_convertToJSON(identity_and_privacy_options_t *identity_and_privacy_options);

#endif /* _identity_and_privacy_options_H_ */

