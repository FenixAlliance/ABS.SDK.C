/*
 * member_info.h
 *
 * 
 */

#ifndef _member_info_H_
#define _member_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct member_info_t member_info_t;

#include "custom_attribute_data.h"
#include "module.h"
#include "type.h"

// Enum MEMBERTYPE for member_info

typedef enum  { contentservice_member_info_MEMBERTYPE_NULL = 0, contentservice_member_info_MEMBERTYPE_Constructor, contentservice_member_info_MEMBERTYPE_Event, contentservice_member_info_MEMBERTYPE_Field, contentservice_member_info_MEMBERTYPE_Method, contentservice_member_info_MEMBERTYPE_Property, contentservice_member_info_MEMBERTYPE_TypeInfo, contentservice_member_info_MEMBERTYPE_Custom, contentservice_member_info_MEMBERTYPE_NestedType, contentservice_member_info_MEMBERTYPE_All } contentservice_member_info_MEMBERTYPE_e;

char* member_info_member_type_ToString(contentservice_member_info_MEMBERTYPE_e member_type);

contentservice_member_info_MEMBERTYPE_e member_info_member_type_FromString(char* member_type);



typedef struct member_info_t {
    contentservice_member_info_MEMBERTYPE_e member_type; //enum
    char *name; // string
    struct type_t *declaring_type; //model
    struct type_t *reflected_type; //model
    struct module_t *module; //model
    list_t *custom_attributes; //nonprimitive container
    int is_collectible; //boolean
    int metadata_token; //numeric

} member_info_t;

member_info_t *member_info_create(
    contentservice_member_info_MEMBERTYPE_e member_type,
    char *name,
    type_t *declaring_type,
    type_t *reflected_type,
    module_t *module,
    list_t *custom_attributes,
    int is_collectible,
    int metadata_token
);

void member_info_free(member_info_t *member_info);

member_info_t *member_info_parseFromJSON(cJSON *member_infoJSON);

cJSON *member_info_convertToJSON(member_info_t *member_info);

#endif /* _member_info_H_ */

