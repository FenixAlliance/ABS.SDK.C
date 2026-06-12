#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "select_expand_query_option.h"



select_expand_query_option_t *select_expand_query_option_create(
    o_data_query_context_t *context,
    char *raw_select,
    char *raw_expand,
    compute_query_option_t *compute,
    object_t *validator,
    select_expand_clause_t *select_expand_clause,
    int levels_max_literal_expansion_depth
    ) {
    select_expand_query_option_t *select_expand_query_option_local_var = malloc(sizeof(select_expand_query_option_t));
    if (!select_expand_query_option_local_var) {
        return NULL;
    }
    select_expand_query_option_local_var->context = context;
    select_expand_query_option_local_var->raw_select = raw_select;
    select_expand_query_option_local_var->raw_expand = raw_expand;
    select_expand_query_option_local_var->compute = compute;
    select_expand_query_option_local_var->validator = validator;
    select_expand_query_option_local_var->select_expand_clause = select_expand_clause;
    select_expand_query_option_local_var->levels_max_literal_expansion_depth = levels_max_literal_expansion_depth;

    return select_expand_query_option_local_var;
}


void select_expand_query_option_free(select_expand_query_option_t *select_expand_query_option) {
    if(NULL == select_expand_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (select_expand_query_option->context) {
        o_data_query_context_free(select_expand_query_option->context);
        select_expand_query_option->context = NULL;
    }
    if (select_expand_query_option->raw_select) {
        free(select_expand_query_option->raw_select);
        select_expand_query_option->raw_select = NULL;
    }
    if (select_expand_query_option->raw_expand) {
        free(select_expand_query_option->raw_expand);
        select_expand_query_option->raw_expand = NULL;
    }
    if (select_expand_query_option->compute) {
        compute_query_option_free(select_expand_query_option->compute);
        select_expand_query_option->compute = NULL;
    }
    if (select_expand_query_option->validator) {
        object_free(select_expand_query_option->validator);
        select_expand_query_option->validator = NULL;
    }
    if (select_expand_query_option->select_expand_clause) {
        select_expand_clause_free(select_expand_query_option->select_expand_clause);
        select_expand_query_option->select_expand_clause = NULL;
    }
    free(select_expand_query_option);
}

cJSON *select_expand_query_option_convertToJSON(select_expand_query_option_t *select_expand_query_option) {
    cJSON *item = cJSON_CreateObject();

    // select_expand_query_option->context
    if(select_expand_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(select_expand_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // select_expand_query_option->raw_select
    if(select_expand_query_option->raw_select) {
    if(cJSON_AddStringToObject(item, "rawSelect", select_expand_query_option->raw_select) == NULL) {
    goto fail; //String
    }
    }


    // select_expand_query_option->raw_expand
    if(select_expand_query_option->raw_expand) {
    if(cJSON_AddStringToObject(item, "rawExpand", select_expand_query_option->raw_expand) == NULL) {
    goto fail; //String
    }
    }


    // select_expand_query_option->compute
    if(select_expand_query_option->compute) {
    cJSON *compute_local_JSON = compute_query_option_convertToJSON(select_expand_query_option->compute);
    if(compute_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "compute", compute_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // select_expand_query_option->validator
    if(select_expand_query_option->validator) {
    cJSON *validator_object = object_convertToJSON(select_expand_query_option->validator);
    if(validator_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "validator", validator_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // select_expand_query_option->select_expand_clause
    if(select_expand_query_option->select_expand_clause) {
    cJSON *select_expand_clause_local_JSON = select_expand_clause_convertToJSON(select_expand_query_option->select_expand_clause);
    if(select_expand_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "selectExpandClause", select_expand_clause_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // select_expand_query_option->levels_max_literal_expansion_depth
    if(select_expand_query_option->levels_max_literal_expansion_depth) {
    if(cJSON_AddNumberToObject(item, "levelsMaxLiteralExpansionDepth", select_expand_query_option->levels_max_literal_expansion_depth) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

select_expand_query_option_t *select_expand_query_option_parseFromJSON(cJSON *select_expand_query_optionJSON){

    select_expand_query_option_t *select_expand_query_option_local_var = NULL;

    // define the local variable for select_expand_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for select_expand_query_option->compute
    compute_query_option_t *compute_local_nonprim = NULL;

    // define the local variable for select_expand_query_option->select_expand_clause
    select_expand_clause_t *select_expand_clause_local_nonprim = NULL;

    // select_expand_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // select_expand_query_option->raw_select
    cJSON *raw_select = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "rawSelect");
    if (raw_select) { 
    if(!cJSON_IsString(raw_select) && !cJSON_IsNull(raw_select))
    {
    goto end; //String
    }
    }

    // select_expand_query_option->raw_expand
    cJSON *raw_expand = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "rawExpand");
    if (raw_expand) { 
    if(!cJSON_IsString(raw_expand) && !cJSON_IsNull(raw_expand))
    {
    goto end; //String
    }
    }

    // select_expand_query_option->compute
    cJSON *compute = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "compute");
    if (compute) { 
    compute_local_nonprim = compute_query_option_parseFromJSON(compute); //nonprimitive
    }

    // select_expand_query_option->validator
    cJSON *validator = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "validator");
    object_t *validator_local_object = NULL;
    if (validator) { 
    validator_local_object = object_parseFromJSON(validator); //object
    }

    // select_expand_query_option->select_expand_clause
    cJSON *select_expand_clause = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "selectExpandClause");
    if (select_expand_clause) { 
    select_expand_clause_local_nonprim = select_expand_clause_parseFromJSON(select_expand_clause); //nonprimitive
    }

    // select_expand_query_option->levels_max_literal_expansion_depth
    cJSON *levels_max_literal_expansion_depth = cJSON_GetObjectItemCaseSensitive(select_expand_query_optionJSON, "levelsMaxLiteralExpansionDepth");
    if (levels_max_literal_expansion_depth) { 
    if(!cJSON_IsNumber(levels_max_literal_expansion_depth))
    {
    goto end; //Numeric
    }
    }


    select_expand_query_option_local_var = select_expand_query_option_create (
        context ? context_local_nonprim : NULL,
        raw_select && !cJSON_IsNull(raw_select) ? strdup(raw_select->valuestring) : NULL,
        raw_expand && !cJSON_IsNull(raw_expand) ? strdup(raw_expand->valuestring) : NULL,
        compute ? compute_local_nonprim : NULL,
        validator ? validator_local_object : NULL,
        select_expand_clause ? select_expand_clause_local_nonprim : NULL,
        levels_max_literal_expansion_depth ? levels_max_literal_expansion_depth->valuedouble : 0
        );

    return select_expand_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (compute_local_nonprim) {
        compute_query_option_free(compute_local_nonprim);
        compute_local_nonprim = NULL;
    }
    if (select_expand_clause_local_nonprim) {
        select_expand_clause_free(select_expand_clause_local_nonprim);
        select_expand_clause_local_nonprim = NULL;
    }
    return NULL;

}
