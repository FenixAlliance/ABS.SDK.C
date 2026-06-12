/*
 * i_edm_vocabulary_annotation.h
 *
 * 
 */

#ifndef _i_edm_vocabulary_annotation_H_
#define _i_edm_vocabulary_annotation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_vocabulary_annotation_t i_edm_vocabulary_annotation_t;

#include "i_edm_expression.h"
#include "i_edm_term.h"
#include "object.h"



typedef struct i_edm_vocabulary_annotation_t {
    char *qualifier; // string
    struct i_edm_term_t *term; //model
    object_t *target; //object
    struct i_edm_expression_t *value; //model
    int uses_default; //boolean

} i_edm_vocabulary_annotation_t;

i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_create(
    char *qualifier,
    i_edm_term_t *term,
    object_t *target,
    i_edm_expression_t *value,
    int uses_default
);

void i_edm_vocabulary_annotation_free(i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation);

i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation_parseFromJSON(cJSON *i_edm_vocabulary_annotationJSON);

cJSON *i_edm_vocabulary_annotation_convertToJSON(i_edm_vocabulary_annotation_t *i_edm_vocabulary_annotation);

#endif /* _i_edm_vocabulary_annotation_H_ */

