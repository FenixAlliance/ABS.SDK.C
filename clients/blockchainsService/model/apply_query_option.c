#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apply_query_option.h"



apply_query_option_t *apply_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    apply_clause_t *apply_clause,
    char *raw_value
    ) {
    apply_query_option_t *apply_query_option_local_var = malloc(sizeof(apply_query_option_t));
    if (!apply_query_option_local_var) {
        return NULL;
    }
    apply_query_option_local_var->context = context;
    apply_query_option_local_var->result_clr_type = result_clr_type;
    apply_query_option_local_var->apply_clause = apply_clause;
    apply_query_option_local_var->raw_value = raw_value;

    return apply_query_option_local_var;
}


void apply_query_option_free(apply_query_option_t *apply_query_option) {
    if(NULL == apply_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (apply_query_option->context) {
        o_data_query_context_free(apply_query_option->context);
        apply_query_option->context = NULL;
    }
    if (apply_query_option->result_clr_type) {
        type_free(apply_query_option->result_clr_type);
        apply_query_option->result_clr_type = NULL;
    }
    if (apply_query_option->apply_clause) {
        apply_clause_free(apply_query_option->apply_clause);
        apply_query_option->apply_clause = NULL;
    }
    if (apply_query_option->raw_value) {
        free(apply_query_option->raw_value);
        apply_query_option->raw_value = NULL;
    }
    free(apply_query_option);
}

cJSON *apply_query_option_convertToJSON(apply_query_option_t *apply_query_option) {
    cJSON *item = cJSON_CreateObject();

    // apply_query_option->context
    if(apply_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(apply_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // apply_query_option->result_clr_type
    if(apply_query_option->result_clr_type) {
    cJSON *result_clr_type_local_JSON = type_convertToJSON(apply_query_option->result_clr_type);
    if(result_clr_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resultClrType", result_clr_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // apply_query_option->apply_clause
    if(apply_query_option->apply_clause) {
    cJSON *apply_clause_local_JSON = apply_clause_convertToJSON(apply_query_option->apply_clause);
    if(apply_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "applyClause", apply_clause_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // apply_query_option->raw_value
    if(apply_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", apply_query_option->raw_value) == NULL) {
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

apply_query_option_t *apply_query_option_parseFromJSON(cJSON *apply_query_optionJSON){

    apply_query_option_t *apply_query_option_local_var = NULL;

    // define the local variable for apply_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for apply_query_option->result_clr_type
    type_t *result_clr_type_local_nonprim = NULL;

    // define the local variable for apply_query_option->apply_clause
    apply_clause_t *apply_clause_local_nonprim = NULL;

    // apply_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(apply_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // apply_query_option->result_clr_type
    cJSON *result_clr_type = cJSON_GetObjectItemCaseSensitive(apply_query_optionJSON, "resultClrType");
    if (result_clr_type) { 
    result_clr_type_local_nonprim = type_parseFromJSON(result_clr_type); //nonprimitive
    }

    // apply_query_option->apply_clause
    cJSON *apply_clause = cJSON_GetObjectItemCaseSensitive(apply_query_optionJSON, "applyClause");
    if (apply_clause) { 
    apply_clause_local_nonprim = apply_clause_parseFromJSON(apply_clause); //nonprimitive
    }

    // apply_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(apply_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }


    apply_query_option_local_var = apply_query_option_create (
        context ? context_local_nonprim : NULL,
        result_clr_type ? result_clr_type_local_nonprim : NULL,
        apply_clause ? apply_clause_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL
        );

    return apply_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (result_clr_type_local_nonprim) {
        type_free(result_clr_type_local_nonprim);
        result_clr_type_local_nonprim = NULL;
    }
    if (apply_clause_local_nonprim) {
        apply_clause_free(apply_clause_local_nonprim);
        apply_clause_local_nonprim = NULL;
    }
    return NULL;

}
