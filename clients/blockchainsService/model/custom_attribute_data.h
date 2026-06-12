/*
 * custom_attribute_data.h
 *
 * 
 */

#ifndef _custom_attribute_data_H_
#define _custom_attribute_data_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct custom_attribute_data_t custom_attribute_data_t;

#include "constructor_info.h"
#include "custom_attribute_named_argument.h"
#include "custom_attribute_typed_argument.h"
#include "type.h"



typedef struct custom_attribute_data_t {
    struct type_t *attribute_type; //model
    struct constructor_info_t *constructor; //model
    list_t *constructor_arguments; //nonprimitive container
    list_t *named_arguments; //nonprimitive container

} custom_attribute_data_t;

custom_attribute_data_t *custom_attribute_data_create(
    type_t *attribute_type,
    constructor_info_t *constructor,
    list_t *constructor_arguments,
    list_t *named_arguments
);

void custom_attribute_data_free(custom_attribute_data_t *custom_attribute_data);

custom_attribute_data_t *custom_attribute_data_parseFromJSON(cJSON *custom_attribute_dataJSON);

cJSON *custom_attribute_data_convertToJSON(custom_attribute_data_t *custom_attribute_data);

#endif /* _custom_attribute_data_H_ */

