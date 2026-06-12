/*
 * edm_referential_constraint_property_pair.h
 *
 * 
 */

#ifndef _edm_referential_constraint_property_pair_H_
#define _edm_referential_constraint_property_pair_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct edm_referential_constraint_property_pair_t edm_referential_constraint_property_pair_t;

#include "i_edm_structural_property.h"



typedef struct edm_referential_constraint_property_pair_t {
    struct i_edm_structural_property_t *dependent_property; //model
    struct i_edm_structural_property_t *principal_property; //model

} edm_referential_constraint_property_pair_t;

edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_create(
    i_edm_structural_property_t *dependent_property,
    i_edm_structural_property_t *principal_property
);

void edm_referential_constraint_property_pair_free(edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair);

edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair_parseFromJSON(cJSON *edm_referential_constraint_property_pairJSON);

cJSON *edm_referential_constraint_property_pair_convertToJSON(edm_referential_constraint_property_pair_t *edm_referential_constraint_property_pair);

#endif /* _edm_referential_constraint_property_pair_H_ */

