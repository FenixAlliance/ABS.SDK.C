/*
 * search_clause.h
 *
 * 
 */

#ifndef _search_clause_H_
#define _search_clause_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct search_clause_t search_clause_t;

#include "single_value_node.h"



typedef struct search_clause_t {
    struct single_value_node_t *expression; //model

} search_clause_t;

search_clause_t *search_clause_create(
    single_value_node_t *expression
);

void search_clause_free(search_clause_t *search_clause);

search_clause_t *search_clause_parseFromJSON(cJSON *search_clauseJSON);

cJSON *search_clause_convertToJSON(search_clause_t *search_clause);

#endif /* _search_clause_H_ */

