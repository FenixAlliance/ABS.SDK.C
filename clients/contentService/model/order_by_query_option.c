#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "order_by_query_option.h"



order_by_query_option_t *order_by_query_option_create(
    o_data_query_context_t *context,
    list_t *order_by_nodes,
    char *raw_value,
    object_t *validator,
    compute_query_option_t *compute,
    order_by_clause_t *order_by_clause
    ) {
    order_by_query_option_t *order_by_query_option_local_var = malloc(sizeof(order_by_query_option_t));
    if (!order_by_query_option_local_var) {
        return NULL;
    }
    order_by_query_option_local_var->context = context;
    order_by_query_option_local_var->order_by_nodes = order_by_nodes;
    order_by_query_option_local_var->raw_value = raw_value;
    order_by_query_option_local_var->validator = validator;
    order_by_query_option_local_var->compute = compute;
    order_by_query_option_local_var->order_by_clause = order_by_clause;

    return order_by_query_option_local_var;
}


void order_by_query_option_free(order_by_query_option_t *order_by_query_option) {
    if(NULL == order_by_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (order_by_query_option->context) {
        o_data_query_context_free(order_by_query_option->context);
        order_by_query_option->context = NULL;
    }
    if (order_by_query_option->order_by_nodes) {
        list_ForEach(listEntry, order_by_query_option->order_by_nodes) {
            order_by_node_free(listEntry->data);
        }
        list_freeList(order_by_query_option->order_by_nodes);
        order_by_query_option->order_by_nodes = NULL;
    }
    if (order_by_query_option->raw_value) {
        free(order_by_query_option->raw_value);
        order_by_query_option->raw_value = NULL;
    }
    if (order_by_query_option->validator) {
        object_free(order_by_query_option->validator);
        order_by_query_option->validator = NULL;
    }
    if (order_by_query_option->compute) {
        compute_query_option_free(order_by_query_option->compute);
        order_by_query_option->compute = NULL;
    }
    if (order_by_query_option->order_by_clause) {
        order_by_clause_free(order_by_query_option->order_by_clause);
        order_by_query_option->order_by_clause = NULL;
    }
    free(order_by_query_option);
}

cJSON *order_by_query_option_convertToJSON(order_by_query_option_t *order_by_query_option) {
    cJSON *item = cJSON_CreateObject();

    // order_by_query_option->context
    if(order_by_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(order_by_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_query_option->order_by_nodes
    if(order_by_query_option->order_by_nodes) {
    cJSON *order_by_nodes = cJSON_AddArrayToObject(item, "orderByNodes");
    if(order_by_nodes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *order_by_nodesListEntry;
    if (order_by_query_option->order_by_nodes) {
    list_ForEach(order_by_nodesListEntry, order_by_query_option->order_by_nodes) {
    cJSON *itemLocal = order_by_node_convertToJSON(order_by_nodesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(order_by_nodes, itemLocal);
    }
    }
    }


    // order_by_query_option->raw_value
    if(order_by_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", order_by_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }


    // order_by_query_option->validator
    if(order_by_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(order_by_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_query_option->compute
    if(order_by_query_option->compute) {
    cJSON *compute_local_JSON = compute_query_option_convertToJSON(order_by_query_option->compute);
    if(compute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "compute", compute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // order_by_query_option->order_by_clause
    if(order_by_query_option->order_by_clause) {
    cJSON *order_by_clause_local_JSON = order_by_clause_convertToJSON(order_by_query_option->order_by_clause);
    if(order_by_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "orderByClause", order_by_clause_local_JSON);
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

order_by_query_option_t *order_by_query_option_parseFromJSON(cJSON *order_by_query_optionJSON){

    order_by_query_option_t *order_by_query_option_local_var = NULL;

    // define the local variable for order_by_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local list for order_by_query_option->order_by_nodes
    list_t *order_by_nodesList = NULL;

    // define the local variable for order_by_query_option->compute
    compute_query_option_t *compute_local_nonprim = NULL;

    // define the local variable for order_by_query_option->order_by_clause
    order_by_clause_t *order_by_clause_local_nonprim = NULL;

    // order_by_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // order_by_query_option->order_by_nodes
    cJSON *order_by_nodes = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "orderByNodes");
    if (order_by_nodes) { 
    cJSON *order_by_nodes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(order_by_nodes)){
        goto end; //nonprimitive container
    }

    order_by_nodesList = list_createList();

    cJSON_ArrayForEach(order_by_nodes_local_nonprimitive,order_by_nodes )
    {
        if(!cJSON_IsObject(order_by_nodes_local_nonprimitive)){
            goto end;
        }
        order_by_node_t *order_by_nodesItem = order_by_node_parseFromJSON(order_by_nodes_local_nonprimitive);

        list_addElement(order_by_nodesList, order_by_nodesItem);
    }
    }

    // order_by_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }

    // order_by_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }

    // order_by_query_option->compute
    cJSON *compute = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "compute");
    if (compute) { 
    compute_local_nonprim = compute_query_option_parseFromJSON(compute); //nonprimitive
    }

    // order_by_query_option->order_by_clause
    cJSON *order_by_clause = cJSON_GetObjectItemCaseSensitive(order_by_query_optionJSON, "orderByClause");
    if (order_by_clause) { 
    order_by_clause_local_nonprim = order_by_clause_parseFromJSON(order_by_clause); //nonprimitive
    }


    order_by_query_option_local_var = order_by_query_option_create (
        context ? context_local_nonprim : NULL,
        order_by_nodes ? order_by_nodesList : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL,
        validator ? validator_local_object : NULL,
        compute ? compute_local_nonprim : NULL,
        order_by_clause ? order_by_clause_local_nonprim : NULL
        );

    return order_by_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (order_by_nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, order_by_nodesList) {
            order_by_node_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(order_by_nodesList);
        order_by_nodesList = NULL;
    }
    if (compute_local_nonprim) {
        compute_query_option_free(compute_local_nonprim);
        compute_local_nonprim = NULL;
    }
    if (order_by_clause_local_nonprim) {
        order_by_clause_free(order_by_clause_local_nonprim);
        order_by_clause_local_nonprim = NULL;
    }
    return NULL;

}
