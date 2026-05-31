#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "search_query_option.h"



search_query_option_t *search_query_option_create(
    o_data_query_context_t *context,
    type_t *result_clr_type,
    search_clause_t *search_clause,
    char *raw_value
    ) {
    search_query_option_t *search_query_option_local_var = malloc(sizeof(search_query_option_t));
    if (!search_query_option_local_var) {
        return NULL;
    }
    search_query_option_local_var->context = context;
    search_query_option_local_var->result_clr_type = result_clr_type;
    search_query_option_local_var->search_clause = search_clause;
    search_query_option_local_var->raw_value = raw_value;

    return search_query_option_local_var;
}


void search_query_option_free(search_query_option_t *search_query_option) {
    if(NULL == search_query_option){
        return ;
    }
    listEntry_t *listEntry;
    if (search_query_option->context) {
        o_data_query_context_free(search_query_option->context);
        search_query_option->context = NULL;
    }
    if (search_query_option->result_clr_type) {
        type_free(search_query_option->result_clr_type);
        search_query_option->result_clr_type = NULL;
    }
    if (search_query_option->search_clause) {
        search_clause_free(search_query_option->search_clause);
        search_query_option->search_clause = NULL;
    }
    if (search_query_option->raw_value) {
        free(search_query_option->raw_value);
        search_query_option->raw_value = NULL;
    }
    free(search_query_option);
}

cJSON *search_query_option_convertToJSON(search_query_option_t *search_query_option) {
    cJSON *item = cJSON_CreateObject();

    // search_query_option->context
    if(search_query_option->context) {
    cJSON *context_local_JSON = o_data_query_context_convertToJSON(search_query_option->context);
    if(context_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "context", context_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // search_query_option->result_clr_type
    if(search_query_option->result_clr_type) {
    cJSON *result_clr_type_local_JSON = type_convertToJSON(search_query_option->result_clr_type);
    if(result_clr_type_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resultClrType", result_clr_type_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // search_query_option->search_clause
    if(search_query_option->search_clause) {
    cJSON *search_clause_local_JSON = search_clause_convertToJSON(search_query_option->search_clause);
    if(search_clause_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "searchClause", search_clause_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // search_query_option->raw_value
    if(search_query_option->raw_value) {
    if(cJSON_AddStringToObject(item, "rawValue", search_query_option->raw_value) == NULL) {
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

search_query_option_t *search_query_option_parseFromJSON(cJSON *search_query_optionJSON){

    search_query_option_t *search_query_option_local_var = NULL;

    // define the local variable for search_query_option->context
    o_data_query_context_t *context_local_nonprim = NULL;

    // define the local variable for search_query_option->result_clr_type
    type_t *result_clr_type_local_nonprim = NULL;

    // define the local variable for search_query_option->search_clause
    search_clause_t *search_clause_local_nonprim = NULL;

    // search_query_option->context
    cJSON *context = cJSON_GetObjectItemCaseSensitive(search_query_optionJSON, "context");
    if (context) { 
    context_local_nonprim = o_data_query_context_parseFromJSON(context); //nonprimitive
    }

    // search_query_option->result_clr_type
    cJSON *result_clr_type = cJSON_GetObjectItemCaseSensitive(search_query_optionJSON, "resultClrType");
    if (result_clr_type) { 
    result_clr_type_local_nonprim = type_parseFromJSON(result_clr_type); //nonprimitive
    }

    // search_query_option->search_clause
    cJSON *search_clause = cJSON_GetObjectItemCaseSensitive(search_query_optionJSON, "searchClause");
    if (search_clause) { 
    search_clause_local_nonprim = search_clause_parseFromJSON(search_clause); //nonprimitive
    }

    // search_query_option->raw_value
    cJSON *raw_value = cJSON_GetObjectItemCaseSensitive(search_query_optionJSON, "rawValue");
    if (raw_value) { 
    if(!cJSON_IsString(raw_value) && !cJSON_IsNull(raw_value))
    {
    goto end; //String
    }
    }


    search_query_option_local_var = search_query_option_create (
        context ? context_local_nonprim : NULL,
        result_clr_type ? result_clr_type_local_nonprim : NULL,
        search_clause ? search_clause_local_nonprim : NULL,
        raw_value && !cJSON_IsNull(raw_value) ? strdup(raw_value->valuestring) : NULL
        );

    return search_query_option_local_var;
end:
    if (context_local_nonprim) {
        o_data_query_context_free(context_local_nonprim);
        context_local_nonprim = NULL;
    }
    if (result_clr_type_local_nonprim) {
        type_free(result_clr_type_local_nonprim);
        result_clr_type_local_nonprim = NULL;
    }
    if (search_clause_local_nonprim) {
        search_clause_free(search_clause_local_nonprim);
        search_clause_local_nonprim = NULL;
    }
    return NULL;

}
