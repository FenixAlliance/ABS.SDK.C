#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attribute_named_argument.h"



custom_attribute_named_argument_t *custom_attribute_named_argument_create(
    member_info_t *member_info,
    custom_attribute_typed_argument_t *typed_value,
    char *member_name,
    int is_field
    ) {
    custom_attribute_named_argument_t *custom_attribute_named_argument_local_var = malloc(sizeof(custom_attribute_named_argument_t));
    if (!custom_attribute_named_argument_local_var) {
        return NULL;
    }
    custom_attribute_named_argument_local_var->member_info = member_info;
    custom_attribute_named_argument_local_var->typed_value = typed_value;
    custom_attribute_named_argument_local_var->member_name = member_name;
    custom_attribute_named_argument_local_var->is_field = is_field;

    return custom_attribute_named_argument_local_var;
}


void custom_attribute_named_argument_free(custom_attribute_named_argument_t *custom_attribute_named_argument) {
    if(NULL == custom_attribute_named_argument){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attribute_named_argument->member_info) {
        member_info_free(custom_attribute_named_argument->member_info);
        custom_attribute_named_argument->member_info = NULL;
    }
    if (custom_attribute_named_argument->typed_value) {
        custom_attribute_typed_argument_free(custom_attribute_named_argument->typed_value);
        custom_attribute_named_argument->typed_value = NULL;
    }
    if (custom_attribute_named_argument->member_name) {
        free(custom_attribute_named_argument->member_name);
        custom_attribute_named_argument->member_name = NULL;
    }
    free(custom_attribute_named_argument);
}

cJSON *custom_attribute_named_argument_convertToJSON(custom_attribute_named_argument_t *custom_attribute_named_argument) {
    cJSON *item = cJSON_CreateObject();

    // custom_attribute_named_argument->member_info
    if(custom_attribute_named_argument->member_info) {
    cJSON *member_info_local_JSON = member_info_convertToJSON(custom_attribute_named_argument->member_info);
    if(member_info_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memberInfo", member_info_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attribute_named_argument->typed_value
    if(custom_attribute_named_argument->typed_value) {
    cJSON *typed_value_local_JSON = custom_attribute_typed_argument_convertToJSON(custom_attribute_named_argument->typed_value);
    if(typed_value_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typedValue", typed_value_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attribute_named_argument->member_name
    if(custom_attribute_named_argument->member_name) {
    if(cJSON_AddStringToObject(item, "memberName", custom_attribute_named_argument->member_name) == NULL) {
    goto fail; //String
    }
    }


    // custom_attribute_named_argument->is_field
    if(custom_attribute_named_argument->is_field) {
    if(cJSON_AddBoolToObject(item, "isField", custom_attribute_named_argument->is_field) == NULL) {
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

custom_attribute_named_argument_t *custom_attribute_named_argument_parseFromJSON(cJSON *custom_attribute_named_argumentJSON){

    custom_attribute_named_argument_t *custom_attribute_named_argument_local_var = NULL;

    // define the local variable for custom_attribute_named_argument->member_info
    member_info_t *member_info_local_nonprim = NULL;

    // define the local variable for custom_attribute_named_argument->typed_value
    custom_attribute_typed_argument_t *typed_value_local_nonprim = NULL;

    // custom_attribute_named_argument->member_info
    cJSON *member_info = cJSON_GetObjectItemCaseSensitive(custom_attribute_named_argumentJSON, "memberInfo");
    if (member_info) { 
    member_info_local_nonprim = member_info_parseFromJSON(member_info); //nonprimitive
    }

    // custom_attribute_named_argument->typed_value
    cJSON *typed_value = cJSON_GetObjectItemCaseSensitive(custom_attribute_named_argumentJSON, "typedValue");
    if (typed_value) { 
    typed_value_local_nonprim = custom_attribute_typed_argument_parseFromJSON(typed_value); //nonprimitive
    }

    // custom_attribute_named_argument->member_name
    cJSON *member_name = cJSON_GetObjectItemCaseSensitive(custom_attribute_named_argumentJSON, "memberName");
    if (member_name) { 
    if(!cJSON_IsString(member_name) && !cJSON_IsNull(member_name))
    {
    goto end; //String
    }
    }

    // custom_attribute_named_argument->is_field
    cJSON *is_field = cJSON_GetObjectItemCaseSensitive(custom_attribute_named_argumentJSON, "isField");
    if (is_field) { 
    if(!cJSON_IsBool(is_field))
    {
    goto end; //Bool
    }
    }


    custom_attribute_named_argument_local_var = custom_attribute_named_argument_create (
        member_info ? member_info_local_nonprim : NULL,
        typed_value ? typed_value_local_nonprim : NULL,
        member_name && !cJSON_IsNull(member_name) ? strdup(member_name->valuestring) : NULL,
        is_field ? is_field->valueint : 0
        );

    return custom_attribute_named_argument_local_var;
end:
    if (member_info_local_nonprim) {
        member_info_free(member_info_local_nonprim);
        member_info_local_nonprim = NULL;
    }
    if (typed_value_local_nonprim) {
        custom_attribute_typed_argument_free(typed_value_local_nonprim);
        typed_value_local_nonprim = NULL;
    }
    return NULL;

}
