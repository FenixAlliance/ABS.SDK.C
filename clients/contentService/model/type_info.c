#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "type_info.h"


char* type_info_member_type_ToString(contentservice_type_info_MEMBERTYPE_e member_type) {
    char* member_typeArray[] =  { "NULL", "Constructor", "Event", "Field", "Method", "Property", "TypeInfo", "Custom", "NestedType", "All" };
    return member_typeArray[member_type];
}

contentservice_type_info_MEMBERTYPE_e type_info_member_type_FromString(char* member_type){
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
char* type_info_generic_parameter_attributes_ToString(contentservice_type_info_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes) {
    char* generic_parameter_attributesArray[] =  { "NULL", "None", "Covariant", "Contravariant", "VarianceMask", "ReferenceTypeConstraint", "NotNullableValueTypeConstraint", "DefaultConstructorConstraint", "SpecialConstraintMask", "AllowByRefLike" };
    return generic_parameter_attributesArray[generic_parameter_attributes];
}

contentservice_type_info_GENERICPARAMETERATTRIBUTES_e type_info_generic_parameter_attributes_FromString(char* generic_parameter_attributes){
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
char* type_info_attributes_ToString(contentservice_type_info_ATTRIBUTES_e attributes) {
    char* attributesArray[] =  { "NULL", "NotPublic", "Public", "NestedPublic", "NestedPrivate", "NestedFamily", "NestedAssembly", "NestedFamANDAssem", "VisibilityMask", "SequentialLayout", "ExplicitLayout", "LayoutMask", "Interface", "Abstract", "Sealed", "SpecialName", "RTSpecialName", "Import", "Serializable", "WindowsRuntime", "UnicodeClass", "AutoClass", "StringFormatMask", "HasSecurity", "ReservedMask", "BeforeFieldInit", "CustomFormatMask" };
    return attributesArray[attributes];
}

contentservice_type_info_ATTRIBUTES_e type_info_attributes_FromString(char* attributes){
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

type_info_t *type_info_create(
    char *name,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_type_info_MEMBERTYPE_e member_type,
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
    contentservice_type_info_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes,
    contentservice_type_info_ATTRIBUTES_e attributes,
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
    int is_visible,
    list_t *generic_type_parameters,
    list_t *declared_constructors,
    list_t *declared_events,
    list_t *declared_fields,
    list_t *declared_members,
    list_t *declared_methods,
    list_t *declared_nested_types,
    list_t *declared_properties,
    list_t *implemented_interfaces
    ) {
    type_info_t *type_info_local_var = malloc(sizeof(type_info_t));
    if (!type_info_local_var) {
        return NULL;
    }
    type_info_local_var->name = name;
    type_info_local_var->custom_attributes = custom_attributes;
    type_info_local_var->is_collectible = is_collectible;
    type_info_local_var->metadata_token = metadata_token;
    type_info_local_var->member_type = member_type;
    type_info_local_var->_namespace = _namespace;
    type_info_local_var->assembly_qualified_name = assembly_qualified_name;
    type_info_local_var->full_name = full_name;
    type_info_local_var->assembly = assembly;
    type_info_local_var->module = module;
    type_info_local_var->is_interface = is_interface;
    type_info_local_var->is_nested = is_nested;
    type_info_local_var->declaring_type = declaring_type;
    type_info_local_var->declaring_method = declaring_method;
    type_info_local_var->reflected_type = reflected_type;
    type_info_local_var->underlying_system_type = underlying_system_type;
    type_info_local_var->is_type_definition = is_type_definition;
    type_info_local_var->is_array = is_array;
    type_info_local_var->is_by_ref = is_by_ref;
    type_info_local_var->is_pointer = is_pointer;
    type_info_local_var->is_constructed_generic_type = is_constructed_generic_type;
    type_info_local_var->is_generic_parameter = is_generic_parameter;
    type_info_local_var->is_generic_type_parameter = is_generic_type_parameter;
    type_info_local_var->is_generic_method_parameter = is_generic_method_parameter;
    type_info_local_var->is_generic_type = is_generic_type;
    type_info_local_var->is_generic_type_definition = is_generic_type_definition;
    type_info_local_var->is_sz_array = is_sz_array;
    type_info_local_var->is_variable_bound_array = is_variable_bound_array;
    type_info_local_var->is_by_ref_like = is_by_ref_like;
    type_info_local_var->is_function_pointer = is_function_pointer;
    type_info_local_var->is_unmanaged_function_pointer = is_unmanaged_function_pointer;
    type_info_local_var->has_element_type = has_element_type;
    type_info_local_var->generic_type_arguments = generic_type_arguments;
    type_info_local_var->generic_parameter_position = generic_parameter_position;
    type_info_local_var->generic_parameter_attributes = generic_parameter_attributes;
    type_info_local_var->attributes = attributes;
    type_info_local_var->is_abstract = is_abstract;
    type_info_local_var->is_import = is_import;
    type_info_local_var->is_sealed = is_sealed;
    type_info_local_var->is_special_name = is_special_name;
    type_info_local_var->is_class = is_class;
    type_info_local_var->is_nested_assembly = is_nested_assembly;
    type_info_local_var->is_nested_fam_and_assem = is_nested_fam_and_assem;
    type_info_local_var->is_nested_family = is_nested_family;
    type_info_local_var->is_nested_fam_or_assem = is_nested_fam_or_assem;
    type_info_local_var->is_nested_private = is_nested_private;
    type_info_local_var->is_nested_public = is_nested_public;
    type_info_local_var->is_not_public = is_not_public;
    type_info_local_var->is_public = is_public;
    type_info_local_var->is_auto_layout = is_auto_layout;
    type_info_local_var->is_explicit_layout = is_explicit_layout;
    type_info_local_var->is_layout_sequential = is_layout_sequential;
    type_info_local_var->is_ansi_class = is_ansi_class;
    type_info_local_var->is_auto_class = is_auto_class;
    type_info_local_var->is_unicode_class = is_unicode_class;
    type_info_local_var->is_com_object = is_com_object;
    type_info_local_var->is_contextful = is_contextful;
    type_info_local_var->is_enum = is_enum;
    type_info_local_var->is_marshal_by_ref = is_marshal_by_ref;
    type_info_local_var->is_primitive = is_primitive;
    type_info_local_var->is_value_type = is_value_type;
    type_info_local_var->is_signature_type = is_signature_type;
    type_info_local_var->is_security_critical = is_security_critical;
    type_info_local_var->is_security_safe_critical = is_security_safe_critical;
    type_info_local_var->is_security_transparent = is_security_transparent;
    type_info_local_var->struct_layout_attribute = struct_layout_attribute;
    type_info_local_var->type_initializer = type_initializer;
    type_info_local_var->type_handle = type_handle;
    type_info_local_var->guid = guid;
    type_info_local_var->base_type = base_type;
    type_info_local_var->is_serializable = is_serializable;
    type_info_local_var->contains_generic_parameters = contains_generic_parameters;
    type_info_local_var->is_visible = is_visible;
    type_info_local_var->generic_type_parameters = generic_type_parameters;
    type_info_local_var->declared_constructors = declared_constructors;
    type_info_local_var->declared_events = declared_events;
    type_info_local_var->declared_fields = declared_fields;
    type_info_local_var->declared_members = declared_members;
    type_info_local_var->declared_methods = declared_methods;
    type_info_local_var->declared_nested_types = declared_nested_types;
    type_info_local_var->declared_properties = declared_properties;
    type_info_local_var->implemented_interfaces = implemented_interfaces;

    return type_info_local_var;
}


void type_info_free(type_info_t *type_info) {
    if(NULL == type_info){
        return ;
    }
    listEntry_t *listEntry;
    if (type_info->name) {
        free(type_info->name);
        type_info->name = NULL;
    }
    if (type_info->custom_attributes) {
        list_ForEach(listEntry, type_info->custom_attributes) {
            custom_attribute_data_free(listEntry->data);
        }
        list_freeList(type_info->custom_attributes);
        type_info->custom_attributes = NULL;
    }
    if (type_info->_namespace) {
        free(type_info->_namespace);
        type_info->_namespace = NULL;
    }
    if (type_info->assembly_qualified_name) {
        free(type_info->assembly_qualified_name);
        type_info->assembly_qualified_name = NULL;
    }
    if (type_info->full_name) {
        free(type_info->full_name);
        type_info->full_name = NULL;
    }
    if (type_info->assembly) {
        assembly_free(type_info->assembly);
        type_info->assembly = NULL;
    }
    if (type_info->module) {
        module_free(type_info->module);
        type_info->module = NULL;
    }
    if (type_info->declaring_type) {
        type_free(type_info->declaring_type);
        type_info->declaring_type = NULL;
    }
    if (type_info->declaring_method) {
        method_base_free(type_info->declaring_method);
        type_info->declaring_method = NULL;
    }
    if (type_info->reflected_type) {
        type_free(type_info->reflected_type);
        type_info->reflected_type = NULL;
    }
    if (type_info->underlying_system_type) {
        type_free(type_info->underlying_system_type);
        type_info->underlying_system_type = NULL;
    }
    if (type_info->generic_type_arguments) {
        list_ForEach(listEntry, type_info->generic_type_arguments) {
            type_free(listEntry->data);
        }
        list_freeList(type_info->generic_type_arguments);
        type_info->generic_type_arguments = NULL;
    }
    if (type_info->struct_layout_attribute) {
        struct_layout_attribute_free(type_info->struct_layout_attribute);
        type_info->struct_layout_attribute = NULL;
    }
    if (type_info->type_initializer) {
        constructor_info_free(type_info->type_initializer);
        type_info->type_initializer = NULL;
    }
    if (type_info->type_handle) {
        runtime_type_handle_free(type_info->type_handle);
        type_info->type_handle = NULL;
    }
    if (type_info->guid) {
        free(type_info->guid);
        type_info->guid = NULL;
    }
    if (type_info->base_type) {
        type_free(type_info->base_type);
        type_info->base_type = NULL;
    }
    if (type_info->generic_type_parameters) {
        list_ForEach(listEntry, type_info->generic_type_parameters) {
            type_free(listEntry->data);
        }
        list_freeList(type_info->generic_type_parameters);
        type_info->generic_type_parameters = NULL;
    }
    if (type_info->declared_constructors) {
        list_ForEach(listEntry, type_info->declared_constructors) {
            constructor_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_constructors);
        type_info->declared_constructors = NULL;
    }
    if (type_info->declared_events) {
        list_ForEach(listEntry, type_info->declared_events) {
            event_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_events);
        type_info->declared_events = NULL;
    }
    if (type_info->declared_fields) {
        list_ForEach(listEntry, type_info->declared_fields) {
            field_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_fields);
        type_info->declared_fields = NULL;
    }
    if (type_info->declared_members) {
        list_ForEach(listEntry, type_info->declared_members) {
            member_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_members);
        type_info->declared_members = NULL;
    }
    if (type_info->declared_methods) {
        list_ForEach(listEntry, type_info->declared_methods) {
            method_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_methods);
        type_info->declared_methods = NULL;
    }
    if (type_info->declared_nested_types) {
        list_ForEach(listEntry, type_info->declared_nested_types) {
            type_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_nested_types);
        type_info->declared_nested_types = NULL;
    }
    if (type_info->declared_properties) {
        list_ForEach(listEntry, type_info->declared_properties) {
            property_info_free(listEntry->data);
        }
        list_freeList(type_info->declared_properties);
        type_info->declared_properties = NULL;
    }
    if (type_info->implemented_interfaces) {
        list_ForEach(listEntry, type_info->implemented_interfaces) {
            type_free(listEntry->data);
        }
        list_freeList(type_info->implemented_interfaces);
        type_info->implemented_interfaces = NULL;
    }
    free(type_info);
}

cJSON *type_info_convertToJSON(type_info_t *type_info) {
    cJSON *item = cJSON_CreateObject();

    // type_info->name
    if(type_info->name) {
    if(cJSON_AddStringToObject(item, "name", type_info->name) == NULL) {
    goto fail; //String
    }
    }


    // type_info->custom_attributes
    if(type_info->custom_attributes) {
    cJSON *custom_attributes = cJSON_AddArrayToObject(item, "customAttributes");
    if(custom_attributes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *custom_attributesListEntry;
    if (type_info->custom_attributes) {
    list_ForEach(custom_attributesListEntry, type_info->custom_attributes) {
    cJSON *itemLocal = custom_attribute_data_convertToJSON(custom_attributesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(custom_attributes, itemLocal);
    }
    }
    }


    // type_info->is_collectible
    if(type_info->is_collectible) {
    if(cJSON_AddBoolToObject(item, "isCollectible", type_info->is_collectible) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->metadata_token
    if(type_info->metadata_token) {
    if(cJSON_AddNumberToObject(item, "metadataToken", type_info->metadata_token) == NULL) {
    goto fail; //Numeric
    }
    }


    // type_info->member_type
    if(type_info->member_type != contentservice_type_info_MEMBERTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "memberType", member_typetype_info_ToString(type_info->member_type)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type_info->_namespace
    if(type_info->_namespace) {
    if(cJSON_AddStringToObject(item, "namespace", type_info->_namespace) == NULL) {
    goto fail; //String
    }
    }


    // type_info->assembly_qualified_name
    if(type_info->assembly_qualified_name) {
    if(cJSON_AddStringToObject(item, "assemblyQualifiedName", type_info->assembly_qualified_name) == NULL) {
    goto fail; //String
    }
    }


    // type_info->full_name
    if(type_info->full_name) {
    if(cJSON_AddStringToObject(item, "fullName", type_info->full_name) == NULL) {
    goto fail; //String
    }
    }


    // type_info->assembly
    if(type_info->assembly) {
    cJSON *assembly_local_JSON = assembly_convertToJSON(type_info->assembly);
    if(assembly_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "assembly", assembly_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->module
    if(type_info->module) {
    cJSON *module_local_JSON = module_convertToJSON(type_info->module);
    if(module_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "module", module_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->is_interface
    if(type_info->is_interface) {
    if(cJSON_AddBoolToObject(item, "isInterface", type_info->is_interface) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested
    if(type_info->is_nested) {
    if(cJSON_AddBoolToObject(item, "isNested", type_info->is_nested) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->declaring_type
    if(type_info->declaring_type) {
    cJSON *declaring_type_local_JSON = type_convertToJSON(type_info->declaring_type);
    if(declaring_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringType", declaring_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->declaring_method
    if(type_info->declaring_method) {
    cJSON *declaring_method_local_JSON = method_base_convertToJSON(type_info->declaring_method);
    if(declaring_method_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "declaringMethod", declaring_method_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->reflected_type
    if(type_info->reflected_type) {
    cJSON *reflected_type_local_JSON = type_convertToJSON(type_info->reflected_type);
    if(reflected_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reflectedType", reflected_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->underlying_system_type
    if(type_info->underlying_system_type) {
    cJSON *underlying_system_type_local_JSON = type_convertToJSON(type_info->underlying_system_type);
    if(underlying_system_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "underlyingSystemType", underlying_system_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->is_type_definition
    if(type_info->is_type_definition) {
    if(cJSON_AddBoolToObject(item, "isTypeDefinition", type_info->is_type_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_array
    if(type_info->is_array) {
    if(cJSON_AddBoolToObject(item, "isArray", type_info->is_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_by_ref
    if(type_info->is_by_ref) {
    if(cJSON_AddBoolToObject(item, "isByRef", type_info->is_by_ref) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_pointer
    if(type_info->is_pointer) {
    if(cJSON_AddBoolToObject(item, "isPointer", type_info->is_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_constructed_generic_type
    if(type_info->is_constructed_generic_type) {
    if(cJSON_AddBoolToObject(item, "isConstructedGenericType", type_info->is_constructed_generic_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_generic_parameter
    if(type_info->is_generic_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericParameter", type_info->is_generic_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_generic_type_parameter
    if(type_info->is_generic_type_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericTypeParameter", type_info->is_generic_type_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_generic_method_parameter
    if(type_info->is_generic_method_parameter) {
    if(cJSON_AddBoolToObject(item, "isGenericMethodParameter", type_info->is_generic_method_parameter) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_generic_type
    if(type_info->is_generic_type) {
    if(cJSON_AddBoolToObject(item, "isGenericType", type_info->is_generic_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_generic_type_definition
    if(type_info->is_generic_type_definition) {
    if(cJSON_AddBoolToObject(item, "isGenericTypeDefinition", type_info->is_generic_type_definition) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_sz_array
    if(type_info->is_sz_array) {
    if(cJSON_AddBoolToObject(item, "isSZArray", type_info->is_sz_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_variable_bound_array
    if(type_info->is_variable_bound_array) {
    if(cJSON_AddBoolToObject(item, "isVariableBoundArray", type_info->is_variable_bound_array) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_by_ref_like
    if(type_info->is_by_ref_like) {
    if(cJSON_AddBoolToObject(item, "isByRefLike", type_info->is_by_ref_like) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_function_pointer
    if(type_info->is_function_pointer) {
    if(cJSON_AddBoolToObject(item, "isFunctionPointer", type_info->is_function_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_unmanaged_function_pointer
    if(type_info->is_unmanaged_function_pointer) {
    if(cJSON_AddBoolToObject(item, "isUnmanagedFunctionPointer", type_info->is_unmanaged_function_pointer) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->has_element_type
    if(type_info->has_element_type) {
    if(cJSON_AddBoolToObject(item, "hasElementType", type_info->has_element_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->generic_type_arguments
    if(type_info->generic_type_arguments) {
    cJSON *generic_type_arguments = cJSON_AddArrayToObject(item, "genericTypeArguments");
    if(generic_type_arguments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *generic_type_argumentsListEntry;
    if (type_info->generic_type_arguments) {
    list_ForEach(generic_type_argumentsListEntry, type_info->generic_type_arguments) {
    cJSON *itemLocal = type_convertToJSON(generic_type_argumentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(generic_type_arguments, itemLocal);
    }
    }
    }


    // type_info->generic_parameter_position
    if(type_info->generic_parameter_position) {
    if(cJSON_AddNumberToObject(item, "genericParameterPosition", type_info->generic_parameter_position) == NULL) {
    goto fail; //Numeric
    }
    }


    // type_info->generic_parameter_attributes
    if(type_info->generic_parameter_attributes != contentservice_type_info_GENERICPARAMETERATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "genericParameterAttributes", generic_parameter_attributestype_info_ToString(type_info->generic_parameter_attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type_info->attributes
    if(type_info->attributes != contentservice_type_info_ATTRIBUTES_NULL) {
    if(cJSON_AddStringToObject(item, "attributes", attributestype_info_ToString(type_info->attributes)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // type_info->is_abstract
    if(type_info->is_abstract) {
    if(cJSON_AddBoolToObject(item, "isAbstract", type_info->is_abstract) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_import
    if(type_info->is_import) {
    if(cJSON_AddBoolToObject(item, "isImport", type_info->is_import) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_sealed
    if(type_info->is_sealed) {
    if(cJSON_AddBoolToObject(item, "isSealed", type_info->is_sealed) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_special_name
    if(type_info->is_special_name) {
    if(cJSON_AddBoolToObject(item, "isSpecialName", type_info->is_special_name) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_class
    if(type_info->is_class) {
    if(cJSON_AddBoolToObject(item, "isClass", type_info->is_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_assembly
    if(type_info->is_nested_assembly) {
    if(cJSON_AddBoolToObject(item, "isNestedAssembly", type_info->is_nested_assembly) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_fam_and_assem
    if(type_info->is_nested_fam_and_assem) {
    if(cJSON_AddBoolToObject(item, "isNestedFamANDAssem", type_info->is_nested_fam_and_assem) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_family
    if(type_info->is_nested_family) {
    if(cJSON_AddBoolToObject(item, "isNestedFamily", type_info->is_nested_family) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_fam_or_assem
    if(type_info->is_nested_fam_or_assem) {
    if(cJSON_AddBoolToObject(item, "isNestedFamORAssem", type_info->is_nested_fam_or_assem) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_private
    if(type_info->is_nested_private) {
    if(cJSON_AddBoolToObject(item, "isNestedPrivate", type_info->is_nested_private) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_nested_public
    if(type_info->is_nested_public) {
    if(cJSON_AddBoolToObject(item, "isNestedPublic", type_info->is_nested_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_not_public
    if(type_info->is_not_public) {
    if(cJSON_AddBoolToObject(item, "isNotPublic", type_info->is_not_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_public
    if(type_info->is_public) {
    if(cJSON_AddBoolToObject(item, "isPublic", type_info->is_public) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_auto_layout
    if(type_info->is_auto_layout) {
    if(cJSON_AddBoolToObject(item, "isAutoLayout", type_info->is_auto_layout) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_explicit_layout
    if(type_info->is_explicit_layout) {
    if(cJSON_AddBoolToObject(item, "isExplicitLayout", type_info->is_explicit_layout) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_layout_sequential
    if(type_info->is_layout_sequential) {
    if(cJSON_AddBoolToObject(item, "isLayoutSequential", type_info->is_layout_sequential) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_ansi_class
    if(type_info->is_ansi_class) {
    if(cJSON_AddBoolToObject(item, "isAnsiClass", type_info->is_ansi_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_auto_class
    if(type_info->is_auto_class) {
    if(cJSON_AddBoolToObject(item, "isAutoClass", type_info->is_auto_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_unicode_class
    if(type_info->is_unicode_class) {
    if(cJSON_AddBoolToObject(item, "isUnicodeClass", type_info->is_unicode_class) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_com_object
    if(type_info->is_com_object) {
    if(cJSON_AddBoolToObject(item, "isCOMObject", type_info->is_com_object) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_contextful
    if(type_info->is_contextful) {
    if(cJSON_AddBoolToObject(item, "isContextful", type_info->is_contextful) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_enum
    if(type_info->is_enum) {
    if(cJSON_AddBoolToObject(item, "isEnum", type_info->is_enum) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_marshal_by_ref
    if(type_info->is_marshal_by_ref) {
    if(cJSON_AddBoolToObject(item, "isMarshalByRef", type_info->is_marshal_by_ref) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_primitive
    if(type_info->is_primitive) {
    if(cJSON_AddBoolToObject(item, "isPrimitive", type_info->is_primitive) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_value_type
    if(type_info->is_value_type) {
    if(cJSON_AddBoolToObject(item, "isValueType", type_info->is_value_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_signature_type
    if(type_info->is_signature_type) {
    if(cJSON_AddBoolToObject(item, "isSignatureType", type_info->is_signature_type) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_security_critical
    if(type_info->is_security_critical) {
    if(cJSON_AddBoolToObject(item, "isSecurityCritical", type_info->is_security_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_security_safe_critical
    if(type_info->is_security_safe_critical) {
    if(cJSON_AddBoolToObject(item, "isSecuritySafeCritical", type_info->is_security_safe_critical) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_security_transparent
    if(type_info->is_security_transparent) {
    if(cJSON_AddBoolToObject(item, "isSecurityTransparent", type_info->is_security_transparent) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->struct_layout_attribute
    if(type_info->struct_layout_attribute) {
    cJSON *struct_layout_attribute_local_JSON = struct_layout_attribute_convertToJSON(type_info->struct_layout_attribute);
    if(struct_layout_attribute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "structLayoutAttribute", struct_layout_attribute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->type_initializer
    if(type_info->type_initializer) {
    cJSON *type_initializer_local_JSON = constructor_info_convertToJSON(type_info->type_initializer);
    if(type_initializer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeInitializer", type_initializer_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->type_handle
    if(type_info->type_handle) {
    cJSON *type_handle_local_JSON = runtime_type_handle_convertToJSON(type_info->type_handle);
    if(type_handle_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeHandle", type_handle_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->guid
    if(type_info->guid) {
    if(cJSON_AddStringToObject(item, "guid", type_info->guid) == NULL) {
    goto fail; //String
    }
    }


    // type_info->base_type
    if(type_info->base_type) {
    cJSON *base_type_local_JSON = type_convertToJSON(type_info->base_type);
    if(base_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "baseType", base_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // type_info->is_serializable
    if(type_info->is_serializable) {
    if(cJSON_AddBoolToObject(item, "isSerializable", type_info->is_serializable) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->contains_generic_parameters
    if(type_info->contains_generic_parameters) {
    if(cJSON_AddBoolToObject(item, "containsGenericParameters", type_info->contains_generic_parameters) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->is_visible
    if(type_info->is_visible) {
    if(cJSON_AddBoolToObject(item, "isVisible", type_info->is_visible) == NULL) {
    goto fail; //Bool
    }
    }


    // type_info->generic_type_parameters
    if(type_info->generic_type_parameters) {
    cJSON *generic_type_parameters = cJSON_AddArrayToObject(item, "genericTypeParameters");
    if(generic_type_parameters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *generic_type_parametersListEntry;
    if (type_info->generic_type_parameters) {
    list_ForEach(generic_type_parametersListEntry, type_info->generic_type_parameters) {
    cJSON *itemLocal = type_convertToJSON(generic_type_parametersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(generic_type_parameters, itemLocal);
    }
    }
    }


    // type_info->declared_constructors
    if(type_info->declared_constructors) {
    cJSON *declared_constructors = cJSON_AddArrayToObject(item, "declaredConstructors");
    if(declared_constructors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_constructorsListEntry;
    if (type_info->declared_constructors) {
    list_ForEach(declared_constructorsListEntry, type_info->declared_constructors) {
    cJSON *itemLocal = constructor_info_convertToJSON(declared_constructorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_constructors, itemLocal);
    }
    }
    }


    // type_info->declared_events
    if(type_info->declared_events) {
    cJSON *declared_events = cJSON_AddArrayToObject(item, "declaredEvents");
    if(declared_events == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_eventsListEntry;
    if (type_info->declared_events) {
    list_ForEach(declared_eventsListEntry, type_info->declared_events) {
    cJSON *itemLocal = event_info_convertToJSON(declared_eventsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_events, itemLocal);
    }
    }
    }


    // type_info->declared_fields
    if(type_info->declared_fields) {
    cJSON *declared_fields = cJSON_AddArrayToObject(item, "declaredFields");
    if(declared_fields == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_fieldsListEntry;
    if (type_info->declared_fields) {
    list_ForEach(declared_fieldsListEntry, type_info->declared_fields) {
    cJSON *itemLocal = field_info_convertToJSON(declared_fieldsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_fields, itemLocal);
    }
    }
    }


    // type_info->declared_members
    if(type_info->declared_members) {
    cJSON *declared_members = cJSON_AddArrayToObject(item, "declaredMembers");
    if(declared_members == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_membersListEntry;
    if (type_info->declared_members) {
    list_ForEach(declared_membersListEntry, type_info->declared_members) {
    cJSON *itemLocal = member_info_convertToJSON(declared_membersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_members, itemLocal);
    }
    }
    }


    // type_info->declared_methods
    if(type_info->declared_methods) {
    cJSON *declared_methods = cJSON_AddArrayToObject(item, "declaredMethods");
    if(declared_methods == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_methodsListEntry;
    if (type_info->declared_methods) {
    list_ForEach(declared_methodsListEntry, type_info->declared_methods) {
    cJSON *itemLocal = method_info_convertToJSON(declared_methodsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_methods, itemLocal);
    }
    }
    }


    // type_info->declared_nested_types
    if(type_info->declared_nested_types) {
    cJSON *declared_nested_types = cJSON_AddArrayToObject(item, "declaredNestedTypes");
    if(declared_nested_types == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_nested_typesListEntry;
    if (type_info->declared_nested_types) {
    list_ForEach(declared_nested_typesListEntry, type_info->declared_nested_types) {
    cJSON *itemLocal = type_info_convertToJSON(declared_nested_typesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_nested_types, itemLocal);
    }
    }
    }


    // type_info->declared_properties
    if(type_info->declared_properties) {
    cJSON *declared_properties = cJSON_AddArrayToObject(item, "declaredProperties");
    if(declared_properties == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *declared_propertiesListEntry;
    if (type_info->declared_properties) {
    list_ForEach(declared_propertiesListEntry, type_info->declared_properties) {
    cJSON *itemLocal = property_info_convertToJSON(declared_propertiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(declared_properties, itemLocal);
    }
    }
    }


    // type_info->implemented_interfaces
    if(type_info->implemented_interfaces) {
    cJSON *implemented_interfaces = cJSON_AddArrayToObject(item, "implementedInterfaces");
    if(implemented_interfaces == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *implemented_interfacesListEntry;
    if (type_info->implemented_interfaces) {
    list_ForEach(implemented_interfacesListEntry, type_info->implemented_interfaces) {
    cJSON *itemLocal = type_convertToJSON(implemented_interfacesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(implemented_interfaces, itemLocal);
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

type_info_t *type_info_parseFromJSON(cJSON *type_infoJSON){

    type_info_t *type_info_local_var = NULL;

    // define the local list for type_info->custom_attributes
    list_t *custom_attributesList = NULL;

    // define the local variable for type_info->assembly
    assembly_t *assembly_local_nonprim = NULL;

    // define the local variable for type_info->module
    module_t *module_local_nonprim = NULL;

    // define the local variable for type_info->declaring_type
    type_t *declaring_type_local_nonprim = NULL;

    // define the local variable for type_info->declaring_method
    method_base_t *declaring_method_local_nonprim = NULL;

    // define the local variable for type_info->reflected_type
    type_t *reflected_type_local_nonprim = NULL;

    // define the local variable for type_info->underlying_system_type
    type_t *underlying_system_type_local_nonprim = NULL;

    // define the local list for type_info->generic_type_arguments
    list_t *generic_type_argumentsList = NULL;

    // define the local variable for type_info->struct_layout_attribute
    struct_layout_attribute_t *struct_layout_attribute_local_nonprim = NULL;

    // define the local variable for type_info->type_initializer
    constructor_info_t *type_initializer_local_nonprim = NULL;

    // define the local variable for type_info->type_handle
    runtime_type_handle_t *type_handle_local_nonprim = NULL;

    // define the local variable for type_info->base_type
    type_t *base_type_local_nonprim = NULL;

    // define the local list for type_info->generic_type_parameters
    list_t *generic_type_parametersList = NULL;

    // define the local list for type_info->declared_constructors
    list_t *declared_constructorsList = NULL;

    // define the local list for type_info->declared_events
    list_t *declared_eventsList = NULL;

    // define the local list for type_info->declared_fields
    list_t *declared_fieldsList = NULL;

    // define the local list for type_info->declared_members
    list_t *declared_membersList = NULL;

    // define the local list for type_info->declared_methods
    list_t *declared_methodsList = NULL;

    // define the local list for type_info->declared_nested_types
    list_t *declared_nested_typesList = NULL;

    // define the local list for type_info->declared_properties
    list_t *declared_propertiesList = NULL;

    // define the local list for type_info->implemented_interfaces
    list_t *implemented_interfacesList = NULL;

    // type_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // type_info->custom_attributes
    cJSON *custom_attributes = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "customAttributes");
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

    // type_info->is_collectible
    cJSON *is_collectible = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isCollectible");
    if (is_collectible) { 
    if(!cJSON_IsBool(is_collectible))
    {
    goto end; //Bool
    }
    }

    // type_info->metadata_token
    cJSON *metadata_token = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "metadataToken");
    if (metadata_token) { 
    if(!cJSON_IsNumber(metadata_token))
    {
    goto end; //Numeric
    }
    }

    // type_info->member_type
    cJSON *member_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "memberType");
    contentservice_type_info_MEMBERTYPE_e member_typeVariable;
    if (member_type) { 
    if(!cJSON_IsString(member_type))
    {
    goto end; //Enum
    }
    member_typeVariable = type_info_member_type_FromString(member_type->valuestring);
    }

    // type_info->_namespace
    cJSON *_namespace = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "namespace");
    if (_namespace) { 
    if(!cJSON_IsString(_namespace) && !cJSON_IsNull(_namespace))
    {
    goto end; //String
    }
    }

    // type_info->assembly_qualified_name
    cJSON *assembly_qualified_name = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "assemblyQualifiedName");
    if (assembly_qualified_name) { 
    if(!cJSON_IsString(assembly_qualified_name) && !cJSON_IsNull(assembly_qualified_name))
    {
    goto end; //String
    }
    }

    // type_info->full_name
    cJSON *full_name = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "fullName");
    if (full_name) { 
    if(!cJSON_IsString(full_name) && !cJSON_IsNull(full_name))
    {
    goto end; //String
    }
    }

    // type_info->assembly
    cJSON *assembly = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "assembly");
    if (assembly) { 
    assembly_local_nonprim = assembly_parseFromJSON(assembly); //nonprimitive
    }

    // type_info->module
    cJSON *module = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "module");
    if (module) { 
    module_local_nonprim = module_parseFromJSON(module); //nonprimitive
    }

    // type_info->is_interface
    cJSON *is_interface = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isInterface");
    if (is_interface) { 
    if(!cJSON_IsBool(is_interface))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested
    cJSON *is_nested = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNested");
    if (is_nested) { 
    if(!cJSON_IsBool(is_nested))
    {
    goto end; //Bool
    }
    }

    // type_info->declaring_type
    cJSON *declaring_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaringType");
    if (declaring_type) { 
    declaring_type_local_nonprim = type_parseFromJSON(declaring_type); //nonprimitive
    }

    // type_info->declaring_method
    cJSON *declaring_method = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaringMethod");
    if (declaring_method) { 
    declaring_method_local_nonprim = method_base_parseFromJSON(declaring_method); //nonprimitive
    }

    // type_info->reflected_type
    cJSON *reflected_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "reflectedType");
    if (reflected_type) { 
    reflected_type_local_nonprim = type_parseFromJSON(reflected_type); //nonprimitive
    }

    // type_info->underlying_system_type
    cJSON *underlying_system_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "underlyingSystemType");
    if (underlying_system_type) { 
    underlying_system_type_local_nonprim = type_parseFromJSON(underlying_system_type); //nonprimitive
    }

    // type_info->is_type_definition
    cJSON *is_type_definition = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isTypeDefinition");
    if (is_type_definition) { 
    if(!cJSON_IsBool(is_type_definition))
    {
    goto end; //Bool
    }
    }

    // type_info->is_array
    cJSON *is_array = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isArray");
    if (is_array) { 
    if(!cJSON_IsBool(is_array))
    {
    goto end; //Bool
    }
    }

    // type_info->is_by_ref
    cJSON *is_by_ref = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isByRef");
    if (is_by_ref) { 
    if(!cJSON_IsBool(is_by_ref))
    {
    goto end; //Bool
    }
    }

    // type_info->is_pointer
    cJSON *is_pointer = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isPointer");
    if (is_pointer) { 
    if(!cJSON_IsBool(is_pointer))
    {
    goto end; //Bool
    }
    }

    // type_info->is_constructed_generic_type
    cJSON *is_constructed_generic_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isConstructedGenericType");
    if (is_constructed_generic_type) { 
    if(!cJSON_IsBool(is_constructed_generic_type))
    {
    goto end; //Bool
    }
    }

    // type_info->is_generic_parameter
    cJSON *is_generic_parameter = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isGenericParameter");
    if (is_generic_parameter) { 
    if(!cJSON_IsBool(is_generic_parameter))
    {
    goto end; //Bool
    }
    }

    // type_info->is_generic_type_parameter
    cJSON *is_generic_type_parameter = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isGenericTypeParameter");
    if (is_generic_type_parameter) { 
    if(!cJSON_IsBool(is_generic_type_parameter))
    {
    goto end; //Bool
    }
    }

    // type_info->is_generic_method_parameter
    cJSON *is_generic_method_parameter = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isGenericMethodParameter");
    if (is_generic_method_parameter) { 
    if(!cJSON_IsBool(is_generic_method_parameter))
    {
    goto end; //Bool
    }
    }

    // type_info->is_generic_type
    cJSON *is_generic_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isGenericType");
    if (is_generic_type) { 
    if(!cJSON_IsBool(is_generic_type))
    {
    goto end; //Bool
    }
    }

    // type_info->is_generic_type_definition
    cJSON *is_generic_type_definition = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isGenericTypeDefinition");
    if (is_generic_type_definition) { 
    if(!cJSON_IsBool(is_generic_type_definition))
    {
    goto end; //Bool
    }
    }

    // type_info->is_sz_array
    cJSON *is_sz_array = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSZArray");
    if (is_sz_array) { 
    if(!cJSON_IsBool(is_sz_array))
    {
    goto end; //Bool
    }
    }

    // type_info->is_variable_bound_array
    cJSON *is_variable_bound_array = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isVariableBoundArray");
    if (is_variable_bound_array) { 
    if(!cJSON_IsBool(is_variable_bound_array))
    {
    goto end; //Bool
    }
    }

    // type_info->is_by_ref_like
    cJSON *is_by_ref_like = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isByRefLike");
    if (is_by_ref_like) { 
    if(!cJSON_IsBool(is_by_ref_like))
    {
    goto end; //Bool
    }
    }

    // type_info->is_function_pointer
    cJSON *is_function_pointer = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isFunctionPointer");
    if (is_function_pointer) { 
    if(!cJSON_IsBool(is_function_pointer))
    {
    goto end; //Bool
    }
    }

    // type_info->is_unmanaged_function_pointer
    cJSON *is_unmanaged_function_pointer = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isUnmanagedFunctionPointer");
    if (is_unmanaged_function_pointer) { 
    if(!cJSON_IsBool(is_unmanaged_function_pointer))
    {
    goto end; //Bool
    }
    }

    // type_info->has_element_type
    cJSON *has_element_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "hasElementType");
    if (has_element_type) { 
    if(!cJSON_IsBool(has_element_type))
    {
    goto end; //Bool
    }
    }

    // type_info->generic_type_arguments
    cJSON *generic_type_arguments = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "genericTypeArguments");
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

    // type_info->generic_parameter_position
    cJSON *generic_parameter_position = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "genericParameterPosition");
    if (generic_parameter_position) { 
    if(!cJSON_IsNumber(generic_parameter_position))
    {
    goto end; //Numeric
    }
    }

    // type_info->generic_parameter_attributes
    cJSON *generic_parameter_attributes = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "genericParameterAttributes");
    contentservice_type_info_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributesVariable;
    if (generic_parameter_attributes) { 
    if(!cJSON_IsString(generic_parameter_attributes))
    {
    goto end; //Enum
    }
    generic_parameter_attributesVariable = type_info_generic_parameter_attributes_FromString(generic_parameter_attributes->valuestring);
    }

    // type_info->attributes
    cJSON *attributes = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "attributes");
    contentservice_type_info_ATTRIBUTES_e attributesVariable;
    if (attributes) { 
    if(!cJSON_IsString(attributes))
    {
    goto end; //Enum
    }
    attributesVariable = type_info_attributes_FromString(attributes->valuestring);
    }

    // type_info->is_abstract
    cJSON *is_abstract = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isAbstract");
    if (is_abstract) { 
    if(!cJSON_IsBool(is_abstract))
    {
    goto end; //Bool
    }
    }

    // type_info->is_import
    cJSON *is_import = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isImport");
    if (is_import) { 
    if(!cJSON_IsBool(is_import))
    {
    goto end; //Bool
    }
    }

    // type_info->is_sealed
    cJSON *is_sealed = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSealed");
    if (is_sealed) { 
    if(!cJSON_IsBool(is_sealed))
    {
    goto end; //Bool
    }
    }

    // type_info->is_special_name
    cJSON *is_special_name = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSpecialName");
    if (is_special_name) { 
    if(!cJSON_IsBool(is_special_name))
    {
    goto end; //Bool
    }
    }

    // type_info->is_class
    cJSON *is_class = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isClass");
    if (is_class) { 
    if(!cJSON_IsBool(is_class))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_assembly
    cJSON *is_nested_assembly = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedAssembly");
    if (is_nested_assembly) { 
    if(!cJSON_IsBool(is_nested_assembly))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_fam_and_assem
    cJSON *is_nested_fam_and_assem = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedFamANDAssem");
    if (is_nested_fam_and_assem) { 
    if(!cJSON_IsBool(is_nested_fam_and_assem))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_family
    cJSON *is_nested_family = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedFamily");
    if (is_nested_family) { 
    if(!cJSON_IsBool(is_nested_family))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_fam_or_assem
    cJSON *is_nested_fam_or_assem = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedFamORAssem");
    if (is_nested_fam_or_assem) { 
    if(!cJSON_IsBool(is_nested_fam_or_assem))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_private
    cJSON *is_nested_private = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedPrivate");
    if (is_nested_private) { 
    if(!cJSON_IsBool(is_nested_private))
    {
    goto end; //Bool
    }
    }

    // type_info->is_nested_public
    cJSON *is_nested_public = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNestedPublic");
    if (is_nested_public) { 
    if(!cJSON_IsBool(is_nested_public))
    {
    goto end; //Bool
    }
    }

    // type_info->is_not_public
    cJSON *is_not_public = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isNotPublic");
    if (is_not_public) { 
    if(!cJSON_IsBool(is_not_public))
    {
    goto end; //Bool
    }
    }

    // type_info->is_public
    cJSON *is_public = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isPublic");
    if (is_public) { 
    if(!cJSON_IsBool(is_public))
    {
    goto end; //Bool
    }
    }

    // type_info->is_auto_layout
    cJSON *is_auto_layout = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isAutoLayout");
    if (is_auto_layout) { 
    if(!cJSON_IsBool(is_auto_layout))
    {
    goto end; //Bool
    }
    }

    // type_info->is_explicit_layout
    cJSON *is_explicit_layout = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isExplicitLayout");
    if (is_explicit_layout) { 
    if(!cJSON_IsBool(is_explicit_layout))
    {
    goto end; //Bool
    }
    }

    // type_info->is_layout_sequential
    cJSON *is_layout_sequential = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isLayoutSequential");
    if (is_layout_sequential) { 
    if(!cJSON_IsBool(is_layout_sequential))
    {
    goto end; //Bool
    }
    }

    // type_info->is_ansi_class
    cJSON *is_ansi_class = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isAnsiClass");
    if (is_ansi_class) { 
    if(!cJSON_IsBool(is_ansi_class))
    {
    goto end; //Bool
    }
    }

    // type_info->is_auto_class
    cJSON *is_auto_class = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isAutoClass");
    if (is_auto_class) { 
    if(!cJSON_IsBool(is_auto_class))
    {
    goto end; //Bool
    }
    }

    // type_info->is_unicode_class
    cJSON *is_unicode_class = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isUnicodeClass");
    if (is_unicode_class) { 
    if(!cJSON_IsBool(is_unicode_class))
    {
    goto end; //Bool
    }
    }

    // type_info->is_com_object
    cJSON *is_com_object = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isCOMObject");
    if (is_com_object) { 
    if(!cJSON_IsBool(is_com_object))
    {
    goto end; //Bool
    }
    }

    // type_info->is_contextful
    cJSON *is_contextful = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isContextful");
    if (is_contextful) { 
    if(!cJSON_IsBool(is_contextful))
    {
    goto end; //Bool
    }
    }

    // type_info->is_enum
    cJSON *is_enum = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isEnum");
    if (is_enum) { 
    if(!cJSON_IsBool(is_enum))
    {
    goto end; //Bool
    }
    }

    // type_info->is_marshal_by_ref
    cJSON *is_marshal_by_ref = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isMarshalByRef");
    if (is_marshal_by_ref) { 
    if(!cJSON_IsBool(is_marshal_by_ref))
    {
    goto end; //Bool
    }
    }

    // type_info->is_primitive
    cJSON *is_primitive = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isPrimitive");
    if (is_primitive) { 
    if(!cJSON_IsBool(is_primitive))
    {
    goto end; //Bool
    }
    }

    // type_info->is_value_type
    cJSON *is_value_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isValueType");
    if (is_value_type) { 
    if(!cJSON_IsBool(is_value_type))
    {
    goto end; //Bool
    }
    }

    // type_info->is_signature_type
    cJSON *is_signature_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSignatureType");
    if (is_signature_type) { 
    if(!cJSON_IsBool(is_signature_type))
    {
    goto end; //Bool
    }
    }

    // type_info->is_security_critical
    cJSON *is_security_critical = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSecurityCritical");
    if (is_security_critical) { 
    if(!cJSON_IsBool(is_security_critical))
    {
    goto end; //Bool
    }
    }

    // type_info->is_security_safe_critical
    cJSON *is_security_safe_critical = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSecuritySafeCritical");
    if (is_security_safe_critical) { 
    if(!cJSON_IsBool(is_security_safe_critical))
    {
    goto end; //Bool
    }
    }

    // type_info->is_security_transparent
    cJSON *is_security_transparent = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSecurityTransparent");
    if (is_security_transparent) { 
    if(!cJSON_IsBool(is_security_transparent))
    {
    goto end; //Bool
    }
    }

    // type_info->struct_layout_attribute
    cJSON *struct_layout_attribute = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "structLayoutAttribute");
    if (struct_layout_attribute) { 
    struct_layout_attribute_local_nonprim = struct_layout_attribute_parseFromJSON(struct_layout_attribute); //nonprimitive
    }

    // type_info->type_initializer
    cJSON *type_initializer = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "typeInitializer");
    if (type_initializer) { 
    type_initializer_local_nonprim = constructor_info_parseFromJSON(type_initializer); //nonprimitive
    }

    // type_info->type_handle
    cJSON *type_handle = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "typeHandle");
    if (type_handle) { 
    type_handle_local_nonprim = runtime_type_handle_parseFromJSON(type_handle); //nonprimitive
    }

    // type_info->guid
    cJSON *guid = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "guid");
    if (guid) { 
    if(!cJSON_IsString(guid) && !cJSON_IsNull(guid))
    {
    goto end; //String
    }
    }

    // type_info->base_type
    cJSON *base_type = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "baseType");
    if (base_type) { 
    base_type_local_nonprim = type_parseFromJSON(base_type); //nonprimitive
    }

    // type_info->is_serializable
    cJSON *is_serializable = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isSerializable");
    if (is_serializable) { 
    if(!cJSON_IsBool(is_serializable))
    {
    goto end; //Bool
    }
    }

    // type_info->contains_generic_parameters
    cJSON *contains_generic_parameters = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "containsGenericParameters");
    if (contains_generic_parameters) { 
    if(!cJSON_IsBool(contains_generic_parameters))
    {
    goto end; //Bool
    }
    }

    // type_info->is_visible
    cJSON *is_visible = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "isVisible");
    if (is_visible) { 
    if(!cJSON_IsBool(is_visible))
    {
    goto end; //Bool
    }
    }

    // type_info->generic_type_parameters
    cJSON *generic_type_parameters = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "genericTypeParameters");
    if (generic_type_parameters) { 
    cJSON *generic_type_parameters_local_nonprimitive = NULL;
    if(!cJSON_IsArray(generic_type_parameters)){
        goto end; //nonprimitive container
    }

    generic_type_parametersList = list_createList();

    cJSON_ArrayForEach(generic_type_parameters_local_nonprimitive,generic_type_parameters )
    {
        if(!cJSON_IsObject(generic_type_parameters_local_nonprimitive)){
            goto end;
        }
        type_t *generic_type_parametersItem = type_parseFromJSON(generic_type_parameters_local_nonprimitive);

        list_addElement(generic_type_parametersList, generic_type_parametersItem);
    }
    }

    // type_info->declared_constructors
    cJSON *declared_constructors = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredConstructors");
    if (declared_constructors) { 
    cJSON *declared_constructors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_constructors)){
        goto end; //nonprimitive container
    }

    declared_constructorsList = list_createList();

    cJSON_ArrayForEach(declared_constructors_local_nonprimitive,declared_constructors )
    {
        if(!cJSON_IsObject(declared_constructors_local_nonprimitive)){
            goto end;
        }
        constructor_info_t *declared_constructorsItem = constructor_info_parseFromJSON(declared_constructors_local_nonprimitive);

        list_addElement(declared_constructorsList, declared_constructorsItem);
    }
    }

    // type_info->declared_events
    cJSON *declared_events = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredEvents");
    if (declared_events) { 
    cJSON *declared_events_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_events)){
        goto end; //nonprimitive container
    }

    declared_eventsList = list_createList();

    cJSON_ArrayForEach(declared_events_local_nonprimitive,declared_events )
    {
        if(!cJSON_IsObject(declared_events_local_nonprimitive)){
            goto end;
        }
        event_info_t *declared_eventsItem = event_info_parseFromJSON(declared_events_local_nonprimitive);

        list_addElement(declared_eventsList, declared_eventsItem);
    }
    }

    // type_info->declared_fields
    cJSON *declared_fields = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredFields");
    if (declared_fields) { 
    cJSON *declared_fields_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_fields)){
        goto end; //nonprimitive container
    }

    declared_fieldsList = list_createList();

    cJSON_ArrayForEach(declared_fields_local_nonprimitive,declared_fields )
    {
        if(!cJSON_IsObject(declared_fields_local_nonprimitive)){
            goto end;
        }
        field_info_t *declared_fieldsItem = field_info_parseFromJSON(declared_fields_local_nonprimitive);

        list_addElement(declared_fieldsList, declared_fieldsItem);
    }
    }

    // type_info->declared_members
    cJSON *declared_members = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredMembers");
    if (declared_members) { 
    cJSON *declared_members_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_members)){
        goto end; //nonprimitive container
    }

    declared_membersList = list_createList();

    cJSON_ArrayForEach(declared_members_local_nonprimitive,declared_members )
    {
        if(!cJSON_IsObject(declared_members_local_nonprimitive)){
            goto end;
        }
        member_info_t *declared_membersItem = member_info_parseFromJSON(declared_members_local_nonprimitive);

        list_addElement(declared_membersList, declared_membersItem);
    }
    }

    // type_info->declared_methods
    cJSON *declared_methods = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredMethods");
    if (declared_methods) { 
    cJSON *declared_methods_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_methods)){
        goto end; //nonprimitive container
    }

    declared_methodsList = list_createList();

    cJSON_ArrayForEach(declared_methods_local_nonprimitive,declared_methods )
    {
        if(!cJSON_IsObject(declared_methods_local_nonprimitive)){
            goto end;
        }
        method_info_t *declared_methodsItem = method_info_parseFromJSON(declared_methods_local_nonprimitive);

        list_addElement(declared_methodsList, declared_methodsItem);
    }
    }

    // type_info->declared_nested_types
    cJSON *declared_nested_types = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredNestedTypes");
    if (declared_nested_types) { 
    cJSON *declared_nested_types_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_nested_types)){
        goto end; //nonprimitive container
    }

    declared_nested_typesList = list_createList();

    cJSON_ArrayForEach(declared_nested_types_local_nonprimitive,declared_nested_types )
    {
        if(!cJSON_IsObject(declared_nested_types_local_nonprimitive)){
            goto end;
        }
        type_info_t *declared_nested_typesItem = type_info_parseFromJSON(declared_nested_types_local_nonprimitive);

        list_addElement(declared_nested_typesList, declared_nested_typesItem);
    }
    }

    // type_info->declared_properties
    cJSON *declared_properties = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "declaredProperties");
    if (declared_properties) { 
    cJSON *declared_properties_local_nonprimitive = NULL;
    if(!cJSON_IsArray(declared_properties)){
        goto end; //nonprimitive container
    }

    declared_propertiesList = list_createList();

    cJSON_ArrayForEach(declared_properties_local_nonprimitive,declared_properties )
    {
        if(!cJSON_IsObject(declared_properties_local_nonprimitive)){
            goto end;
        }
        property_info_t *declared_propertiesItem = property_info_parseFromJSON(declared_properties_local_nonprimitive);

        list_addElement(declared_propertiesList, declared_propertiesItem);
    }
    }

    // type_info->implemented_interfaces
    cJSON *implemented_interfaces = cJSON_GetObjectItemCaseSensitive(type_infoJSON, "implementedInterfaces");
    if (implemented_interfaces) { 
    cJSON *implemented_interfaces_local_nonprimitive = NULL;
    if(!cJSON_IsArray(implemented_interfaces)){
        goto end; //nonprimitive container
    }

    implemented_interfacesList = list_createList();

    cJSON_ArrayForEach(implemented_interfaces_local_nonprimitive,implemented_interfaces )
    {
        if(!cJSON_IsObject(implemented_interfaces_local_nonprimitive)){
            goto end;
        }
        type_t *implemented_interfacesItem = type_parseFromJSON(implemented_interfaces_local_nonprimitive);

        list_addElement(implemented_interfacesList, implemented_interfacesItem);
    }
    }


    type_info_local_var = type_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        custom_attributes ? custom_attributesList : NULL,
        is_collectible ? is_collectible->valueint : 0,
        metadata_token ? metadata_token->valuedouble : 0,
        member_type ? member_typeVariable : contentservice_type_info_MEMBERTYPE_NULL,
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
        generic_parameter_attributes ? generic_parameter_attributesVariable : contentservice_type_info_GENERICPARAMETERATTRIBUTES_NULL,
        attributes ? attributesVariable : contentservice_type_info_ATTRIBUTES_NULL,
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
        is_visible ? is_visible->valueint : 0,
        generic_type_parameters ? generic_type_parametersList : NULL,
        declared_constructors ? declared_constructorsList : NULL,
        declared_events ? declared_eventsList : NULL,
        declared_fields ? declared_fieldsList : NULL,
        declared_members ? declared_membersList : NULL,
        declared_methods ? declared_methodsList : NULL,
        declared_nested_types ? declared_nested_typesList : NULL,
        declared_properties ? declared_propertiesList : NULL,
        implemented_interfaces ? implemented_interfacesList : NULL
        );

    return type_info_local_var;
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
    if (generic_type_parametersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, generic_type_parametersList) {
            type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(generic_type_parametersList);
        generic_type_parametersList = NULL;
    }
    if (declared_constructorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_constructorsList) {
            constructor_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_constructorsList);
        declared_constructorsList = NULL;
    }
    if (declared_eventsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_eventsList) {
            event_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_eventsList);
        declared_eventsList = NULL;
    }
    if (declared_fieldsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_fieldsList) {
            field_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_fieldsList);
        declared_fieldsList = NULL;
    }
    if (declared_membersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_membersList) {
            member_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_membersList);
        declared_membersList = NULL;
    }
    if (declared_methodsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_methodsList) {
            method_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_methodsList);
        declared_methodsList = NULL;
    }
    if (declared_nested_typesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_nested_typesList) {
            type_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_nested_typesList);
        declared_nested_typesList = NULL;
    }
    if (declared_propertiesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, declared_propertiesList) {
            property_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(declared_propertiesList);
        declared_propertiesList = NULL;
    }
    if (implemented_interfacesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, implemented_interfacesList) {
            type_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(implemented_interfacesList);
        implemented_interfacesList = NULL;
    }
    return NULL;

}
