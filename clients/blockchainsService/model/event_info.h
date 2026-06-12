/*
 * event_info.h
 *
 * 
 */

#ifndef _event_info_H_
#define _event_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct event_info_t event_info_t;

#include "custom_attribute_data.h"
#include "method_info.h"
#include "module.h"
#include "type.h"

// Enum MEMBERTYPE for event_info

typedef enum  { blockchainsservice_event_info_MEMBERTYPE_NULL = 0, blockchainsservice_event_info_MEMBERTYPE_Constructor, blockchainsservice_event_info_MEMBERTYPE_Event, blockchainsservice_event_info_MEMBERTYPE_Field, blockchainsservice_event_info_MEMBERTYPE_Method, blockchainsservice_event_info_MEMBERTYPE_Property, blockchainsservice_event_info_MEMBERTYPE_TypeInfo, blockchainsservice_event_info_MEMBERTYPE_Custom, blockchainsservice_event_info_MEMBERTYPE_NestedType, blockchainsservice_event_info_MEMBERTYPE_All } blockchainsservice_event_info_MEMBERTYPE_e;

char* event_info_member_type_ToString(blockchainsservice_event_info_MEMBERTYPE_e member_type);

blockchainsservice_event_info_MEMBERTYPE_e event_info_member_type_FromString(char* member_type);

// Enum ATTRIBUTES for event_info

typedef enum  { blockchainsservice_event_info_ATTRIBUTES_NULL = 0, blockchainsservice_event_info_ATTRIBUTES_None, blockchainsservice_event_info_ATTRIBUTES_SpecialName, blockchainsservice_event_info_ATTRIBUTES_RTSpecialName } blockchainsservice_event_info_ATTRIBUTES_e;

char* event_info_attributes_ToString(blockchainsservice_event_info_ATTRIBUTES_e attributes);

blockchainsservice_event_info_ATTRIBUTES_e event_info_attributes_FromString(char* attributes);



typedef struct event_info_t {
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric
    blockchainsservice_event_info_MEMBERTYPE_e member_type; //enum
    blockchainsservice_event_info_ATTRIBUTES_e attributes; //enum
    int is_special_name; //boolean
    struct method_info_t *add_method; //model
    struct method_info_t *remove_method; //model
    struct method_info_t *raise_method; //model
    int is_multicast; //boolean
    struct type_t *event_handler_type; //model

} event_info_t;

event_info_t *event_info_create(
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token,
    blockchainsservice_event_info_MEMBERTYPE_e member_type,
    blockchainsservice_event_info_ATTRIBUTES_e attributes,
    int is_special_name,
    method_info_t *add_method,
    method_info_t *remove_method,
    method_info_t *raise_method,
    int is_multicast,
    type_t *event_handler_type
);

void event_info_free(event_info_t *event_info);

event_info_t *event_info_parseFromJSON(cJSON *event_infoJSON);

cJSON *event_info_convertToJSON(event_info_t *event_info);

#endif /* _event_info_H_ */

