/*
 * type.h
 *
 * 
 */

#ifndef _type_H_
#define _type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct type_t type_t;

#include "assembly.h"
#include "constructor_info.h"
#include "custom_attribute_data.h"
#include "method_base.h"
#include "module.h"
#include "runtime_type_handle.h"
#include "struct_layout_attribute.h"

// Enum MEMBERTYPE for type

typedef enum  { contentservice_type_MEMBERTYPE_NULL = 0, contentservice_type_MEMBERTYPE_Constructor, contentservice_type_MEMBERTYPE_Event, contentservice_type_MEMBERTYPE_Field, contentservice_type_MEMBERTYPE_Method, contentservice_type_MEMBERTYPE_Property, contentservice_type_MEMBERTYPE_TypeInfo, contentservice_type_MEMBERTYPE_Custom, contentservice_type_MEMBERTYPE_NestedType, contentservice_type_MEMBERTYPE_All } contentservice_type_MEMBERTYPE_e;

char* type_member_type_ToString(contentservice_type_MEMBERTYPE_e member_type);

contentservice_type_MEMBERTYPE_e type_member_type_FromString(char* member_type);

// Enum GENERICPARAMETERATTRIBUTES for type

typedef enum  { contentservice_type_GENERICPARAMETERATTRIBUTES_NULL = 0, contentservice_type_GENERICPARAMETERATTRIBUTES_None, contentservice_type_GENERICPARAMETERATTRIBUTES_Covariant, contentservice_type_GENERICPARAMETERATTRIBUTES_Contravariant, contentservice_type_GENERICPARAMETERATTRIBUTES_VarianceMask, contentservice_type_GENERICPARAMETERATTRIBUTES_ReferenceTypeConstraint, contentservice_type_GENERICPARAMETERATTRIBUTES_NotNullableValueTypeConstraint, contentservice_type_GENERICPARAMETERATTRIBUTES_DefaultConstructorConstraint, contentservice_type_GENERICPARAMETERATTRIBUTES_SpecialConstraintMask, contentservice_type_GENERICPARAMETERATTRIBUTES_AllowByRefLike } contentservice_type_GENERICPARAMETERATTRIBUTES_e;

char* type_generic_parameter_attributes_ToString(contentservice_type_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes);

contentservice_type_GENERICPARAMETERATTRIBUTES_e type_generic_parameter_attributes_FromString(char* generic_parameter_attributes);

// Enum ATTRIBUTES for type

typedef enum  { contentservice_type_ATTRIBUTES_NULL = 0, contentservice_type_ATTRIBUTES_NotPublic, contentservice_type_ATTRIBUTES__Public, contentservice_type_ATTRIBUTES_NestedPublic, contentservice_type_ATTRIBUTES_NestedPrivate, contentservice_type_ATTRIBUTES_NestedFamily, contentservice_type_ATTRIBUTES_NestedAssembly, contentservice_type_ATTRIBUTES_NestedFamANDAssem, contentservice_type_ATTRIBUTES_VisibilityMask, contentservice_type_ATTRIBUTES_SequentialLayout, contentservice_type_ATTRIBUTES_ExplicitLayout, contentservice_type_ATTRIBUTES_LayoutMask, contentservice_type_ATTRIBUTES_Interface, contentservice_type_ATTRIBUTES_Abstract, contentservice_type_ATTRIBUTES_Sealed, contentservice_type_ATTRIBUTES_SpecialName, contentservice_type_ATTRIBUTES_RTSpecialName, contentservice_type_ATTRIBUTES_Import, contentservice_type_ATTRIBUTES_Serializable, contentservice_type_ATTRIBUTES_WindowsRuntime, contentservice_type_ATTRIBUTES_UnicodeClass, contentservice_type_ATTRIBUTES_AutoClass, contentservice_type_ATTRIBUTES_StringFormatMask, contentservice_type_ATTRIBUTES_HasSecurity, contentservice_type_ATTRIBUTES_ReservedMask, contentservice_type_ATTRIBUTES_BeforeFieldInit, contentservice_type_ATTRIBUTES_CustomFormatMask } contentservice_type_ATTRIBUTES_e;

char* type_attributes_ToString(contentservice_type_ATTRIBUTES_e attributes);

contentservice_type_ATTRIBUTES_e type_attributes_FromString(char* attributes);



typedef struct type_t {
    char *name; // string
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    contentservice_type_MEMBERTYPE_e member_type; //enum
    char *_namespace; // string
    char *assembly_qualified_name; // string
    char *full_name; // string
    struct assembly_t *assembly; //model
    struct module_t *module; //model
    int is_interface; //boolean
    int is_nested; //boolean
    struct type_t *declaring_type; //model
    struct method_base_t *declaring_method; //model
    struct type_t *reflected_type; //model
    struct type_t *underlying_system_type; //model
    int is_type_definition; //boolean
    int is_array; //boolean
    int is_by_ref; //boolean
    int is_pointer; //boolean
    int is_constructed_generic_type; //boolean
    int is_generic_parameter; //boolean
    int is_generic_type_parameter; //boolean
    int is_generic_method_parameter; //boolean
    int is_generic_type; //boolean
    int is_generic_type_definition; //boolean
    int is_sz_array; //boolean
    int is_variable_bound_array; //boolean
    int is_by_ref_like; //boolean
    int is_function_pointer; //boolean
    int is_unmanaged_function_pointer; //boolean
    int has_element_type; //boolean
    list_t *generic_type_arguments; //nonprimitive container
    int generic_parameter_position; //numeric
    contentservice_type_GENERICPARAMETERATTRIBUTES_e generic_parameter_attributes; //enum
    contentservice_type_ATTRIBUTES_e attributes; //enum
    int is_abstract; //boolean
    int is_import; //boolean
    int is_sealed; //boolean
    int is_special_name; //boolean
    int is_class; //boolean
    int is_nested_assembly; //boolean
    int is_nested_fam_and_assem; //boolean
    int is_nested_family; //boolean
    int is_nested_fam_or_assem; //boolean
    int is_nested_private; //boolean
    int is_nested_public; //boolean
    int is_not_public; //boolean
    int is_public; //boolean
    int is_auto_layout; //boolean
    int is_explicit_layout; //boolean
    int is_layout_sequential; //boolean
    int is_ansi_class; //boolean
    int is_auto_class; //boolean
    int is_unicode_class; //boolean
    int is_com_object; //boolean
    int is_contextful; //boolean
    int is_enum; //boolean
    int is_marshal_by_ref; //boolean
    int is_primitive; //boolean
    int is_value_type; //boolean
    int is_signature_type; //boolean
    int is_security_critical; //boolean
    int is_security_safe_critical; //boolean
    int is_security_transparent; //boolean
    struct struct_layout_attribute_t *struct_layout_attribute; //model
    struct constructor_info_t *type_initializer; //model
    struct runtime_type_handle_t *type_handle; //model
    char *guid; // string
    struct type_t *base_type; //model
    int is_serializable; //boolean
    int contains_generic_parameters; //boolean
    int is_visible; //boolean

} type_t;

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
);

void type_free(type_t *type);

type_t *type_parseFromJSON(cJSON *typeJSON);

cJSON *type_convertToJSON(type_t *type);

#endif /* _type_H_ */

