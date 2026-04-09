#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_integration_options.h"



google_integration_options_t *google_integration_options_create(
    int enable,
    google_maps_integration_options_t *google_maps,
    google_merchant_center_integration_options_t *google_merchant_center,
    google_tag_manager_integration_options_t *google_tag_manager,
    google_recaptcha_integration_options_t *google_recaptcha,
    google_analytics_t *google_analytics,
    google_my_business_integration_options_t *google_my_business
    ) {
    google_integration_options_t *google_integration_options_local_var = malloc(sizeof(google_integration_options_t));
    if (!google_integration_options_local_var) {
        return NULL;
    }
    google_integration_options_local_var->enable = enable;
    google_integration_options_local_var->google_maps = google_maps;
    google_integration_options_local_var->google_merchant_center = google_merchant_center;
    google_integration_options_local_var->google_tag_manager = google_tag_manager;
    google_integration_options_local_var->google_recaptcha = google_recaptcha;
    google_integration_options_local_var->google_analytics = google_analytics;
    google_integration_options_local_var->google_my_business = google_my_business;

    return google_integration_options_local_var;
}


void google_integration_options_free(google_integration_options_t *google_integration_options) {
    if(NULL == google_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_integration_options->google_maps) {
        google_maps_integration_options_free(google_integration_options->google_maps);
        google_integration_options->google_maps = NULL;
    }
    if (google_integration_options->google_merchant_center) {
        google_merchant_center_integration_options_free(google_integration_options->google_merchant_center);
        google_integration_options->google_merchant_center = NULL;
    }
    if (google_integration_options->google_tag_manager) {
        google_tag_manager_integration_options_free(google_integration_options->google_tag_manager);
        google_integration_options->google_tag_manager = NULL;
    }
    if (google_integration_options->google_recaptcha) {
        google_recaptcha_integration_options_free(google_integration_options->google_recaptcha);
        google_integration_options->google_recaptcha = NULL;
    }
    if (google_integration_options->google_analytics) {
        google_analytics_free(google_integration_options->google_analytics);
        google_integration_options->google_analytics = NULL;
    }
    if (google_integration_options->google_my_business) {
        google_my_business_integration_options_free(google_integration_options->google_my_business);
        google_integration_options->google_my_business = NULL;
    }
    free(google_integration_options);
}

cJSON *google_integration_options_convertToJSON(google_integration_options_t *google_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_integration_options->enable
    if(google_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_integration_options->google_maps
    if(google_integration_options->google_maps) {
    cJSON *google_maps_local_JSON = google_maps_integration_options_convertToJSON(google_integration_options->google_maps);
    if(google_maps_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleMaps", google_maps_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // google_integration_options->google_merchant_center
    if(google_integration_options->google_merchant_center) {
    cJSON *google_merchant_center_local_JSON = google_merchant_center_integration_options_convertToJSON(google_integration_options->google_merchant_center);
    if(google_merchant_center_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleMerchantCenter", google_merchant_center_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // google_integration_options->google_tag_manager
    if(google_integration_options->google_tag_manager) {
    cJSON *google_tag_manager_local_JSON = google_tag_manager_integration_options_convertToJSON(google_integration_options->google_tag_manager);
    if(google_tag_manager_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleTagManager", google_tag_manager_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // google_integration_options->google_recaptcha
    if(google_integration_options->google_recaptcha) {
    cJSON *google_recaptcha_local_JSON = google_recaptcha_integration_options_convertToJSON(google_integration_options->google_recaptcha);
    if(google_recaptcha_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleRecaptcha", google_recaptcha_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // google_integration_options->google_analytics
    if(google_integration_options->google_analytics) {
    cJSON *google_analytics_local_JSON = google_analytics_convertToJSON(google_integration_options->google_analytics);
    if(google_analytics_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleAnalytics", google_analytics_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // google_integration_options->google_my_business
    if(google_integration_options->google_my_business) {
    cJSON *google_my_business_local_JSON = google_my_business_integration_options_convertToJSON(google_integration_options->google_my_business);
    if(google_my_business_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "googleMyBusiness", google_my_business_local_JSON);
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

google_integration_options_t *google_integration_options_parseFromJSON(cJSON *google_integration_optionsJSON){

    google_integration_options_t *google_integration_options_local_var = NULL;

    // define the local variable for google_integration_options->google_maps
    google_maps_integration_options_t *google_maps_local_nonprim = NULL;

    // define the local variable for google_integration_options->google_merchant_center
    google_merchant_center_integration_options_t *google_merchant_center_local_nonprim = NULL;

    // define the local variable for google_integration_options->google_tag_manager
    google_tag_manager_integration_options_t *google_tag_manager_local_nonprim = NULL;

    // define the local variable for google_integration_options->google_recaptcha
    google_recaptcha_integration_options_t *google_recaptcha_local_nonprim = NULL;

    // define the local variable for google_integration_options->google_analytics
    google_analytics_t *google_analytics_local_nonprim = NULL;

    // define the local variable for google_integration_options->google_my_business
    google_my_business_integration_options_t *google_my_business_local_nonprim = NULL;

    // google_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_integration_options->google_maps
    cJSON *google_maps = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleMaps");
    if (google_maps) { 
    google_maps_local_nonprim = google_maps_integration_options_parseFromJSON(google_maps); //nonprimitive
    }

    // google_integration_options->google_merchant_center
    cJSON *google_merchant_center = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleMerchantCenter");
    if (google_merchant_center) { 
    google_merchant_center_local_nonprim = google_merchant_center_integration_options_parseFromJSON(google_merchant_center); //nonprimitive
    }

    // google_integration_options->google_tag_manager
    cJSON *google_tag_manager = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleTagManager");
    if (google_tag_manager) { 
    google_tag_manager_local_nonprim = google_tag_manager_integration_options_parseFromJSON(google_tag_manager); //nonprimitive
    }

    // google_integration_options->google_recaptcha
    cJSON *google_recaptcha = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleRecaptcha");
    if (google_recaptcha) { 
    google_recaptcha_local_nonprim = google_recaptcha_integration_options_parseFromJSON(google_recaptcha); //nonprimitive
    }

    // google_integration_options->google_analytics
    cJSON *google_analytics = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleAnalytics");
    if (google_analytics) { 
    google_analytics_local_nonprim = google_analytics_parseFromJSON(google_analytics); //nonprimitive
    }

    // google_integration_options->google_my_business
    cJSON *google_my_business = cJSON_GetObjectItemCaseSensitive(google_integration_optionsJSON, "googleMyBusiness");
    if (google_my_business) { 
    google_my_business_local_nonprim = google_my_business_integration_options_parseFromJSON(google_my_business); //nonprimitive
    }


    google_integration_options_local_var = google_integration_options_create (
        enable ? enable->valueint : 0,
        google_maps ? google_maps_local_nonprim : NULL,
        google_merchant_center ? google_merchant_center_local_nonprim : NULL,
        google_tag_manager ? google_tag_manager_local_nonprim : NULL,
        google_recaptcha ? google_recaptcha_local_nonprim : NULL,
        google_analytics ? google_analytics_local_nonprim : NULL,
        google_my_business ? google_my_business_local_nonprim : NULL
        );

    return google_integration_options_local_var;
end:
    if (google_maps_local_nonprim) {
        google_maps_integration_options_free(google_maps_local_nonprim);
        google_maps_local_nonprim = NULL;
    }
    if (google_merchant_center_local_nonprim) {
        google_merchant_center_integration_options_free(google_merchant_center_local_nonprim);
        google_merchant_center_local_nonprim = NULL;
    }
    if (google_tag_manager_local_nonprim) {
        google_tag_manager_integration_options_free(google_tag_manager_local_nonprim);
        google_tag_manager_local_nonprim = NULL;
    }
    if (google_recaptcha_local_nonprim) {
        google_recaptcha_integration_options_free(google_recaptcha_local_nonprim);
        google_recaptcha_local_nonprim = NULL;
    }
    if (google_analytics_local_nonprim) {
        google_analytics_free(google_analytics_local_nonprim);
        google_analytics_local_nonprim = NULL;
    }
    if (google_my_business_local_nonprim) {
        google_my_business_integration_options_free(google_my_business_local_nonprim);
        google_my_business_local_nonprim = NULL;
    }
    return NULL;

}
