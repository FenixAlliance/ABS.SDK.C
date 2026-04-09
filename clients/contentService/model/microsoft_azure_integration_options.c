#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "microsoft_azure_integration_options.h"



microsoft_azure_integration_options_t *microsoft_azure_integration_options_create(
    int enable,
    azure_app_insight_integration_options_t *azure_app_insight,
    azure_storage_integration_options_t *azure_storage
    ) {
    microsoft_azure_integration_options_t *microsoft_azure_integration_options_local_var = malloc(sizeof(microsoft_azure_integration_options_t));
    if (!microsoft_azure_integration_options_local_var) {
        return NULL;
    }
    microsoft_azure_integration_options_local_var->enable = enable;
    microsoft_azure_integration_options_local_var->azure_app_insight = azure_app_insight;
    microsoft_azure_integration_options_local_var->azure_storage = azure_storage;

    return microsoft_azure_integration_options_local_var;
}


void microsoft_azure_integration_options_free(microsoft_azure_integration_options_t *microsoft_azure_integration_options) {
    if(NULL == microsoft_azure_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (microsoft_azure_integration_options->azure_app_insight) {
        azure_app_insight_integration_options_free(microsoft_azure_integration_options->azure_app_insight);
        microsoft_azure_integration_options->azure_app_insight = NULL;
    }
    if (microsoft_azure_integration_options->azure_storage) {
        azure_storage_integration_options_free(microsoft_azure_integration_options->azure_storage);
        microsoft_azure_integration_options->azure_storage = NULL;
    }
    free(microsoft_azure_integration_options);
}

cJSON *microsoft_azure_integration_options_convertToJSON(microsoft_azure_integration_options_t *microsoft_azure_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // microsoft_azure_integration_options->enable
    if(microsoft_azure_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", microsoft_azure_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // microsoft_azure_integration_options->azure_app_insight
    if(microsoft_azure_integration_options->azure_app_insight) {
    cJSON *azure_app_insight_local_JSON = azure_app_insight_integration_options_convertToJSON(microsoft_azure_integration_options->azure_app_insight);
    if(azure_app_insight_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureAppInsight", azure_app_insight_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // microsoft_azure_integration_options->azure_storage
    if(microsoft_azure_integration_options->azure_storage) {
    cJSON *azure_storage_local_JSON = azure_storage_integration_options_convertToJSON(microsoft_azure_integration_options->azure_storage);
    if(azure_storage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "azureStorage", azure_storage_local_JSON);
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

microsoft_azure_integration_options_t *microsoft_azure_integration_options_parseFromJSON(cJSON *microsoft_azure_integration_optionsJSON){

    microsoft_azure_integration_options_t *microsoft_azure_integration_options_local_var = NULL;

    // define the local variable for microsoft_azure_integration_options->azure_app_insight
    azure_app_insight_integration_options_t *azure_app_insight_local_nonprim = NULL;

    // define the local variable for microsoft_azure_integration_options->azure_storage
    azure_storage_integration_options_t *azure_storage_local_nonprim = NULL;

    // microsoft_azure_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(microsoft_azure_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // microsoft_azure_integration_options->azure_app_insight
    cJSON *azure_app_insight = cJSON_GetObjectItemCaseSensitive(microsoft_azure_integration_optionsJSON, "azureAppInsight");
    if (azure_app_insight) { 
    azure_app_insight_local_nonprim = azure_app_insight_integration_options_parseFromJSON(azure_app_insight); //nonprimitive
    }

    // microsoft_azure_integration_options->azure_storage
    cJSON *azure_storage = cJSON_GetObjectItemCaseSensitive(microsoft_azure_integration_optionsJSON, "azureStorage");
    if (azure_storage) { 
    azure_storage_local_nonprim = azure_storage_integration_options_parseFromJSON(azure_storage); //nonprimitive
    }


    microsoft_azure_integration_options_local_var = microsoft_azure_integration_options_create (
        enable ? enable->valueint : 0,
        azure_app_insight ? azure_app_insight_local_nonprim : NULL,
        azure_storage ? azure_storage_local_nonprim : NULL
        );

    return microsoft_azure_integration_options_local_var;
end:
    if (azure_app_insight_local_nonprim) {
        azure_app_insight_integration_options_free(azure_app_insight_local_nonprim);
        azure_app_insight_local_nonprim = NULL;
    }
    if (azure_storage_local_nonprim) {
        azure_storage_integration_options_free(azure_storage_local_nonprim);
        azure_storage_local_nonprim = NULL;
    }
    return NULL;

}
