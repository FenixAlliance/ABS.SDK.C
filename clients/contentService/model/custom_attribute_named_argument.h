/*
 * custom_attribute_named_argument.h
 *
 * 
 */

#ifndef _custom_attribute_named_argument_H_
#define _custom_attribute_named_argument_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attribute_named_argument_t custom_attribute_named_argument_t;

#include "custom_attribute_typed_argument.h"
#include "member_info.h"



typedef struct custom_attribute_named_argument_t {
    struct member_info_t *member_info; //model
    struct custom_attribute_typed_argument_t *typed_value; //model
    char *member_name; // string
    int is_field; //boolean

} custom_attribute_named_argument_t;

custom_attribute_named_argument_t *custom_attribute_named_argument_create(
    member_info_t *member_info,
    custom_attribute_typed_argument_t *typed_value,
    char *member_name,
    int is_field
);

void custom_attribute_named_argument_free(custom_attribute_named_argument_t *custom_attribute_named_argument);

custom_attribute_named_argument_t *custom_attribute_named_argument_parseFromJSON(cJSON *custom_attribute_named_argumentJSON);

cJSON *custom_attribute_named_argument_convertToJSON(custom_attribute_named_argument_t *custom_attribute_named_argument);

#endif /* _custom_attribute_named_argument_H_ */

