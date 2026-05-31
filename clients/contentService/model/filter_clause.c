#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "filter_clause.h"



filter_clause_t *filter_clause_create(
    single_value_node_t *expression,
    range_variable_t *range_variable,
    i_edm_type_reference_t *item_type
    ) {
    filter_clause_t *filter_clause_local_var = malloc(sizeof(filter_clause_t));
    if (!filter_clause_local_var) {
        return NULL;
    }
    filter_clause_local_var->expression = expression;
    filter_clause_local_var->range_variable = range_variable;
    filter_clause_local_var->item_type = item_type;

    return filter_clause_local_var;
}


void filter_clause_free(filter_clause_t *filter_clause) {
    if(NULL == filter_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (filter_clause->expression) {
        single_value_node_free(filter_clause->expression);
        filter_clause->expression = NULL;
    }
    if (filter_clause->range_variable) {
        range_variable_free(filter_clause->range_variable);
        filter_clause->range_variable = NULL;
    }
    if (filter_clause->item_type) {
        i_edm_type_reference_free(filter_clause->item_type);
        filter_clause->item_type = NULL;
    }
    free(filter_clause);
}

cJSON *filter_clause_convertToJSON(filter_clause_t *filter_clause) {
    cJSON *item = cJSON_CreateObject();

    // filter_clause->expression
    if(filter_clause->expression) {
    cJSON *expression_local_JSON = single_value_node_convertToJSON(filter_clause->expression);
    if(expression_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expression", expression_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_clause->range_variable
    if(filter_clause->range_variable) {
    cJSON *range_variable_local_JSON = range_variable_convertToJSON(filter_clause->range_variable);
    if(range_variable_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rangeVariable", range_variable_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_clause->item_type
    if(filter_clause->item_type) {
    cJSON *item_type_local_JSON = i_edm_type_reference_convertToJSON(filter_clause->item_type);
    if(item_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "itemType", item_type_local_JSON);
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

filter_clause_t *filter_clause_parseFromJSON(cJSON *filter_clauseJSON){

    filter_clause_t *filter_clause_local_var = NULL;

    // define the local variable for filter_clause->expression
    single_value_node_t *expression_local_nonprim = NULL;

    // define the local variable for filter_clause->range_variable
    range_variable_t *range_variable_local_nonprim = NULL;

    // define the local variable for filter_clause->item_type
    i_edm_type_reference_t *item_type_local_nonprim = NULL;

    // filter_clause->expression
    cJSON *expression = cJSON_GetObjectItemCaseSensitive(filter_clauseJSON, "expression");
    if (expression) { 
    expression_local_nonprim = single_value_node_parseFromJSON(expression); //nonprimitive
    }

    // filter_clause->range_variable
    cJSON *range_variable = cJSON_GetObjectItemCaseSensitive(filter_clauseJSON, "rangeVariable");
    if (range_variable) { 
    range_variable_local_nonprim = range_variable_parseFromJSON(range_variable); //nonprimitive
    }

    // filter_clause->item_type
    cJSON *item_type = cJSON_GetObjectItemCaseSensitive(filter_clauseJSON, "itemType");
    if (item_type) { 
    item_type_local_nonprim = i_edm_type_reference_parseFromJSON(item_type); //nonprimitive
    }


    filter_clause_local_var = filter_clause_create (
        expression ? expression_local_nonprim : NULL,
        range_variable ? range_variable_local_nonprim : NULL,
        item_type ? item_type_local_nonprim : NULL
        );

    return filter_clause_local_var;
end:
    if (expression_local_nonprim) {
        single_value_node_free(expression_local_nonprim);
        expression_local_nonprim = NULL;
    }
    if (range_variable_local_nonprim) {
        range_variable_free(range_variable_local_nonprim);
        range_variable_local_nonprim = NULL;
    }
    if (item_type_local_nonprim) {
        i_edm_type_reference_free(item_type_local_nonprim);
        item_type_local_nonprim = NULL;
    }
    return NULL;

}
