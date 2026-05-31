/*
 * custom_attribute_typed_argument.h
 *
 * 
 */

#ifndef _custom_attribute_typed_argument_H_
#define _custom_attribute_typed_argument_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attribute_typed_argument_t custom_attribute_typed_argument_t;

#include "any_type.h"
#include "type.h"



typedef struct custom_attribute_typed_argument_t {
    struct type_t *argument_type; //model
    any_type_t *value; // custom

} custom_attribute_typed_argument_t;

custom_attribute_typed_argument_t *custom_attribute_typed_argument_create(
    type_t *argument_type,
    any_type_t *value
);

void custom_attribute_typed_argument_free(custom_attribute_typed_argument_t *custom_attribute_typed_argument);

custom_attribute_typed_argument_t *custom_attribute_typed_argument_parseFromJSON(cJSON *custom_attribute_typed_argumentJSON);

cJSON *custom_attribute_typed_argument_convertToJSON(custom_attribute_typed_argument_t *custom_attribute_typed_argument);

#endif /* _custom_attribute_typed_argument_H_ */

