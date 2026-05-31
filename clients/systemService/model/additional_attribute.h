/*
 * additional_attribute.h
 *
 * 
 */

#ifndef _additional_attribute_H_
#define _additional_attribute_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct additional_attribute_t additional_attribute_t;




typedef struct additional_attribute_t {
    char *key; // string
    char *value; // string

} additional_attribute_t;

additional_attribute_t *additional_attribute_create(
    char *key,
    char *value
);

void additional_attribute_free(additional_attribute_t *additional_attribute);

additional_attribute_t *additional_attribute_parseFromJSON(cJSON *additional_attributeJSON);

cJSON *additional_attribute_convertToJSON(additional_attribute_t *additional_attribute);

#endif /* _additional_attribute_H_ */

