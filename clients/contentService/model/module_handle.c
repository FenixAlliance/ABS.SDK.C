#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_handle.h"



module_handle_t *module_handle_create(
    int md_stream_version
    ) {
    module_handle_t *module_handle_local_var = malloc(sizeof(module_handle_t));
    if (!module_handle_local_var) {
        return NULL;
    }
    module_handle_local_var->md_stream_version = md_stream_version;

    return module_handle_local_var;
}


void module_handle_free(module_handle_t *module_handle) {
    if(NULL == module_handle){
        return ;
    }
    listEntry_t *listEntry;
    free(module_handle);
}

cJSON *module_handle_convertToJSON(module_handle_t *module_handle) {
    cJSON *item = cJSON_CreateObject();

    // module_handle->md_stream_version
    if(module_handle->md_stream_version) {
    if(cJSON_AddNumberToObject(item, "mdStreamVersion", module_handle->md_stream_version) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_handle_t *module_handle_parseFromJSON(cJSON *module_handleJSON){

    module_handle_t *module_handle_local_var = NULL;

    // module_handle->md_stream_version
    cJSON *md_stream_version = cJSON_GetObjectItemCaseSensitive(module_handleJSON, "mdStreamVersion");
    if (md_stream_version) { 
    if(!cJSON_IsNumber(md_stream_version))
    {
    goto end; //Numeric
    }
    }


    module_handle_local_var = module_handle_create (
        md_stream_version ? md_stream_version->valuedouble : 0
        );

    return module_handle_local_var;
end:
    return NULL;

}
