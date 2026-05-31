#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "runtime_field_handle.h"



runtime_field_handle_t *runtime_field_handle_create(
    object_t *value
    ) {
    runtime_field_handle_t *runtime_field_handle_local_var = malloc(sizeof(runtime_field_handle_t));
    if (!runtime_field_handle_local_var) {
        return NULL;
    }
    runtime_field_handle_local_var->value = value;

    return runtime_field_handle_local_var;
}


void runtime_field_handle_free(runtime_field_handle_t *runtime_field_handle) {
    if(NULL == runtime_field_handle){
        return ;
    }
    listEntry_t *listEntry;
    if (runtime_field_handle->value) {
        object_free(runtime_field_handle->value);
        runtime_field_handle->value = NULL;
    }
    free(runtime_field_handle);
}

cJSON *runtime_field_handle_convertToJSON(runtime_field_handle_t *runtime_field_handle) {
    cJSON *item = cJSON_CreateObject();

    // runtime_field_handle->value
    if(runtime_field_handle->value) {
    cJSON *value_object = object_convertToJSON(runtime_field_handle->value);
    if(value_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "value", value_object);
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

runtime_field_handle_t *runtime_field_handle_parseFromJSON(cJSON *runtime_field_handleJSON){

    runtime_field_handle_t *runtime_field_handle_local_var = NULL;

    // runtime_field_handle->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(runtime_field_handleJSON, "value");
    object_t *value_local_object = NULL;
    if (value) { 
    value_local_object = object_parseFromJSON(value); //object
    }


    runtime_field_handle_local_var = runtime_field_handle_create (
        value ? value_local_object : NULL
        );

    return runtime_field_handle_local_var;
end:
    return NULL;

}
