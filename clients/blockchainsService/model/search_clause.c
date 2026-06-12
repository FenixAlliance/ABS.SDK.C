#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_clause.h"



search_clause_t *search_clause_create(
    single_value_node_t *expression
    ) {
    search_clause_t *search_clause_local_var = malloc(sizeof(search_clause_t));
    if (!search_clause_local_var) {
        return NULL;
    }
    search_clause_local_var->expression = expression;

    return search_clause_local_var;
}


void search_clause_free(search_clause_t *search_clause) {
    if(NULL == search_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (search_clause->expression) {
        single_value_node_free(search_clause->expression);
        search_clause->expression = NULL;
    }
    free(search_clause);
}

cJSON *search_clause_convertToJSON(search_clause_t *search_clause) {
    cJSON *item = cJSON_CreateObject();

    // search_clause->expression
    if(search_clause->expression) {
    cJSON *expression_local_JSON = single_value_node_convertToJSON(search_clause->expression);
    if(expression_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expression", expression_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

search_clause_t *search_clause_parseFromJSON(cJSON *search_clauseJSON){

    search_clause_t *search_clause_local_var = NULL;

    // define the local variable for search_clause->expression
    single_value_node_t *expression_local_nonprim = NULL;

    // search_clause->expression
    cJSON *expression = cJSON_GetObjectItemCaseSensitive(search_clauseJSON, "expression");
    if (expression) { 
    expression_local_nonprim = single_value_node_parseFromJSON(expression); //nonprimitive
    }


    search_clause_local_var = search_clause_create (
        expression ? expression_local_nonprim : NULL
        );

    return search_clause_local_var;
end:
    if (expression_local_nonprim) {
        single_value_node_free(expression_local_nonprim);
        expression_local_nonprim = NULL;
    }
    return NULL;

}
