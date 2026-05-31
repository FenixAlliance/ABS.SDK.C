/*
 * select_expand_clause.h
 *
 * 
 */

#ifndef _select_expand_clause_H_
#define _select_expand_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct select_expand_clause_t select_expand_clause_t;

#include "object.h"



typedef struct select_expand_clause_t {
    list_t *selected_items; //nonprimitive container
    int all_selected; //boolean

} select_expand_clause_t;

select_expand_clause_t *select_expand_clause_create(
    list_t *selected_items,
    int all_selected
);

void select_expand_clause_free(select_expand_clause_t *select_expand_clause);

select_expand_clause_t *select_expand_clause_parseFromJSON(cJSON *select_expand_clauseJSON);

cJSON *select_expand_clause_convertToJSON(select_expand_clause_t *select_expand_clause);

#endif /* _select_expand_clause_H_ */

