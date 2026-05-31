#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "compute_expression.h"



compute_expression_t *compute_expression_create(
    single_value_node_t *expression,
    char *alias,
    i_edm_type_reference_t *type_reference
    ) {
    compute_expression_t *compute_expression_local_var = malloc(sizeof(compute_expression_t));
    if (!compute_expression_local_var) {
        return NULL;
    }
    compute_expression_local_var->expression = expression;
    compute_expression_local_var->alias = alias;
    compute_expression_local_var->type_reference = type_reference;

    return compute_expression_local_var;
}


void compute_expression_free(compute_expression_t *compute_expression) {
    if(NULL == compute_expression){
        return ;
    }
    listEntry_t *listEntry;
    if (compute_expression->expression) {
        single_value_node_free(compute_expression->expression);
        compute_expression->expression = NULL;
    }
    if (compute_expression->alias) {
        free(compute_expression->alias);
        compute_expression->alias = NULL;
    }
    if (compute_expression->type_reference) {
        i_edm_type_reference_free(compute_expression->type_reference);
        compute_expression->type_reference = NULL;
    }
    free(compute_expression);
}

cJSON *compute_expression_convertToJSON(compute_expression_t *compute_expression) {
    cJSON *item = cJSON_CreateObject();

    // compute_expression->expression
    if(compute_expression->expression) {
    cJSON *expression_local_JSON = single_value_node_convertToJSON(compute_expression->expression);
    if(expression_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expression", expression_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // compute_expression->alias
    if(compute_expression->alias) {
    if(cJSON_AddStringToObject(item, "alias", compute_expression->alias) == NULL) {
    goto fail; //String
    }
    }


    // compute_expression->type_reference
    if(compute_expression->type_reference) {
    cJSON *type_reference_local_JSON = i_edm_type_reference_convertToJSON(compute_expression->type_reference);
    if(type_reference_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "typeReference", type_reference_local_JSON);
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

compute_expression_t *compute_expression_parseFromJSON(cJSON *compute_expressionJSON){

    compute_expression_t *compute_expression_local_var = NULL;

    // define the local variable for compute_expression->expression
    single_value_node_t *expression_local_nonprim = NULL;

    // define the local variable for compute_expression->type_reference
    i_edm_type_reference_t *type_reference_local_nonprim = NULL;

    // compute_expression->expression
    cJSON *expression = cJSON_GetObjectItemCaseSensitive(compute_expressionJSON, "expression");
    if (expression) { 
    expression_local_nonprim = single_value_node_parseFromJSON(expression); //nonprimitive
    }

    // compute_expression->alias
    cJSON *alias = cJSON_GetObjectItemCaseSensitive(compute_expressionJSON, "alias");
    if (alias) { 
    if(!cJSON_IsString(alias) && !cJSON_IsNull(alias))
    {
    goto end; //String
    }
    }

    // compute_expression->type_reference
    cJSON *type_reference = cJSON_GetObjectItemCaseSensitive(compute_expressionJSON, "typeReference");
    if (type_reference) { 
    type_reference_local_nonprim = i_edm_type_reference_parseFromJSON(type_reference); //nonprimitive
    }


    compute_expression_local_var = compute_expression_create (
        expression ? expression_local_nonprim : NULL,
        alias && !cJSON_IsNull(alias) ? strdup(alias->valuestring) : NULL,
        type_reference ? type_reference_local_nonprim : NULL
        );

    return compute_expression_local_var;
end:
    if (expression_local_nonprim) {
        single_value_node_free(expression_local_nonprim);
        expression_local_nonprim = NULL;
    }
    if (type_reference_local_nonprim) {
        i_edm_type_reference_free(type_reference_local_nonprim);
        type_reference_local_nonprim = NULL;
    }
    return NULL;

}
