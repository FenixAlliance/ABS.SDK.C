#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "filter_query_option.h"



filter_query_option_t *filter_query_option_create(
    o_data_query_context_t *context,
    object_t *validator,
    compute_query_option_t *compute,
    filter_clause_t *filter_clause,
    char *raw_value
    ) {
    filter_query_option_t *filter_query_option_local_var = malloc(sizeof(filter_query_option_t));
    if (!filter_query_option_local_var) {
        return NULL;
    }
    filter_query_option_local_var->context = context;
    filter_query_option_local_var->validator = validator;
    filter_query_option_local_var->compute = compute;
    filter_query_option_local_var->filter_clause = filter_clause;
    filter_query_option_local_var->raw_value = raw_value;

    return filter_query_option_local_var;
}


void filter_query_option_free(filter_query_option_t *filter_query_option) {
    if(NULL == filter_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (filter_query_option->context) {
        o_data_query_context_free(filter_query_option->context);
        filter_query_option->context = NULL;
    }
    if (filter_query_option->validator) {
        object_free(filter_query_option->validator);
        filter_query_option->validator = NULL;
    }
    if (filter_query_option->compute) {
        compute_query_option_free(filter_query_option->compute);
        filter_query_option->compute = NULL;
    }
    if (filter_query_option->filter_clause) {
        filter_clause_free(filter_query_option->filter_clause);
        filter_query_option->filter_clause = NULL;
    }
    if (filter_query_option->raw_value) {
        free(filter_query_option->raw_value);
        filter_query_option->raw_value = NULL;
    }
    free(filter_query_option);
}

cJSON *filter_query_option_convertToJSON(filter_query_option_t *filter_query_option) {
    cJSON *item = cJSON_CreateObject();

    // filter_query_option->context
    if(filter_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(filter_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_query_option->validator
    if(filter_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(filter_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_query_option->compute
    if(filter_query_option->compute) {
    cJSON *compute_local_JSON = compute_query_option_convertToJSON(filter_query_option->compute);
    if(compute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "compute", compute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_query_option->filter_clause
    if(filter_query_option->filter_clause) {
    cJSON *filter_clause_local_JSON = filter_clause_convertToJSON(filter_query_option->filter_clause);
    if(filter_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "filterClause", filter_clause_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // filter_query_option->raw_value
    if(filter_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", filter_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

filter_query_option_t *filter_query_option_parseFromJSON(cJSON *filter_query_optionJSON){

    filter_query_option_t *filter_query_option_local_var = NULL;

    // define the local variable for filter_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for filter_query_option->compute
    compute_query_option_t *compute_local_nonprim = NULL;

    // define the local variable for filter_query_option->filter_clause
    filter_clause_t *filter_clause_local_nonprim = NULL;

    // filter_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(filter_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // filter_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(filter_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }

    // filter_query_option->compute
    cJSON *compute = cJSON_GetObjectItemCaseSensitive(filter_query_optionJSON, "compute");
    if (compute) { 
    compute_local_nonprim = compute_query_option_parseFromJSON(compute); //nonprimitive
    }

    // filter_query_option->filter_clause
    cJSON *filter_clause = cJSON_GetObjectItemCaseSensitive(filter_query_optionJSON, "filterClause");
    if (filter_clause) { 
    filter_clause_local_nonprim = filter_clause_parseFromJSON(filter_clause); //nonprimitive
    }

    // filter_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(filter_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }


    filter_query_option_local_var = filter_query_option_create (
        context ? context_local_nonprim : NULL,
        validator ? validator_local_object : NULL,
        compute ? compute_local_nonprim : NULL,
        filter_clause ? filter_clause_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL
        );

    return filter_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (compute_local_nonprim) {
        compute_query_option_free(compute_local_nonprim);
        compute_local_nonprim = NULL;
    }
    if (filter_clause_local_nonprim) {
        filter_clause_free(filter_clause_local_nonprim);
        filter_clause_local_nonprim = NULL;
    }
    return NULL;

}
