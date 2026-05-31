/*
 * i_edm_navigation_property_binding.h
 *
 * 
 */

#ifndef _i_edm_navigation_property_binding_H_
#define _i_edm_navigation_property_binding_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_navigation_property_binding_t i_edm_navigation_property_binding_t;

#include "i_edm_navigation_property.h"
#include "i_edm_navigation_source.h"
#include "i_edm_path_expression.h"



typedef struct i_edm_navigation_property_binding_t {
    struct i_edm_navigation_property_t *navigation_property; //model
    struct i_edm_navigation_source_t *target; //model
    struct i_edm_path_expression_t *path; //model

} i_edm_navigation_property_binding_t;

i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_create(
    i_edm_navigation_property_t *navigation_property,
    i_edm_navigation_source_t *target,
    i_edm_path_expression_t *path
);

void i_edm_navigation_property_binding_free(i_edm_navigation_property_binding_t *i_edm_navigation_property_binding);

i_edm_navigation_property_binding_t *i_edm_navigation_property_binding_parseFromJSON(cJSON *i_edm_navigation_property_bindingJSON);

cJSON *i_edm_navigation_property_binding_convertToJSON(i_edm_navigation_property_binding_t *i_edm_navigation_property_binding);

#endif /* _i_edm_navigation_property_binding_H_ */

