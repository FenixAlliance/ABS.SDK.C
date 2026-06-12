/*
 * apply_clause.h
 *
 * 
 */

#ifndef _apply_clause_H_
#define _apply_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct apply_clause_t apply_clause_t;

#include "transformation_node.h"



typedef struct apply_clause_t {
    list_t *transformations; //nonprimitive container

} apply_clause_t;

apply_clause_t *apply_clause_create(
    list_t *transformations
);

void apply_clause_free(apply_clause_t *apply_clause);

apply_clause_t *apply_clause_parseFromJSON(cJSON *apply_clauseJSON);

cJSON *apply_clause_convertToJSON(apply_clause_t *apply_clause);

#endif /* _apply_clause_H_ */

