/*
 * struct_layout_attribute.h
 *
 * 
 */

#ifndef _struct_layout_attribute_H_
#define _struct_layout_attribute_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct struct_layout_attribute_t struct_layout_attribute_t;

#include "any_type.h"

// Enum VALUE for struct_layout_attribute

typedef enum  { contentservice_struct_layout_attribute_VALUE_NULL = 0, contentservice_struct_layout_attribute_VALUE_Sequential, contentservice_struct_layout_attribute_VALUE__Explicit, contentservice_struct_layout_attribute_VALUE__Auto } contentservice_struct_layout_attribute_VALUE_e;

char* struct_layout_attribute_value_ToString(contentservice_struct_layout_attribute_VALUE_e value);

contentservice_struct_layout_attribute_VALUE_e struct_layout_attribute_value_FromString(char* value);



typedef struct struct_layout_attribute_t {
    any_type_t *type_id; // custom
    contentservice_struct_layout_attribute_VALUE_e value; //enum

} struct_layout_attribute_t;

struct_layout_attribute_t *struct_layout_attribute_create(
    any_type_t *type_id,
    contentservice_struct_layout_attribute_VALUE_e value
);

void struct_layout_attribute_free(struct_layout_attribute_t *struct_layout_attribute);

struct_layout_attribute_t *struct_layout_attribute_parseFromJSON(cJSON *struct_layout_attributeJSON);

cJSON *struct_layout_attribute_convertToJSON(struct_layout_attribute_t *struct_layout_attribute);

#endif /* _struct_layout_attribute_H_ */

