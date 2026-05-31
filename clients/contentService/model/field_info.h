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

typedef enum  { contentservice_field_info_MEMBERTYPE_NULL = 0, contentservice_field_info_MEMBERTYPE_Constructor, contentservice_field_info_MEMBERTYPE_Event, contentservice_field_info_MEMBERTYPE_Field, contentservice_field_info_MEMBERTYPE_Method, contentservice_field_info_MEMBERTYPE_Property, contentservice_field_info_MEMBERTYPE_TypeInfo, contentservice_field_info_MEMBERTYPE_Custom, contentservice_field_info_MEMBERTYPE_NestedType, contentservice_field_info_MEMBERTYPE_All } contentservice_field_info_MEMBERTYPE_e;

char* field_info_member_type_ToString(contentservice_field_info_MEMBERTYPE_e member_type);

contentservice_field_info_MEMBERTYPE_e field_info_member_type_FromString(char* member_type);

// Enum ATTRIBUTES for field_info

typedef enum  { contentservice_field_info_ATTRIBUTES_NULL = 0, contentservice_field_info_ATTRIBUTES_PrivateScope, contentservice_field_info_ATTRIBUTES__Private, contentservice_field_info_ATTRIBUTES_FamANDAssem, contentservice_field_info_ATTRIBUTES_Assembly, contentservice_field_info_ATTRIBUTES_Family, contentservice_field_info_ATTRIBUTES_FamORAssem, contentservice_field_info_ATTRIBUTES__Public, contentservice_field_info_ATTRIBUTES_FieldAccessMask, contentservice_field_info_ATTRIBUTES__Static, contentservice_field_info_ATTRIBUTES_InitOnly, contentservice_field_info_ATTRIBUTES_Literal, contentservice_field_info_ATTRIBUTES_NotSerialized, contentservice_field_info_ATTRIBUTES_HasFieldRVA, contentservice_field_info_ATTRIBUTES_SpecialName, contentservice_field_info_ATTRIBUTES_RTSpecialName, contentservice_field_info_ATTRIBUTES_HasFieldMarshal, contentservice_field_info_ATTRIBUTES_PinvokeImpl, contentservice_field_info_ATTRIBUTES_HasDefault, contentservice_field_info_ATTRIBUTES_ReservedMask } contentservice_field_info_ATTRIBUTES_e;

char* field_info_attributes_ToString(contentservice_field_info_ATTRIBUTES_e attributes);

contentservice_field_info_ATTRIBUTES_e field_info_attributes_FromString(char* attributes);



typedef struct field_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    contentservice_field_info_MEMBERTYPE_e member_type; //enum
    contentservice_field_info_ATTRIBUTES_e attributes; //enum
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
    contentservice_field_info_MEMBERTYPE_e member_type,
    contentservice_field_info_ATTRIBUTES_e attributes,
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

