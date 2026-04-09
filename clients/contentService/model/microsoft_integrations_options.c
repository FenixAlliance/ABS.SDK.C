#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "microsoft_integrations_options.h"



microsoft_integrations_options_t *microsoft_integrations_options_create(
    int enable,
    microsoft_azure_integration_options_t *azure
    ) {
    microsoft_integrations_options_t *microsoft_integrations_options_local_var = malloc(sizeof(microsoft_integrations_options_t));
    if (!microsoft_integrations_options_local_var) {
        return NULL;
    }
    microsoft_integrations_options_local_var->enable = enable;
    microsoft_integrations_options_local_var->azure = azure;

    return microsoft_integrations_options_local_var;
}


void microsoft_integrations_options_free(microsoft_integrations_options_t *microsoft_integrations_options) {
    if(NULL == microsoft_integrations_options){
        return ;
    }
    listEntry_t *listEntry;
    if (microsoft_integrations_options->azure) {
        microsoft_azure_integration_options_free(microsoft_integrations_options->azure);
        microsoft_integrations_options->azure = NULL;
    }
    free(microsoft_integrations_options);
}

cJSON *microsoft_integrations_options_convertToJSON(microsoft_integrations_options_t *microsoft_integrations_options) {
    cJSON *item = cJSON_CreateObject();

    // microsoft_integrations_options->enable
    if(microsoft_integrations_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", microsoft_integrations_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // microsoft_integrations_options->azure
    if(microsoft_integrations_options->azure) {
    cJSON *azure_local_JSON = microsoft_azure_integration_options_convertToJSON(microsoft_integrations_options->azure);
    if(azure_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azure", azure_local_JSON);
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

microsoft_integrations_options_t *microsoft_integrations_options_parseFromJSON(cJSON *microsoft_integrations_optionsJSON){

    microsoft_integrations_options_t *microsoft_integrations_options_local_var = NULL;

    // define the local variable for microsoft_integrations_options->azure
    microsoft_azure_integration_options_t *azure_local_nonprim = NULL;

    // microsoft_integrations_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(microsoft_integrations_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // microsoft_integrations_options->azure
    cJSON *azure = cJSON_GetObjectItemCaseSensitive(microsoft_integrations_optionsJSON, "azure");
    if (azure) { 
    azure_local_nonprim = microsoft_azure_integration_options_parseFromJSON(azure); //nonprimitive
    }


    microsoft_integrations_options_local_var = microsoft_integrations_options_create (
        enable ? enable->valueint : 0,
        azure ? azure_local_nonprim : NULL
        );

    return microsoft_integrations_options_local_var;
end:
    if (azure_local_nonprim) {
        microsoft_azure_integration_options_free(azure_local_nonprim);
        azure_local_nonprim = NULL;
    }
    return NULL;

}
