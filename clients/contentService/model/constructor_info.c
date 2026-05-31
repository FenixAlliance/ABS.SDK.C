#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "constructor_info.h"


char* constructor_info_attributes_ToString(contentservice_constructor_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "PrivateScope", "Private", "FamANDAssem", "Assembly", "Family", "FamORAssem", "Public", "MemberAccessMask", "UnmanagedExport", "Static", "Final", "Virtual", "HideBySig", "NewSlot", "CheckAccessOnOverride", "Abstract", "SpecialName", "RTSpecialName", "PinvokeImpl", "HasSecurity", "RequireSecObject", "ReservedMask" };
    return attributesArray[attributes];
}

contentservice_constructor_info_ATTRIBUTES_e constructor_info_attributes_FromString(char* attributes){
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
char* constructor_info_method_implementation_flags_ToString(contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags) {
    char* method_implementation_flagsArray[] =  { "NULL", "IL", "Native", "OPTIL", "CodeTypeMask", "ManagedMask", "NoInlining", "ForwardRef", "Synchronized", "NoOptimization", "PreserveSig", "AggressiveInlining", "AggressiveOptimization", "InternalCall", "Async", "MaxMethodImplVal" };
    return method_implementation_flagsArray[method_implementation_flags];
}

contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e constructor_info_method_implementation_flags_FromString(char* method_implementation_flags){
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
char* constructor_info_calling_convention_ToString(contentservice_constructor_info_CALLINGCONVENTION_e calling_convention) {
    char* calling_conventionArray[] =  { "NULL", "Standard", "VarArgs", "Any", "HasThis", "ExplicitThis" };
    return calling_conventionArray[calling_convention];
}

contentservice_constructor_info_CALLINGCONVENTION_e constructor_info_calling_convention_FromString(char* calling_convention){
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
char* constructor_info_member_type_ToString(contentservice_constructor_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_constructor_info_MEMBERTYPE_e constructor_info_member_type_FromString(char* member_type){
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

constructor_info_t *constructor_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_constructor_info_ATTRIBUTES_e attributes,
    contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags,
    contentservice_constructor_info_CALLINGCONVENTION_e calling_convention,
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
    contentservice_constructor_info_MEMBERTYPE_e member_type
    ) {
    constructor_info_t *constructor_info_local_var = malloc(sizeof(constructor_info_t));
    if (!constructor_info_local_var) {
        return NULL;
    }
    constructor_info_local_var->name = name;
    constructor_info_local_var->declaring_type = declaring_type;
    constructor_info_local_var->reflected_type = reflected_type;
    constructor_info_local_var->module = module;
    constructor_info_local_var->custom_attributes = custom_attributes;
    constructor_info_local_var->is_collectible = is_collectible;
    constructor_info_local_var->metadata_token = metadata_token;
    constructor_info_local_var->attributes = attributes;
    constructor_info_local_var->method_implementation_flags = method_implementation_flags;
    constructor_info_local_var->calling_convention = calling_convention;
    constructor_info_local_var->is_abstract = is_abstract;
    constructor_info_local_var->is_constructor = is_constructor;
    constructor_info_local_var->is_final = is_final;
    constructor_info_local_var->is_hide_by_sig = is_hide_by_sig;
    constructor_info_local_var->is_special_name = is_special_name;
    constructor_info_local_var->is_static = is_static;
    constructor_info_local_var->is_virtual = is_virtual;
    constructor_info_local_var->is_assembly = is_assembly;
    constructor_info_local_var->is_family = is_family;
    constructor_info_local_var->is_family_and_assembly = is_family_and_assembly;
    constructor_info_local_var->is_family_or_assembly = is_family_or_assembly;
    constructor_info_local_var->is_private = is_private;
    constructor_info_local_var->is_public = is_public;
    constructor_info_local_var->is_constructed_generic_method = is_constructed_generic_method;
    constructor_info_local_var->is_generic_method = is_generic_method;
    constructor_info_local_var->is_generic_method_definition = is_generic_method_definition;
    constructor_info_local_var->contains_generic_parameters = contains_generic_parameters;
    constructor_info_local_var->method_handle = method_handle;
    constructor_info_local_var->is_security_critical = is_security_critical;
    constructor_info_local_var->is_security_safe_critical = is_security_safe_critical;
    constructor_info_local_var->is_security_transparent = is_security_transparent;
    constructor_info_local_var->member_type = member_type;

    return constructor_info_local_var;
}


void constructor_info_free(constructor_info_t *constructor_info) {
    if(NULL == constructor_info){
        return ;
    }
    listEntry_t *listEntry;
    if (constructor_info->name) {
        free(constructor_info->name);
        constructor_info->name = NULL;
    }
    if (constructor_info->declaring_type) {
        type_free(constructor_info->declaring_type);
        constructor_info->declaring_type = NULL;
    }
    if (constructor_info->reflected_type) {
        type_free(constructor_info->reflected_type);
        constructor_info->reflected_type = NULL;
    }
    if (constructor_info->module) {
        module_free(constructor_info->module);
        constructor_info->module = NULL;
    }
    if (constructor_info->custom_attributes) {
        list_ForEach(listEntry, constructor_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(constructor_info->custom_attributes);
        constructor_info->custom_attributes = NULL;
    }
    if (constructor_info->method_handle) {
        runtime_method_handle_free(constructor_info->method_handle);
        constructor_info->method_handle = NULL;
    }
    free(constructor_info);
}

cJSON *constructor_info_convertToJSON(constructor_info_t *constructor_info) {
    cJSON *item = cJSON_CreateObject();

    // constructor_info->name
    if(constructor_info->name) {
    if(cJSON_AddStringToObject(item, "name", constructor_info->name) == NULL) {
    goto fail; //String
    }
    }


    // constructor_info->declaring_type
    if(constructor_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(constructor_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // constructor_info->reflected_type
    if(constructor_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(constructor_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // constructor_info->module
    if(constructor_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(constructor_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // constructor_info->custom_attributes
    if(constructor_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (constructor_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, constructor_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // constructor_info->is_collectible
    if(constructor_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", constructor_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->metadata_token
    if(constructor_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", constructor_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // constructor_info->attributes
    if(constructor_info->attributes != contentservice_constructor_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributesconstructor_info_ToString(constructor_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // constructor_info->method_implementation_flags
    if(constructor_info->method_implementation_flags != contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NULL) {
    if(cJSON_AddStringToObject(item, "methodImplementationFlags", method_implementation_flagsconstructor_info_ToString(constructor_info->method_implementation_flags)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // constructor_info->calling_convention
    if(constructor_info->calling_convention != contentservice_constructor_info_CALLINGCONVENTION_NULL) {
    if(cJSON_AddStringToObject(item, "callingConvention", calling_conventionconstructor_info_ToString(constructor_info->calling_convention)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // constructor_info->is_abstract
    if(constructor_info->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", constructor_info->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_constructor
    if(constructor_info->is_constructor) {
    if(cJSON_AddBoolToObject(item, "isConstructor", constructor_info->is_constructor) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_final
    if(constructor_info->is_final) {
    if(cJSON_AddBoolToObject(item, "isFinal", constructor_info->is_final) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_hide_by_sig
    if(constructor_info->is_hide_by_sig) {
    if(cJSON_AddBoolToObject(item, "isHideBySig", constructor_info->is_hide_by_sig) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_special_name
    if(constructor_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", constructor_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_static
    if(constructor_info->is_static) {
    if(cJSON_AddBoolToObject(item, "isStatic", constructor_info->is_static) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_virtual
    if(constructor_info->is_virtual) {
    if(cJSON_AddBoolToObject(item, "isVirtual", constructor_info->is_virtual) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_assembly
    if(constructor_info->is_assembly) {
    if(cJSON_AddBoolToObject(item, "isAssembly", constructor_info->is_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_family
    if(constructor_info->is_family) {
    if(cJSON_AddBoolToObject(item, "isFamily", constructor_info->is_family) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_family_and_assembly
    if(constructor_info->is_family_and_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyAndAssembly", constructor_info->is_family_and_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_family_or_assembly
    if(constructor_info->is_family_or_assembly) {
    if(cJSON_AddBoolToObject(item, "isFamilyOrAssembly", constructor_info->is_family_or_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_private
    if(constructor_info->is_private) {
    if(cJSON_AddBoolToObject(item, "isPrivate", constructor_info->is_private) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_public
    if(constructor_info->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", constructor_info->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_constructed_generic_method
    if(constructor_info->is_constructed_generic_method) {
    if(cJSON_AddBoolToObject(item, "isConstructedGenericMethod", constructor_info->is_constructed_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_generic_method
    if(constructor_info->is_generic_method) {
    if(cJSON_AddBoolToObject(item, "isGenericMethod", constructor_info->is_generic_method) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_generic_method_definition
    if(constructor_info->is_generic_method_definition) {
    if(cJSON_AddBoolToObject(item, "isGenericMethodDefinition", constructor_info->is_generic_method_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->contains_generic_parameters
    if(constructor_info->contains_generic_parameters) {
    if(cJSON_AddBoolToObject(item, "containsGenericParameters", constructor_info->contains_generic_parameters) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->method_handle
    if(constructor_info->method_handle) {
    cJSON *method_handle_local_JSON = runtime_method_handle_convertToJSON(constructor_info->method_handle);
    if(method_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "methodHandle", method_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // constructor_info->is_security_critical
    if(constructor_info->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", constructor_info->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_security_safe_critical
    if(constructor_info->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", constructor_info->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->is_security_transparent
    if(constructor_info->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", constructor_info->is_security_transparent) == NULL) {
    goto fail; //Bool
    }
    }


    // constructor_info->member_type
    if(constructor_info->member_type != contentservice_constructor_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typeconstructor_info_ToString(constructor_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

constructor_info_t *constructor_info_parseFromJSON(cJSON *constructor_infoJSON){

    constructor_info_t *constructor_info_local_var = NULL;

    // define the local variable for constructor_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for constructor_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for constructor_info->module
    module_t *module_local_nonprim = NULL;

    // define the local list for constructor_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for constructor_info->method_handle
    runtime_method_handle_t *method_handle_local_nonprim = NULL;

    // constructor_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // constructor_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // constructor_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // constructor_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // constructor_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "customAttributes");
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

    // constructor_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // constructor_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // constructor_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "attributes");
    contentservice_constructor_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = constructor_info_attributes_FromString(attributes->valuestring);
    }

    // constructor_info->method_implementation_flags
    cJSON *method_implementation_flags = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "methodImplementationFlags");
    contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flagsVariable;
    if (method_implementation_flags) { 
    if(!cJSON_IsString(method_implementation_flags))
    {
    goto end; //Enum
    }
    method_implementation_flagsVariable = constructor_info_method_implementation_flags_FromString(method_implementation_flags->valuestring);
    }

    // constructor_info->calling_convention
    cJSON *calling_convention = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "callingConvention");
    contentservice_constructor_info_CALLINGCONVENTION_e calling_conventionVariable;
    if (calling_convention) { 
    if(!cJSON_IsString(calling_convention))
    {
    goto end; //Enum
    }
    calling_conventionVariable = constructor_info_calling_convention_FromString(calling_convention->valuestring);
    }

    // constructor_info->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_constructor
    cJSON *is_constructor = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isConstructor");
    if (is_constructor) { 
    if(!cJSON_IsBool(is_constructor))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_final
    cJSON *is_final = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isFinal");
    if (is_final) { 
    if(!cJSON_IsBool(is_final))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_hide_by_sig
    cJSON *is_hide_by_sig = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isHideBySig");
    if (is_hide_by_sig) { 
    if(!cJSON_IsBool(is_hide_by_sig))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_static
    cJSON *is_static = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isStatic");
    if (is_static) { 
    if(!cJSON_IsBool(is_static))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_virtual
    cJSON *is_virtual = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isVirtual");
    if (is_virtual) { 
    if(!cJSON_IsBool(is_virtual))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_assembly
    cJSON *is_assembly = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isAssembly");
    if (is_assembly) { 
    if(!cJSON_IsBool(is_assembly))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_family
    cJSON *is_family = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isFamily");
    if (is_family) { 
    if(!cJSON_IsBool(is_family))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_family_and_assembly
    cJSON *is_family_and_assembly = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isFamilyAndAssembly");
    if (is_family_and_assembly) { 
    if(!cJSON_IsBool(is_family_and_assembly))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_family_or_assembly
    cJSON *is_family_or_assembly = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isFamilyOrAssembly");
    if (is_family_or_assembly) { 
    if(!cJSON_IsBool(is_family_or_assembly))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_private
    cJSON *is_private = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isPrivate");
    if (is_private) { 
    if(!cJSON_IsBool(is_private))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_constructed_generic_method
    cJSON *is_constructed_generic_method = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isConstructedGenericMethod");
    if (is_constructed_generic_method) { 
    if(!cJSON_IsBool(is_constructed_generic_method))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_generic_method
    cJSON *is_generic_method = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isGenericMethod");
    if (is_generic_method) { 
    if(!cJSON_IsBool(is_generic_method))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_generic_method_definition
    cJSON *is_generic_method_definition = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isGenericMethodDefinition");
    if (is_generic_method_definition) { 
    if(!cJSON_IsBool(is_generic_method_definition))
    {
    goto end; //Bool
    }
    }

    // constructor_info->contains_generic_parameters
    cJSON *contains_generic_parameters = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "containsGenericParameters");
    if (contains_generic_parameters) { 
    if(!cJSON_IsBool(contains_generic_parameters))
    {
    goto end; //Bool
    }
    }

    // constructor_info->method_handle
    cJSON *method_handle = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "methodHandle");
    if (method_handle) { 
    method_handle_local_nonprim = runtime_method_handle_parseFromJSON(method_handle); //nonprimitive
    }

    // constructor_info->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // constructor_info->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }

    // constructor_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(constructor_infoJSON, "memberType");
    contentservice_constructor_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = constructor_info_member_type_FromString(member_type->valuestring);
    }


    constructor_info_local_var = constructor_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        declaring_type ? declaring_type_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        attributes ? attributesVariable : contentservice_constructor_info_ATTRIBUTES_NULL,
        method_implementation_flags ? method_implementation_flagsVariable : contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NULL,
        calling_convention ? calling_conventionVariable : contentservice_constructor_info_CALLINGCONVENTION_NULL,
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
        member_type ? member_typeVariable : contentservice_constructor_info_MEMBERTYPE_NULL
        );

    return constructor_info_local_var;
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
