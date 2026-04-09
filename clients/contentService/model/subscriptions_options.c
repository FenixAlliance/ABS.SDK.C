#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subscriptions_options.h"


char* subscriptions_options_prorate_first_renewal_ToString(contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e prorate_first_renewal) {
    char* prorate_first_renewalArray[] =  { "NULL", "AlwaysAndNoCharge", "NeverAndNoCharge", "NeverAndFullCharge", "AlwaysAndFullCharge", "ForVirtualProductsOnly", "ForServiceProductsOnly", "ForSubscriptionProductsOnly" };
    return prorate_first_renewalArray[prorate_first_renewal];
}

contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e subscriptions_options_prorate_first_renewal_FromString(char* prorate_first_renewal){
    int stringToReturn = 0;
    char *prorate_first_renewalArray[] =  { "NULL", "AlwaysAndNoCharge", "NeverAndNoCharge", "NeverAndFullCharge", "AlwaysAndFullCharge", "ForVirtualProductsOnly", "ForServiceProductsOnly", "ForSubscriptionProductsOnly" };
    size_t sizeofArray = sizeof(prorate_first_renewalArray) / sizeof(prorate_first_renewalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(prorate_first_renewal, prorate_first_renewalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    subscriptions_options_t *subscriptions_options_local_var = malloc(sizeof(subscriptions_options_t));
    if (!subscriptions_options_local_var) {
        return NULL;
    }
    subscriptions_options_local_var->drip_downloadable_content = drip_downloadable_content;
    subscriptions_options_local_var->retry_failed_payments = retry_failed_payments;
    subscriptions_options_local_var->allow0_initial_checkout = allow0_initial_checkout;
    subscriptions_options_local_var->allow_mixed_checkout = allow_mixed_checkout;
    subscriptions_options_local_var->synchronise_renewals = synchronise_renewals;
    subscriptions_options_local_var->add_to_cart_button_text = add_to_cart_button_text;
    subscriptions_options_local_var->place_order_button_text = place_order_button_text;
    subscriptions_options_local_var->new_subscriber_role = new_subscriber_role;
    subscriptions_options_local_var->inactive_subscriber_role = inactive_subscriber_role;
    subscriptions_options_local_var->enable_automatic_payments = enable_automatic_payments;
    subscriptions_options_local_var->enable_manual_renewals = enable_manual_renewals;
    subscriptions_options_local_var->display_auto_renewal_toggle = display_auto_renewal_toggle;
    subscriptions_options_local_var->accept_early_renewals = accept_early_renewals;
    subscriptions_options_local_var->customer_suspensions = customer_suspensions;
    subscriptions_options_local_var->enable_subscription_switching_between_groups = enable_subscription_switching_between_groups;
    subscriptions_options_local_var->enable_subscription_switching_between_variations = enable_subscription_switching_between_variations;
    subscriptions_options_local_var->prorate_first_renewal = prorate_first_renewal;

    return subscriptions_options_local_var;
}


void subscriptions_options_free(subscriptions_options_t *subscriptions_options) {
    if(NULL == subscriptions_options){
        return ;
    }
    listEntry_t *listEntry;
    if (subscriptions_options->add_to_cart_button_text) {
        free(subscriptions_options->add_to_cart_button_text);
        subscriptions_options->add_to_cart_button_text = NULL;
    }
    if (subscriptions_options->place_order_button_text) {
        free(subscriptions_options->place_order_button_text);
        subscriptions_options->place_order_button_text = NULL;
    }
    if (subscriptions_options->new_subscriber_role) {
        free(subscriptions_options->new_subscriber_role);
        subscriptions_options->new_subscriber_role = NULL;
    }
    if (subscriptions_options->inactive_subscriber_role) {
        free(subscriptions_options->inactive_subscriber_role);
        subscriptions_options->inactive_subscriber_role = NULL;
    }
    free(subscriptions_options);
}

cJSON *subscriptions_options_convertToJSON(subscriptions_options_t *subscriptions_options) {
    cJSON *item = cJSON_CreateObject();

    // subscriptions_options->drip_downloadable_content
    if(subscriptions_options->drip_downloadable_content) {
    if(cJSON_AddBoolToObject(item, "dripDownloadableContent", subscriptions_options->drip_downloadable_content) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriptions_options->retry_failed_payments
    if(subscriptions_options->retry_failed_payments) {
    if(cJSON_AddBoolToObject(item, "retryFailedPayments", subscriptions_options->retry_failed_payments) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriptions_options->allow0_initial_checkout
    if(subscriptions_options->allow0_initial_checkout) {
    if(cJSON_AddBoolToObject(item, "allow0InitialCheckout", subscriptions_options->allow0_initial_checkout) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriptions_options->allow_mixed_checkout
    if(subscriptions_options->allow_mixed_checkout) {
    if(cJSON_AddBoolToObject(item, "allowMixedCheckout", subscriptions_options->allow_mixed_checkout) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriptions_options->synchronise_renewals
    if(subscriptions_options->synchronise_renewals) {
    if(cJSON_AddBoolToObject(item, "synchroniseRenewals", subscriptions_options->synchronise_renewals) == NULL) {
    goto fail; //Bool
    }
    }


    // subscriptions_options->add_to_cart_button_text
    if(subscriptions_options->add_to_cart_button_text) {
    if(cJSON_AddStringToObject(item, "addToCartButtonText", subscriptions_options->add_to_cart_button_text) == NULL) {
    goto fail; //String
    }
    }


    // subscriptions_options->place_order_button_text
    if(subscriptions_options->place_order_button_text) {
    if(cJSON_AddStringToObject(item, "placeOrderButtonText", subscriptions_options->place_order_button_text) == NULL) {
    goto fail; //String
    }
    }


    // subscriptions_options->new_subscriber_role
    if(subscriptions_options->new_subscriber_role) {
    if(cJSON_AddStringToObject(item, "newSubscriberRole", subscriptions_options->new_subscriber_role) == NULL) {
    goto fail; //String
    }
    }


    // subscriptions_options->inactive_subscriber_role
    if(subscriptions_options->inactive_subscriber_role) {
    if(cJSON_AddStringToObject(item, "inactiveSubscriberRole", subscriptions_options->inactive_subscriber_role) == NULL) {
    goto fail; //String
    }
    }


    // subscriptions_options->enable_automatic_payments
    if(subscriptions_options->enable_automatic_payments) {
    if(cJSON_AddNumberToObject(item, "enableAutomaticPayments", subscriptions_options->enable_automatic_payments) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->enable_manual_renewals
    if(subscriptions_options->enable_manual_renewals) {
    if(cJSON_AddNumberToObject(item, "enableManualRenewals", subscriptions_options->enable_manual_renewals) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->display_auto_renewal_toggle
    if(subscriptions_options->display_auto_renewal_toggle) {
    if(cJSON_AddNumberToObject(item, "displayAutoRenewalToggle", subscriptions_options->display_auto_renewal_toggle) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->accept_early_renewals
    if(subscriptions_options->accept_early_renewals) {
    if(cJSON_AddNumberToObject(item, "acceptEarlyRenewals", subscriptions_options->accept_early_renewals) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->customer_suspensions
    if(subscriptions_options->customer_suspensions) {
    if(cJSON_AddNumberToObject(item, "customerSuspensions", subscriptions_options->customer_suspensions) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->enable_subscription_switching_between_groups
    if(subscriptions_options->enable_subscription_switching_between_groups) {
    if(cJSON_AddNumberToObject(item, "enableSubscriptionSwitchingBetweenGroups", subscriptions_options->enable_subscription_switching_between_groups) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->enable_subscription_switching_between_variations
    if(subscriptions_options->enable_subscription_switching_between_variations) {
    if(cJSON_AddNumberToObject(item, "enableSubscriptionSwitchingBetweenVariations", subscriptions_options->enable_subscription_switching_between_variations) == NULL) {
    goto fail; //Numeric
    }
    }


    // subscriptions_options->prorate_first_renewal
    if(subscriptions_options->prorate_first_renewal != contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_NULL) {
    if(cJSON_AddStringToObject(item, "prorateFirstRenewal", prorate_first_renewalsubscriptions_options_ToString(subscriptions_options->prorate_first_renewal)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subscriptions_options_t *subscriptions_options_parseFromJSON(cJSON *subscriptions_optionsJSON){

    subscriptions_options_t *subscriptions_options_local_var = NULL;

    // subscriptions_options->drip_downloadable_content
    cJSON *drip_downloadable_content = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "dripDownloadableContent");
    if (drip_downloadable_content) { 
    if(!cJSON_IsBool(drip_downloadable_content))
    {
    goto end; //Bool
    }
    }

    // subscriptions_options->retry_failed_payments
    cJSON *retry_failed_payments = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "retryFailedPayments");
    if (retry_failed_payments) { 
    if(!cJSON_IsBool(retry_failed_payments))
    {
    goto end; //Bool
    }
    }

    // subscriptions_options->allow0_initial_checkout
    cJSON *allow0_initial_checkout = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "allow0InitialCheckout");
    if (allow0_initial_checkout) { 
    if(!cJSON_IsBool(allow0_initial_checkout))
    {
    goto end; //Bool
    }
    }

    // subscriptions_options->allow_mixed_checkout
    cJSON *allow_mixed_checkout = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "allowMixedCheckout");
    if (allow_mixed_checkout) { 
    if(!cJSON_IsBool(allow_mixed_checkout))
    {
    goto end; //Bool
    }
    }

    // subscriptions_options->synchronise_renewals
    cJSON *synchronise_renewals = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "synchroniseRenewals");
    if (synchronise_renewals) { 
    if(!cJSON_IsBool(synchronise_renewals))
    {
    goto end; //Bool
    }
    }

    // subscriptions_options->add_to_cart_button_text
    cJSON *add_to_cart_button_text = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "addToCartButtonText");
    if (add_to_cart_button_text) { 
    if(!cJSON_IsString(add_to_cart_button_text) && !cJSON_IsNull(add_to_cart_button_text))
    {
    goto end; //String
    }
    }

    // subscriptions_options->place_order_button_text
    cJSON *place_order_button_text = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "placeOrderButtonText");
    if (place_order_button_text) { 
    if(!cJSON_IsString(place_order_button_text) && !cJSON_IsNull(place_order_button_text))
    {
    goto end; //String
    }
    }

    // subscriptions_options->new_subscriber_role
    cJSON *new_subscriber_role = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "newSubscriberRole");
    if (new_subscriber_role) { 
    if(!cJSON_IsString(new_subscriber_role) && !cJSON_IsNull(new_subscriber_role))
    {
    goto end; //String
    }
    }

    // subscriptions_options->inactive_subscriber_role
    cJSON *inactive_subscriber_role = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "inactiveSubscriberRole");
    if (inactive_subscriber_role) { 
    if(!cJSON_IsString(inactive_subscriber_role) && !cJSON_IsNull(inactive_subscriber_role))
    {
    goto end; //String
    }
    }

    // subscriptions_options->enable_automatic_payments
    cJSON *enable_automatic_payments = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "enableAutomaticPayments");
    if (enable_automatic_payments) { 
    if(!cJSON_IsNumber(enable_automatic_payments))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->enable_manual_renewals
    cJSON *enable_manual_renewals = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "enableManualRenewals");
    if (enable_manual_renewals) { 
    if(!cJSON_IsNumber(enable_manual_renewals))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->display_auto_renewal_toggle
    cJSON *display_auto_renewal_toggle = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "displayAutoRenewalToggle");
    if (display_auto_renewal_toggle) { 
    if(!cJSON_IsNumber(display_auto_renewal_toggle))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->accept_early_renewals
    cJSON *accept_early_renewals = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "acceptEarlyRenewals");
    if (accept_early_renewals) { 
    if(!cJSON_IsNumber(accept_early_renewals))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->customer_suspensions
    cJSON *customer_suspensions = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "customerSuspensions");
    if (customer_suspensions) { 
    if(!cJSON_IsNumber(customer_suspensions))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->enable_subscription_switching_between_groups
    cJSON *enable_subscription_switching_between_groups = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "enableSubscriptionSwitchingBetweenGroups");
    if (enable_subscription_switching_between_groups) { 
    if(!cJSON_IsNumber(enable_subscription_switching_between_groups))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->enable_subscription_switching_between_variations
    cJSON *enable_subscription_switching_between_variations = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "enableSubscriptionSwitchingBetweenVariations");
    if (enable_subscription_switching_between_variations) { 
    if(!cJSON_IsNumber(enable_subscription_switching_between_variations))
    {
    goto end; //Numeric
    }
    }

    // subscriptions_options->prorate_first_renewal
    cJSON *prorate_first_renewal = cJSON_GetObjectItemCaseSensitive(subscriptions_optionsJSON, "prorateFirstRenewal");
    contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_e prorate_first_renewalVariable;
    if (prorate_first_renewal) { 
    if(!cJSON_IsString(prorate_first_renewal))
    {
    goto end; //Enum
    }
    prorate_first_renewalVariable = subscriptions_options_prorate_first_renewal_FromString(prorate_first_renewal->valuestring);
    }


    subscriptions_options_local_var = subscriptions_options_create (
        drip_downloadable_content ? drip_downloadable_content->valueint : 0,
        retry_failed_payments ? retry_failed_payments->valueint : 0,
        allow0_initial_checkout ? allow0_initial_checkout->valueint : 0,
        allow_mixed_checkout ? allow_mixed_checkout->valueint : 0,
        synchronise_renewals ? synchronise_renewals->valueint : 0,
        add_to_cart_button_text && !cJSON_IsNull(add_to_cart_button_text) ? strdup(add_to_cart_button_text->valuestring) : NULL,
        place_order_button_text && !cJSON_IsNull(place_order_button_text) ? strdup(place_order_button_text->valuestring) : NULL,
        new_subscriber_role && !cJSON_IsNull(new_subscriber_role) ? strdup(new_subscriber_role->valuestring) : NULL,
        inactive_subscriber_role && !cJSON_IsNull(inactive_subscriber_role) ? strdup(inactive_subscriber_role->valuestring) : NULL,
        enable_automatic_payments ? enable_automatic_payments->valuedouble : 0,
        enable_manual_renewals ? enable_manual_renewals->valuedouble : 0,
        display_auto_renewal_toggle ? display_auto_renewal_toggle->valuedouble : 0,
        accept_early_renewals ? accept_early_renewals->valuedouble : 0,
        customer_suspensions ? customer_suspensions->valuedouble : 0,
        enable_subscription_switching_between_groups ? enable_subscription_switching_between_groups->valuedouble : 0,
        enable_subscription_switching_between_variations ? enable_subscription_switching_between_variations->valuedouble : 0,
        prorate_first_renewal ? prorate_first_renewalVariable : contentservice_subscriptions_options_PRORATEFIRSTRENEWAL_NULL
        );

    return subscriptions_options_local_var;
end:
    return NULL;

}
