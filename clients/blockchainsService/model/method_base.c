#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "method_base.h"


char* method_base_member_type_ToString(blockchainsservice_method_base_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

blockchainsservice_method_base_MEMBERTYPE_e method_base_member_type_FromString(char* member_type){
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
char* method_base_attributes_ToString(blockchainsservice_method_base_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "MemberAccessMask", "UnmanagedExport", "Static", "Final", "Virtual", "HideBySig", "NewSlot", "CheckAccessOnOverride", "Abstract", "SpecialName", "RTSpecialName", "PinvokeImpl", "HasSecurity", "RequireSecObject", "ReservedMask" };
    return attributesArray[attributes];
}

blockchainsservice_method_base_ATTRIBUTES_e method_base_attributes_FromString(char* attributes){
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
char* method_base_method_implementation_flags_ToString(blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags) {
    char* method_implementation_flagsArray[] =  { "NULL", "IL", "Native", "OPTIL", "CodeTypeMask", "ManagedMask", "NoInlining", "ForwardRef", "Synchronized", "NoOptimization", "PreserveSig", "AggressiveInlining", "AggressiveOptimization", "InternalCall", "Async", "MaxMethodImplVal" };
    return method_implementation_flagsArray[method_implementation_flags];
}

blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_base_method_implementation_flags_FromString(char* method_implementation_flags){
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
char* method_base_calling_convention_ToString(blockchainsservice_method_base_CALLINGCONVENTION_e calling_convention) {
    char* calling_conventionArray[] =  { "NULL", "Standard", "VarArgs", "Any", "HasThis", "ExplicitThis" };
    return calling_conventionArray[calling_convention];
}

blockchainsservice_method_base_CALLINGCONVENTION_e method_base_calling_convention_FromString(char* calling_convention){
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

method_base_t *method_base_create(
    blockchainsservice_method_base_MEMBERTYPE_e member_type,
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_method_base_ATTRIBUTES_e attributes,
    blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags,
    blockchainsservice_method_base_CALLINGCONVENTION_e calling_convention,
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
    int is_security_transparent
    ) {
    method_base_t *method_base_local_var = malloc(sizeof(method_base_t));
    if (!method_base_local_var) {
        return NULL;
    }
    method_base_local_var->member_type = member_type;
    method_base_local_var->name = name;
    method_base_local_var->declaring_type = declaring_type;
    method_base_local_var->reflected_type = reflected_type;
    method_base_local_var->module = module;
    method_base_local_var->custom_attributes = custom_attributes;
    method_base_local_var->is_collectible = is_collectible;
    method_base_local_var->metadata_token = metadata_token;
    method_base_local_var->attributes = attributes;
    method_base_local_var->method_implementation_flags = method_implementation_flags;
    method_base_local_var->calling_convention = calling_convention;
    method_base_local_var->is_abstract = is_abstract;
    method_base_local_var->is_constructor = is_constructor;
    method_base_local_var->is_final = is_final;
    method_base_local_var->is_hide_by_sig = is_hide_by_sig;
    method_base_local_var->is_special_name = is_special_name;
    method_base_local_var->is_static = is_static;
    method_base_local_var->is_virtual = is_virtual;
    method_base_local_var->is_assembly = is_assembly;
    method_base_local_var->is_family = is_family;
    method_base_local_var->is_family_and_assembly = is_family_and_assembly;
    method_base_local_var->is_family_or_assembly = is_family_or_assembly;
    method_base_local_var->is_private = is_private;
    method_base_local_var->is_public = is_public;
    method_base_local_var->is_constructed_generic_method = is_constructed_generic_method;
    method_base_local_var->is_generic_method = is_generic_method;
    method_base_local_var->is_generic_method_definition = is_generic_method_definition;
    method_base_local_var->contains_generic_parameters = contains_generic_parameters;
    method_base_local_var->method_handle = method_handle;
    method_base_local_var->is_security_critical = is_security_critical;
    method_base_local_var->is_security_safe_critical = is_security_safe_critical;
    method_base_local_var->is_security_transparent = is_security_transparent;

    return method_base_local_var;
}


void method_base_free(method_base_t *method_base) {
    if(NULL == method_base){
        return ;
    }
    listEntry_t *listEntry;
    if (method_base->name) {
        free(method_base->name);
        method_base->name = NULL;
    }
    if (method_base->declaring_type) {
        type_free(method_base->declaring_type);
        method_base->declaring_type = NULL;
    }
    if (method_base->reflected_type) {
        type_free(method_base->reflected_type);
        method_base->reflected_type = NULL;
    }
    if (method_base->module) {
        module_free(method_base->module);
        method_base->module = NULL;
    }
    if (method_base->custom_attributes) {
        list_ForEach(listEntry, method_base->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(method_base->custom_attributes);
        method_base->custom_attributes = NULL;
    }
    if (method_base->method_handle) {
        runtime_method_handle_free(method_base->method_handle);
        method_base->method_handle = NULL;
    }
    free(method_base);
}

cJSON *method_base_convertToJSON(method_base_t *method_base) {
    cJSON *item = cJSON_CreateObject();

    // method_base->member_type
    if(method_base->member_type != blockchainsservice_method_base_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typemethod_base_ToString(method_base->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_base->name
    if(method_base->name) {
    if(cJSON_AddStringToObject(item, "name", method_base->name) == NULL) {
    goto fail; //String
    }
    }


    // method_base->declaring_type
    if(method_base->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(method_base->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_base->reflected_type
    if(method_base->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(method_base->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_base->module
    if(method_base->module) {
    cJSON *module_local_JSON = module_convertToJSON(method_base->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_base->custom_attributes
    if(method_base->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (method_base->custom_attributes) {
    list_ForEach(custom_attributesListEntry, method_base->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // method_base->is_collectible
    if(method_base->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", method_base->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->metadata_token
    if(method_base->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", method_base->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // method_base->attributes
    if(method_base->attributes != blockchainsservice_method_base_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesmethod_base_ToString(method_base->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_base->method_implementation_flags
    if(method_base->method_implementation_flags != blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_NULL) {
    if(cJSON_AddStringToObject(item, "methodImplementationFlags", method_implementation_flagsmethod_base_ToString(method_base->method_implementation_flags)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_base->calling_convention
    if(method_base->calling_convention != blockchainsservice_method_base_CALLINGCONVENTION_NULL) {
    if(cJSON_AddStringToObject(item, "callingConvention", calling_conventionmethod_base_ToString(method_base->calling_convention)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // method_base->is_abstract
    if(method_base->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", method_base->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_constructor
    if(method_base->is_constructor) {
    if(cJSON_AddBoolToObject(item, "isConstructor", method_base->is_constructor) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_final
    if(method_base->is_final) {
    if(cJSON_AddBoolToObject(item, "isFinal", method_base->is_final) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_hide_by_sig
    if(method_base->is_hide_by_sig) {
    if(cJSON_AddBoolToObject(item, "isHideBySig", method_base->is_hide_by_sig) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_special_name
    if(method_base->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", method_base->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_static
    if(method_base->is_static) {
    if(cJSON_AddBoolToObject(item, "isStatic", method_base->is_static) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_virtual
    if(method_base->is_virtual) {
    if(cJSON_AddBoolToObject(item, "isVirtual", method_base->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_assembly
    if(method_base->is_assembly) {
    if(cJSON_AddBoolToObject(item, "isAssembly", method_base->is_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_family
    if(method_base->is_family) {
    if(cJSON_AddBoolToObject(item, "isFamily", method_base->is_family) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_family_and_assembly
    if(method_base->is_family_and_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyAndAssembly", method_base->is_family_and_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_family_or_assembly
    if(method_base->is_family_or_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyOrAssembly", method_base->is_family_or_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_private
    if(method_base->is_private) {
    if(cJSON_AddBoolToObject(item, "isPrivate", method_base->is_private) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_public
    if(method_base->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", method_base->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_constructed_generic_method
    if(method_base->is_constructed_generic_method) {
    if(cJSON_AddBoolToObject(item, "isConstructedGenericMethod", method_base->is_constructed_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_generic_method
    if(method_base->is_generic_method) {
    if(cJSON_AddBoolToObject(item, "isGenericMethod", method_base->is_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_generic_method_definition
    if(method_base->is_generic_method_definition) {
    if(cJSON_AddBoolToObject(item, "isGenericMethodDefinition", method_base->is_generic_method_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->contains_generic_parameters
    if(method_base->contains_generic_parameters) {
    if(cJSON_AddBoolToObject(item, "containsGenericParameters", method_base->contains_generic_parameters) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->method_handle
    if(method_base->method_handle) {
    cJSON *method_handle_local_JSON = runtime_method_handle_convertToJSON(method_base->method_handle);
    if(method_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "methodHandle", method_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // method_base->is_security_critical
    if(method_base->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", method_base->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_security_safe_critical
    if(method_base->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", method_base->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // method_base->is_security_transparent
    if(method_base->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", method_base->is_security_transparent) == NULL) {
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

method_base_t *method_base_parseFromJSON(cJSON *method_baseJSON){

    method_base_t *method_base_local_var = NULL;

    // define the local variable for method_base->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for method_base->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for method_base->module
    module_t *module_local_nonprim = NULL;

    // define the local list for method_base->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for method_base->method_handle
    runtime_method_handle_t *method_handle_local_nonprim = NULL;

    // method_base->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "memberType");
    blockchainsservice_method_base_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = method_base_member_type_FromString(member_type->valuestring);
    }

    // method_base->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // method_base->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // method_base->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // method_base->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // method_base->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "customAttributes");
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

    // method_base->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // method_base->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // method_base->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "attributes");
    blockchainsservice_method_base_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = method_base_attributes_FromString(attributes->valuestring);
    }

    // method_base->method_implementation_flags
    cJSON *method_implementation_flags = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "methodImplementationFlags");
    blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_implementation_flagsVariable;
    if (method_implementation_flags) { 
    if(!cJSON_IsString(method_implementation_flags))
    {
    goto end; //Enum
    }
    method_implementation_flagsVariable = method_base_method_implementation_flags_FromString(method_implementation_flags->valuestring);
    }

    // method_base->calling_convention
    cJSON *calling_convention = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "callingConvention");
    blockchainsservice_method_base_CALLINGCONVENTION_e calling_conventionVariable;
    if (calling_convention) { 
    if(!cJSON_IsString(calling_convention))
    {
    goto end; //Enum
    }
    calling_conventionVariable = method_base_calling_convention_FromString(calling_convention->valuestring);
    }

    // method_base->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // method_base->is_constructor
    cJSON *is_constructor = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isConstructor");
    if (is_constructor) { 
    if(!cJSON_IsBool(is_constructor))
    {
    goto end; //Bool
    }
    }

    // method_base->is_final
    cJSON *is_final = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isFinal");
    if (is_final) { 
    if(!cJSON_IsBool(is_final))
    {
    goto end; //Bool
    }
    }

    // method_base->is_hide_by_sig
    cJSON *is_hide_by_sig = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isHideBySig");
    if (is_hide_by_sig) { 
    if(!cJSON_IsBool(is_hide_by_sig))
    {
    goto end; //Bool
    }
    }

    // method_base->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // method_base->is_static
    cJSON *is_static = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isStatic");
    if (is_static) { 
    if(!cJSON_IsBool(is_static))
    {
    goto end; //Bool
    }
    }

    // method_base->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isVirtual");
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // method_base->is_assembly
    cJSON *is_assembly = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isAssembly");
    if (is_assembly) { 
    if(!cJSON_IsBool(is_assembly))
    {
    goto end; //Bool
    }
    }

    // method_base->is_family
    cJSON *is_family = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isFamily");
    if (is_family) { 
    if(!cJSON_IsBool(is_family))
    {
    goto end; //Bool
    }
    }

    // method_base->is_family_and_assembly
    cJSON *is_family_and_assembly = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isFamilyAndAssembly");
    if (is_family_and_assembly) { 
    if(!cJSON_IsBool(is_family_and_assembly))
    {
    goto end; //Bool
    }
    }

    // method_base->is_family_or_assembly
    cJSON *is_family_or_assembly = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isFamilyOrAssembly");
    if (is_family_or_assembly) { 
    if(!cJSON_IsBool(is_family_or_assembly))
    {
    goto end; //Bool
    }
    }

    // method_base->is_private
    cJSON *is_private = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isPrivate");
    if (is_private) { 
    if(!cJSON_IsBool(is_private))
    {
    goto end; //Bool
    }
    }

    // method_base->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // method_base->is_constructed_generic_method
    cJSON *is_constructed_generic_method = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isConstructedGenericMethod");
    if (is_constructed_generic_method) { 
    if(!cJSON_IsBool(is_constructed_generic_method))
    {
    goto end; //Bool
    }
    }

    // method_base->is_generic_method
    cJSON *is_generic_method = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isGenericMethod");
    if (is_generic_method) { 
    if(!cJSON_IsBool(is_generic_method))
    {
    goto end; //Bool
    }
    }

    // method_base->is_generic_method_definition
    cJSON *is_generic_method_definition = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isGenericMethodDefinition");
    if (is_generic_method_definition) { 
    if(!cJSON_IsBool(is_generic_method_definition))
    {
    goto end; //Bool
    }
    }

    // method_base->contains_generic_parameters
    cJSON *contains_generic_parameters = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "containsGenericParameters");
    if (contains_generic_parameters) { 
    if(!cJSON_IsBool(contains_generic_parameters))
    {
    goto end; //Bool
    }
    }

    // method_base->method_handle
    cJSON *method_handle = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "methodHandle");
    if (method_handle) { 
    method_handle_local_nonprim = runtime_method_handle_parseFromJSON(method_handle); //nonprimitive
    }

    // method_base->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // method_base->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // method_base->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(method_baseJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }


    method_base_local_var = method_base_create (
        member_type ? member_typeVariable : blockchainsservice_method_base_MEMBERTYPE_NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        attributes ? attributesVariable : blockchainsservice_method_base_ATTRIBUTES_NULL,
        method_implementation_flags ? method_implementation_flagsVariable : blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_NULL,
        calling_convention ? calling_conventionVariable : blockchainsservice_method_base_CALLINGCONVENTION_NULL,
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
        is_security_transparent ? is_security_transparent->valueint : 0
        );

    return method_base_local_var;
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
    return NULL;

}
