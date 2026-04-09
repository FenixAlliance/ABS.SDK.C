#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "azure_storage_integration_options.h"



azure_storage_integration_options_t *azure_storage_integration_options_create(
    int enable,
    char *connection_string
    ) {
    azure_storage_integration_options_t *azure_storage_integration_options_local_var = malloc(sizeof(azure_storage_integration_options_t));
    if (!azure_storage_integration_options_local_var) {
        return NULL;
    }
    azure_storage_integration_options_local_var->enable = enable;
    azure_storage_integration_options_local_var->connection_string = connection_string;

    return azure_storage_integration_options_local_var;
}


void azure_storage_integration_options_free(azure_storage_integration_options_t *azure_storage_integration_options) {
    if(NULL == azure_storage_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (azure_storage_integration_options->connection_string) {
        free(azure_storage_integration_options->connection_string);
        azure_storage_integration_options->connection_string = NULL;
    }
    free(azure_storage_integration_options);
}

cJSON *azure_storage_integration_options_convertToJSON(azure_storage_integration_options_t *azure_storage_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // azure_storage_integration_options->enable
    if(azure_storage_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", azure_storage_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // azure_storage_integration_options->connection_string
    if(azure_storage_integration_options->connection_string) {
    if(cJSON_AddStringToObject(item, "connectionString", azure_storage_integration_options->connection_string) == NULL) {
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

azure_storage_integration_options_t *azure_storage_integration_options_parseFromJSON(cJSON *azure_storage_integration_optionsJSON){

    azure_storage_integration_options_t *azure_storage_integration_options_local_var = NULL;

    // azure_storage_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(azure_storage_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // azure_storage_integration_options->connection_string
    cJSON *connection_string = cJSON_GetObjectItemCaseSensitive(azure_storage_integration_optionsJSON, "connectionString");
    if (connection_string) { 
    if(!cJSON_IsString(connection_string) && !cJSON_IsNull(connection_string))
    {
    goto end; //String
    }
    }


    azure_storage_integration_options_local_var = azure_storage_integration_options_create (
        enable ? enable->valueint : 0,
        connection_string && !cJSON_IsNull(connection_string) ? strdup(connection_string->valuestring) : NULL
        );

    return azure_storage_integration_options_local_var;
end:
    return NULL;

}
