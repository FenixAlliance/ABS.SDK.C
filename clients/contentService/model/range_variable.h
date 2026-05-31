/*
 * range_variable.h
 *
 * 
 */

#ifndef _range_variable_H_
#define _range_variable_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct range_variable_t range_variable_t;

#include "i_edm_type_reference.h"



typedef struct range_variable_t {
    char *name; // string
    struct i_edm_type_reference_t *type_reference; //model
    int kind; //numeric

} range_variable_t;

range_variable_t *range_variable_create(
    char *name,
    i_edm_type_reference_t *type_reference,
    int kind
);

void range_variable_free(range_variable_t *range_variable);

range_variable_t *range_variable_parseFromJSON(cJSON *range_variableJSON);

cJSON *range_variable_convertToJSON(range_variable_t *range_variable);

#endif /* _range_variable_H_ */

