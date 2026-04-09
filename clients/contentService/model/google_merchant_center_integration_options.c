#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_merchant_center_integration_options.h"



google_merchant_center_integration_options_t *google_merchant_center_integration_options_create(
    int enable,
    char *merchant_id,
    char *merchant_user_email,
    char *json_credentials
    ) {
    google_merchant_center_integration_options_t *google_merchant_center_integration_options_local_var = malloc(sizeof(google_merchant_center_integration_options_t));
    if (!google_merchant_center_integration_options_local_var) {
        return NULL;
    }
    google_merchant_center_integration_options_local_var->enable = enable;
    google_merchant_center_integration_options_local_var->merchant_id = merchant_id;
    google_merchant_center_integration_options_local_var->merchant_user_email = merchant_user_email;
    google_merchant_center_integration_options_local_var->json_credentials = json_credentials;

    return google_merchant_center_integration_options_local_var;
}


void google_merchant_center_integration_options_free(google_merchant_center_integration_options_t *google_merchant_center_integration_options) {
    if(NULL == google_merchant_center_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_merchant_center_integration_options->merchant_id) {
        free(google_merchant_center_integration_options->merchant_id);
        google_merchant_center_integration_options->merchant_id = NULL;
    }
    if (google_merchant_center_integration_options->merchant_user_email) {
        free(google_merchant_center_integration_options->merchant_user_email);
        google_merchant_center_integration_options->merchant_user_email = NULL;
    }
    if (google_merchant_center_integration_options->json_credentials) {
        free(google_merchant_center_integration_options->json_credentials);
        google_merchant_center_integration_options->json_credentials = NULL;
    }
    free(google_merchant_center_integration_options);
}

cJSON *google_merchant_center_integration_options_convertToJSON(google_merchant_center_integration_options_t *google_merchant_center_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_merchant_center_integration_options->enable
    if(google_merchant_center_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_merchant_center_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_merchant_center_integration_options->merchant_id
    if(google_merchant_center_integration_options->merchant_id) {
    if(cJSON_AddStringToObject(item, "merchantId", google_merchant_center_integration_options->merchant_id) == NULL) {
    goto fail; //String
    }
    }


    // google_merchant_center_integration_options->merchant_user_email
    if(google_merchant_center_integration_options->merchant_user_email) {
    if(cJSON_AddStringToObject(item, "merchantUserEmail", google_merchant_center_integration_options->merchant_user_email) == NULL) {
    goto fail; //String
    }
    }


    // google_merchant_center_integration_options->json_credentials
    if(google_merchant_center_integration_options->json_credentials) {
    if(cJSON_AddStringToObject(item, "jsonCredentials", google_merchant_center_integration_options->json_credentials) == NULL) {
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

google_merchant_center_integration_options_t *google_merchant_center_integration_options_parseFromJSON(cJSON *google_merchant_center_integration_optionsJSON){

    google_merchant_center_integration_options_t *google_merchant_center_integration_options_local_var = NULL;

    // google_merchant_center_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_merchant_center_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_merchant_center_integration_options->merchant_id
    cJSON *merchant_id = cJSON_GetObjectItemCaseSensitive(google_merchant_center_integration_optionsJSON, "merchantId");
    if (merchant_id) { 
    if(!cJSON_IsString(merchant_id) && !cJSON_IsNull(merchant_id))
    {
    goto end; //String
    }
    }

    // google_merchant_center_integration_options->merchant_user_email
    cJSON *merchant_user_email = cJSON_GetObjectItemCaseSensitive(google_merchant_center_integration_optionsJSON, "merchantUserEmail");
    if (merchant_user_email) { 
    if(!cJSON_IsString(merchant_user_email) && !cJSON_IsNull(merchant_user_email))
    {
    goto end; //String
    }
    }

    // google_merchant_center_integration_options->json_credentials
    cJSON *json_credentials = cJSON_GetObjectItemCaseSensitive(google_merchant_center_integration_optionsJSON, "jsonCredentials");
    if (json_credentials) { 
    if(!cJSON_IsString(json_credentials) && !cJSON_IsNull(json_credentials))
    {
    goto end; //String
    }
    }


    google_merchant_center_integration_options_local_var = google_merchant_center_integration_options_create (
        enable ? enable->valueint : 0,
        merchant_id && !cJSON_IsNull(merchant_id) ? strdup(merchant_id->valuestring) : NULL,
        merchant_user_email && !cJSON_IsNull(merchant_user_email) ? strdup(merchant_user_email->valuestring) : NULL,
        json_credentials && !cJSON_IsNull(json_credentials) ? strdup(json_credentials->valuestring) : NULL
        );

    return google_merchant_center_integration_options_local_var;
end:
    return NULL;

}
