/*
 * i_edm_navigation_source.h
 *
 * 
 */

#ifndef _i_edm_navigation_source_H_
#define _i_edm_navigation_source_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_navigation_source_t i_edm_navigation_source_t;

#include "i_edm_entity_type.h"
#include "i_edm_navigation_property_binding.h"
#include "i_edm_path_expression.h"
#include "i_edm_type.h"



typedef struct i_edm_navigation_source_t {
    char *name; // string
    list_t *navigation_property_bindings; //nonprimitive container
    struct i_edm_path_expression_t *path; //model
    struct i_edm_type_t *type; //model
    struct i_edm_entity_type_t *entity_type; //model

} i_edm_navigation_source_t;

i_edm_navigation_source_t *i_edm_navigation_source_create(
    char *name,
    list_t *navigation_property_bindings,
    i_edm_path_expression_t *path,
    i_edm_type_t *type,
    i_edm_entity_type_t *entity_type
);

void i_edm_navigation_source_free(i_edm_navigation_source_t *i_edm_navigation_source);

i_edm_navigation_source_t *i_edm_navigation_source_parseFromJSON(cJSON *i_edm_navigation_sourceJSON);

cJSON *i_edm_navigation_source_convertToJSON(i_edm_navigation_source_t *i_edm_navigation_source);

#endif /* _i_edm_navigation_source_H_ */

