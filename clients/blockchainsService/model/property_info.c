#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "property_info.h"


char* property_info_member_type_ToString(blockchainsservice_property_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

blockchainsservice_property_info_MEMBERTYPE_e property_info_member_type_FromString(char* member_type){
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
char* property_info_attributes_ToString(blockchainsservice_property_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "None", "SpecialName", "RTSpecialName", "HasDefault", "Reserved2", "Reserved3", "Reserved4", "ReservedMask" };
    return attributesArray[attributes];
}

blockchainsservice_property_info_ATTRIBUTES_e property_info_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "None", "SpecialName", "RTSpecialName", "HasDefault", "Reserved2", "Reserved3", "Reserved4", "ReservedMask" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

property_info_t *property_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_property_info_MEMBERTYPE_e member_type,
    type_t *property_type,
    blockchainsservice_property_info_ATTRIBUTES_e attributes,
    int is_special_name,
    int can_read,
    int can_write,
    method_info_t *get_method,
    method_info_t *set_method
    ) {
    property_info_t *property_info_local_var = malloc(sizeof(property_info_t));
    if (!property_info_local_var) {
        return NULL;
    }
    property_info_local_var->name = name;
    property_info_local_var->declaring_type = declaring_type;
    property_info_local_var->reflected_type = reflected_type;
    property_info_local_var->module = module;
    property_info_local_var->custom_attributes = custom_attributes;
    property_info_local_var->is_collectible = is_collectible;
    property_info_local_var->metadata_token = metadata_token;
    property_info_local_var->member_type = member_type;
    property_info_local_var->property_type = property_type;
    property_info_local_var->attributes = attributes;
    property_info_local_var->is_special_name = is_special_name;
    property_info_local_var->can_read = can_read;
    property_info_local_var->can_write = can_write;
    property_info_local_var->get_method = get_method;
    property_info_local_var->set_method = set_method;

    return property_info_local_var;
}


void property_info_free(property_info_t *property_info) {
    if(NULL == property_info){
        return ;
    }
    listEntry_t *listEntry;
    if (property_info->name) {
        free(property_info->name);
        property_info->name = NULL;
    }
    if (property_info->declaring_type) {
        type_free(property_info->declaring_type);
        property_info->declaring_type = NULL;
    }
    if (property_info->reflected_type) {
        type_free(property_info->reflected_type);
        property_info->reflected_type = NULL;
    }
    if (property_info->module) {
        module_free(property_info->module);
        property_info->module = NULL;
    }
    if (property_info->custom_attributes) {
        list_ForEach(listEntry, property_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(property_info->custom_attributes);
        property_info->custom_attributes = NULL;
    }
    if (property_info->property_type) {
        type_free(property_info->property_type);
        property_info->property_type = NULL;
    }
    if (property_info->get_method) {
        method_info_free(property_info->get_method);
        property_info->get_method = NULL;
    }
    if (property_info->set_method) {
        method_info_free(property_info->set_method);
        property_info->set_method = NULL;
    }
    free(property_info);
}

cJSON *property_info_convertToJSON(property_info_t *property_info) {
    cJSON *item = cJSON_CreateObject();

    // property_info->name
    if(property_info->name) {
    if(cJSON_AddStringToObject(item, "name", property_info->name) == NULL) {
    goto fail; //String
    }
    }


    // property_info->declaring_type
    if(property_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(property_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // property_info->reflected_type
    if(property_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(property_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // property_info->module
    if(property_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(property_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // property_info->custom_attributes
    if(property_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (property_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, property_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // property_info->is_collectible
    if(property_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", property_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // property_info->metadata_token
    if(property_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", property_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // property_info->member_type
    if(property_info->member_type != blockchainsservice_property_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typeproperty_info_ToString(property_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // property_info->property_type
    if(property_info->property_type) {
    cJSON *property_type_local_JSON = type_convertToJSON(property_info->property_type);
    if(property_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "propertyType", property_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // property_info->attributes
    if(property_info->attributes != blockchainsservice_property_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesproperty_info_ToString(property_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // property_info->is_special_name
    if(property_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", property_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // property_info->can_read
    if(property_info->can_read) {
    if(cJSON_AddBoolToObject(item, "canRead", property_info->can_read) == NULL) {
    goto fail; //Bool
    }
    }


    // property_info->can_write
    if(property_info->can_write) {
    if(cJSON_AddBoolToObject(item, "canWrite", property_info->can_write) == NULL) {
    goto fail; //Bool
    }
    }


    // property_info->get_method
    if(property_info->get_method) {
    cJSON *get_method_local_JSON = method_info_convertToJSON(property_info->get_method);
    if(get_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "getMethod", get_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // property_info->set_method
    if(property_info->set_method) {
    cJSON *set_method_local_JSON = method_info_convertToJSON(property_info->set_method);
    if(set_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "setMethod", set_method_local_JSON);
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

property_info_t *property_info_parseFromJSON(cJSON *property_infoJSON){

    property_info_t *property_info_local_var = NULL;

    // define the local variable for property_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for property_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for property_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for property_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for property_info->property_type
    type_t *property_type_local_nonprim = NULL;

    // define the local variable for property_info->get_method
    method_info_t *get_method_local_nonprim = NULL;

    // define the local variable for property_info->set_method
    method_info_t *set_method_local_nonprim = NULL;

    // property_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // property_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // property_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // property_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // property_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "customAttributes");
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

    // property_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // property_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // property_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "memberType");
    blockchainsservice_property_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = property_info_member_type_FromString(member_type->valuestring);
    }

    // property_info->property_type
    cJSON *property_type = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "propertyType");
    if (property_type) { 
    property_type_local_nonprim = type_parseFromJSON(property_type); //nonprimitive
    }

    // property_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "attributes");
    blockchainsservice_property_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = property_info_attributes_FromString(attributes->valuestring);
    }

    // property_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // property_info->can_read
    cJSON *can_read = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "canRead");
    if (can_read) { 
    if(!cJSON_IsBool(can_read))
    {
    goto end; //Bool
    }
    }

    // property_info->can_write
    cJSON *can_write = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "canWrite");
    if (can_write) { 
    if(!cJSON_IsBool(can_write))
    {
    goto end; //Bool
    }
    }

    // property_info->get_method
    cJSON *get_method = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "getMethod");
    if (get_method) { 
    get_method_local_nonprim = method_info_parseFromJSON(get_method); //nonprimitive
    }

    // property_info->set_method
    cJSON *set_method = cJSON_GetObjectItemCaseSensitive(property_infoJSON, "setMethod");
    if (set_method) { 
    set_method_local_nonprim = method_info_parseFromJSON(set_method); //nonprimitive
    }


    property_info_local_var = property_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        member_type ? member_typeVariable : blockchainsservice_property_info_MEMBERTYPE_NULL,
        property_type ? property_type_local_nonprim : NULL,
        attributes ? attributesVariable : blockchainsservice_property_info_ATTRIBUTES_NULL,
        is_special_name ? is_special_name->valueint : 0,
        can_read ? can_read->valueint : 0,
        can_write ? can_write->valueint : 0,
        get_method ? get_method_local_nonprim : NULL,
        set_method ? set_method_local_nonprim : NULL
        );

    return property_info_local_var;
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
    if (property_type_local_nonprim) {
        type_free(property_type_local_nonprim);
        property_type_local_nonprim = NULL;
    }
    if (get_method_local_nonprim) {
        method_info_free(get_method_local_nonprim);
        get_method_local_nonprim = NULL;
    }
    if (set_method_local_nonprim) {
        method_info_free(set_method_local_nonprim);
        set_method_local_nonprim = NULL;
    }
    return NULL;

}
