/*
 * field_info.h
 *
 * 
 */

#ifndef _field_info_H_
#define _field_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct field_info_t field_info_t;

#include "custom_attribute_data.h"
#include "module.h"
#include "runtime_field_handle.h"
#include "type.h"

// Enum MEMBERTYPE for field_info

typedef enum  { blockchainsservice_field_info_MEMBERTYPE_NULL = 0, blockchainsservice_field_info_MEMBERTYPE_Constructor, blockchainsservice_field_info_MEMBERTYPE_Event, blockchainsservice_field_info_MEMBERTYPE_Field, blockchainsservice_field_info_MEMBERTYPE_Method, blockchainsservice_field_info_MEMBERTYPE_Property, blockchainsservice_field_info_MEMBERTYPE_TypeInfo, blockchainsservice_field_info_MEMBERTYPE_Custom, blockchainsservice_field_info_MEMBERTYPE_NestedType, blockchainsservice_field_info_MEMBERTYPE_All } blockchainsservice_field_info_MEMBERTYPE_e;

char* field_info_member_type_ToString(blockchainsservice_field_info_MEMBERTYPE_e member_type);

blockchainsservice_field_info_MEMBERTYPE_e field_info_member_type_FromString(char* member_type);

// Enum ATTRIBUTES for field_info

typedef enum  { blockchainsservice_field_info_ATTRIBUTES_NULL = 0, blockchainsservice_field_info_ATTRIBUTES_PrivateScope, blockchainsservice_field_info_ATTRIBUTES__Private, blockchainsservice_field_info_ATTRIBUTES_FamANDAssem, blockchainsservice_field_info_ATTRIBUTES_Assembly, blockchainsservice_field_info_ATTRIBUTES_Family, blockchainsservice_field_info_ATTRIBUTES_FamORAssem, blockchainsservice_field_info_ATTRIBUTES__Public, blockchainsservice_field_info_ATTRIBUTES_FieldAccessMask, blockchainsservice_field_info_ATTRIBUTES__Static, blockchainsservice_field_info_ATTRIBUTES_InitOnly, blockchainsservice_field_info_ATTRIBUTES_Literal, blockchainsservice_field_info_ATTRIBUTES_NotSerialized, blockchainsservice_field_info_ATTRIBUTES_HasFieldRVA, blockchainsservice_field_info_ATTRIBUTES_SpecialName, blockchainsservice_field_info_ATTRIBUTES_RTSpecialName, blockchainsservice_field_info_ATTRIBUTES_HasFieldMarshal, blockchainsservice_field_info_ATTRIBUTES_PinvokeImpl, blockchainsservice_field_info_ATTRIBUTES_HasDefault, blockchainsservice_field_info_ATTRIBUTES_ReservedMask } blockchainsservice_field_info_ATTRIBUTES_e;

char* field_info_attributes_ToString(blockchainsservice_field_info_ATTRIBUTES_e attributes);

blockchainsservice_field_info_ATTRIBUTES_e field_info_attributes_FromString(char* attributes);



typedef struct field_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    blockchainsservice_field_info_MEMBERTYPE_e member_type; //enum
    blockchainsservice_field_info_ATTRIBUTES_e attributes; //enum
    struct type_t *field_type; //model
    int is_init_only; //boolean
    int is_literal; //boolean
    int is_not_serialized; //boolean
    int is_pinvoke_impl; //boolean
    int is_special_name; //boolean
    int is_static; //boolean
    int is_assembly; //boolean
    int is_family; //boolean
    int is_family_and_assembly; //boolean
    int is_family_or_assembly; //boolean
    int is_private; //boolean
    int is_public; //boolean
    int is_security_critical; //boolean
    int is_security_safe_critical; //boolean
    int is_security_transparent; //boolean
    struct runtime_field_handle_t *field_handle; //model

} field_info_t;

field_info_t *field_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_field_info_MEMBERTYPE_e member_type,
    blockchainsservice_field_info_ATTRIBUTES_e attributes,
    type_t *field_type,
    int is_init_only,
    int is_literal,
    int is_not_serialized,
    int is_pinvoke_impl,
    int is_special_name,
    int is_static,
    int is_assembly,
    int is_family,
    int is_family_and_assembly,
    int is_family_or_assembly,
    int is_private,
    int is_public,
    int is_security_critical,
    int is_security_safe_critical,
    int is_security_transparent,
    runtime_field_handle_t *field_handle
);

void field_info_free(field_info_t *field_info);

field_info_t *field_info_parseFromJSON(cJSON *field_infoJSON);

cJSON *field_info_convertToJSON(field_info_t *field_info);

#endif /* _field_info_H_ */

