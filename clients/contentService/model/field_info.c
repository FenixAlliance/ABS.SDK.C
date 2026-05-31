#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "field_info.h"


char* field_info_member_type_ToString(contentservice_field_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_field_info_MEMBERTYPE_e field_info_member_type_FromString(char* member_type){
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
char* field_info_attributes_ToString(contentservice_field_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "FieldAccessMask", "Static", "InitOnly", "Literal", "NotSerialized", "HasFieldRVA", "SpecialName", "RTSpecialName", "HasFieldMarshal", "PinvokeImpl", "HasDefault", "ReservedMask" };
    return attributesArray[attributes];
}

contentservice_field_info_ATTRIBUTES_e field_info_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "FieldAccessMask", "Static", "InitOnly", "Literal", "NotSerialized", "HasFieldRVA", "SpecialName", "RTSpecialName", "HasFieldMarshal", "PinvokeImpl", "HasDefault", "ReservedMask" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

field_info_t *field_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_field_info_MEMBERTYPE_e member_type,
    contentservice_field_info_ATTRIBUTES_e attributes,
    type_t *field_type,
    int is_init_only,
    int is_literal,
    int is_not_serialized,
    int is_pinvoke_impl,
    int is_special_name,
    int is_static,
    int is_assembly,
    int is_family,
    int is_family_and_assembly,
    int is_family_or_assembly,
    int is_private,
    int is_public,
    int is_security_critical,
    int is_security_safe_critical,
    int is_security_transparent,
    runtime_field_handle_t *field_handle
    ) {
    field_info_t *field_info_local_var = malloc(sizeof(field_info_t));
    if (!field_info_local_var) {
        return NULL;
    }
    field_info_local_var->name = name;
    field_info_local_var->declaring_type = declaring_type;
    field_info_local_var->reflected_type = reflected_type;
    field_info_local_var->module = module;
    field_info_local_var->custom_attributes = custom_attributes;
    field_info_local_var->is_collectible = is_collectible;
    field_info_local_var->metadata_token = metadata_token;
    field_info_local_var->member_type = member_type;
    field_info_local_var->attributes = attributes;
    field_info_local_var->field_type = field_type;
    field_info_local_var->is_init_only = is_init_only;
    field_info_local_var->is_literal = is_literal;
    field_info_local_var->is_not_serialized = is_not_serialized;
    field_info_local_var->is_pinvoke_impl = is_pinvoke_impl;
    field_info_local_var->is_special_name = is_special_name;
    field_info_local_var->is_static = is_static;
    field_info_local_var->is_assembly = is_assembly;
    field_info_local_var->is_family = is_family;
    field_info_local_var->is_family_and_assembly = is_family_and_assembly;
    field_info_local_var->is_family_or_assembly = is_family_or_assembly;
    field_info_local_var->is_private = is_private;
    field_info_local_var->is_public = is_public;
    field_info_local_var->is_security_critical = is_security_critical;
    field_info_local_var->is_security_safe_critical = is_security_safe_critical;
    field_info_local_var->is_security_transparent = is_security_transparent;
    field_info_local_var->field_handle = field_handle;

    return field_info_local_var;
}


void field_info_free(field_info_t *field_info) {
    if(NULL == field_info){
        return ;
    }
    listEntry_t *listEntry;
    if (field_info->name) {
        free(field_info->name);
        field_info->name = NULL;
    }
    if (field_info->declaring_type) {
        type_free(field_info->declaring_type);
        field_info->declaring_type = NULL;
    }
    if (field_info->reflected_type) {
        type_free(field_info->reflected_type);
        field_info->reflected_type = NULL;
    }
    if (field_info->module) {
        module_free(field_info->module);
        field_info->module = NULL;
    }
    if (field_info->custom_attributes) {
        list_ForEach(listEntry, field_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(field_info->custom_attributes);
        field_info->custom_attributes = NULL;
    }
    if (field_info->field_type) {
        type_free(field_info->field_type);
        field_info->field_type = NULL;
    }
    if (field_info->field_handle) {
        runtime_field_handle_free(field_info->field_handle);
        field_info->field_handle = NULL;
    }
    free(field_info);
}

cJSON *field_info_convertToJSON(field_info_t *field_info) {
    cJSON *item = cJSON_CreateObject();

    // field_info->name
    if(field_info->name) {
    if(cJSON_AddStringToObject(item, "name", field_info->name) == NULL) {
    goto fail; //String
    }
    }


    // field_info->declaring_type
    if(field_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(field_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // field_info->reflected_type
    if(field_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(field_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // field_info->module
    if(field_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(field_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // field_info->custom_attributes
    if(field_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (field_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, field_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // field_info->is_collectible
    if(field_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", field_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->metadata_token
    if(field_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", field_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // field_info->member_type
    if(field_info->member_type != contentservice_field_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typefield_info_ToString(field_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // field_info->attributes
    if(field_info->attributes != contentservice_field_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesfield_info_ToString(field_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // field_info->field_type
    if(field_info->field_type) {
    cJSON *field_type_local_JSON = type_convertToJSON(field_info->field_type);
    if(field_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fieldType", field_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // field_info->is_init_only
    if(field_info->is_init_only) {
    if(cJSON_AddBoolToObject(item, "isInitOnly", field_info->is_init_only) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_literal
    if(field_info->is_literal) {
    if(cJSON_AddBoolToObject(item, "isLiteral", field_info->is_literal) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_not_serialized
    if(field_info->is_not_serialized) {
    if(cJSON_AddBoolToObject(item, "isNotSerialized", field_info->is_not_serialized) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_pinvoke_impl
    if(field_info->is_pinvoke_impl) {
    if(cJSON_AddBoolToObject(item, "isPinvokeImpl", field_info->is_pinvoke_impl) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_special_name
    if(field_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", field_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_static
    if(field_info->is_static) {
    if(cJSON_AddBoolToObject(item, "isStatic", field_info->is_static) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_assembly
    if(field_info->is_assembly) {
    if(cJSON_AddBoolToObject(item, "isAssembly", field_info->is_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_family
    if(field_info->is_family) {
    if(cJSON_AddBoolToObject(item, "isFamily", field_info->is_family) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_family_and_assembly
    if(field_info->is_family_and_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyAndAssembly", field_info->is_family_and_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_family_or_assembly
    if(field_info->is_family_or_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyOrAssembly", field_info->is_family_or_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_private
    if(field_info->is_private) {
    if(cJSON_AddBoolToObject(item, "isPrivate", field_info->is_private) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_public
    if(field_info->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", field_info->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_security_critical
    if(field_info->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", field_info->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_security_safe_critical
    if(field_info->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", field_info->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->is_security_transparent
    if(field_info->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", field_info->is_security_transparent) == NULL) {
    goto fail; //Bool
    }
    }


    // field_info->field_handle
    if(field_info->field_handle) {
    cJSON *field_handle_local_JSON = runtime_field_handle_convertToJSON(field_info->field_handle);
    if(field_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "fieldHandle", field_handle_local_JSON);
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

field_info_t *field_info_parseFromJSON(cJSON *field_infoJSON){

    field_info_t *field_info_local_var = NULL;

    // define the local variable for field_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for field_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for field_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for field_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for field_info->field_type
    type_t *field_type_local_nonprim = NULL;

    // define the local variable for field_info->field_handle
    runtime_field_handle_t *field_handle_local_nonprim = NULL;

    // field_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // field_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // field_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // field_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // field_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "customAttributes");
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

    // field_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // field_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // field_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "memberType");
    contentservice_field_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = field_info_member_type_FromString(member_type->valuestring);
    }

    // field_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "attributes");
    contentservice_field_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = field_info_attributes_FromString(attributes->valuestring);
    }

    // field_info->field_type
    cJSON *field_type = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "fieldType");
    if (field_type) { 
    field_type_local_nonprim = type_parseFromJSON(field_type); //nonprimitive
    }

    // field_info->is_init_only
    cJSON *is_init_only = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isInitOnly");
    if (is_init_only) { 
    if(!cJSON_IsBool(is_init_only))
    {
    goto end; //Bool
    }
    }

    // field_info->is_literal
    cJSON *is_literal = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isLiteral");
    if (is_literal) { 
    if(!cJSON_IsBool(is_literal))
    {
    goto end; //Bool
    }
    }

    // field_info->is_not_serialized
    cJSON *is_not_serialized = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isNotSerialized");
    if (is_not_serialized) { 
    if(!cJSON_IsBool(is_not_serialized))
    {
    goto end; //Bool
    }
    }

    // field_info->is_pinvoke_impl
    cJSON *is_pinvoke_impl = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isPinvokeImpl");
    if (is_pinvoke_impl) { 
    if(!cJSON_IsBool(is_pinvoke_impl))
    {
    goto end; //Bool
    }
    }

    // field_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // field_info->is_static
    cJSON *is_static = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isStatic");
    if (is_static) { 
    if(!cJSON_IsBool(is_static))
    {
    goto end; //Bool
    }
    }

    // field_info->is_assembly
    cJSON *is_assembly = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isAssembly");
    if (is_assembly) { 
    if(!cJSON_IsBool(is_assembly))
    {
    goto end; //Bool
    }
    }

    // field_info->is_family
    cJSON *is_family = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isFamily");
    if (is_family) { 
    if(!cJSON_IsBool(is_family))
    {
    goto end; //Bool
    }
    }

    // field_info->is_family_and_assembly
    cJSON *is_family_and_assembly = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isFamilyAndAssembly");
    if (is_family_and_assembly) { 
    if(!cJSON_IsBool(is_family_and_assembly))
    {
    goto end; //Bool
    }
    }

    // field_info->is_family_or_assembly
    cJSON *is_family_or_assembly = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isFamilyOrAssembly");
    if (is_family_or_assembly) { 
    if(!cJSON_IsBool(is_family_or_assembly))
    {
    goto end; //Bool
    }
    }

    // field_info->is_private
    cJSON *is_private = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isPrivate");
    if (is_private) { 
    if(!cJSON_IsBool(is_private))
    {
    goto end; //Bool
    }
    }

    // field_info->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // field_info->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // field_info->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // field_info->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }

    // field_info->field_handle
    cJSON *field_handle = cJSON_GetObjectItemCaseSensitive(field_infoJSON, "fieldHandle");
    if (field_handle) { 
    field_handle_local_nonprim = runtime_field_handle_parseFromJSON(field_handle); //nonprimitive
    }


    field_info_local_var = field_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        member_type ? member_typeVariable : contentservice_field_info_MEMBERTYPE_NULL,
        attributes ? attributesVariable : contentservice_field_info_ATTRIBUTES_NULL,
        field_type ? field_type_local_nonprim : NULL,
        is_init_only ? is_init_only->valueint : 0,
        is_literal ? is_literal->valueint : 0,
        is_not_serialized ? is_not_serialized->valueint : 0,
        is_pinvoke_impl ? is_pinvoke_impl->valueint : 0,
        is_special_name ? is_special_name->valueint : 0,
        is_static ? is_static->valueint : 0,
        is_assembly ? is_assembly->valueint : 0,
        is_family ? is_family->valueint : 0,
        is_family_and_assembly ? is_family_and_assembly->valueint : 0,
        is_family_or_assembly ? is_family_or_assembly->valueint : 0,
        is_private ? is_private->valueint : 0,
        is_public ? is_public->valueint : 0,
        is_security_critical ? is_security_critical->valueint : 0,
        is_security_safe_critical ? is_security_safe_critical->valueint : 0,
        is_security_transparent ? is_security_transparent->valueint : 0,
        field_handle ? field_handle_local_nonprim : NULL
        );

    return field_info_local_var;
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
    if (field_type_local_nonprim) {
        type_free(field_type_local_nonprim);
        field_type_local_nonprim = NULL;
    }
    if (field_handle_local_nonprim) {
        runtime_field_handle_free(field_handle_local_nonprim);
        field_handle_local_nonprim = NULL;
    }
    return NULL;

}
