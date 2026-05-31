#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "member_info.h"


char* member_info_member_type_ToString(contentservice_member_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_member_info_MEMBERTYPE_e member_info_member_type_FromString(char* member_type){
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

member_info_t *member_info_create(
    contentservice_member_info_MEMBERTYPE_e member_type,
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token
    ) {
    member_info_t *member_info_local_var = malloc(sizeof(member_info_t));
    if (!member_info_local_var) {
        return NULL;
    }
    member_info_local_var->member_type = member_type;
    member_info_local_var->name = name;
    member_info_local_var->declaring_type = declaring_type;
    member_info_local_var->reflected_type = reflected_type;
    member_info_local_var->module = module;
    member_info_local_var->custom_attributes = custom_attributes;
    member_info_local_var->is_collectible = is_collectible;
    member_info_local_var->metadata_token = metadata_token;

    return member_info_local_var;
}


void member_info_free(member_info_t *member_info) {
    if(NULL == member_info){
        return ;
    }
    listEntry_t *listEntry;
    if (member_info->name) {
        free(member_info->name);
        member_info->name = NULL;
    }
    if (member_info->declaring_type) {
        type_free(member_info->declaring_type);
        member_info->declaring_type = NULL;
    }
    if (member_info->reflected_type) {
        type_free(member_info->reflected_type);
        member_info->reflected_type = NULL;
    }
    if (member_info->module) {
        module_free(member_info->module);
        member_info->module = NULL;
    }
    if (member_info->custom_attributes) {
        list_ForEach(listEntry, member_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(member_info->custom_attributes);
        member_info->custom_attributes = NULL;
    }
    free(member_info);
}

cJSON *member_info_convertToJSON(member_info_t *member_info) {
    cJSON *item = cJSON_CreateObject();

    // member_info->member_type
    if(member_info->member_type != contentservice_member_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typemember_info_ToString(member_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // member_info->name
    if(member_info->name) {
    if(cJSON_AddStringToObject(item, "name", member_info->name) == NULL) {
    goto fail; //String
    }
    }


    // member_info->declaring_type
    if(member_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(member_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // member_info->reflected_type
    if(member_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(member_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // member_info->module
    if(member_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(member_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // member_info->custom_attributes
    if(member_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (member_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, member_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // member_info->is_collectible
    if(member_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", member_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // member_info->metadata_token
    if(member_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", member_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

member_info_t *member_info_parseFromJSON(cJSON *member_infoJSON){

    member_info_t *member_info_local_var = NULL;

    // define the local variable for member_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for member_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for member_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for member_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // member_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "memberType");
    contentservice_member_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = member_info_member_type_FromString(member_type->valuestring);
    }

    // member_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // member_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // member_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // member_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // member_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "customAttributes");
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

    // member_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // member_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(member_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }


    member_info_local_var = member_info_create (
        member_type ? member_typeVariable : contentservice_member_info_MEMBERTYPE_NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0
        );

    return member_info_local_var;
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
    return NULL;

}
