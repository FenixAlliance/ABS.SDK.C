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

typedef enum  { blockchainsservice_struct_layout_attribute_VALUE_NULL = 0, blockchainsservice_struct_layout_attribute_VALUE_Sequential, blockchainsservice_struct_layout_attribute_VALUE__Explicit, blockchainsservice_struct_layout_attribute_VALUE__Auto } blockchainsservice_struct_layout_attribute_VALUE_e;

char* struct_layout_attribute_value_ToString(blockchainsservice_struct_layout_attribute_VALUE_e value);

blockchainsservice_struct_layout_attribute_VALUE_e struct_layout_attribute_value_FromString(char* value);



typedef struct struct_layout_attribute_t {
    any_type_t *type_id; // custom
    blockchainsservice_struct_layout_attribute_VALUE_e value; //enum

} struct_layout_attribute_t;

struct_layout_attribute_t *struct_layout_attribute_create(
    any_type_t *type_id,
    blockchainsservice_struct_layout_attribute_VALUE_e value
);

void struct_layout_attribute_free(struct_layout_attribute_t *struct_layout_attribute);

struct_layout_attribute_t *struct_layout_attribute_parseFromJSON(cJSON *struct_layout_attributeJSON);

cJSON *struct_layout_attribute_convertToJSON(struct_layout_attribute_t *struct_layout_attribute);

#endif /* _struct_layout_attribute_H_ */

