/*
 * i_edm_referential_constraint.h
 *
 * 
 */

#ifndef _i_edm_referential_constraint_H_
#define _i_edm_referential_constraint_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct i_edm_referential_constraint_t i_edm_referential_constraint_t;

#include "edm_referential_constraint_property_pair.h"



typedef struct i_edm_referential_constraint_t {
    list_t *property_pairs; //nonprimitive container

} i_edm_referential_constraint_t;

i_edm_referential_constraint_t *i_edm_referential_constraint_create(
    list_t *property_pairs
);

void i_edm_referential_constraint_free(i_edm_referential_constraint_t *i_edm_referential_constraint);

i_edm_referential_constraint_t *i_edm_referential_constraint_parseFromJSON(cJSON *i_edm_referential_constraintJSON);

cJSON *i_edm_referential_constraint_convertToJSON(i_edm_referential_constraint_t *i_edm_referential_constraint);

#endif /* _i_edm_referential_constraint_H_ */

