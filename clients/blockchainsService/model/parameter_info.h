/*
 * parameter_info.h
 *
 * 
 */

#ifndef _parameter_info_H_
#define _parameter_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct parameter_info_t parameter_info_t;

#include "any_type.h"
#include "custom_attribute_data.h"
#include "member_info.h"
#include "type.h"

// Enum ATTRIBUTES for parameter_info

typedef enum  { blockchainsservice_parameter_info_ATTRIBUTES_NULL = 0, blockchainsservice_parameter_info_ATTRIBUTES_None, blockchainsservice_parameter_info_ATTRIBUTES_In, blockchainsservice_parameter_info_ATTRIBUTES_Out, blockchainsservice_parameter_info_ATTRIBUTES_Lcid, blockchainsservice_parameter_info_ATTRIBUTES_Retval, blockchainsservice_parameter_info_ATTRIBUTES_Optional, blockchainsservice_parameter_info_ATTRIBUTES_HasDefault, blockchainsservice_parameter_info_ATTRIBUTES_HasFieldMarshal, blockchainsservice_parameter_info_ATTRIBUTES_Reserved3, blockchainsservice_parameter_info_ATTRIBUTES_Reserved4, blockchainsservice_parameter_info_ATTRIBUTES_ReservedMask } blockchainsservice_parameter_info_ATTRIBUTES_e;

char* parameter_info_attributes_ToString(blockchainsservice_parameter_info_ATTRIBUTES_e attributes);

blockchainsservice_parameter_info_ATTRIBUTES_e parameter_info_attributes_FromString(char* attributes);



typedef struct parameter_info_t {
    blockchainsservice_parameter_info_ATTRIBUTES_e attributes; //enum
    struct member_info_t *member; //model
    char *name; // string
    struct type_t *parameter_type; //model
    int position; //numeric
    int is_in; //boolean
    int is_lcid; //boolean
    int is_optional; //boolean
    int is_out; //boolean
    int is_retval; //boolean
    any_type_t *default_value; // custom
    any_type_t *raw_default_value; // custom
    int has_default_value; //boolean
    list_t *custom_attributes; //nonprimitive container
    int metadata_token; //numeric

} parameter_info_t;

parameter_info_t *parameter_info_create(
    blockchainsservice_parameter_info_ATTRIBUTES_e attributes,
    member_info_t *member,
    char *name,
    type_t *parameter_type,
    int position,
    int is_in,
    int is_lcid,
    int is_optional,
    int is_out,
    int is_retval,
    any_type_t *default_value,
    any_type_t *raw_default_value,
    int has_default_value,
    list_t *custom_attributes,
    int metadata_token
);

void parameter_info_free(parameter_info_t *parameter_info);

parameter_info_t *parameter_info_parseFromJSON(cJSON *parameter_infoJSON);

cJSON *parameter_info_convertToJSON(parameter_info_t *parameter_info);

#endif /* _parameter_info_H_ */

