#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "compute_query_option.h"



compute_query_option_t *compute_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    compute_clause_t *compute_clause,
    char *raw_value,
    object_t *validator
    ) {
    compute_query_option_t *compute_query_option_local_var = malloc(sizeof(compute_query_option_t));
    if (!compute_query_option_local_var) {
        return NULL;
    }
    compute_query_option_local_var->context = context;
    compute_query_option_local_var->result_clr_type = result_clr_type;
    compute_query_option_local_var->compute_clause = compute_clause;
    compute_query_option_local_var->raw_value = raw_value;
    compute_query_option_local_var->validator = validator;

    return compute_query_option_local_var;
}


void compute_query_option_free(compute_query_option_t *compute_query_option) {
    if(NULL == compute_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (compute_query_option->context) {
        o_data_query_context_free(compute_query_option->context);
        compute_query_option->context = NULL;
    }
    if (compute_query_option->result_clr_type) {
        type_free(compute_query_option->result_clr_type);
        compute_query_option->result_clr_type = NULL;
    }
    if (compute_query_option->compute_clause) {
        compute_clause_free(compute_query_option->compute_clause);
        compute_query_option->compute_clause = NULL;
    }
    if (compute_query_option->raw_value) {
        free(compute_query_option->raw_value);
        compute_query_option->raw_value = NULL;
    }
    if (compute_query_option->validator) {
        object_free(compute_query_option->validator);
        compute_query_option->validator = NULL;
    }
    free(compute_query_option);
}

cJSON *compute_query_option_convertToJSON(compute_query_option_t *compute_query_option) {
    cJSON *item = cJSON_CreateObject();

    // compute_query_option->context
    if(compute_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(compute_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // compute_query_option->result_clr_type
    if(compute_query_option->result_clr_type) {
    cJSON *result_clr_type_local_JSON = type_convertToJSON(compute_query_option->result_clr_type);
    if(result_clr_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resultClrType", result_clr_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // compute_query_option->compute_clause
    if(compute_query_option->compute_clause) {
    cJSON *compute_clause_local_JSON = compute_clause_convertToJSON(compute_query_option->compute_clause);
    if(compute_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "computeClause", compute_clause_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // compute_query_option->raw_value
    if(compute_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", compute_query_option->raw_value) == NULL) {
    goto fail; //String
    }
    }


    // compute_query_option->validator
    if(compute_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(compute_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
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

compute_query_option_t *compute_query_option_parseFromJSON(cJSON *compute_query_optionJSON){

    compute_query_option_t *compute_query_option_local_var = NULL;

    // define the local variable for compute_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for compute_query_option->result_clr_type
    type_t *result_clr_type_local_nonprim = NULL;

    // define the local variable for compute_query_option->compute_clause
    compute_clause_t *compute_clause_local_nonprim = NULL;

    // compute_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(compute_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // compute_query_option->result_clr_type
    cJSON *result_clr_type = cJSON_GetObjectItemCaseSensitive(compute_query_optionJSON, "resultClrType");
    if (result_clr_type) { 
    result_clr_type_local_nonprim = type_parseFromJSON(result_clr_type); //nonprimitive
    }

    // compute_query_option->compute_clause
    cJSON *compute_clause = cJSON_GetObjectItemCaseSensitive(compute_query_optionJSON, "computeClause");
    if (compute_clause) { 
    compute_clause_local_nonprim = compute_clause_parseFromJSON(compute_clause); //nonprimitive
    }

    // compute_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(compute_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }

    // compute_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(compute_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }


    compute_query_option_local_var = compute_query_option_create (
        context ? context_local_nonprim : NULL,
        result_clr_type ? result_clr_type_local_nonprim : NULL,
        compute_clause ? compute_clause_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL,
        validator ? validator_local_object : NULL
        );

    return compute_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (result_clr_type_local_nonprim) {
        type_free(result_clr_type_local_nonprim);
        result_clr_type_local_nonprim = NULL;
    }
    if (compute_clause_local_nonprim) {
        compute_clause_free(compute_clause_local_nonprim);
        compute_clause_local_nonprim = NULL;
    }
    return NULL;

}
