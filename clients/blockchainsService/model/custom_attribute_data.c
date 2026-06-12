#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attribute_data.h"



custom_attribute_data_t *custom_attribute_data_create(
    type_t *attribute_type,
    constructor_info_t *constructor,
    list_t *constructor_arguments,
    list_t *named_arguments
    ) {
    custom_attribute_data_t *custom_attribute_data_local_var = malloc(sizeof(custom_attribute_data_t));
    if (!custom_attribute_data_local_var) {
        return NULL;
    }
    custom_attribute_data_local_var->attribute_type = attribute_type;
    custom_attribute_data_local_var->constructor = constructor;
    custom_attribute_data_local_var->constructor_arguments = constructor_arguments;
    custom_attribute_data_local_var->named_arguments = named_arguments;

    return custom_attribute_data_local_var;
}


void custom_attribute_data_free(custom_attribute_data_t *custom_attribute_data) {
    if(NULL == custom_attribute_data){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attribute_data->attribute_type) {
        type_free(custom_attribute_data->attribute_type);
        custom_attribute_data->attribute_type = NULL;
    }
    if (custom_attribute_data->constructor) {
        constructor_info_free(custom_attribute_data->constructor);
        custom_attribute_data->constructor = NULL;
    }
    if (custom_attribute_data->constructor_arguments) {
        list_ForEach(listEntry, custom_attribute_data->constructor_arguments) {
            custom_attribute_typed_argument_free(listEntry->data);
        }
        list_freeList(custom_attribute_data->constructor_arguments);
        custom_attribute_data->constructor_arguments = NULL;
    }
    if (custom_attribute_data->named_arguments) {
        list_ForEach(listEntry, custom_attribute_data->named_arguments) {
            custom_attribute_named_argument_free(listEntry->data);
        }
        list_freeList(custom_attribute_data->named_arguments);
        custom_attribute_data->named_arguments = NULL;
    }
    free(custom_attribute_data);
}

cJSON *custom_attribute_data_convertToJSON(custom_attribute_data_t *custom_attribute_data) {
    cJSON *item = cJSON_CreateObject();

    // custom_attribute_data->attribute_type
    if(custom_attribute_data->attribute_type) {
    cJSON *attribute_type_local_JSON = type_convertToJSON(custom_attribute_data->attribute_type);
    if(attribute_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "attributeType", attribute_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attribute_data->constructor
    if(custom_attribute_data->constructor) {
    cJSON *constructor_local_JSON = constructor_info_convertToJSON(custom_attribute_data->constructor);
    if(constructor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "constructor", constructor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // custom_attribute_data->constructor_arguments
    if(custom_attribute_data->constructor_arguments) {
    cJSON *constructor_arguments = cJSON_AddArrayToObject(item, "constructorArguments");
    if(constructor_arguments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *constructor_argumentsListEntry;
    if (custom_attribute_data->constructor_arguments) {
    list_ForEach(constructor_argumentsListEntry, custom_attribute_data->constructor_arguments) {
    cJSON *itemLocal = custom_attribute_typed_argument_convertToJSON(constructor_argumentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(constructor_arguments, itemLocal);
    }
    }
    }


    // custom_attribute_data->named_arguments
    if(custom_attribute_data->named_arguments) {
    cJSON *named_arguments = cJSON_AddArrayToObject(item, "namedArguments");
    if(named_arguments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *named_argumentsListEntry;
    if (custom_attribute_data->named_arguments) {
    list_ForEach(named_argumentsListEntry, custom_attribute_data->named_arguments) {
    cJSON *itemLocal = custom_attribute_named_argument_convertToJSON(named_argumentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(named_arguments, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_attribute_data_t *custom_attribute_data_parseFromJSON(cJSON *custom_attribute_dataJSON){

    custom_attribute_data_t *custom_attribute_data_local_var = NULL;

    // define the local variable for custom_attribute_data->attribute_type
    type_t *attribute_type_local_nonprim = NULL;

    // define the local variable for custom_attribute_data->constructor
    constructor_info_t *constructor_local_nonprim = NULL;

    // define the local list for custom_attribute_data->constructor_arguments
    list_t *constructor_argumentsList = NULL;

    // define the local list for custom_attribute_data->named_arguments
    list_t *named_argumentsList = NULL;

    // custom_attribute_data->attribute_type
    cJSON *attribute_type = cJSON_GetObjectItemCaseSensitive(custom_attribute_dataJSON, "attributeType");
    if (attribute_type) { 
    attribute_type_local_nonprim = type_parseFromJSON(attribute_type); //nonprimitive
    }

    // custom_attribute_data->constructor
    cJSON *constructor = cJSON_GetObjectItemCaseSensitive(custom_attribute_dataJSON, "constructor");
    if (constructor) { 
    constructor_local_nonprim = constructor_info_parseFromJSON(constructor); //nonprimitive
    }

    // custom_attribute_data->constructor_arguments
    cJSON *constructor_arguments = cJSON_GetObjectItemCaseSensitive(custom_attribute_dataJSON, "constructorArguments");
    if (constructor_arguments) { 
    cJSON *constructor_arguments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(constructor_arguments)){
        goto end; //nonprimitive container
    }

    constructor_argumentsList = list_createList();

    cJSON_ArrayForEach(constructor_arguments_local_nonprimitive,constructor_arguments )
    {
        if(!cJSON_IsObject(constructor_arguments_local_nonprimitive)){
            goto end;
        }
        custom_attribute_typed_argument_t *constructor_argumentsItem = custom_attribute_typed_argument_parseFromJSON(constructor_arguments_local_nonprimitive);

        list_addElement(constructor_argumentsList, constructor_argumentsItem);
    }
    }

    // custom_attribute_data->named_arguments
    cJSON *named_arguments = cJSON_GetObjectItemCaseSensitive(custom_attribute_dataJSON, "namedArguments");
    if (named_arguments) { 
    cJSON *named_arguments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(named_arguments)){
        goto end; //nonprimitive container
    }

    named_argumentsList = list_createList();

    cJSON_ArrayForEach(named_arguments_local_nonprimitive,named_arguments )
    {
        if(!cJSON_IsObject(named_arguments_local_nonprimitive)){
            goto end;
        }
        custom_attribute_named_argument_t *named_argumentsItem = custom_attribute_named_argument_parseFromJSON(named_arguments_local_nonprimitive);

        list_addElement(named_argumentsList, named_argumentsItem);
    }
    }


    custom_attribute_data_local_var = custom_attribute_data_create (
        attribute_type ? attribute_type_local_nonprim : NULL,
        constructor ? constructor_local_nonprim : NULL,
        constructor_arguments ? constructor_argumentsList : NULL,
        named_arguments ? named_argumentsList : NULL
        );

    return custom_attribute_data_local_var;
end:
    if (attribute_type_local_nonprim) {
        type_free(attribute_type_local_nonprim);
        attribute_type_local_nonprim = NULL;
    }
    if (constructor_local_nonprim) {
        constructor_info_free(constructor_local_nonprim);
        constructor_local_nonprim = NULL;
    }
    if (constructor_argumentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, constructor_argumentsList) {
            custom_attribute_typed_argument_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(constructor_argumentsList);
        constructor_argumentsList = NULL;
    }
    if (named_argumentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, named_argumentsList) {
            custom_attribute_named_argument_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(named_argumentsList);
        named_argumentsList = NULL;
    }
    return NULL;

}
