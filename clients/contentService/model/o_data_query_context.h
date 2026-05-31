/*
 * o_data_query_context.h
 *
 * 
 */

#ifndef _o_data_query_context_H_
#define _o_data_query_context_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct o_data_query_context_t o_data_query_context_t;

#include "default_query_configurations.h"
#include "i_edm_model.h"
#include "i_edm_navigation_source.h"
#include "i_edm_type.h"
#include "o_data_path_segment.h"
#include "object.h"
#include "type.h"



typedef struct o_data_query_context_t {
    struct default_query_configurations_t *default_query_configurations; //model
    struct i_edm_model_t *model; //model
    struct i_edm_type_t *element_type; //model
    struct i_edm_navigation_source_t *navigation_source; //model
    struct type_t *element_clr_type; //model
    list_t *path; //nonprimitive container
    object_t *request_container; //object

} o_data_query_context_t;

o_data_query_context_t *o_data_query_context_create(
    default_query_configurations_t *default_query_configurations,
    i_edm_model_t *model,
    i_edm_type_t *element_type,
    i_edm_navigation_source_t *navigation_source,
    type_t *element_clr_type,
    list_t *path,
    object_t *request_container
);

void o_data_query_context_free(o_data_query_context_t *o_data_query_context);

o_data_query_context_t *o_data_query_context_parseFromJSON(cJSON *o_data_query_contextJSON);

cJSON *o_data_query_context_convertToJSON(o_data_query_context_t *o_data_query_context);

#endif /* _o_data_query_context_H_ */

