#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "operation.h"


char* operation_operation_type_ToString(contentservice_operation_OPERATIONTYPE_e operation_type) {
    char* operation_typeArray[] =  { "NULL", "Add", "Remove", "Replace", "Move", "Copy", "Test", "Invalid" };
    return operation_typeArray[operation_type];
}

contentservice_operation_OPERATIONTYPE_e operation_operation_type_FromString(char* operation_type){
    int stringToReturn = 0;
    char *operation_typeArray[] =  { "NULL", "Add", "Remove", "Replace", "Move", "Copy", "Test", "Invalid" };
    size_t sizeofArray = sizeof(operation_typeArray) / sizeof(operation_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(operation_type, operation_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

operation_t *operation_create(
    contentservice_operation_OPERATIONTYPE_e operation_type,
    char *path,
    char *op,
    char *from,
    any_type_t *value
    ) {
    operation_t *operation_local_var = malloc(sizeof(operation_t));
    if (!operation_local_var) {
        return NULL;
    }
    operation_local_var->operation_type = operation_type;
    operation_local_var->path = path;
    operation_local_var->op = op;
    operation_local_var->from = from;
    operation_local_var->value = value;

    return operation_local_var;
}


void operation_free(operation_t *operation) {
    if(NULL == operation){
        return ;
    }
    listEntry_t *listEntry;
    if (operation->path) {
        free(operation->path);
        operation->path = NULL;
    }
    if (operation->op) {
        free(operation->op);
        operation->op = NULL;
    }
    if (operation->from) {
        free(operation->from);
        operation->from = NULL;
    }
    if (operation->value) {
        _free(operation->value);
        operation->value = NULL;
    }
    free(operation);
}

cJSON *operation_convertToJSON(operation_t *operation) {
    cJSON *item = cJSON_CreateObject();

    // operation->operation_type
    if(operation->operation_type != contentservice_operation_OPERATIONTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "operationType", operation_typeoperation_ToString(operation->operation_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // operation->path
    if(operation->path) {
    if(cJSON_AddStringToObject(item, "path", operation->path) == NULL) {
    goto fail; //String
    }
    }


    // operation->op
    if(operation->op) {
    if(cJSON_AddStringToObject(item, "op", operation->op) == NULL) {
    goto fail; //String
    }
    }


    // operation->from
    if(operation->from) {
    if(cJSON_AddStringToObject(item, "from", operation->from) == NULL) {
    goto fail; //String
    }
    }


    // operation->value
    if(operation->value) {
    cJSON *value_local_JSON = _convertToJSON(operation->value);
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

operation_t *operation_parseFromJSON(cJSON *operationJSON){

    operation_t *operation_local_var = NULL;

    // define the local variable for operation->value
    _t *value_local_nonprim = NULL;

    // operation->operation_type
    cJSON *operation_type = cJSON_GetObjectItemCaseSensitive(operationJSON, "operationType");
    contentservice_operation_OPERATIONTYPE_e operation_typeVariable;
    if (operation_type) { 
    if(!cJSON_IsString(operation_type))
    {
    goto end; //Enum
    }
    operation_typeVariable = operation_operation_type_FromString(operation_type->valuestring);
    }

    // operation->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(operationJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path) && !cJSON_IsNull(path))
    {
    goto end; //String
    }
    }

    // operation->op
    cJSON *op = cJSON_GetObjectItemCaseSensitive(operationJSON, "op");
    if (op) { 
    if(!cJSON_IsString(op) && !cJSON_IsNull(op))
    {
    goto end; //String
    }
    }

    // operation->from
    cJSON *from = cJSON_GetObjectItemCaseSensitive(operationJSON, "from");
    if (from) { 
    if(!cJSON_IsString(from) && !cJSON_IsNull(from))
    {
    goto end; //String
    }
    }

    // operation->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(operationJSON, "value");
    if (value) { 
    value_local_nonprim = _parseFromJSON(value); //custom
    }


    operation_local_var = operation_create (
        operation_type ? operation_typeVariable : contentservice_operation_OPERATIONTYPE_NULL,
        path && !cJSON_IsNull(path) ? strdup(path->valuestring) : NULL,
        op && !cJSON_IsNull(op) ? strdup(op->valuestring) : NULL,
        from && !cJSON_IsNull(from) ? strdup(from->valuestring) : NULL,
        value ? value_local_nonprim : NULL
        );

    return operation_local_var;
end:
    if (value_local_nonprim) {
        _free(value_local_nonprim);
        value_local_nonprim = NULL;
    }
    return NULL;

}
