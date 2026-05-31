#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "method_info.h"


char* method_info_attributes_ToString(contentservice_method_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "MemberAccessMask", "UnmanagedExport", "Static", "Final", "Virtual", "HideBySig", "NewSlot", "CheckAccessOnOverride", "Abstract", "SpecialName", "RTSpecialName", "PinvokeImpl", "HasSecurity", "RequireSecObject", "ReservedMask" };
    return attributesArray[attributes];
}

contentservice_method_info_ATTRIBUTES_e method_info_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "MemberAccessMask", "UnmanagedExport", "Static", "Final", "Virtual", "HideBySig", "NewSlot", "CheckAccessOnOverride", "Abstract", "SpecialName", "RTSpecialName", "PinvokeImpl", "HasSecurity", "RequireSecObject", "ReservedMask" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* method_info_method_implementation_flags_ToString(contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags) {
    char* method_implementation_flagsArray[] =  { "NULL", "IL", "Native", "OPTIL", "CodeTypeMask", "ManagedMask", "NoInlining", "ForwardRef", "Synchronized", "NoOptimization", "PreserveSig", "AggressiveInlining", "AggressiveOptimization", "InternalCall", "Async", "MaxMethodImplVal" };
    return method_implementation_flagsArray[method_implementation_flags];
}

contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_info_method_implementation_flags_FromString(char* method_implementation_flags){
    int stringToReturn = 0;
    char *method_implementation_flagsArray[] =  { "NULL", "IL", "Native", "OPTIL", "CodeTypeMask", "ManagedMask", "NoInlining", "ForwardRef", "Synchronized", "NoOptimization", "PreserveSig", "AggressiveInlining", "AggressiveOptimization", "InternalCall", "Async", "MaxMethodImplVal" };
    size_t sizeofArray = sizeof(method_implementation_flagsArray) / sizeof(method_implementation_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(method_implementation_flags, method_implementation_flagsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* method_info_calling_convention_ToString(contentservice_method_info_CALLINGCONVENTION_e calling_convention) {
    char* calling_conventionArray[] =  { "NULL", "Standard", "VarArgs", "Any", "HasThis", "ExplicitThis" };
    return calling_conventionArray[calling_convention];
}

contentservice_method_info_CALLINGCONVENTION_e method_info_calling_convention_FromString(char* calling_convention){
    int stringToReturn = 0;
    char *calling_conventionArray[] =  { "NULL", "Standard", "VarArgs", "Any", "HasThis", "ExplicitThis" };
    size_t sizeofArray = sizeof(calling_conventionArray) / sizeof(calling_conventionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(calling_convention, calling_conventionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* method_info_member_type_ToString(contentservice_method_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_method_info_MEMBERTYPE_e method_info_member_type_FromString(char* member_type){
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

method_info_t *method_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_method_info_ATTRIBUTES_e attributes,
    contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags,
    contentservice_method_info_CALLINGCONVENTION_e calling_convention,
    int is_abstract,
    int is_constructor,
    int is_final,
    int is_hide_by_sig,
    int is_special_name,
    int is_static,
    int is_virtual,
    int is_assembly,
    int is_family,
    int is_family_and_assembly,
    int is_family_or_assembly,
    int is_private,
    int is_public,
    int is_constructed_generic_method,
    int is_generic_method,
    int is_generic_method_definition,
    int contains_generic_parameters,
    runtime_method_handle_t *method_handle,
    int is_security_critical,
    int is_security_safe_critical,
    int is_security_transparent,
    contentservice_method_info_MEMBERTYPE_e member_type,
    parameter_info_t *return_parameter,
    type_t *return_type,
    object_t *return_type_custom_attributes
    ) {
    method_info_t *method_info_local_var = malloc(sizeof(method_info_t));
    if (!method_info_local_var) {
        return NULL;
    }
    method_info_local_var->name = name;
    method_info_local_var->declaring_type = declaring_type;
    method_info_local_var->reflected_type = reflected_type;
    method_info_local_var->module = module;
    method_info_local_var->custom_attributes = custom_attributes;
    method_info_local_var->is_collectible = is_collectible;
    method_info_local_var->metadata_token = metadata_token;
    method_info_local_var->attributes = attributes;
    method_info_local_var->method_implementation_flags = method_implementation_flags;
    method_info_local_var->calling_convention = calling_convention;
    method_info_local_var->is_abstract = is_abstract;
    method_info_local_var->is_constructor = is_constructor;
    method_info_local_var->is_final = is_final;
    method_info_local_var->is_hide_by_sig = is_hide_by_sig;
    method_info_local_var->is_special_name = is_special_name;
    method_info_local_var->is_static = is_static;
    method_info_local_var->is_virtual = is_virtual;
    method_info_local_var->is_assembly = is_assembly;
    method_info_local_var->is_family = is_family;
    method_info_local_var->is_family_and_assembly = is_family_and_assembly;
    method_info_local_var->is_family_or_assembly = is_family_or_assembly;
    method_info_local_var->is_private = is_private;
    method_info_local_var->is_public = is_public;
    method_info_local_var->is_constructed_generic_method = is_constructed_generic_method;
    method_info_local_var->is_generic_method = is_generic_method;
    method_info_local_var->is_generic_method_definition = is_generic_method_definition;
    method_info_local_var->contains_generic_parameters = contains_generic_parameters;
    method_info_local_var->method_handle = method_handle;
    method_info_local_var->is_security_critical = is_security_critical;
    method_info_local_var->is_security_safe_critical = is_security_safe_critical;
    method_info_local_var->is_security_transparent = is_security_transparent;
    method_info_local_var->member_type = member_type;
    method_info_local_var->return_parameter = return_parameter;
    method_info_local_var->return_type = return_type;
    method_info_local_var->return_type_custom_attributes = return_type_custom_attributes;

    return method_info_local_var;
}


void method_info_free(method_info_t *method_info) {
    if(NULL == method_info){
        return ;
    }
    listEntry_t *listEntry;
    if (method_info->name) {
        free(method_info->name);
        method_info->name = NULL;
    }
    if (method_info->declaring_type) {
        type_free(method_info->declaring_type);
        method_info->declaring_type = NULL;
    }
    if (method_info->reflected_type) {
        type_free(method_info->reflected_type);
        method_info->reflected_type = NULL;
    }
    if (method_info->module) {
        module_free(method_info->module);
        method_info->module = NULL;
    }
    if (method_info->custom_attributes) {
        list_ForEach(listEntry, method_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(method_info->custom_attributes);
        method_info->custom_attributes = NULL;
    }
    if (method_info->method_handle) {
        runtime_method_handle_free(method_info->method_handle);
        method_info->method_handle = NULL;
    }
    if (method_info->return_parameter) {
        parameter_info_free(method_info->return_parameter);
        method_info->return_parameter = NULL;
    }
    if (method_info->return_type) {
        type_free(method_info->return_type);
        method_info->return_type = NULL;
    }
    if (method_info->return_type_custom_attributes) {
        object_free(method_info->return_type_custom_attributes);
        method_info->return_type_custom_attributes = NULL;
    }
    free(method_info);
}

cJSON *method_info_convertToJSON(method_info_t *method_info) {
    cJSON *item = cJSON_CreateObject();

    // method_info->name
    if(method_info->name) {
    if(cJSON_AddStringToObject(item, "name", method_info->name) == NULL) {
    goto fail; //String
    }
    }


    // method_info->declaring_type
    if(method_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(method_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->reflected_type
    if(method_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(method_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->module
    if(method_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(method_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->custom_attributes
    if(method_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (method_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, method_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // method_info->is_collectible
    if(method_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", method_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->metadata_token
    if(method_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", method_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // method_info->attributes
    if(method_info->attributes != contentservice_method_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesmethod_info_ToString(method_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_info->method_implementation_flags
    if(method_info->method_implementation_flags != contentservice_method_info_METHODIMPLEMENTATIONFLAGS_NULL) {
    if(cJSON_AddStringToObject(item, "methodImplementationFlags", method_implementation_flagsmethod_info_ToString(method_info->method_implementation_flags)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_info->calling_convention
    if(method_info->calling_convention != contentservice_method_info_CALLINGCONVENTION_NULL) {
    if(cJSON_AddStringToObject(item, "callingConvention", calling_conventionmethod_info_ToString(method_info->calling_convention)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_info->is_abstract
    if(method_info->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", method_info->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_constructor
    if(method_info->is_constructor) {
    if(cJSON_AddBoolToObject(item, "isConstructor", method_info->is_constructor) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_final
    if(method_info->is_final) {
    if(cJSON_AddBoolToObject(item, "isFinal", method_info->is_final) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_hide_by_sig
    if(method_info->is_hide_by_sig) {
    if(cJSON_AddBoolToObject(item, "isHideBySig", method_info->is_hide_by_sig) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_special_name
    if(method_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", method_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_static
    if(method_info->is_static) {
    if(cJSON_AddBoolToObject(item, "isStatic", method_info->is_static) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_virtual
    if(method_info->is_virtual) {
    if(cJSON_AddBoolToObject(item, "isVirtual", method_info->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_assembly
    if(method_info->is_assembly) {
    if(cJSON_AddBoolToObject(item, "isAssembly", method_info->is_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_family
    if(method_info->is_family) {
    if(cJSON_AddBoolToObject(item, "isFamily", method_info->is_family) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_family_and_assembly
    if(method_info->is_family_and_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyAndAssembly", method_info->is_family_and_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_family_or_assembly
    if(method_info->is_family_or_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyOrAssembly", method_info->is_family_or_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_private
    if(method_info->is_private) {
    if(cJSON_AddBoolToObject(item, "isPrivate", method_info->is_private) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_public
    if(method_info->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", method_info->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_constructed_generic_method
    if(method_info->is_constructed_generic_method) {
    if(cJSON_AddBoolToObject(item, "isConstructedGenericMethod", method_info->is_constructed_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_generic_method
    if(method_info->is_generic_method) {
    if(cJSON_AddBoolToObject(item, "isGenericMethod", method_info->is_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_generic_method_definition
    if(method_info->is_generic_method_definition) {
    if(cJSON_AddBoolToObject(item, "isGenericMethodDefinition", method_info->is_generic_method_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->contains_generic_parameters
    if(method_info->contains_generic_parameters) {
    if(cJSON_AddBoolToObject(item, "containsGenericParameters", method_info->contains_generic_parameters) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->method_handle
    if(method_info->method_handle) {
    cJSON *method_handle_local_JSON = runtime_method_handle_convertToJSON(method_info->method_handle);
    if(method_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "methodHandle", method_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->is_security_critical
    if(method_info->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", method_info->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_security_safe_critical
    if(method_info->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", method_info->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->is_security_transparent
    if(method_info->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", method_info->is_security_transparent) == NULL) {
    goto fail; //Bool
    }
    }


    // method_info->member_type
    if(method_info->member_type != contentservice_method_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typemethod_info_ToString(method_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_info->return_parameter
    if(method_info->return_parameter) {
    cJSON *return_parameter_local_JSON = parameter_info_convertToJSON(method_info->return_parameter);
    if(return_parameter_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "returnParameter", return_parameter_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->return_type
    if(method_info->return_type) {
    cJSON *return_type_local_JSON = type_convertToJSON(method_info->return_type);
    if(return_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "returnType", return_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_info->return_type_custom_attributes
    if(method_info->return_type_custom_attributes) {
    cJSON *return_type_custom_attributes_object = object_convertToJSON(method_info->return_type_custom_attributes);
    if(return_type_custom_attributes_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "returnTypeCustomAttributes", return_type_custom_attributes_object);
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

method_info_t *method_info_parseFromJSON(cJSON *method_infoJSON){

    method_info_t *method_info_local_var = NULL;

    // define the local variable for method_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for method_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for method_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for method_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for method_info->method_handle
    runtime_method_handle_t *method_handle_local_nonprim = NULL;

    // define the local variable for method_info->return_parameter
    parameter_info_t *return_parameter_local_nonprim = NULL;

    // define the local variable for method_info->return_type
    type_t *return_type_local_nonprim = NULL;

    // method_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // method_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // method_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // method_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // method_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "customAttributes");
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

    // method_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // method_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // method_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "attributes");
    contentservice_method_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = method_info_attributes_FromString(attributes->valuestring);
    }

    // method_info->method_implementation_flags
    cJSON *method_implementation_flags = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "methodImplementationFlags");
    contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flagsVariable;
    if (method_implementation_flags) { 
    if(!cJSON_IsString(method_implementation_flags))
    {
    goto end; //Enum
    }
    method_implementation_flagsVariable = method_info_method_implementation_flags_FromString(method_implementation_flags->valuestring);
    }

    // method_info->calling_convention
    cJSON *calling_convention = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "callingConvention");
    contentservice_method_info_CALLINGCONVENTION_e calling_conventionVariable;
    if (calling_convention) { 
    if(!cJSON_IsString(calling_convention))
    {
    goto end; //Enum
    }
    calling_conventionVariable = method_info_calling_convention_FromString(calling_convention->valuestring);
    }

    // method_info->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // method_info->is_constructor
    cJSON *is_constructor = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isConstructor");
    if (is_constructor) { 
    if(!cJSON_IsBool(is_constructor))
    {
    goto end; //Bool
    }
    }

    // method_info->is_final
    cJSON *is_final = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isFinal");
    if (is_final) { 
    if(!cJSON_IsBool(is_final))
    {
    goto end; //Bool
    }
    }

    // method_info->is_hide_by_sig
    cJSON *is_hide_by_sig = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isHideBySig");
    if (is_hide_by_sig) { 
    if(!cJSON_IsBool(is_hide_by_sig))
    {
    goto end; //Bool
    }
    }

    // method_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // method_info->is_static
    cJSON *is_static = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isStatic");
    if (is_static) { 
    if(!cJSON_IsBool(is_static))
    {
    goto end; //Bool
    }
    }

    // method_info->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isVirtual");
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // method_info->is_assembly
    cJSON *is_assembly = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isAssembly");
    if (is_assembly) { 
    if(!cJSON_IsBool(is_assembly))
    {
    goto end; //Bool
    }
    }

    // method_info->is_family
    cJSON *is_family = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isFamily");
    if (is_family) { 
    if(!cJSON_IsBool(is_family))
    {
    goto end; //Bool
    }
    }

    // method_info->is_family_and_assembly
    cJSON *is_family_and_assembly = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isFamilyAndAssembly");
    if (is_family_and_assembly) { 
    if(!cJSON_IsBool(is_family_and_assembly))
    {
    goto end; //Bool
    }
    }

    // method_info->is_family_or_assembly
    cJSON *is_family_or_assembly = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isFamilyOrAssembly");
    if (is_family_or_assembly) { 
    if(!cJSON_IsBool(is_family_or_assembly))
    {
    goto end; //Bool
    }
    }

    // method_info->is_private
    cJSON *is_private = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isPrivate");
    if (is_private) { 
    if(!cJSON_IsBool(is_private))
    {
    goto end; //Bool
    }
    }

    // method_info->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // method_info->is_constructed_generic_method
    cJSON *is_constructed_generic_method = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isConstructedGenericMethod");
    if (is_constructed_generic_method) { 
    if(!cJSON_IsBool(is_constructed_generic_method))
    {
    goto end; //Bool
    }
    }

    // method_info->is_generic_method
    cJSON *is_generic_method = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isGenericMethod");
    if (is_generic_method) { 
    if(!cJSON_IsBool(is_generic_method))
    {
    goto end; //Bool
    }
    }

    // method_info->is_generic_method_definition
    cJSON *is_generic_method_definition = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isGenericMethodDefinition");
    if (is_generic_method_definition) { 
    if(!cJSON_IsBool(is_generic_method_definition))
    {
    goto end; //Bool
    }
    }

    // method_info->contains_generic_parameters
    cJSON *contains_generic_parameters = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "containsGenericParameters");
    if (contains_generic_parameters) { 
    if(!cJSON_IsBool(contains_generic_parameters))
    {
    goto end; //Bool
    }
    }

    // method_info->method_handle
    cJSON *method_handle = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "methodHandle");
    if (method_handle) { 
    method_handle_local_nonprim = runtime_method_handle_parseFromJSON(method_handle); //nonprimitive
    }

    // method_info->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // method_info->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // method_info->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }

    // method_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "memberType");
    contentservice_method_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = method_info_member_type_FromString(member_type->valuestring);
    }

    // method_info->return_parameter
    cJSON *return_parameter = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "returnParameter");
    if (return_parameter) { 
    return_parameter_local_nonprim = parameter_info_parseFromJSON(return_parameter); //nonprimitive
    }

    // method_info->return_type
    cJSON *return_type = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "returnType");
    if (return_type) { 
    return_type_local_nonprim = type_parseFromJSON(return_type); //nonprimitive
    }

    // method_info->return_type_custom_attributes
    cJSON *return_type_custom_attributes = cJSON_GetObjectItemCaseSensitive(method_infoJSON, "returnTypeCustomAttributes");
    object_t *return_type_custom_attributes_local_object = NULL;
    if (return_type_custom_attributes) { 
    return_type_custom_attributes_local_object = object_parseFromJSON(return_type_custom_attributes); //object
    }


    method_info_local_var = method_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        attributes ? attributesVariable : contentservice_method_info_ATTRIBUTES_NULL,
        method_implementation_flags ? method_implementation_flagsVariable : contentservice_method_info_METHODIMPLEMENTATIONFLAGS_NULL,
        calling_convention ? calling_conventionVariable : contentservice_method_info_CALLINGCONVENTION_NULL,
        is_abstract ? is_abstract->valueint : 0,
        is_constructor ? is_constructor->valueint : 0,
        is_final ? is_final->valueint : 0,
        is_hide_by_sig ? is_hide_by_sig->valueint : 0,
        is_special_name ? is_special_name->valueint : 0,
        is_static ? is_static->valueint : 0,
        is_virtual ? is_virtual->valueint : 0,
        is_assembly ? is_assembly->valueint : 0,
        is_family ? is_family->valueint : 0,
        is_family_and_assembly ? is_family_and_assembly->valueint : 0,
        is_family_or_assembly ? is_family_or_assembly->valueint : 0,
        is_private ? is_private->valueint : 0,
        is_public ? is_public->valueint : 0,
        is_constructed_generic_method ? is_constructed_generic_method->valueint : 0,
        is_generic_method ? is_generic_method->valueint : 0,
        is_generic_method_definition ? is_generic_method_definition->valueint : 0,
        contains_generic_parameters ? contains_generic_parameters->valueint : 0,
        method_handle ? method_handle_local_nonprim : NULL,
        is_security_critical ? is_security_critical->valueint : 0,
        is_security_safe_critical ? is_security_safe_critical->valueint : 0,
        is_security_transparent ? is_security_transparent->valueint : 0,
        member_type ? member_typeVariable : contentservice_method_info_MEMBERTYPE_NULL,
        return_parameter ? return_parameter_local_nonprim : NULL,
        return_type ? return_type_local_nonprim : NULL,
        return_type_custom_attributes ? return_type_custom_attributes_local_object : NULL
        );

    return method_info_local_var;
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
    if (method_handle_local_nonprim) {
        runtime_method_handle_free(method_handle_local_nonprim);
        method_handle_local_nonprim = NULL;
    }
    if (return_parameter_local_nonprim) {
        parameter_info_free(return_parameter_local_nonprim);
        return_parameter_local_nonprim = NULL;
    }
    if (return_type_local_nonprim) {
        type_free(return_type_local_nonprim);
        return_type_local_nonprim = NULL;
    }
    return NULL;

}
