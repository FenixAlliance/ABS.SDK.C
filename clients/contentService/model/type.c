#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "type.h"


char* type_member_type_ToString(contentservice_type_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_type_MEMBERTYPE_e type_member_type_FromString(char* member_type){
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
char* type_generic_parameter_attributes_ToString(contentservice_type_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes) {
    char* generic_parameter_attributesArray[] =  { "NULL", "None", "Covariant", "Contravariant", "VarianceMask", "ReferenceTypeConstraint", "NotNullableValueTypeConstraint", "DefaultConstructorConstraint", "SpecialConstraintMask", "AllowByRefLike" };
    return generic_parameter_attributesArray[generic_parameter_attributes];
}

contentservice_type_GENERICPARAMETERATTRIBUTES_e type_generic_parameter_attributes_FromString(char* generic_parameter_attributes){
    int stringToReturn = 0;
    char *generic_parameter_attributesArray[] =  { "NULL", "None", "Covariant", "Contravariant", "VarianceMask", "ReferenceTypeConstraint", "NotNullableValueTypeConstraint", "DefaultConstructorConstraint", "SpecialConstraintMask", "AllowByRefLike" };
    size_t sizeofArray = sizeof(generic_parameter_attributesArray) / sizeof(generic_parameter_attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(generic_parameter_attributes, generic_parameter_attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* type_attributes_ToString(contentservice_type_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "NotPublic", "Public", "NestedPublic", "NestedPrivate", "NestedFamily", "NestedAssembly", "NestedFamANDAssem", "VisibilityMask", "SequentialLayout", "ExplicitLayout", "LayoutMask", "Interface", "Abstract", "Sealed", "SpecialName", "RTSpecialName", "Import", "Serializable", "WindowsRuntime", "UnicodeClass", "AutoClass", "StringFormatMask", "HasSecurity", "ReservedMask", "BeforeFieldInit", "CustomFormatMask" };
    return attributesArray[attributes];
}

contentservice_type_ATTRIBUTES_e type_attributes_FromString(char* attributes){
    int stringToReturn = 0;
    char *attributesArray[] =  { "NULL", "NotPublic", "Public", "NestedPublic", "NestedPrivate", "NestedFamily", "NestedAssembly", "NestedFamANDAssem", "VisibilityMask", "SequentialLayout", "ExplicitLayout", "LayoutMask", "Interface", "Abstract", "Sealed", "SpecialName", "RTSpecialName", "Import", "Serializable", "WindowsRuntime", "UnicodeClass", "AutoClass", "StringFormatMask", "HasSecurity", "ReservedMask", "BeforeFieldInit", "CustomFormatMask" };
    size_t sizeofArray = sizeof(attributesArray) / sizeof(attributesArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(attributes, attributesArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

type_t *type_create(
    char *name,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_type_MEMBERTYPE_e member_type,
    char *_namespace,
    char *assembly_qualified_name,
    char *full_name,
    assembly_t *assembly,
    module_t *module,
    int is_interface,
    int is_nested,
    type_t *declaring_type,
    method_base_t *declaring_method,
    type_t *reflected_type,
    type_t *underlying_system_type,
    int is_type_definition,
    int is_array,
    int is_by_ref,
    int is_pointer,
    int is_constructed_generic_type,
    int is_generic_parameter,
    int is_generic_type_parameter,
    int is_generic_method_parameter,
    int is_generic_type,
    int is_generic_type_definition,
    int is_sz_array,
    int is_variable_bound_array,
    int is_by_ref_like,
    int is_function_pointer,
    int is_unmanaged_function_pointer,
    int has_element_type,
    list_t *generic_type_arguments,
    int generic_parameter_position,
    contentservice_type_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes,
    contentservice_type_ATTRIBUTES_e attributes,
    int is_abstract,
    int is_import,
    int is_sealed,
    int is_special_name,
    int is_class,
    int is_nested_assembly,
    int is_nested_fam_and_assem,
    int is_nested_family,
    int is_nested_fam_or_assem,
    int is_nested_private,
    int is_nested_public,
    int is_not_public,
    int is_public,
    int is_auto_layout,
    int is_explicit_layout,
    int is_layout_sequential,
    int is_ansi_class,
    int is_auto_class,
    int is_unicode_class,
    int is_com_object,
    int is_contextful,
    int is_enum,
    int is_marshal_by_ref,
    int is_primitive,
    int is_value_type,
    int is_signature_type,
    int is_security_critical,
    int is_security_safe_critical,
    int is_security_transparent,
    struct_layout_attribute_t *struct_layout_attribute,
    constructor_info_t *type_initializer,
    runtime_type_handle_t *type_handle,
    char *guid,
    type_t *base_type,
    int is_serializable,
    int contains_generic_parameters,
    int is_visible
    ) {
    type_t *type_local_var = malloc(sizeof(type_t));
    if (!type_local_var) {
        return NULL;
    }
    type_local_var->name = name;
    type_local_var->custom_attributes = custom_attributes;
    type_local_var->is_collectible = is_collectible;
    type_local_var->metadata_token = metadata_token;
    type_local_var->member_type = member_type;
    type_local_var->_namespace = _namespace;
    type_local_var->assembly_qualified_name = assembly_qualified_name;
    type_local_var->full_name = full_name;
    type_local_var->assembly = assembly;
    type_local_var->module = module;
    type_local_var->is_interface = is_interface;
    type_local_var->is_nested = is_nested;
    type_local_var->declaring_type = declaring_type;
    type_local_var->declaring_method = declaring_method;
    type_local_var->reflected_type = reflected_type;
    type_local_var->underlying_system_type = underlying_system_type;
    type_local_var->is_type_definition = is_type_definition;
    type_local_var->is_array = is_array;
    type_local_var->is_by_ref = is_by_ref;
    type_local_var->is_pointer = is_pointer;
    type_local_var->is_constructed_generic_type = is_constructed_generic_type;
    type_local_var->is_generic_parameter = is_generic_parameter;
    type_local_var->is_generic_type_parameter = is_generic_type_parameter;
    type_local_var->is_generic_method_parameter = is_generic_method_parameter;
    type_local_var->is_generic_type = is_generic_type;
    type_local_var->is_generic_type_definition = is_generic_type_definition;
    type_local_var->is_sz_array = is_sz_array;
    type_local_var->is_variable_bound_array = is_variable_bound_array;
    type_local_var->is_by_ref_like = is_by_ref_like;
    type_local_var->is_function_pointer = is_function_pointer;
    type_local_var->is_unmanaged_function_pointer = is_unmanaged_function_pointer;
    type_local_var->has_element_type = has_element_type;
    type_local_var->generic_type_arguments = generic_type_arguments;
    type_local_var->generic_parameter_position = generic_parameter_position;
    type_local_var->generic_parameter_attributes = generic_parameter_attributes;
    type_local_var->attributes = attributes;
    type_local_var->is_abstract = is_abstract;
    type_local_var->is_import = is_import;
    type_local_var->is_sealed = is_sealed;
    type_local_var->is_special_name = is_special_name;
    type_local_var->is_class = is_class;
    type_local_var->is_nested_assembly = is_nested_assembly;
    type_local_var->is_nested_fam_and_assem = is_nested_fam_and_assem;
    type_local_var->is_nested_family = is_nested_family;
    type_local_var->is_nested_fam_or_assem = is_nested_fam_or_assem;
    type_local_var->is_nested_private = is_nested_private;
    type_local_var->is_nested_public = is_nested_public;
    type_local_var->is_not_public = is_not_public;
    type_local_var->is_public = is_public;
    type_local_var->is_auto_layout = is_auto_layout;
    type_local_var->is_explicit_layout = is_explicit_layout;
    type_local_var->is_layout_sequential = is_layout_sequential;
    type_local_var->is_ansi_class = is_ansi_class;
    type_local_var->is_auto_class = is_auto_class;
    type_local_var->is_unicode_class = is_unicode_class;
    type_local_var->is_com_object = is_com_object;
    type_local_var->is_contextful = is_contextful;
    type_local_var->is_enum = is_enum;
    type_local_var->is_marshal_by_ref = is_marshal_by_ref;
    type_local_var->is_primitive = is_primitive;
    type_local_var->is_value_type = is_value_type;
    type_local_var->is_signature_type = is_signature_type;
    type_local_var->is_security_critical = is_security_critical;
    type_local_var->is_security_safe_critical = is_security_safe_critical;
    type_local_var->is_security_transparent = is_security_transparent;
    type_local_var->struct_layout_attribute = struct_layout_attribute;
    type_local_var->type_initializer = type_initializer;
    type_local_var->type_handle = type_handle;
    type_local_var->guid = guid;
    type_local_var->base_type = base_type;
    type_local_var->is_serializable = is_serializable;
    type_local_var->contains_generic_parameters = contains_generic_parameters;
    type_local_var->is_visible = is_visible;

    return type_local_var;
}


void type_free(type_t *type) {
    if(NULL == type){
        return ;
    }
    listEntry_t *listEntry;
    if (type->name) {
        free(type->name);
        type->name = NULL;
    }
    if (type->custom_attributes) {
        list_ForEach(listEntry, type->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(type->custom_attributes);
        type->custom_attributes = NULL;
    }
    if (type->_namespace) {
        free(type->_namespace);
        type->_namespace = NULL;
    }
    if (type->assembly_qualified_name) {
        free(type->assembly_qualified_name);
        type->assembly_qualified_name = NULL;
    }
    if (type->full_name) {
        free(type->full_name);
        type->full_name = NULL;
    }
    if (type->assembly) {
        assembly_free(type->assembly);
        type->assembly = NULL;
    }
    if (type->module) {
        module_free(type->module);
        type->module = NULL;
    }
    if (type->declaring_type) {
        type_free(type->declaring_type);
        type->declaring_type = NULL;
    }
    if (type->declaring_method) {
        method_base_free(type->declaring_method);
        type->declaring_method = NULL;
    }
    if (type->reflected_type) {
        type_free(type->reflected_type);
        type->reflected_type = NULL;
    }
    if (type->underlying_system_type) {
        type_free(type->underlying_system_type);
        type->underlying_system_type = NULL;
    }
    if (type->generic_type_arguments) {
        list_ForEach(listEntry, type->generic_type_arguments) {
            type_free(listEntry->data);
        }
        list_freeList(type->generic_type_arguments);
        type->generic_type_arguments = NULL;
    }
    if (type->struct_layout_attribute) {
        struct_layout_attribute_free(type->struct_layout_attribute);
        type->struct_layout_attribute = NULL;
    }
    if (type->type_initializer) {
        constructor_info_free(type->type_initializer);
        type->type_initializer = NULL;
    }
    if (type->type_handle) {
        runtime_type_handle_free(type->type_handle);
        type->type_handle = NULL;
    }
    if (type->guid) {
        free(type->guid);
        type->guid = NULL;
    }
    if (type->base_type) {
        type_free(type->base_type);
        type->base_type = NULL;
    }
    free(type);
}

cJSON *type_convertToJSON(type_t *type) {
    cJSON *item = cJSON_CreateObject();

    // type->name
    if(type->name) {
    if(cJSON_AddStringToObject(item, "name", type->name) == NULL) {
    goto fail; //String
    }
    }


    // type->custom_attributes
    if(type->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (type->custom_attributes) {
    list_ForEach(custom_attributesListEntry, type->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // type->is_collectible
    if(type->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", type->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // type->metadata_token
    if(type->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", type->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // type->member_type
    if(type->member_type != contentservice_type_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typetype_ToString(type->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type->_namespace
    if(type->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", type->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // type->assembly_qualified_name
    if(type->assembly_qualified_name) {
    if(cJSON_AddStringToObject(item, "assemblyQualifiedName", type->assembly_qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // type->full_name
    if(type->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", type->full_name) == NULL) {
    goto fail; //String
    }
    }


    // type->assembly
    if(type->assembly) {
    cJSON *assembly_local_JSON = assembly_convertToJSON(type->assembly);
    if(assembly_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assembly", assembly_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->module
    if(type->module) {
    cJSON *module_local_JSON = module_convertToJSON(type->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->is_interface
    if(type->is_interface) {
    if(cJSON_AddBoolToObject(item, "isInterface", type->is_interface) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested
    if(type->is_nested) {
    if(cJSON_AddBoolToObject(item, "isNested", type->is_nested) == NULL) {
    goto fail; //Bool
    }
    }


    // type->declaring_type
    if(type->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(type->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->declaring_method
    if(type->declaring_method) {
    cJSON *declaring_method_local_JSON = method_base_convertToJSON(type->declaring_method);
    if(declaring_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringMethod", declaring_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->reflected_type
    if(type->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(type->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->underlying_system_type
    if(type->underlying_system_type) {
    cJSON *underlying_system_type_local_JSON = type_convertToJSON(type->underlying_system_type);
    if(underlying_system_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "underlyingSystemType", underlying_system_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->is_type_definition
    if(type->is_type_definition) {
    if(cJSON_AddBoolToObject(item, "isTypeDefinition", type->is_type_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_array
    if(type->is_array) {
    if(cJSON_AddBoolToObject(item, "isArray", type->is_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_by_ref
    if(type->is_by_ref) {
    if(cJSON_AddBoolToObject(item, "isByRef", type->is_by_ref) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_pointer
    if(type->is_pointer) {
    if(cJSON_AddBoolToObject(item, "isPointer", type->is_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_constructed_generic_type
    if(type->is_constructed_generic_type) {
    if(cJSON_AddBoolToObject(item, "isConstructedGenericType", type->is_constructed_generic_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_generic_parameter
    if(type->is_generic_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericParameter", type->is_generic_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_generic_type_parameter
    if(type->is_generic_type_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericTypeParameter", type->is_generic_type_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_generic_method_parameter
    if(type->is_generic_method_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericMethodParameter", type->is_generic_method_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_generic_type
    if(type->is_generic_type) {
    if(cJSON_AddBoolToObject(item, "isGenericType", type->is_generic_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_generic_type_definition
    if(type->is_generic_type_definition) {
    if(cJSON_AddBoolToObject(item, "isGenericTypeDefinition", type->is_generic_type_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_sz_array
    if(type->is_sz_array) {
    if(cJSON_AddBoolToObject(item, "isSZArray", type->is_sz_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_variable_bound_array
    if(type->is_variable_bound_array) {
    if(cJSON_AddBoolToObject(item, "isVariableBoundArray", type->is_variable_bound_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_by_ref_like
    if(type->is_by_ref_like) {
    if(cJSON_AddBoolToObject(item, "isByRefLike", type->is_by_ref_like) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_function_pointer
    if(type->is_function_pointer) {
    if(cJSON_AddBoolToObject(item, "isFunctionPointer", type->is_function_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_unmanaged_function_pointer
    if(type->is_unmanaged_function_pointer) {
    if(cJSON_AddBoolToObject(item, "isUnmanagedFunctionPointer", type->is_unmanaged_function_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type->has_element_type
    if(type->has_element_type) {
    if(cJSON_AddBoolToObject(item, "hasElementType", type->has_element_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type->generic_type_arguments
    if(type->generic_type_arguments) {
    cJSON *generic_type_arguments = cJSON_AddArrayToObject(item, "genericTypeArguments");
    if(generic_type_arguments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *generic_type_argumentsListEntry;
    if (type->generic_type_arguments) {
    list_ForEach(generic_type_argumentsListEntry, type->generic_type_arguments) {
    cJSON *itemLocal = type_convertToJSON(generic_type_argumentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(generic_type_arguments, itemLocal);
    }
    }
    }


    // type->generic_parameter_position
    if(type->generic_parameter_position) {
    if(cJSON_AddNumberToObject(item, "genericParameterPosition", type->generic_parameter_position) == NULL) {
    goto fail; //Numeric
    }
    }


    // type->generic_parameter_attributes
    if(type->generic_parameter_attributes != contentservice_type_GENERICPARAMETERATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "genericParameterAttributes", generic_parameter_attributestype_ToString(type->generic_parameter_attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type->attributes
    if(type->attributes != contentservice_type_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributestype_ToString(type->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type->is_abstract
    if(type->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", type->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_import
    if(type->is_import) {
    if(cJSON_AddBoolToObject(item, "isImport", type->is_import) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_sealed
    if(type->is_sealed) {
    if(cJSON_AddBoolToObject(item, "isSealed", type->is_sealed) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_special_name
    if(type->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", type->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_class
    if(type->is_class) {
    if(cJSON_AddBoolToObject(item, "isClass", type->is_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_assembly
    if(type->is_nested_assembly) {
    if(cJSON_AddBoolToObject(item, "isNestedAssembly", type->is_nested_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_fam_and_assem
    if(type->is_nested_fam_and_assem) {
    if(cJSON_AddBoolToObject(item, "isNestedFamANDAssem", type->is_nested_fam_and_assem) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_family
    if(type->is_nested_family) {
    if(cJSON_AddBoolToObject(item, "isNestedFamily", type->is_nested_family) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_fam_or_assem
    if(type->is_nested_fam_or_assem) {
    if(cJSON_AddBoolToObject(item, "isNestedFamORAssem", type->is_nested_fam_or_assem) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_private
    if(type->is_nested_private) {
    if(cJSON_AddBoolToObject(item, "isNestedPrivate", type->is_nested_private) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_nested_public
    if(type->is_nested_public) {
    if(cJSON_AddBoolToObject(item, "isNestedPublic", type->is_nested_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_not_public
    if(type->is_not_public) {
    if(cJSON_AddBoolToObject(item, "isNotPublic", type->is_not_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_public
    if(type->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", type->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_auto_layout
    if(type->is_auto_layout) {
    if(cJSON_AddBoolToObject(item, "isAutoLayout", type->is_auto_layout) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_explicit_layout
    if(type->is_explicit_layout) {
    if(cJSON_AddBoolToObject(item, "isExplicitLayout", type->is_explicit_layout) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_layout_sequential
    if(type->is_layout_sequential) {
    if(cJSON_AddBoolToObject(item, "isLayoutSequential", type->is_layout_sequential) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_ansi_class
    if(type->is_ansi_class) {
    if(cJSON_AddBoolToObject(item, "isAnsiClass", type->is_ansi_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_auto_class
    if(type->is_auto_class) {
    if(cJSON_AddBoolToObject(item, "isAutoClass", type->is_auto_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_unicode_class
    if(type->is_unicode_class) {
    if(cJSON_AddBoolToObject(item, "isUnicodeClass", type->is_unicode_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_com_object
    if(type->is_com_object) {
    if(cJSON_AddBoolToObject(item, "isCOMObject", type->is_com_object) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_contextful
    if(type->is_contextful) {
    if(cJSON_AddBoolToObject(item, "isContextful", type->is_contextful) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_enum
    if(type->is_enum) {
    if(cJSON_AddBoolToObject(item, "isEnum", type->is_enum) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_marshal_by_ref
    if(type->is_marshal_by_ref) {
    if(cJSON_AddBoolToObject(item, "isMarshalByRef", type->is_marshal_by_ref) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_primitive
    if(type->is_primitive) {
    if(cJSON_AddBoolToObject(item, "isPrimitive", type->is_primitive) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_value_type
    if(type->is_value_type) {
    if(cJSON_AddBoolToObject(item, "isValueType", type->is_value_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_signature_type
    if(type->is_signature_type) {
    if(cJSON_AddBoolToObject(item, "isSignatureType", type->is_signature_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_security_critical
    if(type->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", type->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_security_safe_critical
    if(type->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", type->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_security_transparent
    if(type->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", type->is_security_transparent) == NULL) {
    goto fail; //Bool
    }
    }


    // type->struct_layout_attribute
    if(type->struct_layout_attribute) {
    cJSON *struct_layout_attribute_local_JSON = struct_layout_attribute_convertToJSON(type->struct_layout_attribute);
    if(struct_layout_attribute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "structLayoutAttribute", struct_layout_attribute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->type_initializer
    if(type->type_initializer) {
    cJSON *type_initializer_local_JSON = constructor_info_convertToJSON(type->type_initializer);
    if(type_initializer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeInitializer", type_initializer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->type_handle
    if(type->type_handle) {
    cJSON *type_handle_local_JSON = runtime_type_handle_convertToJSON(type->type_handle);
    if(type_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeHandle", type_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->guid
    if(type->guid) {
    if(cJSON_AddStringToObject(item, "guid", type->guid) == NULL) {
    goto fail; //String
    }
    }


    // type->base_type
    if(type->base_type) {
    cJSON *base_type_local_JSON = type_convertToJSON(type->base_type);
    if(base_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "baseType", base_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type->is_serializable
    if(type->is_serializable) {
    if(cJSON_AddBoolToObject(item, "isSerializable", type->is_serializable) == NULL) {
    goto fail; //Bool
    }
    }


    // type->contains_generic_parameters
    if(type->contains_generic_parameters) {
    if(cJSON_AddBoolToObject(item, "containsGenericParameters", type->contains_generic_parameters) == NULL) {
    goto fail; //Bool
    }
    }


    // type->is_visible
    if(type->is_visible) {
    if(cJSON_AddBoolToObject(item, "isVisible", type->is_visible) == NULL) {
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

type_t *type_parseFromJSON(cJSON *typeJSON){

    type_t *type_local_var = NULL;

    // define the local list for type->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for type->assembly
    assembly_t *assembly_local_nonprim = NULL;

    // define the local variable for type->module
    module_t *module_local_nonprim = NULL;

    // define the local variable for type->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for type->declaring_method
    method_base_t *declaring_method_local_nonprim = NULL;

    // define the local variable for type->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for type->underlying_system_type
    type_t *underlying_system_type_local_nonprim = NULL;

    // define the local list for type->generic_type_arguments
    list_t *generic_type_argumentsList = NULL;

    // define the local variable for type->struct_layout_attribute
    struct_layout_attribute_t *struct_layout_attribute_local_nonprim = NULL;

    // define the local variable for type->type_initializer
    constructor_info_t *type_initializer_local_nonprim = NULL;

    // define the local variable for type->type_handle
    runtime_type_handle_t *type_handle_local_nonprim = NULL;

    // define the local variable for type->base_type
    type_t *base_type_local_nonprim = NULL;

    // type->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(typeJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // type->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(typeJSON, "customAttributes");
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

    // type->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(typeJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // type->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(typeJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // type->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "memberType");
    contentservice_type_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = type_member_type_FromString(member_type->valuestring);
    }

    // type->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(typeJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // type->assembly_qualified_name
    cJSON *assembly_qualified_name = cJSON_GetObjectItemCaseSensitive(typeJSON, "assemblyQualifiedName");
    if (assembly_qualified_name) { 
    if(!cJSON_IsString(assembly_qualified_name) && !cJSON_IsNull(assembly_qualified_name))
    {
    goto end; //String
    }
    }

    // type->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(typeJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // type->assembly
    cJSON *assembly = cJSON_GetObjectItemCaseSensitive(typeJSON, "assembly");
    if (assembly) { 
    assembly_local_nonprim = assembly_parseFromJSON(assembly); //nonprimitive
    }

    // type->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(typeJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // type->is_interface
    cJSON *is_interface = cJSON_GetObjectItemCaseSensitive(typeJSON, "isInterface");
    if (is_interface) { 
    if(!cJSON_IsBool(is_interface))
    {
    goto end; //Bool
    }
    }

    // type->is_nested
    cJSON *is_nested = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNested");
    if (is_nested) { 
    if(!cJSON_IsBool(is_nested))
    {
    goto end; //Bool
    }
    }

    // type->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // type->declaring_method
    cJSON *declaring_method = cJSON_GetObjectItemCaseSensitive(typeJSON, "declaringMethod");
    if (declaring_method) { 
    declaring_method_local_nonprim = method_base_parseFromJSON(declaring_method); //nonprimitive
    }

    // type->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // type->underlying_system_type
    cJSON *underlying_system_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "underlyingSystemType");
    if (underlying_system_type) { 
    underlying_system_type_local_nonprim = type_parseFromJSON(underlying_system_type); //nonprimitive
    }

    // type->is_type_definition
    cJSON *is_type_definition = cJSON_GetObjectItemCaseSensitive(typeJSON, "isTypeDefinition");
    if (is_type_definition) { 
    if(!cJSON_IsBool(is_type_definition))
    {
    goto end; //Bool
    }
    }

    // type->is_array
    cJSON *is_array = cJSON_GetObjectItemCaseSensitive(typeJSON, "isArray");
    if (is_array) { 
    if(!cJSON_IsBool(is_array))
    {
    goto end; //Bool
    }
    }

    // type->is_by_ref
    cJSON *is_by_ref = cJSON_GetObjectItemCaseSensitive(typeJSON, "isByRef");
    if (is_by_ref) { 
    if(!cJSON_IsBool(is_by_ref))
    {
    goto end; //Bool
    }
    }

    // type->is_pointer
    cJSON *is_pointer = cJSON_GetObjectItemCaseSensitive(typeJSON, "isPointer");
    if (is_pointer) { 
    if(!cJSON_IsBool(is_pointer))
    {
    goto end; //Bool
    }
    }

    // type->is_constructed_generic_type
    cJSON *is_constructed_generic_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "isConstructedGenericType");
    if (is_constructed_generic_type) { 
    if(!cJSON_IsBool(is_constructed_generic_type))
    {
    goto end; //Bool
    }
    }

    // type->is_generic_parameter
    cJSON *is_generic_parameter = cJSON_GetObjectItemCaseSensitive(typeJSON, "isGenericParameter");
    if (is_generic_parameter) { 
    if(!cJSON_IsBool(is_generic_parameter))
    {
    goto end; //Bool
    }
    }

    // type->is_generic_type_parameter
    cJSON *is_generic_type_parameter = cJSON_GetObjectItemCaseSensitive(typeJSON, "isGenericTypeParameter");
    if (is_generic_type_parameter) { 
    if(!cJSON_IsBool(is_generic_type_parameter))
    {
    goto end; //Bool
    }
    }

    // type->is_generic_method_parameter
    cJSON *is_generic_method_parameter = cJSON_GetObjectItemCaseSensitive(typeJSON, "isGenericMethodParameter");
    if (is_generic_method_parameter) { 
    if(!cJSON_IsBool(is_generic_method_parameter))
    {
    goto end; //Bool
    }
    }

    // type->is_generic_type
    cJSON *is_generic_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "isGenericType");
    if (is_generic_type) { 
    if(!cJSON_IsBool(is_generic_type))
    {
    goto end; //Bool
    }
    }

    // type->is_generic_type_definition
    cJSON *is_generic_type_definition = cJSON_GetObjectItemCaseSensitive(typeJSON, "isGenericTypeDefinition");
    if (is_generic_type_definition) { 
    if(!cJSON_IsBool(is_generic_type_definition))
    {
    goto end; //Bool
    }
    }

    // type->is_sz_array
    cJSON *is_sz_array = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSZArray");
    if (is_sz_array) { 
    if(!cJSON_IsBool(is_sz_array))
    {
    goto end; //Bool
    }
    }

    // type->is_variable_bound_array
    cJSON *is_variable_bound_array = cJSON_GetObjectItemCaseSensitive(typeJSON, "isVariableBoundArray");
    if (is_variable_bound_array) { 
    if(!cJSON_IsBool(is_variable_bound_array))
    {
    goto end; //Bool
    }
    }

    // type->is_by_ref_like
    cJSON *is_by_ref_like = cJSON_GetObjectItemCaseSensitive(typeJSON, "isByRefLike");
    if (is_by_ref_like) { 
    if(!cJSON_IsBool(is_by_ref_like))
    {
    goto end; //Bool
    }
    }

    // type->is_function_pointer
    cJSON *is_function_pointer = cJSON_GetObjectItemCaseSensitive(typeJSON, "isFunctionPointer");
    if (is_function_pointer) { 
    if(!cJSON_IsBool(is_function_pointer))
    {
    goto end; //Bool
    }
    }

    // type->is_unmanaged_function_pointer
    cJSON *is_unmanaged_function_pointer = cJSON_GetObjectItemCaseSensitive(typeJSON, "isUnmanagedFunctionPointer");
    if (is_unmanaged_function_pointer) { 
    if(!cJSON_IsBool(is_unmanaged_function_pointer))
    {
    goto end; //Bool
    }
    }

    // type->has_element_type
    cJSON *has_element_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "hasElementType");
    if (has_element_type) { 
    if(!cJSON_IsBool(has_element_type))
    {
    goto end; //Bool
    }
    }

    // type->generic_type_arguments
    cJSON *generic_type_arguments = cJSON_GetObjectItemCaseSensitive(typeJSON, "genericTypeArguments");
    if (generic_type_arguments) { 
    cJSON *generic_type_arguments_local_nonprimitive = NULL;
    if(!cJSON_IsArray(generic_type_arguments)){
        goto end; //nonprimitive container
    }

    generic_type_argumentsList = list_createList();

    cJSON_ArrayForEach(generic_type_arguments_local_nonprimitive,generic_type_arguments )
    {
        if(!cJSON_IsObject(generic_type_arguments_local_nonprimitive)){
            goto end;
        }
        type_t *generic_type_argumentsItem = type_parseFromJSON(generic_type_arguments_local_nonprimitive);

        list_addElement(generic_type_argumentsList, generic_type_argumentsItem);
    }
    }

    // type->generic_parameter_position
    cJSON *generic_parameter_position = cJSON_GetObjectItemCaseSensitive(typeJSON, "genericParameterPosition");
    if (generic_parameter_position) { 
    if(!cJSON_IsNumber(generic_parameter_position))
    {
    goto end; //Numeric
    }
    }

    // type->generic_parameter_attributes
    cJSON *generic_parameter_attributes = cJSON_GetObjectItemCaseSensitive(typeJSON, "genericParameterAttributes");
    contentservice_type_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributesVariable;
    if (generic_parameter_attributes) { 
    if(!cJSON_IsString(generic_parameter_attributes))
    {
    goto end; //Enum
    }
    generic_parameter_attributesVariable = type_generic_parameter_attributes_FromString(generic_parameter_attributes->valuestring);
    }

    // type->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(typeJSON, "attributes");
    contentservice_type_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = type_attributes_FromString(attributes->valuestring);
    }

    // type->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(typeJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // type->is_import
    cJSON *is_import = cJSON_GetObjectItemCaseSensitive(typeJSON, "isImport");
    if (is_import) { 
    if(!cJSON_IsBool(is_import))
    {
    goto end; //Bool
    }
    }

    // type->is_sealed
    cJSON *is_sealed = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSealed");
    if (is_sealed) { 
    if(!cJSON_IsBool(is_sealed))
    {
    goto end; //Bool
    }
    }

    // type->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // type->is_class
    cJSON *is_class = cJSON_GetObjectItemCaseSensitive(typeJSON, "isClass");
    if (is_class) { 
    if(!cJSON_IsBool(is_class))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_assembly
    cJSON *is_nested_assembly = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedAssembly");
    if (is_nested_assembly) { 
    if(!cJSON_IsBool(is_nested_assembly))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_fam_and_assem
    cJSON *is_nested_fam_and_assem = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedFamANDAssem");
    if (is_nested_fam_and_assem) { 
    if(!cJSON_IsBool(is_nested_fam_and_assem))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_family
    cJSON *is_nested_family = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedFamily");
    if (is_nested_family) { 
    if(!cJSON_IsBool(is_nested_family))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_fam_or_assem
    cJSON *is_nested_fam_or_assem = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedFamORAssem");
    if (is_nested_fam_or_assem) { 
    if(!cJSON_IsBool(is_nested_fam_or_assem))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_private
    cJSON *is_nested_private = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedPrivate");
    if (is_nested_private) { 
    if(!cJSON_IsBool(is_nested_private))
    {
    goto end; //Bool
    }
    }

    // type->is_nested_public
    cJSON *is_nested_public = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNestedPublic");
    if (is_nested_public) { 
    if(!cJSON_IsBool(is_nested_public))
    {
    goto end; //Bool
    }
    }

    // type->is_not_public
    cJSON *is_not_public = cJSON_GetObjectItemCaseSensitive(typeJSON, "isNotPublic");
    if (is_not_public) { 
    if(!cJSON_IsBool(is_not_public))
    {
    goto end; //Bool
    }
    }

    // type->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(typeJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // type->is_auto_layout
    cJSON *is_auto_layout = cJSON_GetObjectItemCaseSensitive(typeJSON, "isAutoLayout");
    if (is_auto_layout) { 
    if(!cJSON_IsBool(is_auto_layout))
    {
    goto end; //Bool
    }
    }

    // type->is_explicit_layout
    cJSON *is_explicit_layout = cJSON_GetObjectItemCaseSensitive(typeJSON, "isExplicitLayout");
    if (is_explicit_layout) { 
    if(!cJSON_IsBool(is_explicit_layout))
    {
    goto end; //Bool
    }
    }

    // type->is_layout_sequential
    cJSON *is_layout_sequential = cJSON_GetObjectItemCaseSensitive(typeJSON, "isLayoutSequential");
    if (is_layout_sequential) { 
    if(!cJSON_IsBool(is_layout_sequential))
    {
    goto end; //Bool
    }
    }

    // type->is_ansi_class
    cJSON *is_ansi_class = cJSON_GetObjectItemCaseSensitive(typeJSON, "isAnsiClass");
    if (is_ansi_class) { 
    if(!cJSON_IsBool(is_ansi_class))
    {
    goto end; //Bool
    }
    }

    // type->is_auto_class
    cJSON *is_auto_class = cJSON_GetObjectItemCaseSensitive(typeJSON, "isAutoClass");
    if (is_auto_class) { 
    if(!cJSON_IsBool(is_auto_class))
    {
    goto end; //Bool
    }
    }

    // type->is_unicode_class
    cJSON *is_unicode_class = cJSON_GetObjectItemCaseSensitive(typeJSON, "isUnicodeClass");
    if (is_unicode_class) { 
    if(!cJSON_IsBool(is_unicode_class))
    {
    goto end; //Bool
    }
    }

    // type->is_com_object
    cJSON *is_com_object = cJSON_GetObjectItemCaseSensitive(typeJSON, "isCOMObject");
    if (is_com_object) { 
    if(!cJSON_IsBool(is_com_object))
    {
    goto end; //Bool
    }
    }

    // type->is_contextful
    cJSON *is_contextful = cJSON_GetObjectItemCaseSensitive(typeJSON, "isContextful");
    if (is_contextful) { 
    if(!cJSON_IsBool(is_contextful))
    {
    goto end; //Bool
    }
    }

    // type->is_enum
    cJSON *is_enum = cJSON_GetObjectItemCaseSensitive(typeJSON, "isEnum");
    if (is_enum) { 
    if(!cJSON_IsBool(is_enum))
    {
    goto end; //Bool
    }
    }

    // type->is_marshal_by_ref
    cJSON *is_marshal_by_ref = cJSON_GetObjectItemCaseSensitive(typeJSON, "isMarshalByRef");
    if (is_marshal_by_ref) { 
    if(!cJSON_IsBool(is_marshal_by_ref))
    {
    goto end; //Bool
    }
    }

    // type->is_primitive
    cJSON *is_primitive = cJSON_GetObjectItemCaseSensitive(typeJSON, "isPrimitive");
    if (is_primitive) { 
    if(!cJSON_IsBool(is_primitive))
    {
    goto end; //Bool
    }
    }

    // type->is_value_type
    cJSON *is_value_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "isValueType");
    if (is_value_type) { 
    if(!cJSON_IsBool(is_value_type))
    {
    goto end; //Bool
    }
    }

    // type->is_signature_type
    cJSON *is_signature_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSignatureType");
    if (is_signature_type) { 
    if(!cJSON_IsBool(is_signature_type))
    {
    goto end; //Bool
    }
    }

    // type->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // type->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // type->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }

    // type->struct_layout_attribute
    cJSON *struct_layout_attribute = cJSON_GetObjectItemCaseSensitive(typeJSON, "structLayoutAttribute");
    if (struct_layout_attribute) { 
    struct_layout_attribute_local_nonprim = struct_layout_attribute_parseFromJSON(struct_layout_attribute); //nonprimitive
    }

    // type->type_initializer
    cJSON *type_initializer = cJSON_GetObjectItemCaseSensitive(typeJSON, "typeInitializer");
    if (type_initializer) { 
    type_initializer_local_nonprim = constructor_info_parseFromJSON(type_initializer); //nonprimitive
    }

    // type->type_handle
    cJSON *type_handle = cJSON_GetObjectItemCaseSensitive(typeJSON, "typeHandle");
    if (type_handle) { 
    type_handle_local_nonprim = runtime_type_handle_parseFromJSON(type_handle); //nonprimitive
    }

    // type->guid
    cJSON *guid = cJSON_GetObjectItemCaseSensitive(typeJSON, "guid");
    if (guid) { 
    if(!cJSON_IsString(guid) && !cJSON_IsNull(guid))
    {
    goto end; //String
    }
    }

    // type->base_type
    cJSON *base_type = cJSON_GetObjectItemCaseSensitive(typeJSON, "baseType");
    if (base_type) { 
    base_type_local_nonprim = type_parseFromJSON(base_type); //nonprimitive
    }

    // type->is_serializable
    cJSON *is_serializable = cJSON_GetObjectItemCaseSensitive(typeJSON, "isSerializable");
    if (is_serializable) { 
    if(!cJSON_IsBool(is_serializable))
    {
    goto end; //Bool
    }
    }

    // type->contains_generic_parameters
    cJSON *contains_generic_parameters = cJSON_GetObjectItemCaseSensitive(typeJSON, "containsGenericParameters");
    if (contains_generic_parameters) { 
    if(!cJSON_IsBool(contains_generic_parameters))
    {
    goto end; //Bool
    }
    }

    // type->is_visible
    cJSON *is_visible = cJSON_GetObjectItemCaseSensitive(typeJSON, "isVisible");
    if (is_visible) { 
    if(!cJSON_IsBool(is_visible))
    {
    goto end; //Bool
    }
    }


    type_local_var = type_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        member_type ? member_typeVariable : contentservice_type_MEMBERTYPE_NULL,
        _namespace && !cJSON_IsNull(_namespace) ? strdup(_namespace->valuestring) : NULL,
        assembly_qualified_name && !cJSON_IsNull(assembly_qualified_name) ? strdup(assembly_qualified_name->valuestring) : NULL,
        full_name && !cJSON_IsNull(full_name) ? strdup(full_name->valuestring) : NULL,
        assembly ? assembly_local_nonprim : NULL,
        module ? module_local_nonprim : NULL,
        is_interface ? is_interface->valueint : 0,
        is_nested ? is_nested->valueint : 0,
        declaring_type ? declaring_type_local_nonprim : NULL,
        declaring_method ? declaring_method_local_nonprim : NULL,
        reflected_type ? reflected_type_local_nonprim : NULL,
        underlying_system_type ? underlying_system_type_local_nonprim : NULL,
        is_type_definition ? is_type_definition->valueint : 0,
        is_array ? is_array->valueint : 0,
        is_by_ref ? is_by_ref->valueint : 0,
        is_pointer ? is_pointer->valueint : 0,
        is_constructed_generic_type ? is_constructed_generic_type->valueint : 0,
        is_generic_parameter ? is_generic_parameter->valueint : 0,
        is_generic_type_parameter ? is_generic_type_parameter->valueint : 0,
        is_generic_method_parameter ? is_generic_method_parameter->valueint : 0,
        is_generic_type ? is_generic_type->valueint : 0,
        is_generic_type_definition ? is_generic_type_definition->valueint : 0,
        is_sz_array ? is_sz_array->valueint : 0,
        is_variable_bound_array ? is_variable_bound_array->valueint : 0,
        is_by_ref_like ? is_by_ref_like->valueint : 0,
        is_function_pointer ? is_function_pointer->valueint : 0,
        is_unmanaged_function_pointer ? is_unmanaged_function_pointer->valueint : 0,
        has_element_type ? has_element_type->valueint : 0,
        generic_type_arguments ? generic_type_argumentsList : NULL,
        generic_parameter_position ? generic_parameter_position->valuedouble : 0,
        generic_parameter_attributes ? generic_parameter_attributesVariable : contentservice_type_GENERICPARAMETERATTRIBUTES_NULL,
        attributes ? attributesVariable : contentservice_type_ATTRIBUTES_NULL,
        is_abstract ? is_abstract->valueint : 0,
        is_import ? is_import->valueint : 0,
        is_sealed ? is_sealed->valueint : 0,
        is_special_name ? is_special_name->valueint : 0,
        is_class ? is_class->valueint : 0,
        is_nested_assembly ? is_nested_assembly->valueint : 0,
        is_nested_fam_and_assem ? is_nested_fam_and_assem->valueint : 0,
        is_nested_family ? is_nested_family->valueint : 0,
        is_nested_fam_or_assem ? is_nested_fam_or_assem->valueint : 0,
        is_nested_private ? is_nested_private->valueint : 0,
        is_nested_public ? is_nested_public->valueint : 0,
        is_not_public ? is_not_public->valueint : 0,
        is_public ? is_public->valueint : 0,
        is_auto_layout ? is_auto_layout->valueint : 0,
        is_explicit_layout ? is_explicit_layout->valueint : 0,
        is_layout_sequential ? is_layout_sequential->valueint : 0,
        is_ansi_class ? is_ansi_class->valueint : 0,
        is_auto_class ? is_auto_class->valueint : 0,
        is_unicode_class ? is_unicode_class->valueint : 0,
        is_com_object ? is_com_object->valueint : 0,
        is_contextful ? is_contextful->valueint : 0,
        is_enum ? is_enum->valueint : 0,
        is_marshal_by_ref ? is_marshal_by_ref->valueint : 0,
        is_primitive ? is_primitive->valueint : 0,
        is_value_type ? is_value_type->valueint : 0,
        is_signature_type ? is_signature_type->valueint : 0,
        is_security_critical ? is_security_critical->valueint : 0,
        is_security_safe_critical ? is_security_safe_critical->valueint : 0,
        is_security_transparent ? is_security_transparent->valueint : 0,
        struct_layout_attribute ? struct_layout_attribute_local_nonprim : NULL,
        type_initializer ? type_initializer_local_nonprim : NULL,
        type_handle ? type_handle_local_nonprim : NULL,
        guid && !cJSON_IsNull(guid) ? strdup(guid->valuestring) : NULL,
        base_type ? base_type_local_nonprim : NULL,
        is_serializable ? is_serializable->valueint : 0,
        contains_generic_parameters ? contains_generic_parameters->valueint : 0,
        is_visible ? is_visible->valueint : 0
        );

    return type_local_var;
end:
    if (custom_attributesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, custom_attributesList) {
            custom_attribute_data_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(custom_attributesList);
        custom_attributesList = NULL;
    }
    if (assembly_local_nonprim) {
        assembly_free(assembly_local_nonprim);
        assembly_local_nonprim = NULL;
    }
    if (module_local_nonprim) {
        module_free(module_local_nonprim);
        module_local_nonprim = NULL;
    }
    if (declaring_type_local_nonprim) {
        type_free(declaring_type_local_nonprim);
        declaring_type_local_nonprim = NULL;
    }
    if (declaring_method_local_nonprim) {
        method_base_free(declaring_method_local_nonprim);
        declaring_method_local_nonprim = NULL;
    }
    if (reflected_type_local_nonprim) {
        type_free(reflected_type_local_nonprim);
        reflected_type_local_nonprim = NULL;
    }
    if (underlying_system_type_local_nonprim) {
        type_free(underlying_system_type_local_nonprim);
        underlying_system_type_local_nonprim = NULL;
    }
    if (generic_type_argumentsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, generic_type_argumentsList) {
            type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(generic_type_argumentsList);
        generic_type_argumentsList = NULL;
    }
    if (struct_layout_attribute_local_nonprim) {
        struct_layout_attribute_free(struct_layout_attribute_local_nonprim);
        struct_layout_attribute_local_nonprim = NULL;
    }
    if (type_initializer_local_nonprim) {
        constructor_info_free(type_initializer_local_nonprim);
        type_initializer_local_nonprim = NULL;
    }
    if (type_handle_local_nonprim) {
        runtime_type_handle_free(type_handle_local_nonprim);
        type_handle_local_nonprim = NULL;
    }
    if (base_type_local_nonprim) {
        type_free(base_type_local_nonprim);
        base_type_local_nonprim = NULL;
    }
    return NULL;

}
