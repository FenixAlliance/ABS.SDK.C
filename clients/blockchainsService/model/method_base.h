/*
 * method_base.h
 *
 * 
 */

#ifndef _method_base_H_
#define _method_base_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct method_base_t method_base_t;

#include "custom_attribute_data.h"
#include "module.h"
#include "runtime_method_handle.h"
#include "type.h"

// Enum MEMBERTYPE for method_base

typedef enum  { blockchainsservice_method_base_MEMBERTYPE_NULL = 0, blockchainsservice_method_base_MEMBERTYPE_Constructor, blockchainsservice_method_base_MEMBERTYPE_Event, blockchainsservice_method_base_MEMBERTYPE_Field, blockchainsservice_method_base_MEMBERTYPE_Method, blockchainsservice_method_base_MEMBERTYPE_Property, blockchainsservice_method_base_MEMBERTYPE_TypeInfo, blockchainsservice_method_base_MEMBERTYPE_Custom, blockchainsservice_method_base_MEMBERTYPE_NestedType, blockchainsservice_method_base_MEMBERTYPE_All } blockchainsservice_method_base_MEMBERTYPE_e;

char* method_base_member_type_ToString(blockchainsservice_method_base_MEMBERTYPE_e member_type);

blockchainsservice_method_base_MEMBERTYPE_e method_base_member_type_FromString(char* member_type);

// Enum ATTRIBUTES for method_base

typedef enum  { blockchainsservice_method_base_ATTRIBUTES_NULL = 0, blockchainsservice_method_base_ATTRIBUTES_PrivateScope, blockchainsservice_method_base_ATTRIBUTES__Private, blockchainsservice_method_base_ATTRIBUTES_FamANDAssem, blockchainsservice_method_base_ATTRIBUTES_Assembly, blockchainsservice_method_base_ATTRIBUTES_Family, blockchainsservice_method_base_ATTRIBUTES_FamORAssem, blockchainsservice_method_base_ATTRIBUTES__Public, blockchainsservice_method_base_ATTRIBUTES_MemberAccessMask, blockchainsservice_method_base_ATTRIBUTES_UnmanagedExport, blockchainsservice_method_base_ATTRIBUTES__Static, blockchainsservice_method_base_ATTRIBUTES__Final, blockchainsservice_method_base_ATTRIBUTES__Virtual, blockchainsservice_method_base_ATTRIBUTES_HideBySig, blockchainsservice_method_base_ATTRIBUTES_NewSlot, blockchainsservice_method_base_ATTRIBUTES_CheckAccessOnOverride, blockchainsservice_method_base_ATTRIBUTES_Abstract, blockchainsservice_method_base_ATTRIBUTES_SpecialName, blockchainsservice_method_base_ATTRIBUTES_RTSpecialName, blockchainsservice_method_base_ATTRIBUTES_PinvokeImpl, blockchainsservice_method_base_ATTRIBUTES_HasSecurity, blockchainsservice_method_base_ATTRIBUTES_RequireSecObject, blockchainsservice_method_base_ATTRIBUTES_ReservedMask } blockchainsservice_method_base_ATTRIBUTES_e;

char* method_base_attributes_ToString(blockchainsservice_method_base_ATTRIBUTES_e attributes);

blockchainsservice_method_base_ATTRIBUTES_e method_base_attributes_FromString(char* attributes);

// Enum METHODIMPLEMENTATIONFLAGS for method_base

typedef enum  { blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_NULL = 0, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_IL, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_Native, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_OPTIL, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_CodeTypeMask, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_ManagedMask, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_NoInlining, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_ForwardRef, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS__Synchronized, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_NoOptimization, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_PreserveSig, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_AggressiveInlining, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_AggressiveOptimization, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_InternalCall, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_Async, blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_MaxMethodImplVal } blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e;

char* method_base_method_implementation_flags_ToString(blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags);

blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_base_method_implementation_flags_FromString(char* method_implementation_flags);

// Enum CALLINGCONVENTION for method_base

typedef enum  { blockchainsservice_method_base_CALLINGCONVENTION_NULL = 0, blockchainsservice_method_base_CALLINGCONVENTION_Standard, blockchainsservice_method_base_CALLINGCONVENTION_VarArgs, blockchainsservice_method_base_CALLINGCONVENTION_Any, blockchainsservice_method_base_CALLINGCONVENTION_HasThis, blockchainsservice_method_base_CALLINGCONVENTION_ExplicitThis } blockchainsservice_method_base_CALLINGCONVENTION_e;

char* method_base_calling_convention_ToString(blockchainsservice_method_base_CALLINGCONVENTION_e calling_convention);

blockchainsservice_method_base_CALLINGCONVENTION_e method_base_calling_convention_FromString(char* calling_convention);



typedef struct method_base_t {
    blockchainsservice_method_base_MEMBERTYPE_e member_type; //enum
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    blockchainsservice_method_base_ATTRIBUTES_e attributes; //enum
    blockchainsservice_method_base_METHODIMPLEMENTATIONFLAGS_e method_implementation_flags; //enum
    blockchainsservice_method_base_CALLINGCONVENTION_e calling_convention; //enum
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

} method_base_t;

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
);

void method_base_free(method_base_t *method_base);

method_base_t *method_base_parseFromJSON(cJSON *method_baseJSON);

cJSON *method_base_convertToJSON(method_base_t *method_base);

#endif /* _method_base_H_ */

