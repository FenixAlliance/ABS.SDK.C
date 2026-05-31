#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "safe_wait_handle.h"



safe_wait_handle_t *safe_wait_handle_create(
    int is_closed,
    int is_invalid
    ) {
    safe_wait_handle_t *safe_wait_handle_local_var = malloc(sizeof(safe_wait_handle_t));
    if (!safe_wait_handle_local_var) {
        return NULL;
    }
    safe_wait_handle_local_var->is_closed = is_closed;
    safe_wait_handle_local_var->is_invalid = is_invalid;

    return safe_wait_handle_local_var;
}


void safe_wait_handle_free(safe_wait_handle_t *safe_wait_handle) {
    if(NULL == safe_wait_handle){
        return ;
    }
    listEntry_t *listEntry;
    free(safe_wait_handle);
}

cJSON *safe_wait_handle_convertToJSON(safe_wait_handle_t *safe_wait_handle) {
    cJSON *item = cJSON_CreateObject();

    // safe_wait_handle->is_closed
    if(safe_wait_handle->is_closed) {
    if(cJSON_AddBoolToObject(item, "isClosed", safe_wait_handle->is_closed) == NULL) {
    goto fail; //Bool
    }
    }


    // safe_wait_handle->is_invalid
    if(safe_wait_handle->is_invalid) {
    if(cJSON_AddBoolToObject(item, "isInvalid", safe_wait_handle->is_invalid) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

safe_wait_handle_t *safe_wait_handle_parseFromJSON(cJSON *safe_wait_handleJSON){

    safe_wait_handle_t *safe_wait_handle_local_var = NULL;

    // safe_wait_handle->is_closed
    cJSON *is_closed = cJSON_GetObjectItemCaseSensitive(safe_wait_handleJSON, "isClosed");
    if (is_closed) { 
    if(!cJSON_IsBool(is_closed))
    {
    goto end; //Bool
    }
    }

    // safe_wait_handle->is_invalid
    cJSON *is_invalid = cJSON_GetObjectItemCaseSensitive(safe_wait_handleJSON, "isInvalid");
    if (is_invalid) { 
    if(!cJSON_IsBool(is_invalid))
    {
    goto end; //Bool
    }
    }


    safe_wait_handle_local_var = safe_wait_handle_create (
        is_closed ? is_closed->valueint : 0,
        is_invalid ? is_invalid->valueint : 0
        );

    return safe_wait_handle_local_var;
end:
    return NULL;

}
