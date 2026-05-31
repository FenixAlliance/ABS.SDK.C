/*
 * property_info.h
 *
 * 
 */

#ifndef _property_info_H_
#define _property_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct property_info_t property_info_t;

#include "custom_attribute_data.h"
#include "method_info.h"
#include "module.h"
#include "type.h"

// Enum MEMBERTYPE for property_info

typedef enum  { contentservice_property_info_MEMBERTYPE_NULL = 0, contentservice_property_info_MEMBERTYPE_Constructor, contentservice_property_info_MEMBERTYPE_Event, contentservice_property_info_MEMBERTYPE_Field, contentservice_property_info_MEMBERTYPE_Method, contentservice_property_info_MEMBERTYPE_Property, contentservice_property_info_MEMBERTYPE_TypeInfo, contentservice_property_info_MEMBERTYPE_Custom, contentservice_property_info_MEMBERTYPE_NestedType, contentservice_property_info_MEMBERTYPE_All } contentservice_property_info_MEMBERTYPE_e;

char* property_info_member_type_ToString(contentservice_property_info_MEMBERTYPE_e member_type);

contentservice_property_info_MEMBERTYPE_e property_info_member_type_FromString(char* member_type);

// Enum ATTRIBUTES for property_info

typedef enum  { contentservice_property_info_ATTRIBUTES_NULL = 0, contentservice_property_info_ATTRIBUTES_None, contentservice_property_info_ATTRIBUTES_SpecialName, contentservice_property_info_ATTRIBUTES_RTSpecialName, contentservice_property_info_ATTRIBUTES_HasDefault, contentservice_property_info_ATTRIBUTES_Reserved2, contentservice_property_info_ATTRIBUTES_Reserved3, contentservice_property_info_ATTRIBUTES_Reserved4, contentservice_property_info_ATTRIBUTES_ReservedMask } contentservice_property_info_ATTRIBUTES_e;

char* property_info_attributes_ToString(contentservice_property_info_ATTRIBUTES_e attributes);

contentservice_property_info_ATTRIBUTES_e property_info_attributes_FromString(char* attributes);



typedef struct property_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    contentservice_property_info_MEMBERTYPE_e member_type; //enum
    struct type_t *property_type; //model
    contentservice_property_info_ATTRIBUTES_e attributes; //enum
    int is_special_name; //boolean
    int can_read; //boolean
    int can_write; //boolean
    struct method_info_t *get_method; //model
    struct method_info_t *set_method; //model

} property_info_t;

property_info_t *property_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    contentservice_property_info_MEMBERTYPE_e member_type,
    type_t *property_type,
    contentservice_property_info_ATTRIBUTES_e attributes,
    int is_special_name,
    int can_read,
    int can_write,
    method_info_t *get_method,
    method_info_t *set_method
);

void property_info_free(property_info_t *property_info);

property_info_t *property_info_parseFromJSON(cJSON *property_infoJSON);

cJSON *property_info_convertToJSON(property_info_t *property_info);

#endif /* _property_info_H_ */

