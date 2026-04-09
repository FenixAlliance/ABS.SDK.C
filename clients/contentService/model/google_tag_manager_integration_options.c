#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "google_tag_manager_integration_options.h"



google_tag_manager_integration_options_t *google_tag_manager_integration_options_create(
    int enable,
    char *id
    ) {
    google_tag_manager_integration_options_t *google_tag_manager_integration_options_local_var = malloc(sizeof(google_tag_manager_integration_options_t));
    if (!google_tag_manager_integration_options_local_var) {
        return NULL;
    }
    google_tag_manager_integration_options_local_var->enable = enable;
    google_tag_manager_integration_options_local_var->id = id;

    return google_tag_manager_integration_options_local_var;
}


void google_tag_manager_integration_options_free(google_tag_manager_integration_options_t *google_tag_manager_integration_options) {
    if(NULL == google_tag_manager_integration_options){
        return ;
    }
    listEntry_t *listEntry;
    if (google_tag_manager_integration_options->id) {
        free(google_tag_manager_integration_options->id);
        google_tag_manager_integration_options->id = NULL;
    }
    free(google_tag_manager_integration_options);
}

cJSON *google_tag_manager_integration_options_convertToJSON(google_tag_manager_integration_options_t *google_tag_manager_integration_options) {
    cJSON *item = cJSON_CreateObject();

    // google_tag_manager_integration_options->enable
    if(google_tag_manager_integration_options->enable) {
    if(cJSON_AddBoolToObject(item, "enable", google_tag_manager_integration_options->enable) == NULL) {
    goto fail; //Bool
    }
    }


    // google_tag_manager_integration_options->id
    if(google_tag_manager_integration_options->id) {
    if(cJSON_AddStringToObject(item, "id", google_tag_manager_integration_options->id) == NULL) {
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

google_tag_manager_integration_options_t *google_tag_manager_integration_options_parseFromJSON(cJSON *google_tag_manager_integration_optionsJSON){

    google_tag_manager_integration_options_t *google_tag_manager_integration_options_local_var = NULL;

    // google_tag_manager_integration_options->enable
    cJSON *enable = cJSON_GetObjectItemCaseSensitive(google_tag_manager_integration_optionsJSON, "enable");
    if (enable) { 
    if(!cJSON_IsBool(enable))
    {
    goto end; //Bool
    }
    }

    // google_tag_manager_integration_options->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(google_tag_manager_integration_optionsJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }


    google_tag_manager_integration_options_local_var = google_tag_manager_integration_options_create (
        enable ? enable->valueint : 0,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL
        );

    return google_tag_manager_integration_options_local_var;
end:
    return NULL;

}
