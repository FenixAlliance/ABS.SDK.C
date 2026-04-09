#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "identity_and_privacy_options.h"


char* identity_and_privacy_options_default_customer_location_ToString(contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e default_customer_location) {
    char* default_customer_locationArray[] =  { "NULL", "None", "Geolocate", "StoreAddressBased", "GeolocateWithCaching" };
    return default_customer_locationArray[default_customer_location];
}

contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e identity_and_privacy_options_default_customer_location_FromString(char* default_customer_location){
    int stringToReturn = 0;
    char *default_customer_locationArray[] =  { "NULL", "None", "Geolocate", "StoreAddressBased", "GeolocateWithCaching" };
    size_t sizeofArray = sizeof(default_customer_locationArray) / sizeof(default_customer_locationArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(default_customer_location, default_customer_locationArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    identity_and_privacy_options_t *identity_and_privacy_options_local_var = malloc(sizeof(identity_and_privacy_options_t));
    if (!identity_and_privacy_options_local_var) {
        return NULL;
    }
    identity_and_privacy_options_local_var->allow_guest_orders = allow_guest_orders;
    identity_and_privacy_options_local_var->allow_guest_cart_recognition = allow_guest_cart_recognition;
    identity_and_privacy_options_local_var->allow_remove_download_access_on_request = allow_remove_download_access_on_request;
    identity_and_privacy_options_local_var->allow_remove_personal_data_from_orders_on_request = allow_remove_personal_data_from_orders_on_request;
    identity_and_privacy_options_local_var->allow_remove_personal_data_from_subscriptions_on_request = allow_remove_personal_data_from_subscriptions_on_request;
    identity_and_privacy_options_local_var->store_checkout_privacy_policy_notice = store_checkout_privacy_policy_notice;
    identity_and_privacy_options_local_var->store_registration_privacy_policy_notice = store_registration_privacy_policy_notice;
    identity_and_privacy_options_local_var->default_customer_location = default_customer_location;
    identity_and_privacy_options_local_var->inactive_carts_retention_policy = inactive_carts_retention_policy;
    identity_and_privacy_options_local_var->pending_orders_retention_policy = pending_orders_retention_policy;
    identity_and_privacy_options_local_var->failed_orders_retention_policy = failed_orders_retention_policy;
    identity_and_privacy_options_local_var->cancelled_orders_retention_policy = cancelled_orders_retention_policy;
    identity_and_privacy_options_local_var->completed_orders_retention_policy = completed_orders_retention_policy;

    return identity_and_privacy_options_local_var;
}


void identity_and_privacy_options_free(identity_and_privacy_options_t *identity_and_privacy_options) {
    if(NULL == identity_and_privacy_options){
        return ;
    }
    listEntry_t *listEntry;
    if (identity_and_privacy_options->store_checkout_privacy_policy_notice) {
        free(identity_and_privacy_options->store_checkout_privacy_policy_notice);
        identity_and_privacy_options->store_checkout_privacy_policy_notice = NULL;
    }
    if (identity_and_privacy_options->store_registration_privacy_policy_notice) {
        free(identity_and_privacy_options->store_registration_privacy_policy_notice);
        identity_and_privacy_options->store_registration_privacy_policy_notice = NULL;
    }
    if (identity_and_privacy_options->inactive_carts_retention_policy) {
        store_data_retention_policy_free(identity_and_privacy_options->inactive_carts_retention_policy);
        identity_and_privacy_options->inactive_carts_retention_policy = NULL;
    }
    if (identity_and_privacy_options->pending_orders_retention_policy) {
        store_data_retention_policy_free(identity_and_privacy_options->pending_orders_retention_policy);
        identity_and_privacy_options->pending_orders_retention_policy = NULL;
    }
    if (identity_and_privacy_options->failed_orders_retention_policy) {
        store_data_retention_policy_free(identity_and_privacy_options->failed_orders_retention_policy);
        identity_and_privacy_options->failed_orders_retention_policy = NULL;
    }
    if (identity_and_privacy_options->cancelled_orders_retention_policy) {
        store_data_retention_policy_free(identity_and_privacy_options->cancelled_orders_retention_policy);
        identity_and_privacy_options->cancelled_orders_retention_policy = NULL;
    }
    if (identity_and_privacy_options->completed_orders_retention_policy) {
        store_data_retention_policy_free(identity_and_privacy_options->completed_orders_retention_policy);
        identity_and_privacy_options->completed_orders_retention_policy = NULL;
    }
    free(identity_and_privacy_options);
}

cJSON *identity_and_privacy_options_convertToJSON(identity_and_privacy_options_t *identity_and_privacy_options) {
    cJSON *item = cJSON_CreateObject();

    // identity_and_privacy_options->allow_guest_orders
    if(identity_and_privacy_options->allow_guest_orders) {
    if(cJSON_AddBoolToObject(item, "allowGuestOrders", identity_and_privacy_options->allow_guest_orders) == NULL) {
    goto fail; //Bool
    }
    }


    // identity_and_privacy_options->allow_guest_cart_recognition
    if(identity_and_privacy_options->allow_guest_cart_recognition) {
    if(cJSON_AddBoolToObject(item, "allowGuestCartRecognition", identity_and_privacy_options->allow_guest_cart_recognition) == NULL) {
    goto fail; //Bool
    }
    }


    // identity_and_privacy_options->allow_remove_download_access_on_request
    if(identity_and_privacy_options->allow_remove_download_access_on_request) {
    if(cJSON_AddBoolToObject(item, "allowRemoveDownloadAccessOnRequest", identity_and_privacy_options->allow_remove_download_access_on_request) == NULL) {
    goto fail; //Bool
    }
    }


    // identity_and_privacy_options->allow_remove_personal_data_from_orders_on_request
    if(identity_and_privacy_options->allow_remove_personal_data_from_orders_on_request) {
    if(cJSON_AddBoolToObject(item, "allowRemovePersonalDataFromOrdersOnRequest", identity_and_privacy_options->allow_remove_personal_data_from_orders_on_request) == NULL) {
    goto fail; //Bool
    }
    }


    // identity_and_privacy_options->allow_remove_personal_data_from_subscriptions_on_request
    if(identity_and_privacy_options->allow_remove_personal_data_from_subscriptions_on_request) {
    if(cJSON_AddBoolToObject(item, "allowRemovePersonalDataFromSubscriptionsOnRequest", identity_and_privacy_options->allow_remove_personal_data_from_subscriptions_on_request) == NULL) {
    goto fail; //Bool
    }
    }


    // identity_and_privacy_options->store_checkout_privacy_policy_notice
    if(identity_and_privacy_options->store_checkout_privacy_policy_notice) {
    if(cJSON_AddStringToObject(item, "storeCheckoutPrivacyPolicyNotice", identity_and_privacy_options->store_checkout_privacy_policy_notice) == NULL) {
    goto fail; //String
    }
    }


    // identity_and_privacy_options->store_registration_privacy_policy_notice
    if(identity_and_privacy_options->store_registration_privacy_policy_notice) {
    if(cJSON_AddStringToObject(item, "storeRegistrationPrivacyPolicyNotice", identity_and_privacy_options->store_registration_privacy_policy_notice) == NULL) {
    goto fail; //String
    }
    }


    // identity_and_privacy_options->default_customer_location
    if(identity_and_privacy_options->default_customer_location != contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_NULL) {
    if(cJSON_AddStringToObject(item, "defaultCustomerLocation", default_customer_locationidentity_and_privacy_options_ToString(identity_and_privacy_options->default_customer_location)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // identity_and_privacy_options->inactive_carts_retention_policy
    if(identity_and_privacy_options->inactive_carts_retention_policy) {
    cJSON *inactive_carts_retention_policy_local_JSON = store_data_retention_policy_convertToJSON(identity_and_privacy_options->inactive_carts_retention_policy);
    if(inactive_carts_retention_policy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "inactiveCartsRetentionPolicy", inactive_carts_retention_policy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // identity_and_privacy_options->pending_orders_retention_policy
    if(identity_and_privacy_options->pending_orders_retention_policy) {
    cJSON *pending_orders_retention_policy_local_JSON = store_data_retention_policy_convertToJSON(identity_and_privacy_options->pending_orders_retention_policy);
    if(pending_orders_retention_policy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "pendingOrdersRetentionPolicy", pending_orders_retention_policy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // identity_and_privacy_options->failed_orders_retention_policy
    if(identity_and_privacy_options->failed_orders_retention_policy) {
    cJSON *failed_orders_retention_policy_local_JSON = store_data_retention_policy_convertToJSON(identity_and_privacy_options->failed_orders_retention_policy);
    if(failed_orders_retention_policy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "failedOrdersRetentionPolicy", failed_orders_retention_policy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // identity_and_privacy_options->cancelled_orders_retention_policy
    if(identity_and_privacy_options->cancelled_orders_retention_policy) {
    cJSON *cancelled_orders_retention_policy_local_JSON = store_data_retention_policy_convertToJSON(identity_and_privacy_options->cancelled_orders_retention_policy);
    if(cancelled_orders_retention_policy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cancelledOrdersRetentionPolicy", cancelled_orders_retention_policy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // identity_and_privacy_options->completed_orders_retention_policy
    if(identity_and_privacy_options->completed_orders_retention_policy) {
    cJSON *completed_orders_retention_policy_local_JSON = store_data_retention_policy_convertToJSON(identity_and_privacy_options->completed_orders_retention_policy);
    if(completed_orders_retention_policy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "completedOrdersRetentionPolicy", completed_orders_retention_policy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

identity_and_privacy_options_t *identity_and_privacy_options_parseFromJSON(cJSON *identity_and_privacy_optionsJSON){

    identity_and_privacy_options_t *identity_and_privacy_options_local_var = NULL;

    // define the local variable for identity_and_privacy_options->inactive_carts_retention_policy
    store_data_retention_policy_t *inactive_carts_retention_policy_local_nonprim = NULL;

    // define the local variable for identity_and_privacy_options->pending_orders_retention_policy
    store_data_retention_policy_t *pending_orders_retention_policy_local_nonprim = NULL;

    // define the local variable for identity_and_privacy_options->failed_orders_retention_policy
    store_data_retention_policy_t *failed_orders_retention_policy_local_nonprim = NULL;

    // define the local variable for identity_and_privacy_options->cancelled_orders_retention_policy
    store_data_retention_policy_t *cancelled_orders_retention_policy_local_nonprim = NULL;

    // define the local variable for identity_and_privacy_options->completed_orders_retention_policy
    store_data_retention_policy_t *completed_orders_retention_policy_local_nonprim = NULL;

    // identity_and_privacy_options->allow_guest_orders
    cJSON *allow_guest_orders = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "allowGuestOrders");
    if (allow_guest_orders) { 
    if(!cJSON_IsBool(allow_guest_orders))
    {
    goto end; //Bool
    }
    }

    // identity_and_privacy_options->allow_guest_cart_recognition
    cJSON *allow_guest_cart_recognition = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "allowGuestCartRecognition");
    if (allow_guest_cart_recognition) { 
    if(!cJSON_IsBool(allow_guest_cart_recognition))
    {
    goto end; //Bool
    }
    }

    // identity_and_privacy_options->allow_remove_download_access_on_request
    cJSON *allow_remove_download_access_on_request = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "allowRemoveDownloadAccessOnRequest");
    if (allow_remove_download_access_on_request) { 
    if(!cJSON_IsBool(allow_remove_download_access_on_request))
    {
    goto end; //Bool
    }
    }

    // identity_and_privacy_options->allow_remove_personal_data_from_orders_on_request
    cJSON *allow_remove_personal_data_from_orders_on_request = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "allowRemovePersonalDataFromOrdersOnRequest");
    if (allow_remove_personal_data_from_orders_on_request) { 
    if(!cJSON_IsBool(allow_remove_personal_data_from_orders_on_request))
    {
    goto end; //Bool
    }
    }

    // identity_and_privacy_options->allow_remove_personal_data_from_subscriptions_on_request
    cJSON *allow_remove_personal_data_from_subscriptions_on_request = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "allowRemovePersonalDataFromSubscriptionsOnRequest");
    if (allow_remove_personal_data_from_subscriptions_on_request) { 
    if(!cJSON_IsBool(allow_remove_personal_data_from_subscriptions_on_request))
    {
    goto end; //Bool
    }
    }

    // identity_and_privacy_options->store_checkout_privacy_policy_notice
    cJSON *store_checkout_privacy_policy_notice = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "storeCheckoutPrivacyPolicyNotice");
    if (store_checkout_privacy_policy_notice) { 
    if(!cJSON_IsString(store_checkout_privacy_policy_notice) && !cJSON_IsNull(store_checkout_privacy_policy_notice))
    {
    goto end; //String
    }
    }

    // identity_and_privacy_options->store_registration_privacy_policy_notice
    cJSON *store_registration_privacy_policy_notice = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "storeRegistrationPrivacyPolicyNotice");
    if (store_registration_privacy_policy_notice) { 
    if(!cJSON_IsString(store_registration_privacy_policy_notice) && !cJSON_IsNull(store_registration_privacy_policy_notice))
    {
    goto end; //String
    }
    }

    // identity_and_privacy_options->default_customer_location
    cJSON *default_customer_location = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "defaultCustomerLocation");
    contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_e default_customer_locationVariable;
    if (default_customer_location) { 
    if(!cJSON_IsString(default_customer_location))
    {
    goto end; //Enum
    }
    default_customer_locationVariable = identity_and_privacy_options_default_customer_location_FromString(default_customer_location->valuestring);
    }

    // identity_and_privacy_options->inactive_carts_retention_policy
    cJSON *inactive_carts_retention_policy = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "inactiveCartsRetentionPolicy");
    if (inactive_carts_retention_policy) { 
    inactive_carts_retention_policy_local_nonprim = store_data_retention_policy_parseFromJSON(inactive_carts_retention_policy); //nonprimitive
    }

    // identity_and_privacy_options->pending_orders_retention_policy
    cJSON *pending_orders_retention_policy = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "pendingOrdersRetentionPolicy");
    if (pending_orders_retention_policy) { 
    pending_orders_retention_policy_local_nonprim = store_data_retention_policy_parseFromJSON(pending_orders_retention_policy); //nonprimitive
    }

    // identity_and_privacy_options->failed_orders_retention_policy
    cJSON *failed_orders_retention_policy = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "failedOrdersRetentionPolicy");
    if (failed_orders_retention_policy) { 
    failed_orders_retention_policy_local_nonprim = store_data_retention_policy_parseFromJSON(failed_orders_retention_policy); //nonprimitive
    }

    // identity_and_privacy_options->cancelled_orders_retention_policy
    cJSON *cancelled_orders_retention_policy = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "cancelledOrdersRetentionPolicy");
    if (cancelled_orders_retention_policy) { 
    cancelled_orders_retention_policy_local_nonprim = store_data_retention_policy_parseFromJSON(cancelled_orders_retention_policy); //nonprimitive
    }

    // identity_and_privacy_options->completed_orders_retention_policy
    cJSON *completed_orders_retention_policy = cJSON_GetObjectItemCaseSensitive(identity_and_privacy_optionsJSON, "completedOrdersRetentionPolicy");
    if (completed_orders_retention_policy) { 
    completed_orders_retention_policy_local_nonprim = store_data_retention_policy_parseFromJSON(completed_orders_retention_policy); //nonprimitive
    }


    identity_and_privacy_options_local_var = identity_and_privacy_options_create (
        allow_guest_orders ? allow_guest_orders->valueint : 0,
        allow_guest_cart_recognition ? allow_guest_cart_recognition->valueint : 0,
        allow_remove_download_access_on_request ? allow_remove_download_access_on_request->valueint : 0,
        allow_remove_personal_data_from_orders_on_request ? allow_remove_personal_data_from_orders_on_request->valueint : 0,
        allow_remove_personal_data_from_subscriptions_on_request ? allow_remove_personal_data_from_subscriptions_on_request->valueint : 0,
        store_checkout_privacy_policy_notice && !cJSON_IsNull(store_checkout_privacy_policy_notice) ? strdup(store_checkout_privacy_policy_notice->valuestring) : NULL,
        store_registration_privacy_policy_notice && !cJSON_IsNull(store_registration_privacy_policy_notice) ? strdup(store_registration_privacy_policy_notice->valuestring) : NULL,
        default_customer_location ? default_customer_locationVariable : contentservice_identity_and_privacy_options_DEFAULTCUSTOMERLOCATION_NULL,
        inactive_carts_retention_policy ? inactive_carts_retention_policy_local_nonprim : NULL,
        pending_orders_retention_policy ? pending_orders_retention_policy_local_nonprim : NULL,
        failed_orders_retention_policy ? failed_orders_retention_policy_local_nonprim : NULL,
        cancelled_orders_retention_policy ? cancelled_orders_retention_policy_local_nonprim : NULL,
        completed_orders_retention_policy ? completed_orders_retention_policy_local_nonprim : NULL
        );

    return identity_and_privacy_options_local_var;
end:
    if (inactive_carts_retention_policy_local_nonprim) {
        store_data_retention_policy_free(inactive_carts_retention_policy_local_nonprim);
        inactive_carts_retention_policy_local_nonprim = NULL;
    }
    if (pending_orders_retention_policy_local_nonprim) {
        store_data_retention_policy_free(pending_orders_retention_policy_local_nonprim);
        pending_orders_retention_policy_local_nonprim = NULL;
    }
    if (failed_orders_retention_policy_local_nonprim) {
        store_data_retention_policy_free(failed_orders_retention_policy_local_nonprim);
        failed_orders_retention_policy_local_nonprim = NULL;
    }
    if (cancelled_orders_retention_policy_local_nonprim) {
        store_data_retention_policy_free(cancelled_orders_retention_policy_local_nonprim);
        cancelled_orders_retention_policy_local_nonprim = NULL;
    }
    if (completed_orders_retention_policy_local_nonprim) {
        store_data_retention_policy_free(completed_orders_retention_policy_local_nonprim);
        completed_orders_retention_policy_local_nonprim = NULL;
    }
    return NULL;

}
