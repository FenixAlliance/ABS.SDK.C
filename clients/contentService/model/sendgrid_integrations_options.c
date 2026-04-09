#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sendgrid_integrations_options.h"



sendgrid_integrations_options_t *sendgrid_integrations_options_create(
    int enable,
    char *api_key
    ) {
    sendgrid_integrations_options_t *sendgrid_integrations_options_local_var = malloc(sizeof(sendgrid_integrations_options_t));
    if (!sendgrid_integrations_options_local_var) {
        return NULL;
    }
    sendgrid_integrations_options_local_var->enable = enable;
    sendgrid_integrations_options_local_var->api_key = api_key;

    return sendgrid_integrations_options_local_var;
}


void sendgrid_integrations_options_free(sendgrid_integrations_options_t *sendgrid_integrations_options) {
    if(NULL == sendgrid_integrations_options){
        return ;
    }
    listEntry_t *listEntry;
    if (sendgrid_integrations_options->api_key) {
        free(sendgrid_integrations_options->api_key);
        sendgrid_integrations_options->api_key = NULL;
    }
    free(sendgrid_integrations_options);
}

cJSON *sendgrid_integrations_options_convertToJSON(sendgrid_integrations_options_t *sendgrid_integrations_options) {
    cJSON *item = cJSON_CreateObject();

    // sendgrid_integrations_options->enable
    if(sendgrid_integrations_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", sendgrid_integrations_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // sendgrid_integrations_options->api_key
    if(sendgrid_integrations_options->api_key) {
    if(cJSON_AddStringToObject(item, "apiKey", sendgrid_integrations_options->api_key) == NULL) {
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

sendgrid_integrations_options_t *sendgrid_integrations_options_parseFromJSON(cJSON *sendgrid_integrations_optionsJSON){

    sendgrid_integrations_options_t *sendgrid_integrations_options_local_var = NULL;

    // sendgrid_integrations_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(sendgrid_integrations_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // sendgrid_integrations_options->api_key
    cJSON *api_key = cJSON_GetObjectItemCaseSensitive(sendgrid_integrations_optionsJSON, "apiKey");
    if (api_key) { 
    if(!cJSON_IsString(api_key) && !cJSON_IsNull(api_key))
    {
    goto end; //String
    }
    }


    sendgrid_integrations_options_local_var = sendgrid_integrations_options_create (
        enable ? enable->valueint : 0,
        api_key && !cJSON_IsNull(api_key) ? strdup(api_key->valuestring) : NULL
        );

    return sendgrid_integrations_options_local_var;
end:
    return NULL;

}
