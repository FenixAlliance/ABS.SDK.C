#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "integration_options.h"



integration_options_t *integration_options_create(
    char *max_mind_license_key,
    char *max_mind_db_path
    ) {
    integration_options_t *integration_options_local_var = malloc(sizeof(integration_options_t));
    if (!integration_options_local_var) {
        return NULL;
    }
    integration_options_local_var->max_mind_license_key = max_mind_license_key;
    integration_options_local_var->max_mind_db_path = max_mind_db_path;

    return integration_options_local_var;
}


void integration_options_free(integration_options_t *integration_options) {
    if(NULL == integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (integration_options->max_mind_license_key) {
        free(integration_options->max_mind_license_key);
        integration_options->max_mind_license_key = NULL;
    }
    if (integration_options->max_mind_db_path) {
        free(integration_options->max_mind_db_path);
        integration_options->max_mind_db_path = NULL;
    }
    free(integration_options);
}

cJSON *integration_options_convertToJSON(integration_options_t *integration_options) {
    cJSON *item = cJSON_CreateObject();

    // integration_options->max_mind_license_key
    if(integration_options->max_mind_license_key) {
    if(cJSON_AddStringToObject(item, "maxMindLicenseKey", integration_options->max_mind_license_key) == NULL) {
    goto fail; //String
    }
    }


    // integration_options->max_mind_db_path
    if(integration_options->max_mind_db_path) {
    if(cJSON_AddStringToObject(item, "maxMindDbPath", integration_options->max_mind_db_path) == NULL) {
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

integration_options_t *integration_options_parseFromJSON(cJSON *integration_optionsJSON){

    integration_options_t *integration_options_local_var = NULL;

    // integration_options->max_mind_license_key
    cJSON *max_mind_license_key = cJSON_GetObjectItemCaseSensitive(integration_optionsJSON, "maxMindLicenseKey");
    if (max_mind_license_key) { 
    if(!cJSON_IsString(max_mind_license_key) && !cJSON_IsNull(max_mind_license_key))
    {
    goto end; //String
    }
    }

    // integration_options->max_mind_db_path
    cJSON *max_mind_db_path = cJSON_GetObjectItemCaseSensitive(integration_optionsJSON, "maxMindDbPath");
    if (max_mind_db_path) { 
    if(!cJSON_IsString(max_mind_db_path) && !cJSON_IsNull(max_mind_db_path))
    {
    goto end; //String
    }
    }


    integration_options_local_var = integration_options_create (
        max_mind_license_key && !cJSON_IsNull(max_mind_license_key) ? strdup(max_mind_license_key->valuestring) : NULL,
        max_mind_db_path && !cJSON_IsNull(max_mind_db_path) ? strdup(max_mind_db_path->valuestring) : NULL
        );

    return integration_options_local_var;
end:
    return NULL;

}
