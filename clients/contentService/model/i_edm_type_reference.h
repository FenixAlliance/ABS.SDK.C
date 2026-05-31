/*
 * i_edm_type_reference.h
 *
 * 
 */

#ifndef _i_edm_type_reference_H_
#define _i_edm_type_reference_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_type_reference_t i_edm_type_reference_t;

#include "i_edm_type.h"



typedef struct i_edm_type_reference_t {
    int is_nullable; //boolean
    struct i_edm_type_t *definition; //model

} i_edm_type_reference_t;

i_edm_type_reference_t *i_edm_type_reference_create(
    int is_nullable,
    i_edm_type_t *definition
);

void i_edm_type_reference_free(i_edm_type_reference_t *i_edm_type_reference);

i_edm_type_reference_t *i_edm_type_reference_parseFromJSON(cJSON *i_edm_type_referenceJSON);

cJSON *i_edm_type_reference_convertToJSON(i_edm_type_reference_t *i_edm_type_reference);

#endif /* _i_edm_type_reference_H_ */

