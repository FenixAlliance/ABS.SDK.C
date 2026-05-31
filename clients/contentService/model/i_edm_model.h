/*
 * i_edm_model.h
 *
 * 
 */

#ifndef _i_edm_model_H_
#define _i_edm_model_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_model_t i_edm_model_t;

#include "i_edm_entity_container.h"
#include "i_edm_schema_element.h"
#include "i_edm_vocabulary_annotation.h"
#include "object.h"



typedef struct i_edm_model_t {
    list_t *schema_elements; //nonprimitive container
    list_t *vocabulary_annotations; //nonprimitive container
    list_t *referenced_models; //nonprimitive container
    list_t *declared_namespaces; //primitive container
    object_t *direct_value_annotations_manager; //object
    struct i_edm_entity_container_t *entity_container; //model

} i_edm_model_t;

i_edm_model_t *i_edm_model_create(
    list_t *schema_elements,
    list_t *vocabulary_annotations,
    list_t *referenced_models,
    list_t *declared_namespaces,
    object_t *direct_value_annotations_manager,
    i_edm_entity_container_t *entity_container
);

void i_edm_model_free(i_edm_model_t *i_edm_model);

i_edm_model_t *i_edm_model_parseFromJSON(cJSON *i_edm_modelJSON);

cJSON *i_edm_model_convertToJSON(i_edm_model_t *i_edm_model);

#endif /* _i_edm_model_H_ */

