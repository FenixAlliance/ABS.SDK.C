#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "event_info.h"


char* event_info_member_type_ToString(blockchainsservice_event_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

blockchainsservice_event_info_MEMBERTYPE_e event_info_member_type_FromString(char* member_type){
    int stringToReturn = 0;
    char *member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    size_t sizeofArray = sizeof(member_typeArray) / sizeof(member_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(member_type, member_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* event_info_attributes_ToString(blockchainsservice_event_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "None", "SpecialName", "RTSpecialName" };
    return attributesArray[attributes];
}

blockchainsservice_event_info_ATTRIBUTES_e event_info_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "None", "SpecialName", "RTSpecialName" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

event_info_t *event_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_event_info_MEMBERTYPE_e member_type,
    blockchainsservice_event_info_ATTRIBUTES_e attributes,
    int is_special_name,
    method_info_t *add_method,
    method_info_t *remove_method,
    method_info_t *raise_method,
    int is_multicast,
    type_t *event_handler_type
    ) {
    event_info_t *event_info_local_var = malloc(sizeof(event_info_t));
    if (!event_info_local_var) {
        return NULL;
    }
    event_info_local_var->name = name;
    event_info_local_var->declaring_type = declaring_type;
    event_info_local_var->reflected_type = reflected_type;
    event_info_local_var->module = module;
    event_info_local_var->custom_attributes = custom_attributes;
    event_info_local_var->is_collectible = is_collectible;
    event_info_local_var->metadata_token = metadata_token;
    event_info_local_var->member_type = member_type;
    event_info_local_var->attributes = attributes;
    event_info_local_var->is_special_name = is_special_name;
    event_info_local_var->add_method = add_method;
    event_info_local_var->remove_method = remove_method;
    event_info_local_var->raise_method = raise_method;
    event_info_local_var->is_multicast = is_multicast;
    event_info_local_var->event_handler_type = event_handler_type;

    return event_info_local_var;
}


void event_info_free(event_info_t *event_info) {
    if(NULL == event_info){
        return ;
    }
    listEntry_t *listEntry;
    if (event_info->name) {
        free(event_info->name);
        event_info->name = NULL;
    }
    if (event_info->declaring_type) {
        type_free(event_info->declaring_type);
        event_info->declaring_type = NULL;
    }
    if (event_info->reflected_type) {
        type_free(event_info->reflected_type);
        event_info->reflected_type = NULL;
    }
    if (event_info->module) {
        module_free(event_info->module);
        event_info->module = NULL;
    }
    if (event_info->custom_attributes) {
        list_ForEach(listEntry, event_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(event_info->custom_attributes);
        event_info->custom_attributes = NULL;
    }
    if (event_info->add_method) {
        method_info_free(event_info->add_method);
        event_info->add_method = NULL;
    }
    if (event_info->remove_method) {
        method_info_free(event_info->remove_method);
        event_info->remove_method = NULL;
    }
    if (event_info->raise_method) {
        method_info_free(event_info->raise_method);
        event_info->raise_method = NULL;
    }
    if (event_info->event_handler_type) {
        type_free(event_info->event_handler_type);
        event_info->event_handler_type = NULL;
    }
    free(event_info);
}

cJSON *event_info_convertToJSON(event_info_t *event_info) {
    cJSON *item = cJSON_CreateObject();

    // event_info->name
    if(event_info->name) {
    if(cJSON_AddStringToObject(item, "name", event_info->name) == NULL) {
    goto fail; //String
    }
    }


    // event_info->declaring_type
    if(event_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(event_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->reflected_type
    if(event_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(event_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->module
    if(event_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(event_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->custom_attributes
    if(event_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (event_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, event_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // event_info->is_collectible
    if(event_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", event_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // event_info->metadata_token
    if(event_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", event_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // event_info->member_type
    if(event_info->member_type != blockchainsservice_event_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typeevent_info_ToString(event_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // event_info->attributes
    if(event_info->attributes != blockchainsservice_event_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesevent_info_ToString(event_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // event_info->is_special_name
    if(event_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", event_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // event_info->add_method
    if(event_info->add_method) {
    cJSON *add_method_local_JSON = method_info_convertToJSON(event_info->add_method);
    if(add_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "addMethod", add_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->remove_method
    if(event_info->remove_method) {
    cJSON *remove_method_local_JSON = method_info_convertToJSON(event_info->remove_method);
    if(remove_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "removeMethod", remove_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->raise_method
    if(event_info->raise_method) {
    cJSON *raise_method_local_JSON = method_info_convertToJSON(event_info->raise_method);
    if(raise_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "raiseMethod", raise_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // event_info->is_multicast
    if(event_info->is_multicast) {
    if(cJSON_AddBoolToObject(item, "isMulticast", event_info->is_multicast) == NULL) {
    goto fail; //Bool
    }
    }


    // event_info->event_handler_type
    if(event_info->event_handler_type) {
    cJSON *event_handler_type_local_JSON = type_convertToJSON(event_info->event_handler_type);
    if(event_handler_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "eventHandlerType", event_handler_type_local_JSON);
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

event_info_t *event_info_parseFromJSON(cJSON *event_infoJSON){

    event_info_t *event_info_local_var = NULL;

    // define the local variable for event_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for event_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for event_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for event_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for event_info->add_method
    method_info_t *add_method_local_nonprim = NULL;

    // define the local variable for event_info->remove_method
    method_info_t *remove_method_local_nonprim = NULL;

    // define the local variable for event_info->raise_method
    method_info_t *raise_method_local_nonprim = NULL;

    // define the local variable for event_info->event_handler_type
    type_t *event_handler_type_local_nonprim = NULL;

    // event_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // event_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // event_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // event_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // event_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "customAttributes");
    if (custom_attributes) { 
    cJSON *custom_attributes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(custom_attributes)){
        goto end; //nonprimitive container
    }

    custom_attributesList = list_createList();

    cJSON_ArrayForEach(custom_attributes_local_nonprimitive,custom_attributes )
    {
        if(!cJSON_IsObject(custom_attributes_local_nonprimitive)){
            goto end;
        }
        custom_attribute_data_t *custom_attributesItem = custom_attribute_data_parseFromJSON(custom_attributes_local_nonprimitive);

        list_addElement(custom_attributesList, custom_attributesItem);
    }
    }

    // event_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // event_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // event_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "memberType");
    blockchainsservice_event_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = event_info_member_type_FromString(member_type->valuestring);
    }

    // event_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "attributes");
    blockchainsservice_event_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = event_info_attributes_FromString(attributes->valuestring);
    }

    // event_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // event_info->add_method
    cJSON *add_method = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "addMethod");
    if (add_method) { 
    add_method_local_nonprim = method_info_parseFromJSON(add_method); //nonprimitive
    }

    // event_info->remove_method
    cJSON *remove_method = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "removeMethod");
    if (remove_method) { 
    remove_method_local_nonprim = method_info_parseFromJSON(remove_method); //nonprimitive
    }

    // event_info->raise_method
    cJSON *raise_method = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "raiseMethod");
    if (raise_method) { 
    raise_method_local_nonprim = method_info_parseFromJSON(raise_method); //nonprimitive
    }

    // event_info->is_multicast
    cJSON *is_multicast = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "isMulticast");
    if (is_multicast) { 
    if(!cJSON_IsBool(is_multicast))
    {
    goto end; //Bool
    }
    }

    // event_info->event_handler_type
    cJSON *event_handler_type = cJSON_GetObjectItemCaseSensitive(event_infoJSON, "eventHandlerType");
    if (event_handler_type) { 
    event_handler_type_local_nonprim = type_parseFromJSON(event_handler_type); //nonprimitive
    }


    event_info_local_var = event_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        member_type ? member_typeVariable : blockchainsservice_event_info_MEMBERTYPE_NULL,
        attributes ? attributesVariable : blockchainsservice_event_info_ATTRIBUTES_NULL,
        is_special_name ? is_special_name->valueint : 0,
        add_method ? add_method_local_nonprim : NULL,
        remove_method ? remove_method_local_nonprim : NULL,
        raise_method ? raise_method_local_nonprim : NULL,
        is_multicast ? is_multicast->valueint : 0,
        event_handler_type ? event_handler_type_local_nonprim : NULL
        );

    return event_info_local_var;
end:
    if (declaring_type_local_nonprim) {
        type_free(declaring_type_local_nonprim);
        declaring_type_local_nonprim = NULL;
    }
    if (reflected_type_local_nonprim) {
        type_free(reflected_type_local_nonprim);
        reflected_type_local_nonprim = NULL;
    }
    if (module_local_nonprim) {
        module_free(module_local_nonprim);
        module_local_nonprim = NULL;
    }
    if (custom_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, custom_attributesList) {
            custom_attribute_data_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(custom_attributesList);
        custom_attributesList = NULL;
    }
    if (add_method_local_nonprim) {
        method_info_free(add_method_local_nonprim);
        add_method_local_nonprim = NULL;
    }
    if (remove_method_local_nonprim) {
        method_info_free(remove_method_local_nonprim);
        remove_method_local_nonprim = NULL;
    }
    if (raise_method_local_nonprim) {
        method_info_free(raise_method_local_nonprim);
        raise_method_local_nonprim = NULL;
    }
    if (event_handler_type_local_nonprim) {
        type_free(event_handler_type_local_nonprim);
        event_handler_type_local_nonprim = NULL;
    }
    return NULL;

}
