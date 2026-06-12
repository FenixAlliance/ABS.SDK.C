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

typedef enum  { blockchainsservice_constructor_info_ATTRIBUTES_NULL = 0, blockchainsservice_constructor_info_ATTRIBUTES_PrivateScope, blockchainsservice_constructor_info_ATTRIBUTES__Private, blockchainsservice_constructor_info_ATTRIBUTES_FamANDAssem, blockchainsservice_constructor_info_ATTRIBUTES_Assembly, blockchainsservice_constructor_info_ATTRIBUTES_Family, blockchainsservice_constructor_info_ATTRIBUTES_FamORAssem, blockchainsservice_constructor_info_ATTRIBUTES__Public, blockchainsservice_constructor_info_ATTRIBUTES_MemberAccessMask, blockchainsservice_constructor_info_ATTRIBUTES_UnmanagedExport, blockchainsservice_constructor_info_ATTRIBUTES__Static, blockchainsservice_constructor_info_ATTRIBUTES__Final, blockchainsservice_constructor_info_ATTRIBUTES__Virtual, blockchainsservice_constructor_info_ATTRIBUTES_HideBySig, blockchainsservice_constructor_info_ATTRIBUTES_NewSlot, blockchainsservice_constructor_info_ATTRIBUTES_CheckAccessOnOverride, blockchainsservice_constructor_info_ATTRIBUTES_Abstract, blockchainsservice_constructor_info_ATTRIBUTES_SpecialName, blockchainsservice_constructor_info_ATTRIBUTES_RTSpecialName, blockchainsservice_constructor_info_ATTRIBUTES_PinvokeImpl, blockchainsservice_constructor_info_ATTRIBUTES_HasSecurity, blockchainsservice_constructor_info_ATTRIBUTES_RequireSecObject, blockchainsservice_constructor_info_ATTRIBUTES_ReservedMask } blockchainsservice_constructor_info_ATTRIBUTES_e;

char* constructor_info_attributes_ToString(blockchainsservice_constructor_info_ATTRIBUTES_e attributes);

blockchainsservice_constructor_info_ATTRIBUTES_e constructor_info_attributes_FromString(char* attributes);

// Enum METHODIMPLEMENTATIONFLAGS for constructor_info

typedef enum  { blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NULL = 0, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_IL, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_Native, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_OPTIL, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_CodeTypeMask, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_ManagedMask, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NoInlining, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_ForwardRef, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS__Synchronized, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_NoOptimization, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_PreserveSig, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_AggressiveInlining, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_AggressiveOptimization, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_InternalCall, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_Async, blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_MaxMethodImplVal } blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e;

char* constructor_info_method_implementation_flags_ToString(blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags);

blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e constructor_info_method_implementation_flags_FromString(char* method_implementation_flags);

// Enum CALLINGCONVENTION for constructor_info

typedef enum  { blockchainsservice_constructor_info_CALLINGCONVENTION_NULL = 0, blockchainsservice_constructor_info_CALLINGCONVENTION_Standard, blockchainsservice_constructor_info_CALLINGCONVENTION_VarArgs, blockchainsservice_constructor_info_CALLINGCONVENTION_Any, blockchainsservice_constructor_info_CALLINGCONVENTION_HasThis, blockchainsservice_constructor_info_CALLINGCONVENTION_ExplicitThis } blockchainsservice_constructor_info_CALLINGCONVENTION_e;

char* constructor_info_calling_convention_ToString(blockchainsservice_constructor_info_CALLINGCONVENTION_e calling_convention);

blockchainsservice_constructor_info_CALLINGCONVENTION_e constructor_info_calling_convention_FromString(char* calling_convention);

// Enum MEMBERTYPE for constructor_info

typedef enum  { blockchainsservice_constructor_info_MEMBERTYPE_NULL = 0, blockchainsservice_constructor_info_MEMBERTYPE_Constructor, blockchainsservice_constructor_info_MEMBERTYPE_Event, blockchainsservice_constructor_info_MEMBERTYPE_Field, blockchainsservice_constructor_info_MEMBERTYPE_Method, blockchainsservice_constructor_info_MEMBERTYPE_Property, blockchainsservice_constructor_info_MEMBERTYPE_TypeInfo, blockchainsservice_constructor_info_MEMBERTYPE_Custom, blockchainsservice_constructor_info_MEMBERTYPE_NestedType, blockchainsservice_constructor_info_MEMBERTYPE_All } blockchainsservice_constructor_info_MEMBERTYPE_e;

char* constructor_info_member_type_ToString(blockchainsservice_constructor_info_MEMBERTYPE_e member_type);

blockchainsservice_constructor_info_MEMBERTYPE_e constructor_info_member_type_FromString(char* member_type);



typedef struct constructor_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    blockchainsservice_constructor_info_ATTRIBUTES_e attributes; //enum
    blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags; //enum
    blockchainsservice_constructor_info_CALLINGCONVENTION_e calling_convention; //enum
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
    blockchainsservice_constructor_info_MEMBERTYPE_e member_type; //enum

} constructor_info_t;

constructor_info_t *constructor_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_constructor_info_ATTRIBUTES_e attributes,
    blockchainsservice_constructor_info_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags,
    blockchainsservice_constructor_info_CALLINGCONVENTION_e calling_convention,
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
    blockchainsservice_constructor_info_MEMBERTYPE_e member_type
);

void constructor_info_free(constructor_info_t *constructor_info);

constructor_info_t *constructor_info_parseFromJSON(cJSON *constructor_infoJSON);

cJSON *constructor_info_convertToJSON(constructor_info_t *constructor_info);

#endif /* _constructor_info_H_ */

