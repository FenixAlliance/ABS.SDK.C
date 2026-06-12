/*
 * compute_clause.h
 *
 * 
 */

#ifndef _compute_clause_H_
#define _compute_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct compute_clause_t compute_clause_t;

#include "compute_expression.h"



typedef struct compute_clause_t {
    list_t *computed_items; //nonprimitive container

} compute_clause_t;

compute_clause_t *compute_clause_create(
    list_t *computed_items
);

void compute_clause_free(compute_clause_t *compute_clause);

compute_clause_t *compute_clause_parseFromJSON(cJSON *compute_clauseJSON);

cJSON *compute_clause_convertToJSON(compute_clause_t *compute_clause);

#endif /* _compute_clause_H_ */

