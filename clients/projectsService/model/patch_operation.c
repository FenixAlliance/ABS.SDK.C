#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "patch_operation.h"



patch_operation_t *patch_operation_create(
    char *op,
    char *path,
    char *from,
    any_type_t *value
    ) {
    patch_operation_t *patch_operation_local_var = malloc(sizeof(patch_operation_t));
    if (!patch_operation_local_var) {
        return NULL;
    }
    patch_operation_local_var->op = op;
    patch_operation_local_var->path = path;
    patch_operation_local_var->from = from;
    patch_operation_local_var->value = value;

    return patch_operation_local_var;
}


void patch_operation_free(patch_operation_t *patch_operation) {
    if(NULL == patch_operation){
        return ;
    }
    listEntry_t *listEntry;
    if (patch_operation->op) {
        free(patch_operation->op);
        patch_operation->op = NULL;
    }
    if (patch_operation->path) {
        free(patch_operation->path);
        patch_operation->path = NULL;
    }
    if (patch_operation->from) {
        free(patch_operation->from);
        patch_operation->from = NULL;
    }
    if (patch_operation->value) {
        _free(patch_operation->value);
        patch_operation->value = NULL;
    }
    free(patch_operation);
}

cJSON *patch_operation_convertToJSON(patch_operation_t *patch_operation) {
    cJSON *item = cJSON_CreateObject();

    // patch_operation->op
    if(patch_operation->op) {
    if(cJSON_AddStringToObject(item, "op", patch_operation->op) == NULL) {
    goto fail; //String
    }
    }


    // patch_operation->path
    if(patch_operation->path) {
    if(cJSON_AddStringToObject(item, "path", patch_operation->path) == NULL) {
    goto fail; //String
    }
    }


    // patch_operation->from
    if(patch_operation->from) {
    if(cJSON_AddStringToObject(item, "from", patch_operation->from) == NULL) {
    goto fail; //String
    }
    }


    // patch_operation->value
    if(patch_operation->value) {
    cJSON *value_local_JSON = _convertToJSON(patch_operation->value);
    if(value_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "value", value_local_JSON);
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

patch_operation_t *patch_operation_parseFromJSON(cJSON *patch_operationJSON){

    patch_operation_t *patch_operation_local_var = NULL;

    // define the local variable for patch_operation->value
    _t *value_local_nonprim = NULL;

    // patch_operation->op
    cJSON *op = cJSON_GetObjectItemCaseSensitive(patch_operationJSON, "op");
    if (op) { 
    if(!cJSON_IsString(op) && !cJSON_IsNull(op))
    {
    goto end; //String
    }
    }

    // patch_operation->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(patch_operationJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // patch_operation->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(patch_operationJSON, "from");
    if (from) { 
    if(!cJSON_IsString(from) && !cJSON_IsNull(from))
    {
    goto end; //String
    }
    }

    // patch_operation->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(patch_operationJSON, "value");
    if (value) { 
    value_local_nonprim = _parseFromJSON(value); //custom
    }


    patch_operation_local_var = patch_operation_create (
        op && !cJSON_IsNull(op) ? strdup(op->valuestring) : NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        from && !cJSON_IsNull(from) ? strdup(from->valuestring) : NULL,
        value ? value_local_nonprim : NULL
        );

    return patch_operation_local_var;
end:
    if (value_local_nonprim) {
        _free(value_local_nonprim);
        value_local_nonprim = NULL;
    }
    return NULL;

}
