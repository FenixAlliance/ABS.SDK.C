#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "advanced_options.h"



advanced_options_t *advanced_options_create(
    char *home_page_id,
    char *cart_page_id,
    char *checkout_page_id,
    char *privacy_policy_page_id,
    char *customer_account_page_id,
    char *terms_and_conditions_page_id
    ) {
    advanced_options_t *advanced_options_local_var = malloc(sizeof(advanced_options_t));
    if (!advanced_options_local_var) {
        return NULL;
    }
    advanced_options_local_var->home_page_id = home_page_id;
    advanced_options_local_var->cart_page_id = cart_page_id;
    advanced_options_local_var->checkout_page_id = checkout_page_id;
    advanced_options_local_var->privacy_policy_page_id = privacy_policy_page_id;
    advanced_options_local_var->customer_account_page_id = customer_account_page_id;
    advanced_options_local_var->terms_and_conditions_page_id = terms_and_conditions_page_id;

    return advanced_options_local_var;
}


void advanced_options_free(advanced_options_t *advanced_options) {
    if(NULL == advanced_options){
        return ;
    }
    listEntry_t *listEntry;
    if (advanced_options->home_page_id) {
        free(advanced_options->home_page_id);
        advanced_options->home_page_id = NULL;
    }
    if (advanced_options->cart_page_id) {
        free(advanced_options->cart_page_id);
        advanced_options->cart_page_id = NULL;
    }
    if (advanced_options->checkout_page_id) {
        free(advanced_options->checkout_page_id);
        advanced_options->checkout_page_id = NULL;
    }
    if (advanced_options->privacy_policy_page_id) {
        free(advanced_options->privacy_policy_page_id);
        advanced_options->privacy_policy_page_id = NULL;
    }
    if (advanced_options->customer_account_page_id) {
        free(advanced_options->customer_account_page_id);
        advanced_options->customer_account_page_id = NULL;
    }
    if (advanced_options->terms_and_conditions_page_id) {
        free(advanced_options->terms_and_conditions_page_id);
        advanced_options->terms_and_conditions_page_id = NULL;
    }
    free(advanced_options);
}

cJSON *advanced_options_convertToJSON(advanced_options_t *advanced_options) {
    cJSON *item = cJSON_CreateObject();

    // advanced_options->home_page_id
    if(advanced_options->home_page_id) {
    if(cJSON_AddStringToObject(item, "homePageID", advanced_options->home_page_id) == NULL) {
    goto fail; //String
    }
    }


    // advanced_options->cart_page_id
    if(advanced_options->cart_page_id) {
    if(cJSON_AddStringToObject(item, "cartPageID", advanced_options->cart_page_id) == NULL) {
    goto fail; //String
    }
    }


    // advanced_options->checkout_page_id
    if(advanced_options->checkout_page_id) {
    if(cJSON_AddStringToObject(item, "checkoutPageID", advanced_options->checkout_page_id) == NULL) {
    goto fail; //String
    }
    }


    // advanced_options->privacy_policy_page_id
    if(advanced_options->privacy_policy_page_id) {
    if(cJSON_AddStringToObject(item, "privacyPolicyPageID", advanced_options->privacy_policy_page_id) == NULL) {
    goto fail; //String
    }
    }


    // advanced_options->customer_account_page_id
    if(advanced_options->customer_account_page_id) {
    if(cJSON_AddStringToObject(item, "customerAccountPageID", advanced_options->customer_account_page_id) == NULL) {
    goto fail; //String
    }
    }


    // advanced_options->terms_and_conditions_page_id
    if(advanced_options->terms_and_conditions_page_id) {
    if(cJSON_AddStringToObject(item, "termsAndConditionsPageID", advanced_options->terms_and_conditions_page_id) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

advanced_options_t *advanced_options_parseFromJSON(cJSON *advanced_optionsJSON){

    advanced_options_t *advanced_options_local_var = NULL;

    // advanced_options->home_page_id
    cJSON *home_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "homePageID");
    if (home_page_id) { 
    if(!cJSON_IsString(home_page_id) && !cJSON_IsNull(home_page_id))
    {
    goto end; //String
    }
    }

    // advanced_options->cart_page_id
    cJSON *cart_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "cartPageID");
    if (cart_page_id) { 
    if(!cJSON_IsString(cart_page_id) && !cJSON_IsNull(cart_page_id))
    {
    goto end; //String
    }
    }

    // advanced_options->checkout_page_id
    cJSON *checkout_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "checkoutPageID");
    if (checkout_page_id) { 
    if(!cJSON_IsString(checkout_page_id) && !cJSON_IsNull(checkout_page_id))
    {
    goto end; //String
    }
    }

    // advanced_options->privacy_policy_page_id
    cJSON *privacy_policy_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "privacyPolicyPageID");
    if (privacy_policy_page_id) { 
    if(!cJSON_IsString(privacy_policy_page_id) && !cJSON_IsNull(privacy_policy_page_id))
    {
    goto end; //String
    }
    }

    // advanced_options->customer_account_page_id
    cJSON *customer_account_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "customerAccountPageID");
    if (customer_account_page_id) { 
    if(!cJSON_IsString(customer_account_page_id) && !cJSON_IsNull(customer_account_page_id))
    {
    goto end; //String
    }
    }

    // advanced_options->terms_and_conditions_page_id
    cJSON *terms_and_conditions_page_id = cJSON_GetObjectItemCaseSensitive(advanced_optionsJSON, "termsAndConditionsPageID");
    if (terms_and_conditions_page_id) { 
    if(!cJSON_IsString(terms_and_conditions_page_id) && !cJSON_IsNull(terms_and_conditions_page_id))
    {
    goto end; //String
    }
    }


    advanced_options_local_var = advanced_options_create (
        home_page_id && !cJSON_IsNull(home_page_id) ? strdup(home_page_id->valuestring) : NULL,
        cart_page_id && !cJSON_IsNull(cart_page_id) ? strdup(cart_page_id->valuestring) : NULL,
        checkout_page_id && !cJSON_IsNull(checkout_page_id) ? strdup(checkout_page_id->valuestring) : NULL,
        privacy_policy_page_id && !cJSON_IsNull(privacy_policy_page_id) ? strdup(privacy_policy_page_id->valuestring) : NULL,
        customer_account_page_id && !cJSON_IsNull(customer_account_page_id) ? strdup(customer_account_page_id->valuestring) : NULL,
        terms_and_conditions_page_id && !cJSON_IsNull(terms_and_conditions_page_id) ? strdup(terms_and_conditions_page_id->valuestring) : NULL
        );

    return advanced_options_local_var;
end:
    return NULL;

}
