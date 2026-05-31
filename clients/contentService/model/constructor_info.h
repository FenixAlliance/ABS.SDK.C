/*
 * constructor_info.h
 *
 * 
 */

#ifndef _constructor_info_H_
#define _constructor_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct constructor_info_t constructor_info_t;

#include "custom_attribute_data.h"
#include "module.h"
#include "runtime_method_handle.h"
#include "type.h"

// Enum ATTRIBUTES for constructor_info

typedef enum  { contentservice_constructor_info_ATTRIBUTES_NULL = 0, contentservice_constructor_info_ATTRIBUTES_PrivateScope, contentservice_constructor_info_ATTRIBUTES__Private, contentservice_constructor_info_ATTRIBUTES_FamANDAssem, contentservice_constructor_info_ATTRIBUTES_Assembly, contentservice_constructor_info_ATTRIBUTES_Family, contentservice_constructor_info_ATTRIBUTES_FamORAssem, contentservice_constructor_info_ATTRIBUTES__Public, contentservice_constructor_info_ATTRIBUTES_MemberAccessMask, contentservice_constructor_info_ATTRIBUTES_UnmanagedExport, contentservice_constructor_info_ATTRIBUTES__Static, contentservice_constructor_info_ATTRIBUTES__Final, contentservice_constructor_info_ATTRIBUTES__Virtual, contentservice_constructor_info_ATTRIBUTES_HideBySig, contentservice_constructor_info_ATTRIBUTES_NewSlot, contentservice_constructor_info_ATTRIBUTES_CheckAccessOnOverride, contentservice_constructor_info_ATTRIBUTES_Abstract, contentservice_constructor_info_ATTRIBUTES_SpecialName, contentservice_constructor_info_ATTRIBUTES_RTSpecialName, contentservice_constructor_info_ATTRIBUTES_PinvokeImpl, contentservice_constructor_info_ATTRIBUTES_HasSecurity, contentservice_constructor_info_ATTRIBUTES_RequireSecObject, contentservice_constructor_info_ATTRIBUTES_ReservedMask } contentservice_constructor_info_ATTRIBUTES_e;

char* constructor_info_attributes_ToString(contentservice_constructor_info_ATTRIBUTES_e attributes);

contentservice_constructor_info_ATTRIBUTES_e constructor_info_attributes_FromString(char* attributes);

// Enum METHODIMPLEMENTATIONFLAGS for constructor_info

typedef enum  { contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NULL = 0, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_IL, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_Native, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_OPTIL, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_CodeTypeMask, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_ManagedMask, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NoInlining, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_ForwardRef, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS__Synchronized, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NoOptimization, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_PreserveSig, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_AggressiveInlining, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_AggressiveOptimization, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_InternalCall, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_Async, contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_MaxMethodImplVal } contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e;

char* constructor_info_method_implementation_flags_ToString(contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags);

contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e constructor_info_method_implementation_flags_FromString(char* method_implementation_flags);

// Enum CALLINGCONVENTION for constructor_info

typedef enum  { contentservice_constructor_info_CALLINGCONVENTION_NULL = 0, contentservice_constructor_info_CALLINGCONVENTION_Standard, contentservice_constructor_info_CALLINGCONVENTION_VarArgs, contentservice_constructor_info_CALLINGCONVENTION_Any, contentservice_constructor_info_CALLINGCONVENTION_HasThis, contentservice_constructor_info_CALLINGCONVENTION_ExplicitThis } contentservice_constructor_info_CALLINGCONVENTION_e;

char* constructor_info_calling_convention_ToString(contentservice_constructor_info_CALLINGCONVENTION_e calling_convention);

contentservice_constructor_info_CALLINGCONVENTION_e constructor_info_calling_convention_FromString(char* calling_convention);

// Enum MEMBERTYPE for constructor_info

typedef enum  { contentservice_constructor_info_MEMBERTYPE_NULL = 0, contentservice_constructor_info_MEMBERTYPE_Constructor, contentservice_constructor_info_MEMBERTYPE_Event, contentservice_constructor_info_MEMBERTYPE_Field, contentservice_constructor_info_MEMBERTYPE_Method, contentservice_constructor_info_MEMBERTYPE_Property, contentservice_constructor_info_MEMBERTYPE_TypeInfo, contentservice_constructor_info_MEMBERTYPE_Custom, contentservice_constructor_info_MEMBERTYPE_NestedType, contentservice_constructor_info_MEMBERTYPE_All } contentservice_constructor_info_MEMBERTYPE_e;

char* constructor_info_member_type_ToString(contentservice_constructor_info_MEMBERTYPE_e member_type);

contentservice_constructor_info_MEMBERTYPE_e constructor_info_member_type_FromString(char* member_type);



typedef struct constructor_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    contentservice_constructor_info_ATTRIBUTES_e attributes; //enum
    contentservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags; //enum
    contentservice_constructor_info_CALLINGCONVENTION_e calling_convention; //enum
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
    contentservice_constructor_info_MEMBERTYPE_e member_type; //enum

} constructor_info_t;

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
);

void constructor_info_free(constructor_info_t *constructor_info);

constructor_info_t *constructor_info_parseFromJSON(cJSON *constructor_infoJSON);

cJSON *constructor_info_convertToJSON(constructor_info_t *constructor_info);

#endif /* _constructor_info_H_ */

