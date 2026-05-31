#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_by_clause.h"


char* order_by_clause_direction_ToString(contentservice_order_by_clause_DIRECTION_e direction) {
    char* directionArray[] =  { "NULL", "Ascending", "Descending" };
    return directionArray[direction];
}

contentservice_order_by_clause_DIRECTION_e order_by_clause_direction_FromString(char* direction){
    int stringToReturn = 0;
    char *directionArray[] =  { "NULL", "Ascending", "Descending" };
    size_t sizeofArray = sizeof(directionArray) / sizeof(directionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(direction, directionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

order_by_clause_t *order_by_clause_create(
    order_by_clause_t *then_by,
    single_value_node_t *expression,
    contentservice_order_by_clause_DIRECTION_e direction,
    range_variable_t *range_variable,
    i_edm_type_reference_t *item_type
    ) {
    order_by_clause_t *order_by_clause_local_var = malloc(sizeof(order_by_clause_t));
    if (!order_by_clause_local_var) {
        return NULL;
    }
    order_by_clause_local_var->then_by = then_by;
    order_by_clause_local_var->expression = expression;
    order_by_clause_local_var->direction = direction;
    order_by_clause_local_var->range_variable = range_variable;
    order_by_clause_local_var->item_type = item_type;

    return order_by_clause_local_var;
}


void order_by_clause_free(order_by_clause_t *order_by_clause) {
    if(NULL == order_by_clause){
        return ;
    }
    listEntry_t *listEntry;
    if (order_by_clause->then_by) {
        order_by_clause_free(order_by_clause->then_by);
        order_by_clause->then_by = NULL;
    }
    if (order_by_clause->expression) {
        single_value_node_free(order_by_clause->expression);
        order_by_clause->expression = NULL;
    }
    if (order_by_clause->range_variable) {
        range_variable_free(order_by_clause->range_variable);
        order_by_clause->range_variable = NULL;
    }
    if (order_by_clause->item_type) {
        i_edm_type_reference_free(order_by_clause->item_type);
        order_by_clause->item_type = NULL;
    }
    free(order_by_clause);
}

cJSON *order_by_clause_convertToJSON(order_by_clause_t *order_by_clause) {
    cJSON *item = cJSON_CreateObject();

    // order_by_clause->then_by
    if(order_by_clause->then_by) {
    cJSON *then_by_local_JSON = order_by_clause_convertToJSON(order_by_clause->then_by);
    if(then_by_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "thenBy", then_by_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_clause->expression
    if(order_by_clause->expression) {
    cJSON *expression_local_JSON = single_value_node_convertToJSON(order_by_clause->expression);
    if(expression_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "expression", expression_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_clause->direction
    if(order_by_clause->direction != contentservice_order_by_clause_DIRECTION_NULL) {
    if(cJSON_AddStringToObject(item, "direction", directionorder_by_clause_ToString(order_by_clause->direction)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // order_by_clause->range_variable
    if(order_by_clause->range_variable) {
    cJSON *range_variable_local_JSON = range_variable_convertToJSON(order_by_clause->range_variable);
    if(range_variable_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "rangeVariable", range_variable_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_clause->item_type
    if(order_by_clause->item_type) {
    cJSON *item_type_local_JSON = i_edm_type_reference_convertToJSON(order_by_clause->item_type);
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

order_by_clause_t *order_by_clause_parseFromJSON(cJSON *order_by_clauseJSON){

    order_by_clause_t *order_by_clause_local_var = NULL;

    // define the local variable for order_by_clause->then_by
    order_by_clause_t *then_by_local_nonprim = NULL;

    // define the local variable for order_by_clause->expression
    single_value_node_t *expression_local_nonprim = NULL;

    // define the local variable for order_by_clause->range_variable
    range_variable_t *range_variable_local_nonprim = NULL;

    // define the local variable for order_by_clause->item_type
    i_edm_type_reference_t *item_type_local_nonprim = NULL;

    // order_by_clause->then_by
    cJSON *then_by = cJSON_GetObjectItemCaseSensitive(order_by_clauseJSON, "thenBy");
    if (then_by) { 
    then_by_local_nonprim = order_by_clause_parseFromJSON(then_by); //nonprimitive
    }

    // order_by_clause->expression
    cJSON *expression = cJSON_GetObjectItemCaseSensitive(order_by_clauseJSON, "expression");
    if (expression) { 
    expression_local_nonprim = single_value_node_parseFromJSON(expression); //nonprimitive
    }

    // order_by_clause->direction
    cJSON *direction = cJSON_GetObjectItemCaseSensitive(order_by_clauseJSON, "direction");
    contentservice_order_by_clause_DIRECTION_e directionVariable;
    if (direction) { 
    if(!cJSON_IsString(direction))
    {
    goto end; //Enum
    }
    directionVariable = order_by_clause_direction_FromString(direction->valuestring);
    }

    // order_by_clause->range_variable
    cJSON *range_variable = cJSON_GetObjectItemCaseSensitive(order_by_clauseJSON, "rangeVariable");
    if (range_variable) { 
    range_variable_local_nonprim = range_variable_parseFromJSON(range_variable); //nonprimitive
    }

    // order_by_clause->item_type
    cJSON *item_type = cJSON_GetObjectItemCaseSensitive(order_by_clauseJSON, "itemType");
    if (item_type) { 
    item_type_local_nonprim = i_edm_type_reference_parseFromJSON(item_type); //nonprimitive
    }


    order_by_clause_local_var = order_by_clause_create (
        then_by ? then_by_local_nonprim : NULL,
        expression ? expression_local_nonprim : NULL,
        direction ? directionVariable : contentservice_order_by_clause_DIRECTION_NULL,
        range_variable ? range_variable_local_nonprim : NULL,
        item_type ? item_type_local_nonprim : NULL
        );

    return order_by_clause_local_var;
end:
    if (then_by_local_nonprim) {
        order_by_clause_free(then_by_local_nonprim);
        then_by_local_nonprim = NULL;
    }
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
