#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "wait_handle.h"



wait_handle_t *wait_handle_create(
    object_t *handle,
    safe_wait_handle_t *safe_wait_handle
    ) {
    wait_handle_t *wait_handle_local_var = malloc(sizeof(wait_handle_t));
    if (!wait_handle_local_var) {
        return NULL;
    }
    wait_handle_local_var->handle = handle;
    wait_handle_local_var->safe_wait_handle = safe_wait_handle;

    return wait_handle_local_var;
}


void wait_handle_free(wait_handle_t *wait_handle) {
    if(NULL == wait_handle){
        return ;
    }
    listEntry_t *listEntry;
    if (wait_handle->handle) {
        object_free(wait_handle->handle);
        wait_handle->handle = NULL;
    }
    if (wait_handle->safe_wait_handle) {
        safe_wait_handle_free(wait_handle->safe_wait_handle);
        wait_handle->safe_wait_handle = NULL;
    }
    free(wait_handle);
}

cJSON *wait_handle_convertToJSON(wait_handle_t *wait_handle) {
    cJSON *item = cJSON_CreateObject();

    // wait_handle->handle
    if(wait_handle->handle) {
    cJSON *handle_object = object_convertToJSON(wait_handle->handle);
    if(handle_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "handle", handle_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // wait_handle->safe_wait_handle
    if(wait_handle->safe_wait_handle) {
    cJSON *safe_wait_handle_local_JSON = safe_wait_handle_convertToJSON(wait_handle->safe_wait_handle);
    if(safe_wait_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "safeWaitHandle", safe_wait_handle_local_JSON);
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

wait_handle_t *wait_handle_parseFromJSON(cJSON *wait_handleJSON){

    wait_handle_t *wait_handle_local_var = NULL;

    // define the local variable for wait_handle->safe_wait_handle
    safe_wait_handle_t *safe_wait_handle_local_nonprim = NULL;

    // wait_handle->handle
    cJSON *handle = cJSON_GetObjectItemCaseSensitive(wait_handleJSON, "handle");
    object_t *handle_local_object = NULL;
    if (handle) { 
    handle_local_object = object_parseFromJSON(handle); //object
    }

    // wait_handle->safe_wait_handle
    cJSON *safe_wait_handle = cJSON_GetObjectItemCaseSensitive(wait_handleJSON, "safeWaitHandle");
    if (safe_wait_handle) { 
    safe_wait_handle_local_nonprim = safe_wait_handle_parseFromJSON(safe_wait_handle); //nonprimitive
    }


    wait_handle_local_var = wait_handle_create (
        handle ? handle_local_object : NULL,
        safe_wait_handle ? safe_wait_handle_local_nonprim : NULL
        );

    return wait_handle_local_var;
end:
    if (safe_wait_handle_local_nonprim) {
        safe_wait_handle_free(safe_wait_handle_local_nonprim);
        safe_wait_handle_local_nonprim = NULL;
    }
    return NULL;

}
