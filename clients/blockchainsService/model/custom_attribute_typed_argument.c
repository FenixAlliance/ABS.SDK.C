#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attribute_typed_argument.h"



custom_attribute_typed_argument_t *custom_attribute_typed_argument_create(
    type_t *argument_type,
    any_type_t *value
    ) {
    custom_attribute_typed_argument_t *custom_attribute_typed_argument_local_var = malloc(sizeof(custom_attribute_typed_argument_t));
    if (!custom_attribute_typed_argument_local_var) {
        return NULL;
    }
    custom_attribute_typed_argument_local_var->argument_type = argument_type;
    custom_attribute_typed_argument_local_var->value = value;

    return custom_attribute_typed_argument_local_var;
}


void custom_attribute_typed_argument_free(custom_attribute_typed_argument_t *custom_attribute_typed_argument) {
    if(NULL == custom_attribute_typed_argument){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attribute_typed_argument->argument_type) {
        type_free(custom_attribute_typed_argument->argument_type);
        custom_attribute_typed_argument->argument_type = NULL;
    }
    if (custom_attribute_typed_argument->value) {
        _free(custom_attribute_typed_argument->value);
        custom_attribute_typed_argument->value = NULL;
    }
    free(custom_attribute_typed_argument);
}

cJSON *custom_attribute_typed_argument_convertToJSON(custom_attribute_typed_argument_t *custom_attribute_typed_argument) {
    cJSON *item = cJSON_CreateObject();

    // custom_attribute_typed_argument->argument_type
    if(custom_attribute_typed_argument->argument_type) {
    cJSON *argument_type_local_JSON = type_convertToJSON(custom_attribute_typed_argument->argument_type);
    if(argument_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "argumentType", argument_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attribute_typed_argument->value
    if(custom_attribute_typed_argument->value) {
    cJSON *value_local_JSON = _convertToJSON(custom_attribute_typed_argument->value);
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

custom_attribute_typed_argument_t *custom_attribute_typed_argument_parseFromJSON(cJSON *custom_attribute_typed_argumentJSON){

    custom_attribute_typed_argument_t *custom_attribute_typed_argument_local_var = NULL;

    // define the local variable for custom_attribute_typed_argument->argument_type
    type_t *argument_type_local_nonprim = NULL;

    // define the local variable for custom_attribute_typed_argument->value
    _t *value_local_nonprim = NULL;

    // custom_attribute_typed_argument->argument_type
    cJSON *argument_type = cJSON_GetObjectItemCaseSensitive(custom_attribute_typed_argumentJSON, "argumentType");
    if (argument_type) { 
    argument_type_local_nonprim = type_parseFromJSON(argument_type); //nonprimitive
    }

    // custom_attribute_typed_argument->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(custom_attribute_typed_argumentJSON, "value");
    if (value) { 
    value_local_nonprim = _parseFromJSON(value); //custom
    }


    custom_attribute_typed_argument_local_var = custom_attribute_typed_argument_create (
        argument_type ? argument_type_local_nonprim : NULL,
        value ? value_local_nonprim : NULL
        );

    return custom_attribute_typed_argument_local_var;
end:
    if (argument_type_local_nonprim) {
        type_free(argument_type_local_nonprim);
        argument_type_local_nonprim = NULL;
    }
    if (value_local_nonprim) {
        _free(value_local_nonprim);
        value_local_nonprim = NULL;
    }
    return NULL;

}
