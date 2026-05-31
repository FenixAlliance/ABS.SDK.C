/*
 * method_info.h
 *
 * 
 */

#ifndef _method_info_H_
#define _method_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct method_info_t method_info_t;

#include "custom_attribute_data.h"
#include "module.h"
#include "object.h"
#include "parameter_info.h"
#include "runtime_method_handle.h"
#include "type.h"

// Enum ATTRIBUTES for method_info

typedef enum  { contentservice_method_info_ATTRIBUTES_NULL = 0, contentservice_method_info_ATTRIBUTES_PrivateScope, contentservice_method_info_ATTRIBUTES__Private, contentservice_method_info_ATTRIBUTES_FamANDAssem, contentservice_method_info_ATTRIBUTES_Assembly, contentservice_method_info_ATTRIBUTES_Family, contentservice_method_info_ATTRIBUTES_FamORAssem, contentservice_method_info_ATTRIBUTES__Public, contentservice_method_info_ATTRIBUTES_MemberAccessMask, contentservice_method_info_ATTRIBUTES_UnmanagedExport, contentservice_method_info_ATTRIBUTES__Static, contentservice_method_info_ATTRIBUTES__Final, contentservice_method_info_ATTRIBUTES__Virtual, contentservice_method_info_ATTRIBUTES_HideBySig, contentservice_method_info_ATTRIBUTES_NewSlot, contentservice_method_info_ATTRIBUTES_CheckAccessOnOverride, contentservice_method_info_ATTRIBUTES_Abstract, contentservice_method_info_ATTRIBUTES_SpecialName, contentservice_method_info_ATTRIBUTES_RTSpecialName, contentservice_method_info_ATTRIBUTES_PinvokeImpl, contentservice_method_info_ATTRIBUTES_HasSecurity, contentservice_method_info_ATTRIBUTES_RequireSecObject, contentservice_method_info_ATTRIBUTES_ReservedMask } contentservice_method_info_ATTRIBUTES_e;

char* method_info_attributes_ToString(contentservice_method_info_ATTRIBUTES_e attributes);

contentservice_method_info_ATTRIBUTES_e method_info_attributes_FromString(char* attributes);

// Enum METHODIMPLEMENTATIONFLAGS for method_info

typedef enum  { contentservice_method_info_METHODIMPLEMENTATIONFLAGS_NULL = 0, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_IL, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_Native, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_OPTIL, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_CodeTypeMask, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_ManagedMask, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_NoInlining, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_ForwardRef, contentservice_method_info_METHODIMPLEMENTATIONFLAGS__Synchronized, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_NoOptimization, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_PreserveSig, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_AggressiveInlining, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_AggressiveOptimization, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_InternalCall, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_Async, contentservice_method_info_METHODIMPLEMENTATIONFLAGS_MaxMethodImplVal } contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e;

char* method_info_method_implementation_flags_ToString(contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags);

contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_info_method_implementation_flags_FromString(char* method_implementation_flags);

// Enum CALLINGCONVENTION for method_info

typedef enum  { contentservice_method_info_CALLINGCONVENTION_NULL = 0, contentservice_method_info_CALLINGCONVENTION_Standard, contentservice_method_info_CALLINGCONVENTION_VarArgs, contentservice_method_info_CALLINGCONVENTION_Any, contentservice_method_info_CALLINGCONVENTION_HasThis, contentservice_method_info_CALLINGCONVENTION_ExplicitThis } contentservice_method_info_CALLINGCONVENTION_e;

char* method_info_calling_convention_ToString(contentservice_method_info_CALLINGCONVENTION_e calling_convention);

contentservice_method_info_CALLINGCONVENTION_e method_info_calling_convention_FromString(char* calling_convention);

// Enum MEMBERTYPE for method_info

typedef enum  { contentservice_method_info_MEMBERTYPE_NULL = 0, contentservice_method_info_MEMBERTYPE_Constructor, contentservice_method_info_MEMBERTYPE_Event, contentservice_method_info_MEMBERTYPE_Field, contentservice_method_info_MEMBERTYPE_Method, contentservice_method_info_MEMBERTYPE_Property, contentservice_method_info_MEMBERTYPE_TypeInfo, contentservice_method_info_MEMBERTYPE_Custom, contentservice_method_info_MEMBERTYPE_NestedType, contentservice_method_info_MEMBERTYPE_All } contentservice_method_info_MEMBERTYPE_e;

char* method_info_member_type_ToString(contentservice_method_info_MEMBERTYPE_e member_type);

contentservice_method_info_MEMBERTYPE_e method_info_member_type_FromString(char* member_type);



typedef struct method_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    contentservice_method_info_ATTRIBUTES_e attributes; //enum
    contentservice_method_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags; //enum
    contentservice_method_info_CALLINGCONVENTION_e calling_convention; //enum
    int is_abstract; //boolean
    int is_constructor; //boolean
    int is_final; //boolean
    int is_hide_by_sig; //boolean
    int is_special_name; //boolean
    int is_static; //boolean
    int is_virtual; //boolean
    int is_assembly; //boolean
    int is_family; //boolean
    int is_family_and_assembly; //boolean
    int is_family_or_assembly; //boolean
    int is_private; //boolean
    int is_public; //boolean
    int is_constructed_generic_method; //boolean
    int is_generic_method; //boolean
    int is_generic_method_definition; //boolean
    int contains_generic_parameters; //boolean
    struct runtime_method_handle_t *method_handle; //model
    int is_security_critical; //boolean
    int is_security_safe_critical; //boolean
    int is_security_transparent; //boolean
    contentservice_method_info_MEMBERTYPE_e member_type; //enum
    struct parameter_info_t *return_parameter; //model
    struct type_t *return_type; //model
    object_t *return_type_custom_attributes; //object

} method_info_t;

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
);

void method_info_free(method_info_t *method_info);

method_info_t *method_info_parseFromJSON(cJSON *method_infoJSON);

cJSON *method_info_convertToJSON(method_info_t *method_info);

#endif /* _method_info_H_ */

